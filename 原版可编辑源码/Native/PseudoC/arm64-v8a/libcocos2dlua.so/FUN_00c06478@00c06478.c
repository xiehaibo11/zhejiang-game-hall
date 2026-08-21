
undefined * FUN_00c06478(long param_1,int param_2)

{
  undefined *puVar1;
  
  if (0x100 < param_2) {
    return (&PTR_DAT_016971e0)[param_2 + -0x101];
  }
  if (((&DAT_01410f61)[param_2] & 1) != 0) {
    puVar1 = (undefined *)FUN_00c00c18(*(undefined8 *)(param_1 + 8),"char(%d)");
    return puVar1;
  }
  puVar1 = (undefined *)FUN_00c00c18(*(undefined8 *)(param_1 + 8),&DAT_01410560);
  return puVar1;
}

