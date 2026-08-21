
void FUN_011a5d54(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_3 & 10) == 8) {
    FUN_011a37d8(param_1,param_2,0x2007);
    uVar1 = *(uint *)(param_2 + -0x10);
    if (((uVar1 >> 2 & 1) != 0) &&
       (*(uint *)(param_2 + -0x10) = uVar1 & 0xfffffffb, (uVar1 >> 3 & 1) != 0)) {
      *(int *)(*(long *)(param_2 + -0x60) + 8) = *(int *)(*(long *)(param_2 + -0x60) + 8) + -1;
    }
                    /* WARNING: Could not recover jumptable at 0x011a5dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + -8))(param_2 + -0x68,0xfffffff7,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011a5df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + -8))
            (param_2 + -0x68,0,
             param_3 & 1 | (param_3 >> 1 & 1) << 3 | param_3 >> 1 & 2 | param_3 >> 0xb & 4);
  return;
}

