
undefined8 FUN_00a12004(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  ulong uVar2;
  undefined *puVar3;
  
  if (param_3 < 0xa0) {
    *param_2 = (char)param_3;
    return 1;
  }
  if (param_3 < 0x180) {
    uVar2 = (ulong)(param_3 - 0xa0);
    puVar3 = &DAT_012fde6c;
  }
  else if ((param_3 & 0xfffffff8) == 0x2018) {
    uVar2 = (ulong)(param_3 - 0x2018);
    puVar3 = &DAT_012fd12c;
  }
  else {
    if ((param_3 & 0xfffffff8) != 0x218) {
      if (param_3 != 0x20ac) {
        return 0xffffffff;
      }
      cVar1 = -0x5c;
      goto LAB_00a12074;
    }
    uVar2 = (ulong)(param_3 - 0x218);
    puVar3 = &DAT_012fd124;
  }
  cVar1 = puVar3[uVar2];
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
LAB_00a12074:
  *param_2 = cVar1;
  return 1;
}

