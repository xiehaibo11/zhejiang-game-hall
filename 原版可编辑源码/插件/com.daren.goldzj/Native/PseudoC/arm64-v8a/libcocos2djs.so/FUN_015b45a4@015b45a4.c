
uint FUN_015b45a4(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 _func_bool_float_float *param_6)

{
  float fVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = std::__ndk1::__sort4<bool(*&)(float,float),float*>
                    (param_1,param_2,param_3,param_4,param_6);
  uVar3 = (**(code **)param_6)(*param_5,*param_4);
  if ((uVar3 & 1) != 0) {
    fVar1 = *param_4;
    *param_4 = *param_5;
    *param_5 = fVar1;
    uVar3 = (**(code **)param_6)(*param_4,*param_3);
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar2 + 1;
    }
    else {
      fVar1 = *param_3;
      *param_3 = *param_4;
      *param_4 = fVar1;
      uVar3 = (**(code **)param_6)(*param_3,*param_2);
      if ((uVar3 & 1) == 0) {
        uVar2 = uVar2 + 2;
      }
      else {
        fVar1 = *param_2;
        *param_2 = *param_3;
        *param_3 = fVar1;
        uVar3 = (**(code **)param_6)(*param_2,*param_1);
        if ((uVar3 & 1) == 0) {
          uVar2 = uVar2 + 3;
        }
        else {
          fVar1 = *param_1;
          uVar2 = uVar2 + 4;
          *param_1 = *param_2;
          *param_2 = fVar1;
        }
      }
    }
  }
  return uVar2;
}

