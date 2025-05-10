/* Include files */

#include "flightControlSystem_sfun.h"
#include "c1_flightControlSystem.h"
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c1_emlrtMCI = { 122,/* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtRSInfo c1_emlrtRSI = { 29, /* lineNo */
  "Image Processing System/Create Binary Mask",/* fcnName */
  "#flightControlSystem:2769"          /* pathName */
};

static emlrtRSInfo c1_b_emlrtRSI = { 43,/* lineNo */
  "Image Processing System/Create Binary Mask",/* fcnName */
  "#flightControlSystem:2769"          /* pathName */
};

static emlrtRSInfo c1_c_emlrtRSI = { 77,/* lineNo */
  "bwmorph",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\bwmorph.m"/* pathName */
};

static emlrtRSInfo c1_d_emlrtRSI = { 33,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c1_e_emlrtRSI = { 256,/* lineNo */
  "algbwmorph",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\+images\\+internal\\algbwmorph.m"/* pathName */
};

static emlrtRSInfo c1_f_emlrtRSI = { 143,/* lineNo */
  "bwlookup",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\images\\images\\eml\\bwlookup.m"/* pathName */
};

static emlrtRSInfo c1_g_emlrtRSI = { 35,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c1_h_emlrtRSI = { 132,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c1_i_emlrtRSI = { 249,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c1_j_emlrtRSI = { 248,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c1_k_emlrtRSI = { 247,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c1_l_emlrtRSI = { 42,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRTEInfo c1_emlrtRTEI = { 36,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c1_b_emlrtRTEI = { 37,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c1_c_emlrtRTEI = { 189,/* lineNo */
  24,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c1_d_emlrtRTEI = { 191,/* lineNo */
  24,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c1_e_emlrtRTEI = { 247,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c1_f_emlrtRTEI = { 248,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c1_g_emlrtRTEI = { 47,/* lineNo */
  13,                                  /* colNo */
  "Image Processing System/Create Binary Mask",/* fName */
  "#flightControlSystem:2769"          /* pName */
};

static emlrtDCInfo c1_emlrtDCI = { 48, /* lineNo */
  17,                                  /* colNo */
  "Image Processing System/Create Binary Mask",/* fName */
  "#flightControlSystem:2769",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_emlrtBCI = { 1,  /* iFirst */
  120,                                 /* iLast */
  48,                                  /* lineNo */
  17,                                  /* colNo */
  "overlay",                           /* aName */
  "Image Processing System/Create Binary Mask",/* fName */
  "#flightControlSystem:2769",         /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c1_b_emlrtDCI = { 48,/* lineNo */
  28,                                  /* colNo */
  "Image Processing System/Create Binary Mask",/* fName */
  "#flightControlSystem:2769",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_b_emlrtBCI = { 1,/* iFirst */
  160,                                 /* iLast */
  48,                                  /* lineNo */
  28,                                  /* colNo */
  "overlay",                           /* aName */
  "Image Processing System/Create Binary Mask",/* fName */
  "#flightControlSystem:2769",         /* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c1_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  24,                                  /* colNo */
  "rowIdx",                            /* aName */
  "Image Processing System/Create Binary Mask",/* fName */
  "#flightControlSystem:2769",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_c_emlrtDCI = { 48,/* lineNo */
  24,                                  /* colNo */
  "Image Processing System/Create Binary Mask",/* fName */
  "#flightControlSystem:2769",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_d_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  35,                                  /* colNo */
  "colIdx",                            /* aName */
  "Image Processing System/Create Binary Mask",/* fName */
  "#flightControlSystem:2769",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_d_emlrtDCI = { 48,/* lineNo */
  35,                                  /* colNo */
  "Image Processing System/Create Binary Mask",/* fName */
  "#flightControlSystem:2769",         /* pName */
  1                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void enable_c1_flightControlSystem(SFc1_flightControlSystemInstanceStruct
  *chartInstance);
static void disable_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void c1_update_jit_animation_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void c1_do_animation_call_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance, const mxArray *c1_st);
static void c1_eml_find(SFc1_flightControlSystemInstanceStruct *chartInstance,
  boolean_T c1_x[19200], int32_T c1_i_data[], int32_T c1_i_size[1], int32_T
  c1_j_data[], int32_T c1_j_size[1]);
static void c1_indexShapeCheck(SFc1_flightControlSystemInstanceStruct
  *chartInstance);
static void c1_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier, real_T
  c1_y[19200]);
static void c1_b_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y[19200]);
static void c1_c_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier,
  uint8_T c1_y[57600]);
static void c1_d_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  uint8_T c1_y[57600]);
static void init_dsm_address_info(SFc1_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc1_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c1_st.tls = chartInstance->c1_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c1_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c1_doneDoubleBufferReInit = false;
  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c1_decisionTxtEndIdx = 0U;
  static const uint32_T c1_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c1_JITStateAnimation[0],
                        &chartInstance->c1_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c1_covrtInstance, 1U, 0U, 1U,
    25U);
  covrtChartInitFcn(chartInstance->c1_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c1_decisionTxtStartIdx, &c1_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 1U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U,
                     "c1_flightControlSystem", 0, -1, 1987);
  covrtEmlForInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 1899, 1923,
                     1982);
}

static void mdl_cleanup_runtime_resources_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  covrtDeleteStateflowInstanceData(chartInstance->c1_covrtInstance);
}

static void enable_c1_flightControlSystem(SFc1_flightControlSystemInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  static uint8_T c1_uv[3] = { 1U, 0U, 1U };

  static boolean_T c1_lut1[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, false, true, false, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, false, true, false, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true };

  static boolean_T c1_lut2[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, false, false, true, true, true,
    true, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, false, false, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, false, false, true, true, true,
    true, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, false, false, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true };

  static boolean_T c1_lut3[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, false, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, false, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true };

  static boolean_T c1_lut4[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, false, false, true,
    true, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, false, false, true, true, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true };

  static boolean_T c1_lut5[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, true, true, true, true, true, true,
    true, false, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, true, true, true, true, false, true,
    true, true, true, true, true, true };

  static boolean_T c1_lut6[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, false, false,
    true, true, false, false, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, false, false,
    true, true, false, false, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true };

  static boolean_T c1_lut7[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    false, true, false, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    false, true, false, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true };

  static boolean_T c1_lut8[512] = { false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    false, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, false, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, true, true, true,
    false, true, true, true, true, true, true, true, true, true, true, true,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, true, true, true, false, true, true, true, true, true,
    true, true, true, true, true, true };

  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  real_T c1_sizeIn[2];
  real_T c1_b_k;
  real_T c1_c_i;
  real_T c1_d;
  real_T c1_d1;
  real_T c1_d2;
  real_T c1_d_i;
  real_T c1_d_k;
  int32_T c1_jj_data[19200];
  int32_T c1_colIdx_size[1];
  int32_T c1_ii_size[1];
  int32_T c1_jj_size[1];
  int32_T c1_rowIdx_size[1];
  int32_T c1_b_i;
  int32_T c1_b_j;
  int32_T c1_b_loop_ub;
  int32_T c1_c_j;
  int32_T c1_c_k;
  int32_T c1_colIdx;
  int32_T c1_d_j;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i2;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  int32_T c1_i26;
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i29;
  int32_T c1_i3;
  int32_T c1_i30;
  int32_T c1_i31;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_iy;
  int32_T c1_j;
  int32_T c1_k;
  int32_T c1_loop_ub;
  int32_T c1_rowIdx;
  uint8_T c1_orig[57600];
  boolean_T c1_in[19200];
  boolean_T c1_last_aout[19200];
  boolean_T c1_mask[19200];
  boolean_T c1_lut[512];
  boolean_T c1_b_p;
  boolean_T c1_c_p;
  boolean_T c1_exitg1;
  boolean_T c1_p;
  boolean_T c1_x1;
  boolean_T c1_x2;
  c1_st.tls = chartInstance->c1_fEmlrtCtx;
  for (c1_i = 0; c1_i < 19200; c1_i++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 2U, (real_T)
                      (*chartInstance->c1_blue)[c1_i]);
  }

  for (c1_i1 = 0; c1_i1 < 19200; c1_i1++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U, (real_T)
                      (*chartInstance->c1_green)[c1_i1]);
  }

  for (c1_i2 = 0; c1_i2 < 19200; c1_i2++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U, (real_T)
                      (*chartInstance->c1_red)[c1_i2]);
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_JITTransitionAnimation[0] = 0U;
  chartInstance->c1_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c1_covrtInstance, 4U, 0, 0);
  for (c1_i3 = 0; c1_i3 < 19200; c1_i3++) {
    c1_mask[c1_i3] = ((*chartInstance->c1_red)[c1_i3] > 50);
  }

  for (c1_i4 = 0; c1_i4 < 19200; c1_i4++) {
    c1_last_aout[c1_i4] = ((*chartInstance->c1_red)[c1_i4] >
      (*chartInstance->c1_green)[c1_i4]);
  }

  for (c1_i5 = 0; c1_i5 < 19200; c1_i5++) {
    c1_mask[c1_i5] = (c1_mask[c1_i5] && c1_last_aout[c1_i5]);
  }

  for (c1_i6 = 0; c1_i6 < 19200; c1_i6++) {
    c1_last_aout[c1_i6] = ((*chartInstance->c1_red)[c1_i6] >
      (*chartInstance->c1_blue)[c1_i6]);
  }

  for (c1_i7 = 0; c1_i7 < 19200; c1_i7++) {
    c1_mask[c1_i7] = (c1_mask[c1_i7] && c1_last_aout[c1_i7]);
  }

  for (c1_i8 = 0; c1_i8 < 19200; c1_i8++) {
    chartInstance->c1_maskDouble[c1_i8] = (real_T)c1_mask[c1_i8];
  }

  do {
    for (c1_i9 = 0; c1_i9 < 19200; c1_i9++) {
      c1_last_aout[c1_i9] = c1_mask[c1_i9];
    }

    for (c1_b_i = 0; c1_b_i < 8; c1_b_i++) {
      c1_c_i = (real_T)c1_b_i + 1.0;
      c1_d_i = c1_c_i;
      switch ((int32_T)c1_d_i) {
       case 1:
        for (c1_i11 = 0; c1_i11 < 512; c1_i11++) {
          c1_lut[c1_i11] = c1_lut1[c1_i11];
        }
        break;

       case 2:
        for (c1_i12 = 0; c1_i12 < 512; c1_i12++) {
          c1_lut[c1_i12] = c1_lut2[c1_i12];
        }
        break;

       case 3:
        for (c1_i13 = 0; c1_i13 < 512; c1_i13++) {
          c1_lut[c1_i13] = c1_lut3[c1_i13];
        }
        break;

       case 4:
        for (c1_i14 = 0; c1_i14 < 512; c1_i14++) {
          c1_lut[c1_i14] = c1_lut4[c1_i14];
        }
        break;

       case 5:
        for (c1_i15 = 0; c1_i15 < 512; c1_i15++) {
          c1_lut[c1_i15] = c1_lut5[c1_i15];
        }
        break;

       case 6:
        for (c1_i16 = 0; c1_i16 < 512; c1_i16++) {
          c1_lut[c1_i16] = c1_lut6[c1_i16];
        }
        break;

       case 7:
        for (c1_i17 = 0; c1_i17 < 512; c1_i17++) {
          c1_lut[c1_i17] = c1_lut7[c1_i17];
        }
        break;

       default:
        for (c1_i10 = 0; c1_i10 < 512; c1_i10++) {
          c1_lut[c1_i10] = c1_lut8[c1_i10];
        }
        break;
      }

      for (c1_i18 = 0; c1_i18 < 19200; c1_i18++) {
        c1_in[c1_i18] = c1_mask[c1_i18];
      }

      for (c1_i19 = 0; c1_i19 < 2; c1_i19++) {
        c1_sizeIn[c1_i19] = 120.0 + 40.0 * (real_T)c1_i19;
      }

      bwlookup_tbb_boolean(&c1_in[0], &c1_sizeIn[0], 2.0, &c1_lut[0], 512.0,
                           &c1_mask[0]);
    }

    c1_p = false;
    c1_b_p = true;
    c1_k = 0;
    c1_exitg1 = false;
    while ((!c1_exitg1) && (c1_k < 19200)) {
      c1_b_k = (real_T)c1_k + 1.0;
      c1_x1 = c1_last_aout[(int32_T)c1_b_k - 1];
      c1_x2 = c1_mask[(int32_T)c1_b_k - 1];
      c1_c_p = ((int32_T)c1_x1 == (int32_T)c1_x2);
      if (!c1_c_p) {
        c1_b_p = false;
        c1_exitg1 = true;
      } else {
        c1_k++;
      }
    }

    if (c1_b_p) {
      c1_p = true;
    }
  } while (!c1_p);

  c1_iy = -1;
  for (c1_j = 0; c1_j < 19200; c1_j++) {
    c1_c_j = c1_j;
    c1_iy++;
    c1_orig[c1_iy] = (*chartInstance->c1_red)[c1_c_j];
  }

  for (c1_b_j = 0; c1_b_j < 19200; c1_b_j++) {
    c1_c_j = c1_b_j;
    c1_iy++;
    c1_orig[c1_iy] = (*chartInstance->c1_green)[c1_c_j];
  }

  for (c1_d_j = 0; c1_d_j < 19200; c1_d_j++) {
    c1_c_j = c1_d_j;
    c1_iy++;
    c1_orig[c1_iy] = (*chartInstance->c1_blue)[c1_c_j];
  }

  c1_eml_find(chartInstance, c1_mask, chartInstance->c1_ii_data, c1_ii_size,
              c1_jj_data, c1_jj_size);
  c1_rowIdx_size[0] = c1_ii_size[0];
  c1_loop_ub = c1_ii_size[0] - 1;
  for (c1_i20 = 0; c1_i20 <= c1_loop_ub; c1_i20++) {
    chartInstance->c1_rowIdx_data[c1_i20] = (real_T)chartInstance->
      c1_ii_data[c1_i20];
  }

  c1_colIdx_size[0] = c1_jj_size[0];
  c1_b_loop_ub = c1_jj_size[0] - 1;
  for (c1_i21 = 0; c1_i21 <= c1_b_loop_ub; c1_i21++) {
    chartInstance->c1_colIdx_data[c1_i21] = (real_T)c1_jj_data[c1_i21];
  }

  c1_d = (real_T)c1_rowIdx_size[0];
  c1_i22 = (int32_T)c1_d;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, c1_d, mxDOUBLE_CLASS, c1_i22,
    &c1_g_emlrtRTEI, &c1_st);
  for (c1_c_k = 0; c1_c_k < c1_i22; c1_c_k++) {
    c1_d_k = 1.0 + (real_T)c1_c_k;
    covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 0, 1);
    if (c1_d_k != (real_T)(int32_T)muDoubleScalarFloor(c1_d_k)) {
      emlrtIntegerCheckR2012b(c1_d_k, &c1_c_emlrtDCI, &c1_st);
    }

    c1_i25 = (int32_T)c1_d_k;
    if ((c1_i25 < 1) || (c1_i25 > c1_rowIdx_size[0])) {
      emlrtDynamicBoundsCheckR2012b(c1_i25, 1, c1_rowIdx_size[0], &c1_c_emlrtBCI,
        &c1_st);
    }

    c1_d1 = chartInstance->c1_rowIdx_data[c1_i25 - 1];
    if (c1_d1 != (real_T)(int32_T)muDoubleScalarFloor(c1_d1)) {
      emlrtIntegerCheckR2012b(c1_d1, &c1_emlrtDCI, &c1_st);
    }

    c1_i28 = (int32_T)c1_d1;
    if ((c1_i28 < 1) || (c1_i28 > 120)) {
      emlrtDynamicBoundsCheckR2012b(c1_i28, 1, 120, &c1_emlrtBCI, &c1_st);
    }

    c1_rowIdx = c1_i28 - 1;
    if (c1_d_k != (real_T)(int32_T)muDoubleScalarFloor(c1_d_k)) {
      emlrtIntegerCheckR2012b(c1_d_k, &c1_d_emlrtDCI, &c1_st);
    }

    c1_i29 = (int32_T)c1_d_k;
    if ((c1_i29 < 1) || (c1_i29 > c1_colIdx_size[0])) {
      emlrtDynamicBoundsCheckR2012b(c1_i29, 1, c1_colIdx_size[0], &c1_d_emlrtBCI,
        &c1_st);
    }

    c1_d2 = chartInstance->c1_colIdx_data[c1_i29 - 1];
    if (c1_d2 != (real_T)(int32_T)muDoubleScalarFloor(c1_d2)) {
      emlrtIntegerCheckR2012b(c1_d2, &c1_b_emlrtDCI, &c1_st);
    }

    c1_i30 = (int32_T)c1_d2;
    if ((c1_i30 < 1) || (c1_i30 > 160)) {
      emlrtDynamicBoundsCheckR2012b(c1_i30, 1, 160, &c1_b_emlrtBCI, &c1_st);
    }

    c1_colIdx = c1_i30 - 1;
    for (c1_i31 = 0; c1_i31 < 3; c1_i31++) {
      c1_orig[(c1_rowIdx + 120 * c1_colIdx) + 19200 * c1_i31] = c1_uv[c1_i31];
    }

    _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
  }

  covrtEmlForEval(chartInstance->c1_covrtInstance, 4U, 0, 0, 0);
  for (c1_i23 = 0; c1_i23 < 19200; c1_i23++) {
    (*chartInstance->c1_b_maskDouble)[c1_i23] = chartInstance->
      c1_maskDouble[c1_i23];
  }

  for (c1_i24 = 0; c1_i24 < 57600; c1_i24++) {
    (*chartInstance->c1_overlay)[c1_i24] = c1_orig[c1_i24];
  }

  for (c1_i26 = 0; c1_i26 < 19200; c1_i26++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 3U,
                      (*chartInstance->c1_b_maskDouble)[c1_i26]);
  }

  for (c1_i27 = 0; c1_i27 < 57600; c1_i27++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 4U, (real_T)
                      (*chartInstance->c1_overlay)[c1_i27]);
  }
}

static void ext_mode_exec_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_update_jit_animation_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c1_do_animation_call_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_st;
  const mxArray *c1_y = NULL;
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellmatrix(2, 1), false);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", *chartInstance->c1_b_maskDouble, 0,
    0U, 1, 0U, 2, 120, 160), false);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", *chartInstance->c1_overlay, 3, 0U, 1,
    0U, 3, 120, 160, 3), false);
  sf_mex_setcell(c1_y, 1, c1_c_y);
  sf_mex_assign(&c1_st, c1_y, false);
  return c1_st;
}

