#ifndef MODEL_PREDICTION_H
#define MODEL_PREDICTION_H

#ifdef __cplusplus
extern "C" {
#endif

// Ham du doan:
// input: Mang chua 4 dac trung [HR, SpO2, HRV, Accel]
// output: Mang chua xac suat cua 5 lop
void score(double * input, double * output);

#ifdef __cplusplus
}
#endif

#endif // MODEL_PREDICTION_H
