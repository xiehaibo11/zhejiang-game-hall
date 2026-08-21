
long cpRatchetJointInit(undefined4 param_1,undefined4 param_2,long param_3,long param_4,long param_5
                       )

{
  float fVar1;
  float fVar2;
  
  cpConstraintInit(param_3,&PTR_FUN_0172d318,param_4,param_5);
  fVar1 = 0.0;
  fVar2 = 0.0;
  *(undefined4 *)(param_3 + 0x58) = 0;
  *(undefined4 *)(param_3 + 0x5c) = param_1;
  *(undefined4 *)(param_3 + 0x60) = param_2;
  if (param_5 != 0) {
    fVar2 = *(float *)(param_5 + 0x40);
  }
  if (param_4 != 0) {
    fVar1 = *(float *)(param_4 + 0x40);
  }
  *(float *)(param_3 + 0x58) = fVar2 - fVar1;
  return param_3;
}

