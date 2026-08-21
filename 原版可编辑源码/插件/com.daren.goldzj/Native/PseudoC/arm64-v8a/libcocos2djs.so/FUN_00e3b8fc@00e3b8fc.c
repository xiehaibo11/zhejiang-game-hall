
long FUN_00e3b8fc(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00e14aa4(&PTR_s_font_format_01c93710);
  if (lVar1 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    lVar1 = 0;
    if ((*(long *)(param_1 + 8) != 0) &&
       (plVar2 = (long *)FT_Get_Module(*(long *)(param_1 + 8),&DAT_01975980), lVar1 = 0,
       plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00e3b95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
      return lVar1;
    }
  }
  return lVar1;
}

