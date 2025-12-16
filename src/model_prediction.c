/* Tu dong sinh boi m2cgen & export_to_c.py */
#include <math.h>
#include "model_prediction.h"

#include <string.h>
void add_vectors(double *v1, double *v2, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] + v2[i];
}
void mul_vector_number(double *v1, double num, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] * num;
}
void score(double * input, double * output) {
    double var0[5];
    double var1[5];
    double var2[5];
    double var3[5];
    double var4[5];
    double var5[5];
    double var6[5];
    double var7[5];
    double var8[5];
    double var9[5];
    double var10[5];
    double var11[5];
    double var12[5];
    double var13[5];
    double var14[5];
    double var15[5];
    double var16[5];
    double var17[5];
    double var18[5];
    double var19[5];
    double var20[5];
    double var21[5];
    double var22[5];
    double var23[5];
    double var24[5];
    double var25[5];
    double var26[5];
    double var27[5];
    double var28[5];
    double var29[5];
    double var30[5];
    double var31[5];
    double var32[5];
    double var33[5];
    double var34[5];
    double var35[5];
    double var36[5];
    double var37[5];
    double var38[5];
    double var39[5];
    double var40[5];
    double var41[5];
    double var42[5];
    double var43[5];
    double var44[5];
    double var45[5];
    double var46[5];
    double var47[5];
    double var48[5];
    double var49[5];
    double var50[5];
    double var51[5];
    double var52[5];
    double var53[5];
    double var54[5];
    double var55[5];
    double var56[5];
    double var57[5];
    double var58[5];
    double var59[5];
    double var60[5];
    double var61[5];
    double var62[5];
    double var63[5];
    double var64[5];
    double var65[5];
    double var66[5];
    double var67[5];
    double var68[5];
    double var69[5];
    double var70[5];
    double var71[5];
    double var72[5];
    double var73[5];
    double var74[5];
    double var75[5];
    double var76[5];
    double var77[5];
    double var78[5];
    double var79[5];
    double var80[5];
    double var81[5];
    double var82[5];
    double var83[5];
    double var84[5];
    double var85[5];
    double var86[5];
    double var87[5];
    double var88[5];
    double var89[5];
    double var90[5];
    double var91[5];
    double var92[5];
    double var93[5];
    double var94[5];
    double var95[5];
    double var96[5];
    double var97[5];
    double var98[5];
    double var99[5];
    double var100[5];
    if (input[3] <= 1.5) {
        if (input[0] <= 94.5) {
            if (input[2] <= 26.0) {
                memcpy(var100, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[0] <= 84.5) {
                    memcpy(var100, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    if (input[1] <= 94.95000076293945) {
                        memcpy(var100, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var100, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 22.050000190734863) {
                if (input[0] <= 142.0) {
                    memcpy(var100, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var100, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            } else {
                if (input[2] <= 45.04999923706055) {
                    if (input[1] <= 94.45000076293945) {
                        memcpy(var100, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var100, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var100, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var100, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    double var101[5];
    if (input[3] <= 1.5) {
        if (input[2] <= 22.050000190734863) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var101, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 0.9449999928474426) {
                    memcpy(var101, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 74.5) {
                        memcpy(var101, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 142.0) {
                            memcpy(var101, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var101, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[1] <= 94.45000076293945) {
                memcpy(var101, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[0] <= 97.0) {
                    memcpy(var101, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var101, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var101, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var100, var101, 5, var99);
    double var102[5];
    if (input[2] <= 22.050000190734863) {
        if (input[3] <= 1.1549999713897705) {
            if (input[3] <= 0.9449999928474426) {
                memcpy(var102, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[2] <= 14.949999809265137) {
                    memcpy(var102, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 74.5) {
                        memcpy(var102, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[1] <= 94.95000076293945) {
                            memcpy(var102, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[0] <= 142.0) {
                                memcpy(var102, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var102, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            memcpy(var102, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    } else {
        if (input[1] <= 94.45000076293945) {
            memcpy(var102, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
        } else {
            if (input[3] <= 1.5) {
                if (input[2] <= 45.04999923706055) {
                    if (input[1] <= 98.54999923706055) {
                        if (input[0] <= 95.5) {
                            memcpy(var102, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var102, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var102, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var102, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var102, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    }
    add_vectors(var99, var102, 5, var98);
    double var103[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var103, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[0] <= 94.5) {
            if (input[2] <= 23.5) {
                memcpy(var103, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 1.4399999976158142) {
                    memcpy(var103, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var103, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        } else {
            if (input[0] <= 144.5) {
                if (input[1] <= 98.54999923706055) {
                    if (input[3] <= 1.5) {
                        memcpy(var103, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var103, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var103, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[2] <= 23.5) {
                    memcpy(var103, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var103, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var98, var103, 5, var97);
    double var104[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var104, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[2] <= 22.050000190734863) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var104, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[1] <= 94.95000076293945) {
                    memcpy(var104, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 142.0) {
                        if (input[0] <= 74.5) {
                            memcpy(var104, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var104, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var104, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[3] <= 1.5) {
                if (input[0] <= 97.0) {
                    memcpy(var104, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var104, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var104, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    }
    add_vectors(var97, var104, 5, var96);
    double var105[5];
    if (input[3] <= 1.5) {
        if (input[2] <= 22.050000190734863) {
            if (input[0] <= 142.0) {
                if (input[0] <= 74.5) {
                    memcpy(var105, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var105, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var105, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            }
        } else {
            if (input[1] <= 94.45000076293945) {
                memcpy(var105, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 1.0850000381469727) {
                    if (input[2] <= 45.04999923706055) {
                        if (input[0] <= 95.5) {
                            memcpy(var105, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var105, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var105, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var105, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var105, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var96, var105, 5, var95);
    double var106[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var106, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[2] <= 22.050000190734863) {
            if (input[3] <= 1.1549999713897705) {
                if (input[2] <= 14.949999809265137) {
                    memcpy(var106, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[3] <= 0.9449999928474426) {
                        memcpy(var106, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[1] <= 94.95000076293945) {
                            memcpy(var106, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[3] <= 1.1449999809265137) {
                                if (input[0] <= 74.5) {
                                    memcpy(var106, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                } else {
                                    if (input[0] <= 142.0) {
                                        memcpy(var106, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var106, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[0] <= 142.0) {
                                    if (input[2] <= 16.550000190734863) {
                                        if (input[0] <= 74.5) {
                                            memcpy(var106, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        } else {
                                            memcpy(var106, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        }
                                    } else {
                                        if (input[0] <= 74.5) {
                                            memcpy(var106, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        } else {
                                            memcpy(var106, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var106, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                memcpy(var106, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            if (input[3] <= 1.5) {
                if (input[3] <= 1.0850000381469727) {
                    if (input[2] <= 45.04999923706055) {
                        if (input[0] <= 95.5) {
                            memcpy(var106, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var106, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var106, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var106, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var106, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    }
    add_vectors(var95, var106, 5, var94);
    double var107[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var107, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[0] <= 97.0) {
                if (input[2] <= 33.5) {
                    memcpy(var107, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var107, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[0] <= 142.0) {
                    memcpy(var107, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var107, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            }
        } else {
            memcpy(var107, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var94, var107, 5, var93);
    double var108[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var108, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[2] <= 22.050000190734863) {
            if (input[3] <= 1.1549999713897705) {
                if (input[2] <= 14.949999809265137) {
                    memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[3] <= 0.9449999928474426) {
                        memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[3] <= 0.9549999833106995) {
                            if (input[0] <= 142.0) {
                                if (input[1] <= 94.95000076293945) {
                                    memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                } else {
                                    if (input[1] <= 98.45000076293945) {
                                        if (input[2] <= 16.15000057220459) {
                                            if (input[1] <= 95.45000076293945) {
                                                if (input[0] <= 74.0) {
                                                    memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var108, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                }
                                            } else {
                                                if (input[2] <= 15.150000095367432) {
                                                    memcpy(var108, (double[]){0.0, 0.5, 0.0, 0.0, 0.5}, 5 * sizeof(double));
                                                } else {
                                                    if (input[1] <= 97.35000228881836) {
                                                        if (input[0] <= 74.5) {
                                                            memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                        } else {
                                                            memcpy(var108, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[1] <= 97.85000228881836) {
                                                            memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                        } else {
                                                            memcpy(var108, (double[]){0.0, 0.5217391304347826, 0.0, 0.0, 0.4782608695652174}, 5 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[2] <= 18.449999809265137) {
                                                if (input[0] <= 74.5) {
                                                    memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var108, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                }
                                            } else {
                                                if (input[0] <= 74.5) {
                                                    memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var108, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[0] <= 47.5) {
                                            memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        } else {
                                            memcpy(var108, (double[]){0.0, 0.25, 0.0, 0.0, 0.75}, 5 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            }
                        } else {
                            if (input[3] <= 1.1449999809265137) {
                                if (input[2] <= 15.050000190734863) {
                                    if (input[0] <= 142.0) {
                                        if (input[3] <= 0.9750000238418579) {
                                            if (input[0] <= 74.5) {
                                                memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                            } else {
                                                memcpy(var108, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                            }
                                        } else {
                                            if (input[3] <= 1.1349999904632568) {
                                                if (input[0] <= 74.5) {
                                                    memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var108, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var108, (double[]){0.0, 0.6153846153846154, 0.0, 0.0, 0.38461538461538464}, 5 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    }
                                } else {
                                    if (input[2] <= 21.949999809265137) {
                                        if (input[0] <= 74.5) {
                                            memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        } else {
                                            if (input[3] <= 1.0549999475479126) {
                                                if (input[1] <= 94.95000076293945) {
                                                    memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                } else {
                                                    if (input[1] <= 98.54999923706055) {
                                                        if (input[0] <= 142.0) {
                                                            memcpy(var108, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                        } else {
                                                            memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[1] <= 94.95000076293945) {
                                                    memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                } else {
                                                    if (input[1] <= 98.54999923706055) {
                                                        if (input[0] <= 142.0) {
                                                            memcpy(var108, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                        } else {
                                                            memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[0] <= 142.0) {
                                            if (input[1] <= 94.95000076293945) {
                                                memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                            } else {
                                                if (input[3] <= 0.9950000047683716) {
                                                    if (input[1] <= 97.4000015258789) {
                                                        if (input[0] <= 74.0) {
                                                            memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                        } else {
                                                            memcpy(var108, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[1] <= 97.95000076293945) {
                                                            memcpy(var108, (double[]){0.0, 0.8571428571428571, 0.0, 0.0, 0.14285714285714285}, 5 * sizeof(double));
                                                        } else {
                                                            memcpy(var108, (double[]){0.0, 0.6470588235294118, 0.0, 0.0, 0.35294117647058826}, 5 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[0] <= 74.5) {
                                                        memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                    } else {
                                                        memcpy(var108, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= 94.95000076293945) {
                                    memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                } else {
                                    if (input[2] <= 21.34999942779541) {
                                        if (input[2] <= 20.34999942779541) {
                                            if (input[1] <= 98.45000076293945) {
                                                if (input[0] <= 142.0) {
                                                    if (input[2] <= 16.550000190734863) {
                                                        if (input[0] <= 74.5) {
                                                            memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                        } else {
                                                            memcpy(var108, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[2] <= 18.949999809265137) {
                                                            if (input[1] <= 96.75) {
                                                                memcpy(var108, (double[]){0.0, 0.6531365313653137, 0.0, 0.0, 0.34686346863468637}, 5 * sizeof(double));
                                                            } else {
                                                                memcpy(var108, (double[]){0.0, 0.8163265306122449, 0.0, 0.0, 0.1836734693877551}, 5 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[2] <= 19.050000190734863) {
                                                                memcpy(var108, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                            } else {
                                                                memcpy(var108, (double[]){0.0, 0.8345323741007195, 0.0, 0.0, 0.16546762589928057}, 5 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                }
                                            } else {
                                                if (input[2] <= 15.799999713897705) {
                                                    memcpy(var108, (double[]){0.0, 0.10526315789473684, 0.0, 0.0, 0.8947368421052632}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[1] <= 98.5) {
                                                if (input[2] <= 20.550000190734863) {
                                                    if (input[2] <= 20.449999809265137) {
                                                        if (input[0] <= 102.5) {
                                                            memcpy(var108, (double[]){0.0, 0.29411764705882354, 0.0, 0.0, 0.7058823529411765}, 5 * sizeof(double));
                                                        } else {
                                                            memcpy(var108, (double[]){0.0, 0.7037037037037037, 0.0, 0.0, 0.2962962962962963}, 5 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var108, (double[]){0.0, 0.3793103448275862, 0.0, 0.0, 0.6206896551724138}, 5 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[0] <= 74.5) {
                                                        memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                    } else {
                                                        if (input[1] <= 97.9000015258789) {
                                                            if (input[0] <= 142.5) {
                                                                memcpy(var108, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                            } else {
                                                                memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var108, (double[]){0.0, 0.5454545454545454, 0.0, 0.0, 0.45454545454545453}, 5 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[2] <= 21.949999809265137) {
                                            if (input[0] <= 142.0) {
                                                if (input[2] <= 21.84999942779541) {
                                                    if (input[0] <= 74.0) {
                                                        memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                    } else {
                                                        memcpy(var108, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var108, (double[]){0.0, 0.6470588235294118, 0.0, 0.0, 0.35294117647058826}, 5 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var108, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                            }
                                        } else {
                                            if (input[1] <= 96.75) {
                                                memcpy(var108, (double[]){0.0, 0.9, 0.0, 0.0, 0.1}, 5 * sizeof(double));
                                            } else {
                                                memcpy(var108, (double[]){0.0, 0.7692307692307693, 0.0, 0.0, 0.23076923076923078}, 5 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                memcpy(var108, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            if (input[0] <= 94.5) {
                if (input[0] <= 89.5) {
                    memcpy(var108, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    if (input[2] <= 74.95000076293945) {
                        if (input[1] <= 99.54999923706055) {
                            if (input[1] <= 99.45000076293945) {
                                if (input[2] <= 44.95000076293945) {
                                    memcpy(var108, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    if (input[1] <= 99.04999923706055) {
                                        if (input[2] <= 70.95000076293945) {
                                            if (input[3] <= 1.4399999976158142) {
                                                memcpy(var108, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                            } else {
                                                memcpy(var108, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                                            }
                                        } else {
                                            if (input[1] <= 96.95000076293945) {
                                                if (input[1] <= 96.64999771118164) {
                                                    if (input[3] <= 1.4900000095367432) {
                                                        memcpy(var108, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                    } else {
                                                        memcpy(var108, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[3] <= 1.4550000429153442) {
                                                        memcpy(var108, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                    } else {
                                                        memcpy(var108, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[1] <= 97.35000228881836) {
                                                    if (input[3] <= 1.550000011920929) {
                                                        memcpy(var108, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                    } else {
                                                        memcpy(var108, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[2] <= 71.95000076293945) {
                                                        if (input[3] <= 1.4500000476837158) {
                                                            memcpy(var108, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                        } else {
                                                            memcpy(var108, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[3] <= 1.4600000381469727) {
                                                            memcpy(var108, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                        } else {
                                                            memcpy(var108, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[3] <= 1.4399999976158142) {
                                            memcpy(var108, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        } else {
                                            memcpy(var108, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[3] <= 1.4600000381469727) {
                                    memcpy(var108, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var108, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var108, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        if (input[3] <= 1.0750000476837158) {
                            memcpy(var108, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            if (input[1] <= 97.75) {
                                memcpy(var108, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                if (input[0] <= 92.5) {
                                    if (input[2] <= 82.45000076293945) {
                                        memcpy(var108, (double[]){0.9333333333333333, 0.0, 0.06666666666666667, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var108, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    }
                                } else {
                                    if (input[0] <= 93.5) {
                                        memcpy(var108, (double[]){0.9285714285714286, 0.0, 0.07142857142857142, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var108, (double[]){0.9523809523809523, 0.0, 0.047619047619047616, 0.0, 0.0}, 5 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[3] <= 1.5) {
                    memcpy(var108, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var108, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var93, var108, 5, var92);
    double var109[5];
    if (input[3] <= 1.5) {
        if (input[1] <= 93.95000076293945) {
            memcpy(var109, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
        } else {
            if (input[2] <= 45.04999923706055) {
                if (input[2] <= 22.050000190734863) {
                    if (input[2] <= 14.949999809265137) {
                        memcpy(var109, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[1] <= 94.95000076293945) {
                            memcpy(var109, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[3] <= 0.9449999928474426) {
                                memcpy(var109, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                if (input[0] <= 142.0) {
                                    if (input[1] <= 98.54999923706055) {
                                        if (input[0] <= 74.5) {
                                            memcpy(var109, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        } else {
                                            memcpy(var109, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var109, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var109, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[1] <= 98.54999923706055) {
                        if (input[0] <= 95.5) {
                            memcpy(var109, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var109, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var109, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            } else {
                memcpy(var109, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    } else {
        memcpy(var109, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var92, var109, 5, var91);
    double var110[5];
    if (input[2] <= 22.050000190734863) {
        if (input[2] <= 14.949999809265137) {
            memcpy(var110, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
        } else {
            if (input[3] <= 0.9449999928474426) {
                memcpy(var110, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[1] <= 94.95000076293945) {
                    memcpy(var110, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[1] <= 98.54999923706055) {
                        if (input[0] <= 74.5) {
                            memcpy(var110, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[1] <= 98.45000076293945) {
                                if (input[3] <= 1.1549999713897705) {
                                    if (input[0] <= 142.0) {
                                        memcpy(var110, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var110, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var110, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= 15.550000190734863) {
                                    if (input[0] <= 143.0) {
                                        memcpy(var110, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var110, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    }
                                } else {
                                    if (input[3] <= 1.1549999713897705) {
                                        if (input[2] <= 16.75) {
                                            if (input[3] <= 1.0099999904632568) {
                                                if (input[0] <= 151.5) {
                                                    memcpy(var110, (double[]){0.0, 0.5714285714285714, 0.0, 0.0, 0.42857142857142855}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var110, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                }
                                            } else {
                                                if (input[3] <= 1.125) {
                                                    if (input[3] <= 1.0750000476837158) {
                                                        if (input[3] <= 1.0449999570846558) {
                                                            memcpy(var110, (double[]){0.0, 0.5, 0.0, 0.0, 0.5}, 5 * sizeof(double));
                                                        } else {
                                                            memcpy(var110, (double[]){0.0, 0.3684210526315789, 0.0, 0.0, 0.631578947368421}, 5 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var110, (double[]){0.0, 0.5, 0.0, 0.0, 0.5}, 5 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var110, (double[]){0.0, 0.3333333333333333, 0.0, 0.0, 0.6666666666666666}, 5 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[0] <= 142.0) {
                                                memcpy(var110, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                            } else {
                                                memcpy(var110, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var110, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var110, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[0] <= 89.5) {
            if (input[1] <= 94.95000076293945) {
                memcpy(var110, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                memcpy(var110, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            if (input[1] <= 94.45000076293945) {
                memcpy(var110, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 1.5) {
                    if (input[1] <= 98.54999923706055) {
                        if (input[0] <= 97.0) {
                            memcpy(var110, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var110, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var110, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var110, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var91, var110, 5, var90);
    double var111[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var111, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[0] <= 97.0) {
                if (input[0] <= 52.0) {
                    memcpy(var111, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var111, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[0] <= 142.0) {
                    memcpy(var111, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var111, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            }
        } else {
            memcpy(var111, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var90, var111, 5, var89);
    double var112[5];
    if (input[2] <= 22.050000190734863) {
        if (input[2] <= 14.949999809265137) {
            memcpy(var112, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
        } else {
            if (input[0] <= 74.5) {
                memcpy(var112, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 0.9449999928474426) {
                    memcpy(var112, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[1] <= 94.95000076293945) {
                        memcpy(var112, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 142.0) {
                            memcpy(var112, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var112, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        if (input[3] <= 1.5) {
            if (input[1] <= 94.45000076293945) {
                memcpy(var112, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[2] <= 45.04999923706055) {
                    if (input[1] <= 98.54999923706055) {
                        if (input[2] <= 44.95000076293945) {
                            memcpy(var112, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            if (input[1] <= 96.0) {
                                memcpy(var112, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                if (input[3] <= 0.9549999833106995) {
                                    memcpy(var112, (double[]){0.8095238095238095, 0.19047619047619047, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    if (input[0] <= 95.5) {
                                        memcpy(var112, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var112, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var112, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var112, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        } else {
            memcpy(var112, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var89, var112, 5, var88);
    double var113[5];
    if (input[3] <= 1.5) {
        if (input[1] <= 93.95000076293945) {
            memcpy(var113, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
        } else {
            if (input[2] <= 45.04999923706055) {
                if (input[0] <= 142.0) {
                    if (input[0] <= 95.5) {
                        if (input[2] <= 33.5) {
                            memcpy(var113, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var113, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var113, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var113, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var113, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    } else {
        memcpy(var113, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var88, var113, 5, var87);
    double var114[5];
    if (input[3] <= 1.5) {
        if (input[1] <= 93.95000076293945) {
            memcpy(var114, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
        } else {
            if (input[3] <= 1.0850000381469727) {
                if (input[0] <= 97.0) {
                    if (input[2] <= 33.5) {
                        memcpy(var114, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var114, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 21.949999809265137) {
                        if (input[0] <= 142.0) {
                            memcpy(var114, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var114, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    } else {
                        if (input[2] <= 22.050000190734863) {
                            if (input[3] <= 0.9549999833106995) {
                                if (input[0] <= 151.0) {
                                    memcpy(var114, (double[]){0.0, 0.2857142857142857, 0.0, 0.0, 0.7142857142857143}, 5 * sizeof(double));
                                } else {
                                    memcpy(var114, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 94.95000076293945) {
                                    memcpy(var114, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                } else {
                                    if (input[1] <= 98.35000228881836) {
                                        if (input[1] <= 98.04999923706055) {
                                            if (input[3] <= 1.0649999976158142) {
                                                if (input[0] <= 142.0) {
                                                    memcpy(var114, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var114, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                }
                                            } else {
                                                if (input[0] <= 117.5) {
                                                    memcpy(var114, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var114, (double[]){0.0, 0.84, 0.0, 0.0, 0.16}, 5 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var114, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var114, (double[]){0.0, 0.391304347826087, 0.0, 0.0, 0.6086956521739131}, 5 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var114, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[2] <= 21.949999809265137) {
                    if (input[0] <= 74.5) {
                        memcpy(var114, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[2] <= 14.949999809265137) {
                            memcpy(var114, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[1] <= 94.95000076293945) {
                                memcpy(var114, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                if (input[3] <= 1.1549999713897705) {
                                    if (input[0] <= 142.0) {
                                        memcpy(var114, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var114, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var114, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] <= 142.0) {
                        if (input[2] <= 22.050000190734863) {
                            if (input[3] <= 1.1449999809265137) {
                                if (input[0] <= 74.5) {
                                    memcpy(var114, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var114, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= 103.5) {
                                    memcpy(var114, (double[]){0.0, 0.8947368421052632, 0.0, 0.0, 0.10526315789473684}, 5 * sizeof(double));
                                } else {
                                    memcpy(var114, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var114, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var114, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                }
            }
        }
    } else {
        memcpy(var114, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var87, var114, 5, var86);
    double var115[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var115, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[0] <= 97.0) {
                if (input[2] <= 33.5) {
                    memcpy(var115, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var115, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[2] <= 21.949999809265137) {
                    if (input[0] <= 142.0) {
                        memcpy(var115, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var115, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 22.050000190734863) {
                        if (input[3] <= 0.9549999833106995) {
                            if (input[3] <= 0.925000011920929) {
                                memcpy(var115, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var115, (double[]){0.0, 0.15789473684210525, 0.0, 0.0, 0.8421052631578947}, 5 * sizeof(double));
                            }
                        } else {
                            if (input[0] <= 142.0) {
                                memcpy(var115, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var115, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var115, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var115, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var86, var115, 5, var85);
    double var116[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var116, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[0] <= 97.0) {
                if (input[0] <= 52.0) {
                    memcpy(var116, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var116, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[3] <= 0.9449999928474426) {
                    memcpy(var116, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[2] <= 15.050000190734863) {
                        if (input[3] <= 1.1549999713897705) {
                            if (input[0] <= 142.0) {
                                memcpy(var116, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var116, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            }
                        } else {
                            memcpy(var116, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        if (input[0] <= 142.0) {
                            memcpy(var116, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var116, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            memcpy(var116, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var85, var116, 5, var84);
    double var117[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var117, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[2] <= 45.04999923706055) {
                if (input[0] <= 52.0) {
                    memcpy(var117, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[2] <= 21.949999809265137) {
                        if (input[2] <= 14.949999809265137) {
                            memcpy(var117, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[0] <= 142.0) {
                                memcpy(var117, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var117, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[3] <= 0.9449999928474426) {
                            if (input[0] <= 118.0) {
                                memcpy(var117, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var117, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            }
                        } else {
                            if (input[2] <= 22.050000190734863) {
                                if (input[1] <= 94.95000076293945) {
                                    memcpy(var117, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                } else {
                                    if (input[0] <= 142.0) {
                                        memcpy(var117, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var117, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[0] <= 95.5) {
                                    memcpy(var117, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var117, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                memcpy(var117, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            memcpy(var117, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var84, var117, 5, var83);
    double var118[5];
    if (input[2] <= 22.050000190734863) {
        if (input[2] <= 14.949999809265137) {
            memcpy(var118, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
        } else {
            if (input[1] <= 94.95000076293945) {
                memcpy(var118, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 0.9449999928474426) {
                    memcpy(var118, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 74.5) {
                        memcpy(var118, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[1] <= 98.54999923706055) {
                            if (input[3] <= 1.1549999713897705) {
                                if (input[3] <= 0.9549999833106995) {
                                    if (input[0] <= 142.0) {
                                        memcpy(var118, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var118, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= 98.45000076293945) {
                                        if (input[0] <= 142.0) {
                                            memcpy(var118, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        } else {
                                            memcpy(var118, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        }
                                    } else {
                                        if (input[3] <= 0.9950000047683716) {
                                            if (input[3] <= 0.9650000035762787) {
                                                if (input[0] <= 154.0) {
                                                    memcpy(var118, (double[]){0.0, 0.7142857142857143, 0.0, 0.0, 0.2857142857142857}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var118, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                }
                                            } else {
                                                if (input[3] <= 0.9750000238418579) {
                                                    memcpy(var118, (double[]){0.0, 0.7777777777777778, 0.0, 0.0, 0.2222222222222222}, 5 * sizeof(double));
                                                } else {
                                                    if (input[2] <= 18.75) {
                                                        if (input[3] <= 0.9850000143051147) {
                                                            memcpy(var118, (double[]){0.0, 0.4444444444444444, 0.0, 0.0, 0.5555555555555556}, 5 * sizeof(double));
                                                        } else {
                                                            memcpy(var118, (double[]){0.0, 0.47619047619047616, 0.0, 0.0, 0.5238095238095238}, 5 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[0] <= 142.5) {
                                                            memcpy(var118, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                        } else {
                                                            memcpy(var118, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[3] <= 1.034999966621399) {
                                                if (input[0] <= 142.0) {
                                                    memcpy(var118, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var118, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                }
                                            } else {
                                                if (input[0] <= 142.0) {
                                                    memcpy(var118, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var118, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                memcpy(var118, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        } else {
                            memcpy(var118, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        if (input[3] <= 1.5) {
            if (input[1] <= 94.45000076293945) {
                memcpy(var118, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 1.0850000381469727) {
                    if (input[2] <= 45.04999923706055) {
                        if (input[0] <= 95.5) {
                            memcpy(var118, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var118, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var118, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var118, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        } else {
            memcpy(var118, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var83, var118, 5, var82);
    double var119[5];
    if (input[2] <= 22.050000190734863) {
        if (input[0] <= 74.5) {
            memcpy(var119, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
        } else {
            if (input[0] <= 142.0) {
                memcpy(var119, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            } else {
                memcpy(var119, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            }
        }
    } else {
        if (input[3] <= 1.5) {
            if (input[1] <= 94.45000076293945) {
                memcpy(var119, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[2] <= 45.04999923706055) {
                    if (input[0] <= 95.5) {
                        memcpy(var119, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var119, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var119, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        } else {
            memcpy(var119, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var82, var119, 5, var81);
    double var120[5];
    if (input[3] <= 1.5) {
        if (input[2] <= 22.050000190734863) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var120, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 0.9449999928474426) {
                    memcpy(var120, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[3] <= 1.1549999713897705) {
                        if (input[1] <= 94.95000076293945) {
                            memcpy(var120, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[0] <= 74.5) {
                                memcpy(var120, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                if (input[1] <= 98.54999923706055) {
                                    if (input[0] <= 142.0) {
                                        memcpy(var120, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var120, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var120, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var120, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 94.45000076293945) {
                memcpy(var120, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[0] <= 97.0) {
                    memcpy(var120, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var120, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var120, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var81, var120, 5, var80);
    double var121[5];
    if (input[3] <= 1.5) {
        if (input[1] <= 93.95000076293945) {
            memcpy(var121, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
        } else {
            if (input[2] <= 45.04999923706055) {
                if (input[2] <= 22.050000190734863) {
                    if (input[2] <= 14.949999809265137) {
                        memcpy(var121, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[3] <= 0.9449999928474426) {
                            memcpy(var121, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[0] <= 142.0) {
                                if (input[0] <= 74.5) {
                                    memcpy(var121, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var121, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            } else {
                                memcpy(var121, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[2] <= 44.95000076293945) {
                        memcpy(var121, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        if (input[1] <= 98.54999923706055) {
                            if (input[3] <= 1.0850000381469727) {
                                if (input[1] <= 96.04999923706055) {
                                    memcpy(var121, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    if (input[3] <= 0.9950000047683716) {
                                        if (input[3] <= 0.9549999833106995) {
                                            memcpy(var121, (double[]){0.7619047619047619, 0.23809523809523808, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        } else {
                                            if (input[0] <= 106.5) {
                                                memcpy(var121, (double[]){0.42857142857142855, 0.5714285714285714, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                            } else {
                                                memcpy(var121, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[1] <= 96.64999771118164) {
                                            memcpy(var121, (double[]){0.75, 0.25, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        } else {
                                            if (input[1] <= 97.75) {
                                                memcpy(var121, (double[]){0.5833333333333334, 0.4166666666666667, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                            } else {
                                                memcpy(var121, (double[]){0.4642857142857143, 0.5357142857142857, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                memcpy(var121, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        } else {
                            memcpy(var121, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var121, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    } else {
        memcpy(var121, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var80, var121, 5, var79);
    double var122[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var122, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[2] <= 22.050000190734863) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var122, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[1] <= 94.95000076293945) {
                    memcpy(var122, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 142.0) {
                        if (input[0] <= 74.5) {
                            memcpy(var122, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var122, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var122, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 45.04999923706055) {
                if (input[3] <= 1.5) {
                    if (input[0] <= 95.5) {
                        memcpy(var122, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var122, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var122, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[3] <= 1.4399999976158142) {
                    memcpy(var122, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var122, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var79, var122, 5, var78);
    double var123[5];
    if (input[3] <= 1.5) {
        if (input[2] <= 22.050000190734863) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var123, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 0.9449999928474426) {
                    memcpy(var123, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[1] <= 94.95000076293945) {
                        memcpy(var123, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 74.5) {
                            memcpy(var123, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[0] <= 142.0) {
                                memcpy(var123, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var123, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[2] <= 65.04999923706055) {
                if (input[2] <= 44.95000076293945) {
                    if (input[1] <= 94.45000076293945) {
                        memcpy(var123, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var123, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 94.45000076293945) {
                        memcpy(var123, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                    } else {
                        if (input[2] <= 45.04999923706055) {
                            if (input[3] <= 1.0750000476837158) {
                                if (input[0] <= 95.5) {
                                    memcpy(var123, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var123, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= 103.5) {
                                    memcpy(var123, (double[]){0.06666666666666667, 0.9333333333333333, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var123, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var123, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var123, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    } else {
        memcpy(var123, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var78, var123, 5, var77);
    double var124[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var124, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[2] <= 45.04999923706055) {
                if (input[0] <= 52.0) {
                    memcpy(var124, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 142.0) {
                        if (input[0] <= 95.0) {
                            memcpy(var124, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var124, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var124, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                }
            } else {
                memcpy(var124, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            memcpy(var124, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var77, var124, 5, var76);
    double var125[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var125, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[2] <= 22.050000190734863) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var125, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[1] <= 94.95000076293945) {
                    memcpy(var125, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 74.5) {
                        memcpy(var125, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 142.0) {
                            memcpy(var125, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var125, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[3] <= 1.5) {
                if (input[2] <= 45.04999923706055) {
                    if (input[0] <= 95.5) {
                        memcpy(var125, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var125, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var125, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var125, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    }
    add_vectors(var76, var125, 5, var75);
    double var126[5];
    if (input[3] <= 1.5) {
        if (input[2] <= 22.050000190734863) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var126, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 0.9449999928474426) {
                    memcpy(var126, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 142.0) {
                        if (input[1] <= 94.95000076293945) {
                            memcpy(var126, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[1] <= 98.54999923706055) {
                                if (input[0] <= 74.5) {
                                    memcpy(var126, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var126, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            } else {
                                memcpy(var126, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var126, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 65.04999923706055) {
                if (input[1] <= 94.45000076293945) {
                    memcpy(var126, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 97.0) {
                        memcpy(var126, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var126, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            } else {
                memcpy(var126, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    } else {
        memcpy(var126, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var75, var126, 5, var74);
    double var127[5];
    if (input[3] <= 1.5) {
        if (input[1] <= 93.95000076293945) {
            memcpy(var127, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
        } else {
            if (input[0] <= 97.0) {
                if (input[0] <= 52.0) {
                    memcpy(var127, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var127, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[0] <= 142.0) {
                    memcpy(var127, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var127, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var127, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var74, var127, 5, var73);
    double var128[5];
    if (input[3] <= 1.5) {
        if (input[2] <= 22.050000190734863) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var128, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[0] <= 142.0) {
                    if (input[0] <= 74.5) {
                        memcpy(var128, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var128, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var128, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            }
        } else {
            if (input[0] <= 94.5) {
                if (input[1] <= 94.95000076293945) {
                    memcpy(var128, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var128, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[1] <= 94.45000076293945) {
                    memcpy(var128, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var128, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var128, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var73, var128, 5, var72);
    double var129[5];
    if (input[2] <= 22.050000190734863) {
        if (input[2] <= 14.949999809265137) {
            memcpy(var129, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
        } else {
            if (input[0] <= 74.5) {
                memcpy(var129, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 0.9449999928474426) {
                    memcpy(var129, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 142.0) {
                        memcpy(var129, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var129, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[1] <= 94.45000076293945) {
            memcpy(var129, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
        } else {
            if (input[2] <= 45.04999923706055) {
                if (input[3] <= 1.5) {
                    if (input[0] <= 95.5) {
                        memcpy(var129, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var129, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var129, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[3] <= 1.4399999976158142) {
                    memcpy(var129, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var129, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var72, var129, 5, var71);
    double var130[5];
    if (input[3] <= 1.5) {
        if (input[2] <= 22.050000190734863) {
            if (input[0] <= 74.5) {
                memcpy(var130, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[0] <= 142.0) {
                    memcpy(var130, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var130, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            }
        } else {
            if (input[2] <= 65.04999923706055) {
                if (input[1] <= 94.45000076293945) {
                    memcpy(var130, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                } else {
                    if (input[1] <= 98.54999923706055) {
                        if (input[0] <= 97.0) {
                            memcpy(var130, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var130, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var130, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            } else {
                memcpy(var130, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    } else {
        memcpy(var130, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var71, var130, 5, var70);
    double var131[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var131, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[2] <= 45.04999923706055) {
                if (input[3] <= 0.9449999928474426) {
                    if (input[2] <= 21.949999809265137) {
                        memcpy(var131, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[1] <= 96.64999771118164) {
                            if (input[0] <= 55.0) {
                                memcpy(var131, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                if (input[0] <= 168.5) {
                                    memcpy(var131, (double[]){0.06666666666666667, 0.0, 0.0, 0.0, 0.9333333333333333}, 5 * sizeof(double));
                                } else {
                                    memcpy(var131, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[3] <= 0.9050000011920929) {
                                memcpy(var131, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                if (input[1] <= 97.64999771118164) {
                                    memcpy(var131, (double[]){0.21428571428571427, 0.0, 0.0, 0.0, 0.7857142857142857}, 5 * sizeof(double));
                                } else {
                                    memcpy(var131, (double[]){0.391304347826087, 0.0, 0.0, 0.0, 0.6086956521739131}, 5 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] <= 52.0) {
                        memcpy(var131, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 142.0) {
                            if (input[0] <= 95.5) {
                                memcpy(var131, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var131, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        } else {
                            memcpy(var131, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var131, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            memcpy(var131, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var70, var131, 5, var69);
    double var132[5];
    if (input[3] <= 1.5) {
        if (input[2] <= 22.050000190734863) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var132, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[1] <= 94.95000076293945) {
                    memcpy(var132, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[3] <= 0.9449999928474426) {
                        memcpy(var132, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 142.0) {
                            if (input[0] <= 74.5) {
                                memcpy(var132, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var132, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        } else {
                            memcpy(var132, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[1] <= 94.45000076293945) {
                memcpy(var132, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 1.0850000381469727) {
                    if (input[0] <= 97.0) {
                        memcpy(var132, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var132, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var132, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var132, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var69, var132, 5, var68);
    double var133[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var133, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[0] <= 97.0) {
                if (input[0] <= 52.0) {
                    memcpy(var133, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var133, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[2] <= 21.949999809265137) {
                    if (input[3] <= 0.9449999928474426) {
                        memcpy(var133, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 142.0) {
                            memcpy(var133, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var133, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    }
                } else {
                    if (input[0] <= 142.0) {
                        memcpy(var133, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var133, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var133, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var68, var133, 5, var67);
    double var134[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var134, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[2] <= 45.04999923706055) {
                if (input[3] <= 0.9449999928474426) {
                    if (input[2] <= 21.949999809265137) {
                        memcpy(var134, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[3] <= 0.8949999809265137) {
                            memcpy(var134, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[1] <= 96.04999923706055) {
                                memcpy(var134, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                if (input[0] <= 55.5) {
                                    memcpy(var134, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var134, (double[]){0.4583333333333333, 0.0, 0.0, 0.0, 0.5416666666666666}, 5 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[1] <= 94.95000076293945) {
                        memcpy(var134, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 52.0) {
                            memcpy(var134, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[2] <= 14.949999809265137) {
                                memcpy(var134, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                if (input[2] <= 22.050000190734863) {
                                    if (input[0] <= 142.0) {
                                        memcpy(var134, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var134, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= 98.54999923706055) {
                                        if (input[0] <= 95.5) {
                                            memcpy(var134, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        } else {
                                            memcpy(var134, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var134, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                memcpy(var134, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            memcpy(var134, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var67, var134, 5, var66);
    double var135[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var135, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[2] <= 22.050000190734863) {
            if (input[3] <= 1.1549999713897705) {
                if (input[2] <= 14.949999809265137) {
                    memcpy(var135, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[3] <= 0.9449999928474426) {
                        memcpy(var135, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 74.5) {
                            memcpy(var135, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[1] <= 94.95000076293945) {
                                memcpy(var135, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                if (input[1] <= 98.54999923706055) {
                                    if (input[3] <= 0.9549999833106995) {
                                        if (input[0] <= 142.0) {
                                            memcpy(var135, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        } else {
                                            memcpy(var135, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        }
                                    } else {
                                        if (input[3] <= 1.1449999809265137) {
                                            if (input[0] <= 142.0) {
                                                memcpy(var135, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                            } else {
                                                memcpy(var135, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                            }
                                        } else {
                                            if (input[0] <= 142.0) {
                                                memcpy(var135, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                            } else {
                                                memcpy(var135, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var135, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                memcpy(var135, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            if (input[2] <= 45.04999923706055) {
                if (input[1] <= 98.54999923706055) {
                    if (input[0] <= 139.5) {
                        if (input[3] <= 1.5) {
                            if (input[3] <= 0.9549999833106995) {
                                if (input[0] <= 95.5) {
                                    memcpy(var135, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var135, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= 44.95000076293945) {
                                    memcpy(var135, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    if (input[3] <= 1.0850000381469727) {
                                        if (input[0] <= 95.5) {
                                            memcpy(var135, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        } else {
                                            memcpy(var135, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var135, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var135, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var135, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 1.4350000023841858) {
                        memcpy(var135, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var135, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            } else {
                if (input[3] <= 1.4399999976158142) {
                    memcpy(var135, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var135, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var66, var135, 5, var65);
    double var136[5];
    if (input[2] <= 22.050000190734863) {
        if (input[2] <= 14.949999809265137) {
            memcpy(var136, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
        } else {
            if (input[0] <= 74.5) {
                memcpy(var136, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 0.9449999928474426) {
                    memcpy(var136, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 142.0) {
                        memcpy(var136, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var136, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[3] <= 1.5) {
            if (input[1] <= 94.45000076293945) {
                memcpy(var136, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[0] <= 97.0) {
                    memcpy(var136, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var136, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        } else {
            memcpy(var136, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var65, var136, 5, var64);
    double var137[5];
    if (input[3] <= 1.5) {
        if (input[1] <= 93.95000076293945) {
            memcpy(var137, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
        } else {
            if (input[2] <= 45.04999923706055) {
                if (input[2] <= 22.050000190734863) {
                    if (input[3] <= 1.1549999713897705) {
                        if (input[2] <= 14.949999809265137) {
                            memcpy(var137, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[3] <= 0.9449999928474426) {
                                memcpy(var137, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                if (input[0] <= 142.0) {
                                    if (input[1] <= 94.95000076293945) {
                                        memcpy(var137, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    } else {
                                        if (input[1] <= 98.54999923706055) {
                                            if (input[3] <= 0.9549999833106995) {
                                                if (input[1] <= 98.35000228881836) {
                                                    if (input[1] <= 95.35000228881836) {
                                                        if (input[0] <= 74.5) {
                                                            memcpy(var137, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                        } else {
                                                            memcpy(var137, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[0] <= 74.5) {
                                                            memcpy(var137, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                        } else {
                                                            memcpy(var137, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[0] <= 75.0) {
                                                        memcpy(var137, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                    } else {
                                                        memcpy(var137, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[3] <= 1.1449999809265137) {
                                                    if (input[1] <= 95.04999923706055) {
                                                        if (input[0] <= 74.5) {
                                                            memcpy(var137, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                        } else {
                                                            memcpy(var137, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[0] <= 74.5) {
                                                            memcpy(var137, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                        } else {
                                                            memcpy(var137, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[1] <= 98.45000076293945) {
                                                        if (input[0] <= 74.5) {
                                                            memcpy(var137, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                        } else {
                                                            memcpy(var137, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var137, (double[]){0.0, 0.4444444444444444, 0.0, 0.0, 0.5555555555555556}, 5 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var137, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var137, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var137, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 95.5) {
                        memcpy(var137, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var137, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            } else {
                memcpy(var137, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    } else {
        memcpy(var137, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var64, var137, 5, var63);
    double var138[5];
    if (input[3] <= 1.5) {
        if (input[0] <= 94.5) {
            if (input[1] <= 93.95000076293945) {
                memcpy(var138, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[1] <= 95.95000076293945) {
                    memcpy(var138, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[3] <= 1.0850000381469727) {
                        if (input[2] <= 33.5) {
                            memcpy(var138, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var138, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var138, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[0] <= 142.0) {
                if (input[2] <= 45.04999923706055) {
                    if (input[2] <= 29.949999809265137) {
                        memcpy(var138, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        if (input[1] <= 94.45000076293945) {
                            memcpy(var138, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var138, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var138, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var138, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            }
        }
    } else {
        memcpy(var138, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var63, var138, 5, var62);
    double var139[5];
    if (input[3] <= 1.5) {
        if (input[1] <= 93.95000076293945) {
            memcpy(var139, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
        } else {
            if (input[2] <= 45.04999923706055) {
                if (input[2] <= 22.050000190734863) {
                    if (input[0] <= 74.5) {
                        memcpy(var139, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 142.0) {
                            memcpy(var139, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var139, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    }
                } else {
                    if (input[0] <= 95.5) {
                        memcpy(var139, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var139, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            } else {
                memcpy(var139, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    } else {
        memcpy(var139, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var62, var139, 5, var61);
    double var140[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var140, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[2] <= 22.050000190734863) {
            if (input[0] <= 142.0) {
                if (input[0] <= 74.5) {
                    memcpy(var140, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var140, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var140, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            }
        } else {
            if (input[2] <= 45.04999923706055) {
                if (input[3] <= 1.5) {
                    if (input[0] <= 95.5) {
                        memcpy(var140, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var140, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[0] <= 94.5) {
                    if (input[3] <= 1.4399999976158142) {
                        memcpy(var140, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var140, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var61, var140, 5, var60);
    double var141[5];
    if (input[2] <= 22.050000190734863) {
        if (input[2] <= 14.949999809265137) {
            memcpy(var141, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
        } else {
            if (input[0] <= 74.5) {
                memcpy(var141, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 0.9449999928474426) {
                    memcpy(var141, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[1] <= 94.95000076293945) {
                        memcpy(var141, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[1] <= 98.54999923706055) {
                            if (input[1] <= 98.45000076293945) {
                                if (input[3] <= 1.1549999713897705) {
                                    if (input[1] <= 95.04999923706055) {
                                        if (input[2] <= 21.449999809265137) {
                                            if (input[0] <= 142.0) {
                                                memcpy(var141, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                            } else {
                                                memcpy(var141, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                            }
                                        } else {
                                            if (input[2] <= 21.550000190734863) {
                                                memcpy(var141, (double[]){0.0, 0.8571428571428571, 0.0, 0.0, 0.14285714285714285}, 5 * sizeof(double));
                                            } else {
                                                if (input[3] <= 1.0649999976158142) {
                                                    memcpy(var141, (double[]){0.0, 0.48148148148148145, 0.0, 0.0, 0.5185185185185185}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var141, (double[]){0.0, 0.6, 0.0, 0.0, 0.4}, 5 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[0] <= 142.0) {
                                            memcpy(var141, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        } else {
                                            memcpy(var141, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var141, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= 21.65000057220459) {
                                    if (input[0] <= 142.0) {
                                        memcpy(var141, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var141, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    }
                                } else {
                                    if (input[3] <= 1.0699999928474426) {
                                        memcpy(var141, (double[]){0.0, 0.7727272727272727, 0.0, 0.0, 0.22727272727272727}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var141, (double[]){0.0, 0.6190476190476191, 0.0, 0.0, 0.38095238095238093}, 5 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var141, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        if (input[1] <= 94.45000076293945) {
            memcpy(var141, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
        } else {
            if (input[3] <= 1.5) {
                if (input[2] <= 45.04999923706055) {
                    if (input[0] <= 95.5) {
                        memcpy(var141, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var141, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var141, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var141, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    }
    add_vectors(var60, var141, 5, var59);
    double var142[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var142, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[2] <= 45.04999923706055) {
                if (input[2] <= 22.050000190734863) {
                    if (input[0] <= 74.5) {
                        memcpy(var142, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[2] <= 14.949999809265137) {
                            memcpy(var142, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[3] <= 0.9449999928474426) {
                                memcpy(var142, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                if (input[3] <= 1.1549999713897705) {
                                    if (input[1] <= 94.95000076293945) {
                                        memcpy(var142, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    } else {
                                        if (input[0] <= 142.0) {
                                            memcpy(var142, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        } else {
                                            memcpy(var142, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var142, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] <= 95.5) {
                        memcpy(var142, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var142, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            } else {
                memcpy(var142, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            memcpy(var142, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var59, var142, 5, var58);
    double var143[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var143, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[2] <= 22.050000190734863) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var143, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[0] <= 142.0) {
                    if (input[3] <= 0.9449999928474426) {
                        memcpy(var143, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[1] <= 94.95000076293945) {
                            memcpy(var143, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[0] <= 74.5) {
                                memcpy(var143, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var143, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        }
                    }
                } else {
                    memcpy(var143, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            }
        } else {
            if (input[3] <= 1.5) {
                if (input[0] <= 97.0) {
                    memcpy(var143, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var143, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var143, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    }
    add_vectors(var58, var143, 5, var57);
    double var144[5];
    if (input[2] <= 22.050000190734863) {
        if (input[0] <= 142.0) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var144, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[0] <= 74.5) {
                    memcpy(var144, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var144, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        } else {
            memcpy(var144, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
        }
    } else {
        if (input[0] <= 89.5) {
            if (input[1] <= 94.95000076293945) {
                memcpy(var144, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                memcpy(var144, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            if (input[1] <= 94.45000076293945) {
                memcpy(var144, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[1] <= 95.95000076293945) {
                    memcpy(var144, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    if (input[2] <= 45.04999923706055) {
                        if (input[3] <= 1.5) {
                            if (input[2] <= 44.95000076293945) {
                                memcpy(var144, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                if (input[1] <= 97.64999771118164) {
                                    memcpy(var144, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    if (input[0] <= 104.5) {
                                        memcpy(var144, (double[]){0.45, 0.55, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var144, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var144, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        if (input[2] <= 75.04999923706055) {
                            if (input[3] <= 1.4399999976158142) {
                                memcpy(var144, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var144, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        } else {
                            memcpy(var144, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    }
                }
            }
        }
    }
    add_vectors(var57, var144, 5, var56);
    double var145[5];
    if (input[3] <= 1.5) {
        if (input[0] <= 94.5) {
            if (input[2] <= 26.0) {
                memcpy(var145, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[2] <= 44.95000076293945) {
                    memcpy(var145, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 84.5) {
                        memcpy(var145, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        if (input[3] <= 1.0850000381469727) {
                            if (input[1] <= 94.95000076293945) {
                                memcpy(var145, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var145, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        } else {
                            memcpy(var145, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[1] <= 93.95000076293945) {
                memcpy(var145, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 0.9449999928474426) {
                    memcpy(var145, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 142.0) {
                        memcpy(var145, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var145, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                }
            }
        }
    } else {
        memcpy(var145, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var56, var145, 5, var55);
    double var146[5];
    if (input[3] <= 1.5) {
        if (input[1] <= 93.95000076293945) {
            memcpy(var146, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
        } else {
            if (input[2] <= 45.04999923706055) {
                if (input[2] <= 22.050000190734863) {
                    if (input[2] <= 14.949999809265137) {
                        memcpy(var146, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[1] <= 94.95000076293945) {
                            memcpy(var146, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[1] <= 98.54999923706055) {
                                if (input[1] <= 98.45000076293945) {
                                    if (input[0] <= 142.0) {
                                        if (input[1] <= 95.04999923706055) {
                                            if (input[2] <= 16.75) {
                                                if (input[3] <= 0.9549999833106995) {
                                                    if (input[0] <= 46.5) {
                                                        memcpy(var146, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                    } else {
                                                        memcpy(var146, (double[]){0.0, 0.1, 0.0, 0.0, 0.9}, 5 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[3] <= 1.1549999713897705) {
                                                        if (input[3] <= 1.1150000095367432) {
                                                            if (input[3] <= 1.0850000381469727) {
                                                                memcpy(var146, (double[]){0.0, 0.48214285714285715, 0.0, 0.0, 0.5178571428571429}, 5 * sizeof(double));
                                                            } else {
                                                                memcpy(var146, (double[]){0.0, 0.6785714285714286, 0.0, 0.0, 0.32142857142857145}, 5 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[2] <= 15.599999904632568) {
                                                                memcpy(var146, (double[]){0.0, 0.4, 0.0, 0.0, 0.6}, 5 * sizeof(double));
                                                            } else {
                                                                memcpy(var146, (double[]){0.0, 0.13043478260869565, 0.0, 0.0, 0.8695652173913043}, 5 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var146, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[3] <= 0.9449999928474426) {
                                                    memcpy(var146, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                } else {
                                                    if (input[3] <= 1.1449999809265137) {
                                                        if (input[0] <= 74.5) {
                                                            memcpy(var146, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                        } else {
                                                            memcpy(var146, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[2] <= 20.899999618530273) {
                                                            if (input[0] <= 112.0) {
                                                                memcpy(var146, (double[]){0.0, 0.9411764705882353, 0.0, 0.0, 0.058823529411764705}, 5 * sizeof(double));
                                                            } else {
                                                                memcpy(var146, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var146, (double[]){0.0, 0.8461538461538461, 0.0, 0.0, 0.15384615384615385}, 5 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[0] <= 74.5) {
                                                memcpy(var146, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                            } else {
                                                memcpy(var146, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var146, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    }
                                } else {
                                    if (input[0] <= 74.5) {
                                        memcpy(var146, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    } else {
                                        if (input[3] <= 0.9449999928474426) {
                                            memcpy(var146, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        } else {
                                            if (input[3] <= 1.1549999713897705) {
                                                if (input[0] <= 142.0) {
                                                    memcpy(var146, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var146, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var146, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                memcpy(var146, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[0] <= 95.5) {
                        memcpy(var146, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var146, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            } else {
                memcpy(var146, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    } else {
        memcpy(var146, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var55, var146, 5, var54);
    double var147[5];
    if (input[2] <= 22.050000190734863) {
        if (input[3] <= 1.1549999713897705) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var147, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[0] <= 74.5) {
                    memcpy(var147, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[3] <= 0.9449999928474426) {
                        memcpy(var147, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[1] <= 94.95000076293945) {
                            memcpy(var147, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[0] <= 142.0) {
                                memcpy(var147, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var147, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            memcpy(var147, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    } else {
        if (input[3] <= 1.5) {
            if (input[0] <= 94.5) {
                if (input[2] <= 45.04999923706055) {
                    if (input[1] <= 95.0) {
                        memcpy(var147, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var147, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 94.95000076293945) {
                        memcpy(var147, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var147, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 45.04999923706055) {
                    if (input[1] <= 94.45000076293945) {
                        memcpy(var147, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var147, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var147, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                }
            }
        } else {
            memcpy(var147, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var54, var147, 5, var53);
    double var148[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var148, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[2] <= 22.050000190734863) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var148, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 0.9449999928474426) {
                    memcpy(var148, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 74.5) {
                        memcpy(var148, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[1] <= 94.95000076293945) {
                            memcpy(var148, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[3] <= 1.1549999713897705) {
                                if (input[1] <= 98.54999923706055) {
                                    if (input[0] <= 142.0) {
                                        memcpy(var148, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var148, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var148, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                }
                            } else {
                                memcpy(var148, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[3] <= 1.5) {
                if (input[2] <= 45.04999923706055) {
                    if (input[1] <= 98.54999923706055) {
                        if (input[3] <= 0.9549999833106995) {
                            if (input[0] <= 95.5) {
                                memcpy(var148, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var148, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        } else {
                            if (input[3] <= 1.0549999475479126) {
                                if (input[0] <= 95.0) {
                                    memcpy(var148, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var148, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            } else {
                                if (input[3] <= 1.0850000381469727) {
                                    if (input[0] <= 100.5) {
                                        if (input[1] <= 96.85000228881836) {
                                            memcpy(var148, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        } else {
                                            if (input[3] <= 1.0649999976158142) {
                                                memcpy(var148, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                            } else {
                                                if (input[2] <= 42.10000038146973) {
                                                    memcpy(var148, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var148, (double[]){0.25, 0.75, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var148, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var148, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var148, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var148, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var148, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    }
    add_vectors(var53, var148, 5, var52);
    double var149[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var149, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[0] <= 97.0) {
                if (input[1] <= 95.95000076293945) {
                    memcpy(var149, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[2] <= 33.5) {
                        memcpy(var149, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var149, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 142.0) {
                    memcpy(var149, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var149, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            }
        } else {
            memcpy(var149, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var52, var149, 5, var51);
    double var150[5];
    if (input[3] <= 1.5) {
        if (input[1] <= 93.95000076293945) {
            memcpy(var150, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
        } else {
            if (input[0] <= 97.0) {
                if (input[1] <= 95.95000076293945) {
                    memcpy(var150, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 52.0) {
                        memcpy(var150, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var150, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 142.0) {
                    memcpy(var150, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var150, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var150, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var51, var150, 5, var50);
    double var151[5];
    if (input[2] <= 22.050000190734863) {
        if (input[2] <= 14.949999809265137) {
            memcpy(var151, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
        } else {
            if (input[0] <= 142.0) {
                if (input[0] <= 74.5) {
                    memcpy(var151, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var151, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var151, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            }
        }
    } else {
        if (input[1] <= 94.45000076293945) {
            memcpy(var151, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
        } else {
            if (input[2] <= 45.04999923706055) {
                if (input[0] <= 139.5) {
                    if (input[1] <= 98.54999923706055) {
                        if (input[3] <= 1.5) {
                            if (input[0] <= 95.5) {
                                memcpy(var151, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var151, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        } else {
                            memcpy(var151, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        if (input[0] <= 89.0) {
                            memcpy(var151, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var151, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var151, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[0] <= 94.5) {
                    if (input[3] <= 1.4399999976158142) {
                        memcpy(var151, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var151, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var151, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var50, var151, 5, var49);
    double var152[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var152, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[2] <= 45.04999923706055) {
                if (input[3] <= 0.9449999928474426) {
                    if (input[2] <= 21.949999809265137) {
                        memcpy(var152, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[1] <= 97.64999771118164) {
                            memcpy(var152, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[0] <= 113.5) {
                                memcpy(var152, (double[]){0.2916666666666667, 0.0, 0.0, 0.0, 0.7083333333333334}, 5 * sizeof(double));
                            } else {
                                memcpy(var152, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[0] <= 52.0) {
                        memcpy(var152, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 142.0) {
                            if (input[2] <= 44.95000076293945) {
                                memcpy(var152, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                if (input[0] <= 95.5) {
                                    memcpy(var152, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var152, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var152, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var152, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            memcpy(var152, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var49, var152, 5, var48);
    double var153[5];
    if (input[3] <= 1.5) {
        if (input[1] <= 93.95000076293945) {
            memcpy(var153, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
        } else {
            if (input[2] <= 45.04999923706055) {
                if (input[3] <= 0.9449999928474426) {
                    if (input[2] <= 33.5) {
                        memcpy(var153, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var153, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 94.95000076293945) {
                        memcpy(var153, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[2] <= 21.949999809265137) {
                            if (input[0] <= 142.0) {
                                if (input[2] <= 14.949999809265137) {
                                    memcpy(var153, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                } else {
                                    if (input[0] <= 74.5) {
                                        memcpy(var153, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var153, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var153, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            }
                        } else {
                            if (input[0] <= 95.5) {
                                if (input[2] <= 33.5) {
                                    memcpy(var153, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var153, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= 142.0) {
                                    memcpy(var153, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var153, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                memcpy(var153, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    } else {
        memcpy(var153, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var48, var153, 5, var47);
    double var154[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var154, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[2] <= 45.04999923706055) {
                if (input[2] <= 22.050000190734863) {
                    if (input[0] <= 74.5) {
                        memcpy(var154, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 142.0) {
                            memcpy(var154, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var154, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    }
                } else {
                    if (input[2] <= 44.95000076293945) {
                        memcpy(var154, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        if (input[3] <= 1.0850000381469727) {
                            if (input[1] <= 98.54999923706055) {
                                if (input[3] <= 0.9549999833106995) {
                                    memcpy(var154, (double[]){0.6470588235294118, 0.35294117647058826, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    if (input[0] <= 95.5) {
                                        memcpy(var154, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var154, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var154, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        } else {
                            memcpy(var154, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var154, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            memcpy(var154, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var47, var154, 5, var46);
    double var155[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var155, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[0] <= 94.5) {
            if (input[1] <= 95.95000076293945) {
                memcpy(var155, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 1.0850000381469727) {
                    if (input[2] <= 33.5) {
                        memcpy(var155, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var155, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 69.5) {
                        memcpy(var155, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var155, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[0] <= 144.5) {
                if (input[2] <= 45.04999923706055) {
                    if (input[3] <= 1.5) {
                        memcpy(var155, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var155, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var155, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[3] <= 1.4749999642372131) {
                    memcpy(var155, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var155, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var46, var155, 5, var45);
    double var156[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var156, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[0] <= 94.5) {
            if (input[2] <= 23.5) {
                memcpy(var156, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[2] <= 44.95000076293945) {
                    memcpy(var156, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 89.5) {
                        memcpy(var156, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        if (input[2] <= 75.04999923706055) {
                            if (input[3] <= 1.4399999976158142) {
                                memcpy(var156, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var156, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        } else {
                            memcpy(var156, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[2] <= 45.04999923706055) {
                if (input[3] <= 1.5) {
                    if (input[3] <= 0.9449999928474426) {
                        memcpy(var156, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[1] <= 94.95000076293945) {
                            memcpy(var156, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[0] <= 142.0) {
                                memcpy(var156, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var156, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            }
                        }
                    }
                } else {
                    memcpy(var156, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var156, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    }
    add_vectors(var45, var156, 5, var44);
    double var157[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var157, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[0] <= 97.0) {
                if (input[0] <= 52.0) {
                    memcpy(var157, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var157, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[3] <= 0.9449999928474426) {
                    memcpy(var157, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 142.0) {
                        memcpy(var157, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var157, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var157, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var44, var157, 5, var43);
    double var158[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var158, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[2] <= 45.04999923706055) {
                if (input[2] <= 22.050000190734863) {
                    if (input[2] <= 14.949999809265137) {
                        memcpy(var158, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 74.5) {
                            memcpy(var158, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[0] <= 142.0) {
                                memcpy(var158, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var158, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[0] <= 95.5) {
                        memcpy(var158, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var158, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            } else {
                memcpy(var158, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            memcpy(var158, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var43, var158, 5, var42);
    double var159[5];
    if (input[3] <= 1.5) {
        if (input[1] <= 93.95000076293945) {
            memcpy(var159, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
        } else {
            if (input[2] <= 45.04999923706055) {
                if (input[2] <= 22.050000190734863) {
                    if (input[2] <= 14.949999809265137) {
                        memcpy(var159, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[1] <= 94.95000076293945) {
                            memcpy(var159, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[3] <= 0.9449999928474426) {
                                memcpy(var159, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                if (input[1] <= 98.54999923706055) {
                                    if (input[3] <= 1.1549999713897705) {
                                        if (input[0] <= 74.5) {
                                            memcpy(var159, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        } else {
                                            if (input[3] <= 0.9549999833106995) {
                                                if (input[0] <= 142.0) {
                                                    memcpy(var159, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var159, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                }
                                            } else {
                                                if (input[0] <= 142.0) {
                                                    memcpy(var159, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var159, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var159, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var159, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[1] <= 98.54999923706055) {
                        if (input[0] <= 95.5) {
                            memcpy(var159, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var159, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var159, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            } else {
                memcpy(var159, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    } else {
        memcpy(var159, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var42, var159, 5, var41);
    double var160[5];
    if (input[2] <= 22.050000190734863) {
        if (input[3] <= 1.1549999713897705) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var160, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[1] <= 94.95000076293945) {
                    memcpy(var160, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 142.0) {
                        if (input[0] <= 74.5) {
                            memcpy(var160, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var160, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var160, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var160, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    } else {
        if (input[1] <= 94.45000076293945) {
            memcpy(var160, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
        } else {
            if (input[0] <= 94.5) {
                if (input[0] <= 89.5) {
                    memcpy(var160, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    if (input[1] <= 99.54999923706055) {
                        if (input[2] <= 74.95000076293945) {
                            if (input[2] <= 44.95000076293945) {
                                memcpy(var160, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                if (input[0] <= 90.5) {
                                    if (input[3] <= 1.4449999928474426) {
                                        memcpy(var160, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var160, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                                    }
                                } else {
                                    if (input[3] <= 1.4399999976158142) {
                                        memcpy(var160, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var160, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 1.0750000476837158) {
                                memcpy(var160, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                if (input[1] <= 97.54999923706055) {
                                    memcpy(var160, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    if (input[1] <= 99.35000228881836) {
                                        if (input[2] <= 80.5999984741211) {
                                            memcpy(var160, (double[]){0.7857142857142857, 0.0, 0.21428571428571427, 0.0, 0.0}, 5 * sizeof(double));
                                        } else {
                                            memcpy(var160, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var160, (double[]){0.9333333333333333, 0.0, 0.06666666666666667, 0.0, 0.0}, 5 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var160, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 45.04999923706055) {
                    if (input[3] <= 1.5) {
                        memcpy(var160, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var160, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var160, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var41, var160, 5, var40);
    double var161[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var161, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[2] <= 45.04999923706055) {
                if (input[2] <= 22.050000190734863) {
                    if (input[2] <= 14.949999809265137) {
                        memcpy(var161, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 74.5) {
                            memcpy(var161, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[3] <= 0.9449999928474426) {
                                memcpy(var161, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                if (input[1] <= 94.95000076293945) {
                                    memcpy(var161, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                } else {
                                    if (input[0] <= 142.0) {
                                        memcpy(var161, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var161, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[1] <= 98.54999923706055) {
                        if (input[0] <= 95.0) {
                            memcpy(var161, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var161, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var161, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            } else {
                memcpy(var161, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            memcpy(var161, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var40, var161, 5, var39);
    double var162[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var162, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[2] <= 22.050000190734863) {
            if (input[0] <= 74.5) {
                memcpy(var162, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[0] <= 142.0) {
                    memcpy(var162, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var162, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            }
        } else {
            if (input[3] <= 1.5) {
                if (input[0] <= 97.0) {
                    memcpy(var162, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var162, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var162, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    }
    add_vectors(var39, var162, 5, var38);
    double var163[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var163, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[2] <= 22.050000190734863) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var163, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[0] <= 142.0) {
                    if (input[0] <= 74.5) {
                        memcpy(var163, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var163, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var163, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            }
        } else {
            if (input[3] <= 1.5) {
                if (input[0] <= 97.0) {
                    memcpy(var163, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var163, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var163, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    }
    add_vectors(var38, var163, 5, var37);
    double var164[5];
    if (input[3] <= 1.5) {
        if (input[2] <= 22.050000190734863) {
            if (input[3] <= 1.1549999713897705) {
                if (input[0] <= 142.0) {
                    if (input[0] <= 74.5) {
                        memcpy(var164, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var164, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var164, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var164, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            if (input[1] <= 94.45000076293945) {
                memcpy(var164, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[2] <= 45.04999923706055) {
                    if (input[2] <= 44.95000076293945) {
                        memcpy(var164, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 95.5) {
                            memcpy(var164, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var164, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var164, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var164, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var37, var164, 5, var36);
    double var165[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var165, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[2] <= 22.050000190734863) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var165, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[1] <= 94.95000076293945) {
                    memcpy(var165, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 74.5) {
                        memcpy(var165, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[1] <= 98.54999923706055) {
                            if (input[3] <= 0.9449999928474426) {
                                memcpy(var165, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                if (input[0] <= 142.0) {
                                    memcpy(var165, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var165, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var165, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[0] <= 94.5) {
                if (input[2] <= 44.95000076293945) {
                    memcpy(var165, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    if (input[3] <= 1.4399999976158142) {
                        memcpy(var165, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var165, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            } else {
                if (input[3] <= 1.5) {
                    memcpy(var165, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var165, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var36, var165, 5, var35);
    double var166[5];
    if (input[3] <= 1.5) {
        if (input[0] <= 94.5) {
            if (input[0] <= 52.0) {
                memcpy(var166, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[1] <= 94.95000076293945) {
                    memcpy(var166, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var166, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        } else {
            if (input[1] <= 93.95000076293945) {
                memcpy(var166, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[0] <= 142.0) {
                    memcpy(var166, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var166, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var166, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var35, var166, 5, var34);
    double var167[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var167, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[2] <= 22.050000190734863) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var167, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[1] <= 94.95000076293945) {
                    memcpy(var167, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 74.5) {
                        memcpy(var167, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 142.0) {
                            memcpy(var167, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var167, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[3] <= 1.5) {
                if (input[0] <= 97.0) {
                    memcpy(var167, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var167, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var167, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    }
    add_vectors(var34, var167, 5, var33);
    double var168[5];
    if (input[3] <= 1.5) {
        if (input[0] <= 94.5) {
            if (input[0] <= 52.0) {
                memcpy(var168, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[2] <= 44.95000076293945) {
                    memcpy(var168, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                } else {
                    if (input[1] <= 94.95000076293945) {
                        memcpy(var168, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var168, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[0] <= 142.0) {
                if (input[1] <= 94.45000076293945) {
                    memcpy(var168, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var168, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var168, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            }
        }
    } else {
        memcpy(var168, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var33, var168, 5, var32);
    double var169[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var169, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[2] <= 22.050000190734863) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var169, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[1] <= 94.95000076293945) {
                    memcpy(var169, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 74.5) {
                        memcpy(var169, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[3] <= 0.9449999928474426) {
                            memcpy(var169, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[3] <= 1.1549999713897705) {
                                if (input[0] <= 142.0) {
                                    memcpy(var169, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var169, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                }
                            } else {
                                memcpy(var169, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[2] <= 45.04999923706055) {
                if (input[0] <= 139.5) {
                    if (input[0] <= 99.5) {
                        if (input[3] <= 1.4399999976158142) {
                            memcpy(var169, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var169, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        if (input[2] <= 24.949999809265137) {
                            memcpy(var169, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            if (input[2] <= 44.95000076293945) {
                                if (input[3] <= 1.5) {
                                    memcpy(var169, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var169, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            } else {
                                if (input[3] <= 1.5750000476837158) {
                                    memcpy(var169, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var169, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    memcpy(var169, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[2] <= 75.04999923706055) {
                    if (input[3] <= 1.4399999976158142) {
                        memcpy(var169, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var169, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var169, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var32, var169, 5, var31);
    double var170[5];
    if (input[3] <= 1.5) {
        if (input[1] <= 93.95000076293945) {
            memcpy(var170, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
        } else {
            if (input[0] <= 97.0) {
                if (input[0] <= 52.0) {
                    memcpy(var170, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var170, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[0] <= 142.0) {
                    memcpy(var170, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var170, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var170, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var31, var170, 5, var30);
    double var171[5];
    if (input[2] <= 22.050000190734863) {
        if (input[2] <= 14.949999809265137) {
            memcpy(var171, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
        } else {
            if (input[0] <= 142.0) {
                if (input[0] <= 74.5) {
                    memcpy(var171, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var171, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var171, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            }
        }
    } else {
        if (input[1] <= 94.45000076293945) {
            memcpy(var171, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
        } else {
            if (input[3] <= 1.5) {
                if (input[3] <= 1.0850000381469727) {
                    if (input[1] <= 95.95000076293945) {
                        memcpy(var171, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 97.0) {
                            memcpy(var171, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var171, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var171, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var171, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    }
    add_vectors(var30, var171, 5, var29);
    double var172[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var172, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[2] <= 22.050000190734863) {
            if (input[0] <= 142.0) {
                if (input[0] <= 74.5) {
                    memcpy(var172, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var172, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var172, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            }
        } else {
            if (input[2] <= 45.04999923706055) {
                if (input[3] <= 1.5) {
                    if (input[1] <= 98.54999923706055) {
                        if (input[0] <= 95.5) {
                            memcpy(var172, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var172, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var172, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var172, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[3] <= 1.4399999976158142) {
                    memcpy(var172, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var172, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var29, var172, 5, var28);
    double var173[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var173, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[2] <= 45.04999923706055) {
                if (input[3] <= 0.9449999928474426) {
                    if (input[2] <= 33.5) {
                        memcpy(var173, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var173, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 22.050000190734863) {
                        if (input[2] <= 14.949999809265137) {
                            memcpy(var173, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[0] <= 74.5) {
                                memcpy(var173, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                if (input[1] <= 94.95000076293945) {
                                    memcpy(var173, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                } else {
                                    if (input[0] <= 142.0) {
                                        memcpy(var173, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var173, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 95.5) {
                            memcpy(var173, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var173, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var173, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            memcpy(var173, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var28, var173, 5, var27);
    double var174[5];
    if (input[3] <= 1.5) {
        if (input[0] <= 94.5) {
            if (input[1] <= 93.95000076293945) {
                memcpy(var174, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[0] <= 52.0) {
                    memcpy(var174, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var174, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        } else {
            if (input[0] <= 142.0) {
                if (input[1] <= 94.45000076293945) {
                    memcpy(var174, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var174, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var174, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            }
        }
    } else {
        memcpy(var174, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var27, var174, 5, var26);
    double var175[5];
    if (input[3] <= 1.5) {
        if (input[0] <= 94.5) {
            if (input[0] <= 52.0) {
                memcpy(var175, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[1] <= 94.95000076293945) {
                    memcpy(var175, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var175, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        } else {
            if (input[0] <= 142.0) {
                if (input[1] <= 94.45000076293945) {
                    memcpy(var175, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var175, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var175, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            }
        }
    } else {
        memcpy(var175, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var26, var175, 5, var25);
    double var176[5];
    if (input[2] <= 22.050000190734863) {
        if (input[0] <= 142.0) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var176, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 0.9449999928474426) {
                    memcpy(var176, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[1] <= 94.95000076293945) {
                        memcpy(var176, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[3] <= 1.1549999713897705) {
                            if (input[0] <= 74.5) {
                                memcpy(var176, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var176, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        } else {
                            memcpy(var176, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            memcpy(var176, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
        }
    } else {
        if (input[1] <= 94.45000076293945) {
            memcpy(var176, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
        } else {
            if (input[2] <= 45.04999923706055) {
                if (input[1] <= 98.54999923706055) {
                    if (input[3] <= 1.5) {
                        if (input[3] <= 0.9549999833106995) {
                            if (input[0] <= 95.5) {
                                memcpy(var176, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var176, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        } else {
                            if (input[0] <= 95.5) {
                                memcpy(var176, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var176, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var176, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 89.0) {
                        memcpy(var176, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        if (input[2] <= 44.95000076293945) {
                            memcpy(var176, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            if (input[3] <= 3.444999933242798) {
                                memcpy(var176, (double[]){0.09090909090909091, 0.0, 0.9090909090909091, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var176, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[2] <= 75.04999923706055) {
                    if (input[3] <= 1.4399999976158142) {
                        memcpy(var176, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var176, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var176, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var25, var176, 5, var24);
    double var177[5];
    if (input[3] <= 1.5) {
        if (input[2] <= 22.050000190734863) {
            if (input[3] <= 1.1549999713897705) {
                if (input[0] <= 74.5) {
                    memcpy(var177, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[3] <= 0.9449999928474426) {
                        memcpy(var177, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 142.0) {
                            memcpy(var177, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var177, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var177, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            if (input[1] <= 94.45000076293945) {
                memcpy(var177, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[0] <= 97.0) {
                    memcpy(var177, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var177, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var177, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var24, var177, 5, var23);
    double var178[5];
    if (input[2] <= 22.050000190734863) {
        if (input[3] <= 1.1549999713897705) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var178, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 0.9449999928474426) {
                    memcpy(var178, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[1] <= 94.95000076293945) {
                        memcpy(var178, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[3] <= 0.9549999833106995) {
                            if (input[1] <= 98.54999923706055) {
                                if (input[2] <= 20.65000057220459) {
                                    if (input[2] <= 19.15000057220459) {
                                        if (input[0] <= 142.0) {
                                            if (input[1] <= 97.75) {
                                                if (input[1] <= 97.64999771118164) {
                                                    if (input[0] <= 74.5) {
                                                        memcpy(var178, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                    } else {
                                                        memcpy(var178, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var178, (double[]){0.0, 0.2222222222222222, 0.0, 0.0, 0.7777777777777778}, 5 * sizeof(double));
                                                }
                                            } else {
                                                if (input[0] <= 74.5) {
                                                    memcpy(var178, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var178, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var178, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        }
                                    } else {
                                        if (input[0] <= 142.0) {
                                            if (input[1] <= 96.95000076293945) {
                                                if (input[0] <= 75.0) {
                                                    memcpy(var178, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var178, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                }
                                            } else {
                                                if (input[1] <= 98.04999923706055) {
                                                    if (input[1] <= 97.25) {
                                                        memcpy(var178, (double[]){0.0, 0.6086956521739131, 0.0, 0.0, 0.391304347826087}, 5 * sizeof(double));
                                                    } else {
                                                        if (input[2] <= 19.449999809265137) {
                                                            memcpy(var178, (double[]){0.0, 0.7619047619047619, 0.0, 0.0, 0.23809523809523808}, 5 * sizeof(double));
                                                        } else {
                                                            if (input[0] <= 108.0) {
                                                                memcpy(var178, (double[]){0.0, 0.4666666666666667, 0.0, 0.0, 0.5333333333333333}, 5 * sizeof(double));
                                                            } else {
                                                                memcpy(var178, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[0] <= 74.5) {
                                                        memcpy(var178, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                    } else {
                                                        memcpy(var178, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var178, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[1] <= 95.25) {
                                        memcpy(var178, (double[]){0.0, 0.5483870967741935, 0.0, 0.0, 0.45161290322580644}, 5 * sizeof(double));
                                    } else {
                                        if (input[0] <= 74.5) {
                                            memcpy(var178, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        } else {
                                            if (input[0] <= 142.0) {
                                                memcpy(var178, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                            } else {
                                                memcpy(var178, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                memcpy(var178, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            }
                        } else {
                            if (input[0] <= 74.5) {
                                memcpy(var178, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                if (input[0] <= 142.0) {
                                    memcpy(var178, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var178, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            memcpy(var178, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    } else {
        if (input[3] <= 1.5) {
            if (input[1] <= 94.45000076293945) {
                memcpy(var178, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[0] <= 97.0) {
                    memcpy(var178, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var178, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        } else {
            memcpy(var178, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var23, var178, 5, var22);
    double var179[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var179, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[2] <= 22.050000190734863) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var179, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 0.9449999928474426) {
                    memcpy(var179, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[3] <= 1.1549999713897705) {
                        if (input[0] <= 142.0) {
                            if (input[0] <= 74.5) {
                                memcpy(var179, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var179, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        } else {
                            memcpy(var179, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var179, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[3] <= 1.5) {
                if (input[2] <= 45.04999923706055) {
                    if (input[1] <= 98.54999923706055) {
                        if (input[0] <= 95.5) {
                            memcpy(var179, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var179, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var179, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var179, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var179, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    }
    add_vectors(var22, var179, 5, var21);
    double var180[5];
    if (input[3] <= 1.5) {
        if (input[2] <= 22.050000190734863) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var180, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 0.9449999928474426) {
                    memcpy(var180, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 74.5) {
                        memcpy(var180, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 142.0) {
                            memcpy(var180, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var180, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[1] <= 94.45000076293945) {
                memcpy(var180, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[0] <= 97.0) {
                    memcpy(var180, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var180, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var180, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var21, var180, 5, var20);
    double var181[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var181, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[2] <= 22.050000190734863) {
            if (input[3] <= 1.1549999713897705) {
                if (input[2] <= 14.949999809265137) {
                    memcpy(var181, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[1] <= 94.95000076293945) {
                        memcpy(var181, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[3] <= 0.9449999928474426) {
                            memcpy(var181, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[0] <= 142.0) {
                                if (input[3] <= 1.1449999809265137) {
                                    if (input[1] <= 98.54999923706055) {
                                        if (input[1] <= 95.04999923706055) {
                                            if (input[3] <= 0.9850000143051147) {
                                                if (input[3] <= 0.9750000238418579) {
                                                    if (input[0] <= 74.5) {
                                                        memcpy(var181, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                    } else {
                                                        memcpy(var181, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[2] <= 18.84999942779541) {
                                                        memcpy(var181, (double[]){0.0, 0.75, 0.0, 0.0, 0.25}, 5 * sizeof(double));
                                                    } else {
                                                        memcpy(var181, (double[]){0.0, 0.6111111111111112, 0.0, 0.0, 0.3888888888888889}, 5 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[0] <= 74.5) {
                                                    memcpy(var181, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var181, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[0] <= 74.5) {
                                                memcpy(var181, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                            } else {
                                                memcpy(var181, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var181, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    }
                                } else {
                                    if (input[0] <= 74.5) {
                                        memcpy(var181, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var181, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var181, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                memcpy(var181, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            if (input[3] <= 1.5) {
                if (input[0] <= 97.0) {
                    memcpy(var181, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var181, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var181, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    }
    add_vectors(var20, var181, 5, var19);
    double var182[5];
    if (input[2] <= 22.050000190734863) {
        if (input[2] <= 14.949999809265137) {
            memcpy(var182, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
        } else {
            if (input[0] <= 142.0) {
                if (input[3] <= 0.9449999928474426) {
                    memcpy(var182, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 74.5) {
                        memcpy(var182, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var182, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            } else {
                memcpy(var182, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            }
        }
    } else {
        if (input[3] <= 1.5) {
            if (input[1] <= 94.45000076293945) {
                memcpy(var182, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[2] <= 45.04999923706055) {
                    if (input[1] <= 98.54999923706055) {
                        if (input[0] <= 95.5) {
                            memcpy(var182, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var182, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var182, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var182, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        } else {
            memcpy(var182, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var19, var182, 5, var18);
    double var183[5];
    if (input[2] <= 22.050000190734863) {
        if (input[0] <= 142.0) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var183, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[0] <= 74.5) {
                    memcpy(var183, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var183, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        } else {
            memcpy(var183, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
        }
    } else {
        if (input[3] <= 1.5) {
            if (input[2] <= 65.04999923706055) {
                if (input[2] <= 44.95000076293945) {
                    if (input[1] <= 94.45000076293945) {
                        memcpy(var183, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var183, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 84.5) {
                        memcpy(var183, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        if (input[3] <= 0.9150000214576721) {
                            memcpy(var183, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            if (input[3] <= 1.0850000381469727) {
                                if (input[1] <= 94.45000076293945) {
                                    memcpy(var183, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    if (input[0] <= 97.0) {
                                        memcpy(var183, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var183, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[2] <= 45.04999923706055) {
                                    if (input[3] <= 1.1449999809265137) {
                                        if (input[0] <= 123.5) {
                                            if (input[0] <= 99.0) {
                                                memcpy(var183, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                                            } else {
                                                if (input[1] <= 94.3499984741211) {
                                                    memcpy(var183, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var183, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var183, (double[]){0.0, 0.9333333333333333, 0.0, 0.06666666666666667, 0.0}, 5 * sizeof(double));
                                        }
                                    } else {
                                        if (input[3] <= 1.1549999713897705) {
                                            memcpy(var183, (double[]){0.0, 0.6875, 0.0, 0.3125, 0.0}, 5 * sizeof(double));
                                        } else {
                                            memcpy(var183, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var183, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                memcpy(var183, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            memcpy(var183, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var18, var183, 5, var17);
    double var184[5];
    if (input[3] <= 1.5) {
        if (input[2] <= 22.050000190734863) {
            if (input[3] <= 1.1549999713897705) {
                if (input[3] <= 0.9449999928474426) {
                    memcpy(var184, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 74.5) {
                        memcpy(var184, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[1] <= 94.95000076293945) {
                            memcpy(var184, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[0] <= 142.0) {
                                memcpy(var184, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var184, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                memcpy(var184, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            if (input[0] <= 94.5) {
                if (input[1] <= 94.95000076293945) {
                    memcpy(var184, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var184, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[1] <= 94.45000076293945) {
                    memcpy(var184, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var184, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var184, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var17, var184, 5, var16);
    double var185[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var185, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[2] <= 22.050000190734863) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var185, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[0] <= 142.0) {
                    if (input[0] <= 74.5) {
                        memcpy(var185, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var185, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var185, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            }
        } else {
            if (input[3] <= 1.5) {
                if (input[0] <= 97.0) {
                    memcpy(var185, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var185, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                memcpy(var185, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    }
    add_vectors(var16, var185, 5, var15);
    double var186[5];
    if (input[2] <= 22.050000190734863) {
        if (input[2] <= 14.949999809265137) {
            memcpy(var186, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
        } else {
            if (input[1] <= 94.95000076293945) {
                memcpy(var186, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[0] <= 74.5) {
                    memcpy(var186, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 142.0) {
                        memcpy(var186, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var186, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[3] <= 1.5) {
            if (input[1] <= 94.45000076293945) {
                memcpy(var186, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[0] <= 97.0) {
                    memcpy(var186, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var186, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        } else {
            memcpy(var186, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var15, var186, 5, var14);
    double var187[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var187, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[2] <= 22.050000190734863) {
            if (input[2] <= 14.949999809265137) {
                memcpy(var187, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[1] <= 94.95000076293945) {
                    memcpy(var187, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 142.0) {
                        if (input[1] <= 98.54999923706055) {
                            if (input[1] <= 98.45000076293945) {
                                if (input[0] <= 74.5) {
                                    memcpy(var187, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var187, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            } else {
                                if (input[2] <= 21.050000190734863) {
                                    if (input[3] <= 0.9549999833106995) {
                                        if (input[3] <= 0.9449999928474426) {
                                            memcpy(var187, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        } else {
                                            memcpy(var187, (double[]){0.0, 0.13333333333333333, 0.0, 0.0, 0.8666666666666667}, 5 * sizeof(double));
                                        }
                                    } else {
                                        if (input[0] <= 74.5) {
                                            memcpy(var187, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        } else {
                                            memcpy(var187, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[2] <= 21.84999942779541) {
                                        if (input[3] <= 0.9449999928474426) {
                                            memcpy(var187, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        } else {
                                            if (input[2] <= 21.34999942779541) {
                                                if (input[0] <= 73.5) {
                                                    memcpy(var187, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var187, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                }
                                            } else {
                                                if (input[2] <= 21.550000190734863) {
                                                    memcpy(var187, (double[]){0.0, 0.8947368421052632, 0.0, 0.0, 0.10526315789473684}, 5 * sizeof(double));
                                                } else {
                                                    if (input[3] <= 1.0549999475479126) {
                                                        memcpy(var187, (double[]){0.0, 0.8571428571428571, 0.0, 0.0, 0.14285714285714285}, 5 * sizeof(double));
                                                    } else {
                                                        memcpy(var187, (double[]){0.0, 0.5909090909090909, 0.0, 0.0, 0.4090909090909091}, 5 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var187, (double[]){0.0, 0.30434782608695654, 0.0, 0.0, 0.6956521739130435}, 5 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var187, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var187, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 45.04999923706055) {
                if (input[3] <= 1.5) {
                    if (input[1] <= 98.54999923706055) {
                        if (input[2] <= 44.95000076293945) {
                            memcpy(var187, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            if (input[3] <= 1.0850000381469727) {
                                if (input[0] <= 95.5) {
                                    memcpy(var187, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var187, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            } else {
                                memcpy(var187, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var187, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var187, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[2] <= 75.04999923706055) {
                    if (input[3] <= 1.4399999976158142) {
                        memcpy(var187, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var187, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var187, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var14, var187, 5, var13);
    double var188[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var188, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[0] <= 97.0) {
                if (input[2] <= 33.5) {
                    memcpy(var188, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var188, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[0] <= 142.0) {
                    memcpy(var188, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var188, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            }
        } else {
            memcpy(var188, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var13, var188, 5, var12);
    double var189[5];
    if (input[3] <= 1.5) {
        if (input[1] <= 93.95000076293945) {
            memcpy(var189, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
        } else {
            if (input[3] <= 1.0850000381469727) {
                if (input[0] <= 97.0) {
                    if (input[2] <= 33.5) {
                        memcpy(var189, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var189, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 21.949999809265137) {
                        if (input[0] <= 142.0) {
                            memcpy(var189, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var189, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    } else {
                        if (input[3] <= 0.9449999928474426) {
                            memcpy(var189, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[1] <= 94.95000076293945) {
                                memcpy(var189, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                if (input[0] <= 142.0) {
                                    memcpy(var189, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var189, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[0] <= 142.0) {
                    if (input[2] <= 14.949999809265137) {
                        memcpy(var189, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[2] <= 22.050000190734863) {
                            if (input[0] <= 74.5) {
                                memcpy(var189, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var189, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        } else {
                            memcpy(var189, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var189, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var189, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
    }
    add_vectors(var12, var189, 5, var11);
    double var190[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var190, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[3] <= 1.0850000381469727) {
                if (input[0] <= 97.0) {
                    if (input[0] <= 52.0) {
                        memcpy(var190, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var190, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 142.0) {
                        memcpy(var190, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var190, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 74.5) {
                    memcpy(var190, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[1] <= 94.95000076293945) {
                        memcpy(var190, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 142.0) {
                            memcpy(var190, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var190, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            memcpy(var190, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var11, var190, 5, var10);
    double var191[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var191, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[0] <= 97.0) {
                if (input[0] <= 52.0) {
                    memcpy(var191, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var191, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[0] <= 142.0) {
                    memcpy(var191, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var191, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            }
        } else {
            memcpy(var191, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var10, var191, 5, var9);
    double var192[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var192, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[0] <= 97.0) {
                if (input[0] <= 52.0) {
                    memcpy(var192, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    memcpy(var192, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[2] <= 21.949999809265137) {
                    if (input[0] <= 142.0) {
                        memcpy(var192, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var192, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 142.0) {
                        memcpy(var192, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var192, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var192, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var9, var192, 5, var8);
    double var193[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var193, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[0] <= 97.0) {
                if (input[1] <= 95.95000076293945) {
                    memcpy(var193, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 52.0) {
                        memcpy(var193, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var193, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 142.0) {
                    memcpy(var193, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var193, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            }
        } else {
            memcpy(var193, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var8, var193, 5, var7);
    double var194[5];
    if (input[2] <= 22.050000190734863) {
        if (input[2] <= 14.949999809265137) {
            memcpy(var194, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
        } else {
            if (input[3] <= 0.9449999928474426) {
                memcpy(var194, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[1] <= 94.95000076293945) {
                    memcpy(var194, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 74.5) {
                        memcpy(var194, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[1] <= 98.54999923706055) {
                            if (input[0] <= 142.0) {
                                memcpy(var194, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var194, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            }
                        } else {
                            memcpy(var194, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        if (input[0] <= 89.5) {
            if (input[0] <= 84.5) {
                memcpy(var194, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            } else {
                if (input[2] <= 65.04999923706055) {
                    if (input[2] <= 44.95000076293945) {
                        memcpy(var194, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                    } else {
                        if (input[3] <= 1.0850000381469727) {
                            if (input[1] <= 94.95000076293945) {
                                memcpy(var194, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var194, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        } else {
                            memcpy(var194, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var194, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        } else {
            if (input[2] <= 45.04999923706055) {
                if (input[3] <= 1.5) {
                    if (input[0] <= 99.5) {
                        if (input[3] <= 0.925000011920929) {
                            if (input[2] <= 44.14999961853027) {
                                memcpy(var194, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var194, (double[]){0.16666666666666666, 0.0, 0.0, 0.8333333333333334, 0.0}, 5 * sizeof(double));
                            }
                        } else {
                            if (input[2] <= 44.95000076293945) {
                                memcpy(var194, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                            } else {
                                if (input[1] <= 92.5) {
                                    memcpy(var194, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                                } else {
                                    memcpy(var194, (double[]){0.23529411764705882, 0.0, 0.0, 0.7647058823529411, 0.0}, 5 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[1] <= 94.45000076293945) {
                            memcpy(var194, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var194, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var194, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[1] <= 94.95000076293945) {
                    memcpy(var194, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                } else {
                    if (input[2] <= 75.04999923706055) {
                        if (input[0] <= 94.5) {
                            if (input[1] <= 99.54999923706055) {
                                if (input[1] <= 99.45000076293945) {
                                    if (input[3] <= 1.4399999976158142) {
                                        memcpy(var194, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var194, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                                    }
                                } else {
                                    if (input[0] <= 91.5) {
                                        if (input[3] <= 1.4950000047683716) {
                                            memcpy(var194, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        } else {
                                            memcpy(var194, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                                        }
                                    } else {
                                        if (input[0] <= 92.5) {
                                            if (input[2] <= 63.60000038146973) {
                                                memcpy(var194, (double[]){0.75, 0.0, 0.25, 0.0, 0.0}, 5 * sizeof(double));
                                            } else {
                                                memcpy(var194, (double[]){0.9583333333333334, 0.0, 0.041666666666666664, 0.0, 0.0}, 5 * sizeof(double));
                                            }
                                        } else {
                                            if (input[0] <= 93.5) {
                                                if (input[3] <= 1.5699999332427979) {
                                                    memcpy(var194, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var194, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                                                }
                                            } else {
                                                if (input[3] <= 1.0449999570846558) {
                                                    memcpy(var194, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var194, (double[]){0.25, 0.0, 0.75, 0.0, 0.0}, 5 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                memcpy(var194, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        } else {
                            memcpy(var194, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    } else {
                        memcpy(var194, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var7, var194, 5, var6);
    double var195[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var195, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[2] <= 45.04999923706055) {
                if (input[2] <= 22.050000190734863) {
                    if (input[2] <= 14.949999809265137) {
                        memcpy(var195, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 74.5) {
                            memcpy(var195, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        } else {
                            if (input[0] <= 142.0) {
                                memcpy(var195, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var195, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[0] <= 95.5) {
                        memcpy(var195, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var195, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            } else {
                memcpy(var195, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            memcpy(var195, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var6, var195, 5, var5);
    double var196[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var196, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[2] <= 22.050000190734863) {
            if (input[3] <= 1.1549999713897705) {
                if (input[0] <= 74.5) {
                    memcpy(var196, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 142.0) {
                        memcpy(var196, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var196, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                }
            } else {
                memcpy(var196, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            if (input[0] <= 94.5) {
                if (input[2] <= 44.95000076293945) {
                    memcpy(var196, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 89.5) {
                        memcpy(var196, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        if (input[3] <= 1.4399999976158142) {
                            memcpy(var196, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var196, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[3] <= 1.5) {
                    memcpy(var196, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var196, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var5, var196, 5, var4);
    double var197[5];
    if (input[2] <= 22.050000190734863) {
        if (input[0] <= 74.5) {
            memcpy(var197, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
        } else {
            if (input[2] <= 14.949999809265137) {
                memcpy(var197, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[3] <= 0.9449999928474426) {
                    memcpy(var197, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[1] <= 94.95000076293945) {
                        memcpy(var197, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[1] <= 98.54999923706055) {
                            if (input[1] <= 95.04999923706055) {
                                if (input[3] <= 1.1449999809265137) {
                                    if (input[0] <= 142.0) {
                                        memcpy(var197, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var197, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                    }
                                } else {
                                    if (input[2] <= 19.050000190734863) {
                                        if (input[3] <= 1.1549999713897705) {
                                            memcpy(var197, (double[]){0.0, 0.8, 0.0, 0.0, 0.2}, 5 * sizeof(double));
                                        } else {
                                            memcpy(var197, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var197, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[3] <= 1.1549999713897705) {
                                    if (input[3] <= 1.1449999809265137) {
                                        if (input[0] <= 142.0) {
                                            memcpy(var197, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        } else {
                                            memcpy(var197, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        }
                                    } else {
                                        if (input[0] <= 142.0) {
                                            memcpy(var197, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                        } else {
                                            memcpy(var197, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var197, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var197, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        if (input[0] <= 89.5) {
            if (input[1] <= 94.95000076293945) {
                memcpy(var197, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
            } else {
                memcpy(var197, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        } else {
            if (input[3] <= 1.5) {
                if (input[1] <= 94.45000076293945) {
                    memcpy(var197, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                } else {
                    if (input[0] <= 97.0) {
                        memcpy(var197, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var197, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                }
            } else {
                memcpy(var197, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
            }
        }
    }
    add_vectors(var4, var197, 5, var3);
    double var198[5];
    if (input[1] <= 93.95000076293945) {
        memcpy(var198, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
    } else {
        if (input[3] <= 1.5) {
            if (input[3] <= 1.0850000381469727) {
                if (input[2] <= 45.04999923706055) {
                    if (input[0] <= 142.0) {
                        if (input[2] <= 22.050000190734863) {
                            if (input[0] <= 74.5) {
                                memcpy(var198, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                            } else {
                                memcpy(var198, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        } else {
                            if (input[1] <= 98.54999923706055) {
                                if (input[3] <= 0.9549999833106995) {
                                    if (input[0] <= 95.5) {
                                        memcpy(var198, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        memcpy(var198, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= 96.04999923706055) {
                                        memcpy(var198, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                    } else {
                                        if (input[1] <= 98.14999771118164) {
                                            if (input[0] <= 95.0) {
                                                memcpy(var198, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                            } else {
                                                memcpy(var198, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                            }
                                        } else {
                                            if (input[3] <= 0.9850000143051147) {
                                                if (input[2] <= 44.75) {
                                                    memcpy(var198, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                } else {
                                                    memcpy(var198, (double[]){0.4375, 0.5625, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                }
                                            } else {
                                                if (input[3] <= 1.034999966621399) {
                                                    memcpy(var198, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                } else {
                                                    if (input[3] <= 1.0549999475479126) {
                                                        if (input[0] <= 100.5) {
                                                            memcpy(var198, (double[]){0.1, 0.9, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                        } else {
                                                            memcpy(var198, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var198, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                memcpy(var198, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var198, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var198, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[0] <= 142.0) {
                    if (input[0] <= 74.5) {
                        memcpy(var198, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        memcpy(var198, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                    }
                } else {
                    memcpy(var198, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                }
            }
        } else {
            memcpy(var198, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var3, var198, 5, var2);
    double var199[5];
    if (input[2] <= 22.050000190734863) {
        if (input[3] <= 1.1549999713897705) {
            if (input[0] <= 74.5) {
                memcpy(var199, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
            } else {
                if (input[2] <= 14.949999809265137) {
                    memcpy(var199, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                } else {
                    if (input[3] <= 0.9449999928474426) {
                        memcpy(var199, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                    } else {
                        if (input[0] <= 142.0) {
                            memcpy(var199, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                        } else {
                            memcpy(var199, (double[]){0.0, 0.0, 0.0, 0.0, 1.0}, 5 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            memcpy(var199, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    } else {
        if (input[3] <= 1.5) {
            if (input[0] <= 94.5) {
                if (input[1] <= 94.95000076293945) {
                    memcpy(var199, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var199, (double[]){1.0, 0.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            } else {
                if (input[1] <= 94.45000076293945) {
                    memcpy(var199, (double[]){0.0, 0.0, 0.0, 1.0, 0.0}, 5 * sizeof(double));
                } else {
                    memcpy(var199, (double[]){0.0, 1.0, 0.0, 0.0, 0.0}, 5 * sizeof(double));
                }
            }
        } else {
            memcpy(var199, (double[]){0.0, 0.0, 1.0, 0.0, 0.0}, 5 * sizeof(double));
        }
    }
    add_vectors(var2, var199, 5, var1);
    mul_vector_number(var1, 0.01, 5, var0);
    memcpy(output, var0, 5 * sizeof(double));
}