static void set_sim_state_c1_flightControlSystem
  (SFc1_flightControlSystemInstanceStruct *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_u;
  int32_T c1_i;
  int32_T c1_i1;
  uint8_T c1_uv[57600];
  chartInstance->c1_doneDoubleBufferReInit = true;
  c1_u = sf_mex_dup(c1_st);
  c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 0)),
                      "maskDouble", chartInstance->c1_dv);
  for (c1_i = 0; c1_i < 19200; c1_i++) {
    (*chartInstance->c1_b_maskDouble)[c1_i] = chartInstance->c1_dv[c1_i];
  }

  c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 1)),
                        "overlay", c1_uv);
  for (c1_i1 = 0; c1_i1 < 57600; c1_i1++) {
    (*chartInstance->c1_overlay)[c1_i1] = c1_uv[c1_i1];
  }

  sf_mex_destroy(&c1_u);
  sf_mex_destroy(&c1_st);
}

static void c1_eml_find(SFc1_flightControlSystemInstanceStruct *chartInstance,
  boolean_T c1_x[19200], int32_T c1_i_data[], int32_T c1_i_size[1], int32_T
  c1_j_data[], int32_T c1_j_size[1])
{
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_idx;
  int32_T c1_ii;
  int32_T c1_jj;
  boolean_T c1_b;
  boolean_T c1_b1;
  boolean_T c1_exitg1;
  boolean_T c1_guard1;
  c1_idx = 0;
  c1_ii = 1;
  c1_jj = 1;
  c1_exitg1 = false;
  while ((!c1_exitg1) && (c1_jj <= 160)) {
    c1_guard1 = false;
    if (c1_x[(c1_ii + 120 * (c1_jj - 1)) - 1]) {
      c1_idx++;
      c1_i_data[c1_idx - 1] = c1_ii;
      c1_j_data[c1_idx - 1] = c1_jj;
      if (c1_idx >= 19200) {
        c1_exitg1 = true;
      } else {
        c1_guard1 = true;
      }
    } else {
      c1_guard1 = true;
    }

    if (c1_guard1) {
      c1_ii++;
      if (c1_ii > 120) {
        c1_ii = 1;
        c1_jj++;
      }
    }
  }

  c1_b = (c1_idx < 1);
  if (c1_b) {
    c1_i = 0;
  } else {
    c1_i = c1_idx;
  }

  c1_indexShapeCheck(chartInstance);
  c1_i_size[0] = c1_i;
  c1_b1 = (c1_idx < 1);
  if (c1_b1) {
    c1_i1 = 0;
  } else {
    c1_i1 = c1_idx;
  }

  c1_indexShapeCheck(chartInstance);
  c1_j_size[0] = c1_i1;
  c1_indexShapeCheck(chartInstance);
}

