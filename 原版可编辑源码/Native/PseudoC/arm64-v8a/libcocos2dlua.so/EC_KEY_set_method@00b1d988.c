
undefined8 EC_KEY_set_method(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(code **)(*param_1 + 0x18) != (code *)0x0) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  ENGINE_finish((ENGINE *)param_1[1]);
  *param_1 = param_2;
  param_1[1] = 0;
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b1d9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2 + 0x10))(param_1);
    return uVar1;
  }
  return 1;
}

