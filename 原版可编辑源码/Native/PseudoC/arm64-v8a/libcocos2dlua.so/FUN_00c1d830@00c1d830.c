
undefined8 * FUN_00c1d830(long param_1,ulong param_2,ulong param_3,int param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  
  lVar2 = *(long *)(param_2 + 0x20);
  if ((((lVar2 != 0) && ((*(byte *)(lVar2 + 10) >> 4 & 1) == 0)) &&
      (puVar3 = (undefined8 *)FUN_00c1ccbc(lVar2,4,*(undefined8 *)(*(long *)(param_1 + 0x10) + 400))
      , puVar3 != (undefined8 *)0x0)) &&
     ((lVar2 = *(long *)(param_3 + 0x20), lVar2 == *(long *)(param_2 + 0x20) ||
      (((lVar2 != 0 && ((*(byte *)(lVar2 + 10) >> 4 & 1) == 0)) &&
       ((lVar2 = FUN_00c1ccbc(lVar2,4,*(undefined8 *)(*(long *)(param_1 + 0x10) + 400)), lVar2 != 0
        && (iVar1 = FUN_00bfb678(puVar3,lVar2), iVar1 != 0)))))))) {
    uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
    if (*(char *)(uVar4 + 10) == '\0') {
      puVar6 = (undefined8 *)
               (*(long *)(param_1 + 0x20) + (ulong)*(byte *)(*(long *)(uVar4 + 0x20) + -0x5d) * 8);
    }
    else {
      puVar6 = *(undefined8 **)(param_1 + 0x28);
    }
    if (param_4 == 0) {
      puVar5 = &DAT_00c1793c;
    }
    else {
      puVar5 = &DAT_00c1794c;
    }
    *puVar6 = puVar5;
    puVar6[1] = 0xffffffffffffffff;
    puVar6[2] = *puVar3;
    puVar6[3] = 0xffffffffffffffff;
    uVar4 = (ulong)~(uint)*(byte *)(param_2 + 9) << 0x2f;
    puVar6[4] = param_2 | uVar4;
    puVar6[5] = param_3 | uVar4;
    return puVar6 + 4;
  }
  return (undefined8 *)(long)param_4;
}