static void c1_indexShapeCheck(SFc1_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c1_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c1_nameCaptureInfo;
}

static void c1_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier, real_T
  c1_y[19200])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nullptr), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_nullptr);
}

static void c1_b_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  real_T c1_y[19200])
{
  int32_T c1_i;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), chartInstance->c1_b_dv, 1, 0, 0U,
                1, 0U, 2, 120, 160);
  for (c1_i = 0; c1_i < 19200; c1_i++) {
    c1_y[c1_i] = chartInstance->c1_b_dv[c1_i];
  }

  sf_mex_destroy(&c1_u);
}

static void c1_c_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_nullptr, const char_T *c1_identifier,
  uint8_T c1_y[57600])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_nullptr), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_nullptr);
}

static void c1_d_emlrt_marshallIn(SFc1_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId,
  uint8_T c1_y[57600])
{
  int32_T c1_i;
  uint8_T c1_uv[57600];
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_uv, 1, 3, 0U, 1, 0U, 3, 120,
                160, 3);
  for (c1_i = 0; c1_i < 57600; c1_i++) {
    c1_y[c1_i] = c1_uv[c1_i];
  }

  sf_mex_destroy(&c1_u);
}

static void init_dsm_address_info(SFc1_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc1_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c1_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c1_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c1_red = (uint8_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c1_green = (uint8_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_blue = (uint8_T (*)[19200])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c1_b_maskDouble = (real_T (*)[19200])
    ssGetOutputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c1_overlay = (uint8_T (*)[57600])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c1_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(550889918U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2088582170U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1297984675U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4118336673U);
}

mxArray *sf_c1_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Bwlookup_tbb_Buildable"));
  return(mxcell3p);
}

mxArray *sf_c1_flightControlSystem_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("bwlookup_tbb_boolean");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c1_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c1_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiD+wMjAwAakOYCYiQECWKF8RqgYI1ycBS6uAMQllQWpIPHiomTPFCCdl5gL5ie"
    "WVnjmpeWDzbdgQJjPhsV8RiTzOaHiEPDBnjL9Ig4g/Q5I+lmw6OdC0i8A5ecmFme75Jcm5aRCxP"
    "kYEPTA+UfBAV0/Nv+wo/kHxM8vSy3KSayE+wMATJMXVw=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "saMlvdEu1JlWOXjYkLS8QRD";
}

