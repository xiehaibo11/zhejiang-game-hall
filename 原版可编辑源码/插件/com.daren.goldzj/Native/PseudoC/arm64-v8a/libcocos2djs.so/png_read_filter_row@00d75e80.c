
void png_read_filter_row(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        int param_5)

{
  code *pcVar1;
  
  if (param_5 - 1U < 4) {
    if (*(long *)(param_1 + 0x4f0) == 0) {
      pcVar1 = FUN_00d76ccc;
      if (*(byte *)(param_1 + 0x2b2) + 7 >> 3 != 1) {
        pcVar1 = FUN_00d76d44;
      }
      *(code **)(param_1 + 0x500) = FUN_00d76b04;
      *(code **)(param_1 + 0x4f8) = FUN_00d76a64;
      *(code **)(param_1 + 0x4f0) = FUN_00d769bc;
      *(code **)(param_1 + 0x508) = pcVar1;
      png_init_filter_functions_neon(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00d75f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + (long)(int)(param_5 - 1U) * 8 + 0x4f0))(param_2,param_3,param_4);
    return;
  }
  return;
}

