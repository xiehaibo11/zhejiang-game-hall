
undefined8
FT_Get_Color_Glyph_Layer(long param_1,uint param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 != 0) && (param_3 != 0)) && (param_4 != 0)) &&
     (((param_5 != 0 && (param_2 < *(uint *)(param_1 + 0x20))) &&
      ((*(byte *)(param_1 + 0x10) >> 3 & 1) != 0)))) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x370) + 0x108);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e18fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
  }
  return 0;
}