static void sf_opaque_initialize_c1_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c1_flightControlSystem
    ((SFc1_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c1_flightControlSystem(void *chartInstanceVar)
{
  enable_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c1_flightControlSystem(void *chartInstanceVar)
{
  disable_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c1_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c1_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c1_flightControlSystem
    ((SFc1_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c1_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c1_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c1_flightControlSystem
      ((SFc1_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c1_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc1_flightControlSystemInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c1_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c1_flightControlSystem((SFc1_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_flightControlSystem(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_flightControlSystem
      ((SFc1_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c1_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrdWM1v40QUd9JS2GpZLRKCPSCxQkLigrSlQiwSH+3GCQQ1NNTpLnBBE/slHjKececjafhTuMB",
    "fwN+DuHHlxJEjbxwnDU5oPA6oBUuO8+z85r338/uaeLV2x8PjHp5vPfC8Pby+gGfdmx3P5XJt6Z",
    "zd3/U+yOXuvueFMZG6zQfCcz9CEcEQeGAGA3rpiOUm6RJJElVBLycJnIESzGgquJvxlA9AAg9xg",
    "VRI7aRX0cQwykctw0OrWT2LaRgHsTAseoILkuiUs+nf6U2N7qJGn0oIdQsg0rEUZhi3GBlez4LU",
    "k0YM4UiZxJkrBTowqXVVdQzTNGXQvISwzZUmyILa4G+giYaGvnSOEKqCOVokKaOEl+c6JiqAFKN",
    "Dw3ka4eep0cheSb2or0850UJSwpoJa9gIL4ntMrSzg2HNnHnWifahb4ZDyoeWXWkS4Og/xkkJrg",
    "YNMQZJhnDKHXPQete8zF7wIi7L52DbhmWlHDTJ7K2oSthMb3OMDKmKelshbxDGlBu2J9ITGAPL9",
    "PtEkwrYmX4HsFI06omnRNoscMwkw+mFgRzbEDyi5d/wuIDKCu7nWDxLwGliQwoipHlh+mKhTTFp",
    "lBZJA9PIPzkpqW8V2+Ya5ICEULr2SUIVoMFZXDnqjagifWbRyJLOvCy9AvDKUE8NDPcnQo6QY9c",
    "ie8WVzQQ3NERD8EFDVjCaGN1PCTMlbU4UVjgbHucKK5abXsTa/KkEDkkYQ2T7CWXQAWUXUKXrM/",
    "aRY/R2TPXUBxVKmpbNJKMgwkZiWepNUzjnIy4mvCVFEuQTwTVxBYBVg0iObeEJtiU5baHx5ayWc",
    "NGzkVVlPEuIZqRvY+MT4NhZrK+2E5IQs6rJcXRDg7bBBvQ7bO1cUaVxnJo2sxyIsnn0Qc1tHn0p",
    "lw8XudRWPYlvimAb5jgpHfezYQ96NIHsRkBwppiJ+WH1PvKu9N6pX6+3jt9qFXHelrhPl3C7a/h",
    "5ZQl3P5fDg28GjA5jW4S1FCyYIu/Jqh13S/C9zv4izlvBXfG82Hcs4Wtr9HpL10187azwtePVar",
    "UMd7SEe7GgZ7eA28s5a/364fEvF+83zt548/vffnrvh23i48e6Wzzfy+XX5vPZooONV4p8mXh4t",
    "RAPVlakw8ZR0xx8xp6dfvntV6OT4PEXZ3623u8b8q9esHd+/yGeGgtcVi9l2I7yvZaViZntAez6",
    "j5fs3dvAx52leELLPt4O//JRMR7W8bVf4Gs/q2lq5AuDtWU1jm/On4dHRfw6f54v+GNlu11gZPo",
    "XP257/bupenuTdpapxzsVcXXv36v//yRuW/9c+8x//fePrqkHXuH392+xH8Vr1Xnjtvn1s+c2D7",
    "yeyx8t/gtoxJRFa3Yj+WPcMAzWPf2fxPcfjvzN55+m5S//M/Prw2NO2BS3H7PtXX67K21jXDySQ",
    "NT6Pd5N9KH5ddP8creQ31aeUB6JiXr74J13D7fpa38ClXIKNg==",
    ""
  };

  static char newstr [1477] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c1_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c1_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(1094574406U));
  ssSetChecksum1(S,(1127838170U));
  ssSetChecksum2(S,(2586124882U));
  ssSetChecksum3(S,(2671226602U));
}

static void mdlRTW_c1_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c1_flightControlSystem(SimStruct *S)
{
  SFc1_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc1_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc1_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc1_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c1_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c1_flightControlSystem;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c1_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c1_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c1_flightControlSystem;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c1_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c1_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c1_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c1_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c1_flightControlSystem;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c1_flightControlSystem(chartInstance);
}

void c1_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c1_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
