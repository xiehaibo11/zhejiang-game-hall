
undefined8 FUN_00a49ecc(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *param_2 = 0;
  if ((((*(char *)(lVar3 + 0x621) == '\0') || ((*(uint *)(param_1[0x80] + 0x78) & 0x40003) != 0)) &&
      (*(long *)(lVar3 + 0x98) + *(long *)(lVar3 + 0xa8) == 0)) &&
     ((*(char *)((long)param_1 + 0x3ba) != '\0' && (*(int *)(lVar3 + 0x87c) != 0xb)))) {
    FUN_00a38740(*param_1,"Connection died, retrying a fresh connect\n");
    lVar1 = (*(code *)PTR_strdup_01769a10)(*(undefined8 *)(*param_1 + 0x908));
    *param_2 = lVar1;
    if (lVar1 == 0) {
      return 0x1b;
    }
    FUN_00a26ce8(param_1,1);
    *(undefined1 *)(param_1 + 0x79) = 1;
    if (((*(byte *)(param_1[0x80] + 0x78) & 3) != 0) &&
       (*(long *)(*(long *)(lVar3 + 0x218) + 0x30) != 0)) {
      uVar2 = FUN_00a48534(param_1);
      return uVar2;
    }
  }
  return 0;
}

