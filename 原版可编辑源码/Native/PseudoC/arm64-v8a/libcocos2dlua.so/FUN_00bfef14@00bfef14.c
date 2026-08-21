
code * FUN_00bfef14(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  long *plVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  
  puVar6 = (undefined4 *)__errno();
  uVar2 = *puVar6;
  lVar13 = *(long *)(param_1 + 0x10);
  uVar7 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
  if (*(char *)(uVar7 + 10) == '\0') {
    lVar8 = *(long *)(uVar7 + 0x20);
    bVar3 = *(byte *)(lVar8 + -0x5e);
    uVar7 = (ulong)*(byte *)(lVar8 + -0x5d);
    iVar12 = (int)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3);
    if ((*(byte *)(lVar8 + -0x2b) >> 1 & 1) != 0) {
      uVar7 = (ulong)((uint)*(byte *)(lVar8 + -0x5d) + iVar12 + 1);
    }
    if (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) <= (long)(uVar7 * 8)) {
      FUN_00bfe0e0(param_1);
    }
    uVar4 = (uint)bVar3 - iVar12;
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    if ((*(byte *)(lVar13 + 0xc1) & 1) == 0) goto LAB_00bff01c;
    if (uVar4 != 0) {
      uVar1 = 0;
      do {
        uVar11 = uVar1;
        puVar9 = *(undefined8 **)(param_1 + 0x28);
        uVar1 = uVar11 + 1;
        *(undefined8 **)(param_1 + 0x28) = puVar9 + 1;
        *puVar9 = 0xffffffffffffffff;
      } while (uVar1 != uVar4);
      FUN_00bfe5a0(param_1,0,0xffffffff);
      lVar13 = *(long *)(param_1 + 0x28);
      if (*(long *)(lVar13 + -8) == -1) {
        plVar5 = (long *)(lVar13 + -8);
        do {
          plVar10 = plVar5;
          if (plVar10 == (long *)(lVar13 + (ulong)uVar11 * -8 + -8)) {
            *(long **)(param_1 + 0x28) = plVar10;
            goto LAB_00bff01c;
          }
          plVar5 = plVar10 + -1;
        } while (plVar10[-1] == -1);
        *(long **)(param_1 + 0x28) = plVar10;
      }
      goto LAB_00bff01c;
    }
  }
  else {
    if (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) < 0xa1) {
      FUN_00bfe0e0(param_1,0x14);
      bVar3 = *(byte *)(lVar13 + 0xc1);
    }
    else {
      bVar3 = *(byte *)(lVar13 + 0xc1);
    }
    if ((bVar3 & 1) == 0) goto LAB_00bff01c;
  }
  FUN_00bfe5a0(param_1,0,0xffffffff);
LAB_00bff01c:
  bVar3 = *(byte *)(param_2 + -4);
  *puVar6 = uVar2;
  return FUN_00c154e0 + (ushort)(&DAT_014111b0)[bVar3];
}

