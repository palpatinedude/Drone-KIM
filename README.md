# 🛸 Parrot Mini Drone Autonomous Navigation & Landing System (Simulink)

## 📌 Project Overview

This project implements a **vision-based autonomous navigation and landing system** for the **Parrot Mambo Mini Drone** using **Simulink**. The system is divided into two primary subsystems:

- 🔍 **Image Processing System**  
- 🧭 **Path Planning Component**
- **Run from - KIM_DRONE_FINAL.tar.gz**

The drone navigates along a white line and detects a circular landing pad using real-time video from its front camera. It processes the image onboard, extracts navigation cues, and applies closed-loop control for accurate movement and landing.

---

## 🎯 Project Objectives

- Enable autonomous **path following** using computer vision.
- Implement a **vision-based landing system** using shape detection.
- Use **Simulink and MATLAB** for modular design and simulation.
- Demonstrate real-time decision making using basic image processing and control logic.
- Enable **transition between flight modes** (navigation ↔ landing) automatically.

---

## 🧠 System Architecture

### 🔵 Image Processing System

This subsystem processes the camera image and extracts navigational and landing features.

#### Key Steps:
1. **Image Input**: RGB image from drone's camera.
2. **Binarization**: Detect bright/white lines using thresholding.
3. **Noise Filtering**: Reduce false positives using neighborhood filtering.
4. **Border Removal**: Eliminate objects touching image borders.
5. **Circle Detection**: Identify potential landing pads by pixel density and size.
6. **Offset Calculation**: Determine drone’s alignment with the circle.
7. **Radar Scan**: Search image directions (0°–360°) to find the forward path.

#### Outputs:
- `cdet`: Boolean flag for circle detection.
- `x_last`, `y_last`: Offset from the landing pad center.
- `sum_end`: Pixel density inside the circle (size/confirmation).
- `x_incr`, `y_incr`: Suggested direction of path navigation.
- `start_end_flag`: Identifies start or end of the navigation path.

---

### 🟢 Path Planning Component

This component uses image processing outputs to calculate movement commands.

#### Key Features:
- Mode switching between **navigation** and **landing**.
- Generation of `x_inc`, `y_inc` (position increments).
- Calculation of `z_sp` or `z_final` for altitude control.
- Signals the flight controller to perform movement or descent.

#### Function Blocks:
- `XY_Ctrl`: Navigation direction computation.
- `XY_Ctrl_Landing`: Circle alignment and landing control.
- `Z_Ctrl`: Altitude reference setting.
- Logic blocks: Handle transitions and enable signals.

#### Control Logic:
- **If no circle**: Use radar direction for path following.
- **If circle detected**: Center using `x_last`, `y_last`; descend gradually.
- **If centered and close**: Stop horizontal movement and finish landing.

---

## 🔬 Simulation and Visualization

Using **Scopes**, **XY Graphs**, and **Data Inspector**, the system outputs can be visualized:

| Diagram Type              | Signals Involved                     | Purpose                                    |
|---------------------------|--------------------------------------|--------------------------------------------|
| XY Path Plot              | `x_inc`, `y_inc`                     | Visual path followed by the drone          |
| Alignment Error vs Time   | `x_last`, `y_last`                   | Centering performance before landing       |
| Mode Transition Signal    | `cdet`, `Landing_Kill`               | Shows when the system switches modes       |
| Altitude Profile          | `z_sp`, `z_final`                    | Observe descent behavior during landing    |
| Radar Direction Output    | `x_incr`, `y_incr`                   | Verifies forward movement direction        |

---

## ⚙️ Software and Tools Used

- **MATLAB R2022b or later**
- **Simulink**
- **Parrot Drone Support Package**
- Embedded MATLAB Functions for logic implementation
- Scope, Display, MUX, Switch, Logic Gates, Saturation blocks, Discrete Filters

---

## 🚀 Deployment

The system is designed for simulation and deployment on the **Parrot Mambo Minidrone** using Simulink Coder.

---


