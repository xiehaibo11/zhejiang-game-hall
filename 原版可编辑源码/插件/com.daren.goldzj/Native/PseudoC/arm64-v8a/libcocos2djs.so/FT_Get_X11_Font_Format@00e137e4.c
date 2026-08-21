
undefined8 FT_Get_X11_Font_Format(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0xb0) + 0x40);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e13800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(*(long **)(param_1 + 0xb0),"font-format");
      return uVar1;
    }
  }
  return 0;
}

