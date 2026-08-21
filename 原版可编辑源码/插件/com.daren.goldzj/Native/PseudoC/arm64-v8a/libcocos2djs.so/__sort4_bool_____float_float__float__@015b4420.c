
/* unsigned int std::__ndk1::__sort4<bool (*&)(float, float), float*>(float*, float*, float*,
   float*, bool (*&)(float, float)) */

uint std::__ndk1::__sort4<bool(*&)(float,float),float*>
               (float *param_1,float *param_2,float *param_3,float *param_4,
               _func_bool_float_float *param_5)

{
  float fVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar2 = (**(code **)param_5)(*param_2,*param_1);
  uVar3 = (**(code **)param_5)(*param_3,*param_2);
  if ((uVar2 & 1) == 0) {
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      goto LAB_015b450c;
    }
    fVar1 = *param_2;
    *param_2 = *param_3;
    *param_3 = fVar1;
    uVar2 = (**(code **)param_5)(*param_2,*param_1);
    if ((uVar2 & 1) == 0) goto LAB_015b4500;
    fVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = fVar1;
  }
  else {
    fVar1 = *param_1;
    if ((uVar3 & 1) != 0) {
      uVar4 = 1;
      *param_1 = *param_3;
      *param_3 = fVar1;
      goto LAB_015b450c;
    }
    *param_1 = *param_2;
    *param_2 = fVar1;
    uVar2 = (**(code **)param_5)(*param_3,fVar1);
    if ((uVar2 & 1) == 0) {
LAB_015b4500:
      uVar4 = 1;
      goto LAB_015b450c;
    }
    fVar1 = *param_2;
    *param_2 = *param_3;
    *param_3 = fVar1;
  }
  uVar4 = 2;
LAB_015b450c:
  uVar2 = (**(code **)param_5)(*param_4,*param_3);
  if ((uVar2 & 1) != 0) {
    fVar1 = *param_3;
    *param_3 = *param_4;
    *param_4 = fVar1;
    uVar2 = (**(code **)param_5)(*param_3,*param_2);
    if ((uVar2 & 1) == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
      fVar1 = *param_2;
      *param_2 = *param_3;
      *param_3 = fVar1;
      uVar2 = (**(code **)param_5)(*param_2,*param_1);
      if ((uVar2 & 1) == 0) {
        uVar4 = uVar4 + 2;
      }
      else {
        fVar1 = *param_1;
        uVar4 = uVar4 + 3;
        *param_1 = *param_2;
        *param_2 = fVar1;
      }
    }
  }
  return uVar4;
}

