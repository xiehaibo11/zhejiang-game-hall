
undefined8 FUN_00e3eb8c(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x490);
  if ((*(long *)(param_1 + 0x370) != 0) && (((uint)*(undefined8 *)(param_1 + 0x10) >> 3 & 1) != 0))
  {
    uVar1 = FT_Get_Module(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 8),&DAT_01975980);
    puVar2 = (undefined8 *)FUN_00e19608(uVar1,"postscript-font-name",0);
    if ((puVar2 != (undefined8 *)0x0) && ((code *)*puVar2 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00e3ebec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)*puVar2)(param_1);
      return uVar1;
    }
  }
  return *(undefined8 *)(lVar3 + 0x638);
}

