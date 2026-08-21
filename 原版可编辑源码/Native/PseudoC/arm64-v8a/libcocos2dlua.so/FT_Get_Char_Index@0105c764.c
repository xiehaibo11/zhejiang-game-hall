
undefined8 FT_Get_Char_Index(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0xa8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0105c778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x10) + 0x18))();
    return uVar1;
  }
  return 0;
}

