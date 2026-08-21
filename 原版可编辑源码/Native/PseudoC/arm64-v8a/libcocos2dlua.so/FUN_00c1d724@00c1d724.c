
undefined8 * FUN_00c1d724(long param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  uVar1 = (uint)((long)*param_2 >> 0x2f);
  if ((uVar1 == 0xfffffff4) || (uVar1 == 0xfffffff3)) {
    lVar7 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)((*param_2 & 0x7fffffffffff) + 0x20);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
    uVar5 = 0x23;
    if (0xfffffff2 < uVar1) {
      uVar5 = 0x15 - uVar1;
    }
    lVar2 = *(long *)(lVar7 + (ulong)uVar5 * 8 + 0x170);
  }
  if (lVar2 == 0) {
    plVar3 = (long *)(lVar7 + 0xe8);
  }
  else {
    plVar3 = (long *)FUN_00c1bc28(lVar2,*(undefined8 *)(lVar7 + 0x198));
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)(*(long *)(param_1 + 0x10) + 0xe8);
    }
  }
  if (*plVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb020(param_1,param_2,0x1bb);
  }
  lVar7 = *(long *)(param_1 + 0x10);
  puVar6 = *(undefined8 **)(param_1 + 0x28);
  uVar4 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
  if (*(char *)(uVar4 + 10) == '\0') {
    puVar6 = (undefined8 *)
             (*(long *)(param_1 + 0x20) + (ulong)*(byte *)(*(long *)(uVar4 + 0x20) + -0x5d) * 8);
  }
  puVar6[1] = 0xffffffffffffffff;
  *puVar6 = &DAT_00c17928;
  puVar6[2] = *plVar3;
  puVar6[3] = 0xffffffffffffffff;
  puVar6[4] = *param_2;
  puVar6[5] = *(undefined8 *)(lVar7 + 0xe8);
  return puVar6 + 4;
}

