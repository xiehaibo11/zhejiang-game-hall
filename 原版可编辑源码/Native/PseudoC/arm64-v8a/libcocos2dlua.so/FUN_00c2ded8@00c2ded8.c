
undefined8 FUN_00c2ded8(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar3 = FUN_00c29e20(param_1,1);
  iVar1 = FUN_00c1c99c();
  uVar9 = iVar1 + 1;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28) - (int)*(undefined8 *)(param_1 + 0x20);
  uVar2 = uVar9;
  if (iVar1 != 0x10) {
    if (iVar1 != 0x18) {
                    /* WARNING: Subroutine does not return */
      FUN_00bfb3a0(param_1,0x555);
    }
    uVar2 = FUN_00c29cf0(param_1,2);
    if ((int)uVar2 < (int)uVar9) {
      uVar11 = -(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar9 << 3;
      uVar7 = (ulong)uVar9;
      do {
        uVar9 = (uint)uVar7;
        if (uVar9 < *(uint *)(lVar3 + 0x30)) {
          uVar10 = (ulong)(uVar9 - 1);
          puVar4 = (undefined8 *)(uVar11 + *(long *)(lVar3 + 0x10));
          if (*(uint *)(lVar3 + 0x30) <= uVar9 - 1) goto LAB_00c2e024;
LAB_00c2df60:
          puVar5 = (undefined8 *)(*(long *)(lVar3 + 0x10) + -8 + uVar11);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00c2e034;
LAB_00c2df70:
          *puVar4 = *puVar5;
        }
        else {
          uVar10 = (ulong)(uVar9 - 1);
          puVar4 = (undefined8 *)FUN_00c1c648(param_1,lVar3,uVar7);
          if (uVar9 - 1 < *(uint *)(lVar3 + 0x30)) goto LAB_00c2df60;
LAB_00c2e024:
          puVar5 = (undefined8 *)FUN_00c1bbc0(lVar3,uVar10);
          if (puVar5 != (undefined8 *)0x0) goto LAB_00c2df70;
LAB_00c2e034:
          *puVar4 = 0xffffffffffffffff;
        }
        uVar11 = uVar11 - 8;
        uVar7 = uVar10;
      } while ((int)uVar2 < (int)uVar10);
    }
  }
  if (uVar2 < *(uint *)(lVar3 + 0x30)) {
    puVar6 = (ulong *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar2 * 8);
  }
  else {
    puVar6 = (ulong *)FUN_00c1c648(param_1,lVar3,uVar2);
  }
  uVar7 = *(ulong *)(*(long *)(param_1 + 0x28) + -8);
  *puVar6 = uVar7;
  if (((0xfffffff6 < (int)((long)uVar7 >> 0x2f) + 4U) &&
      ((*(byte *)((uVar7 & 0x7fffffffffff) + 8) & 3) != 0)) &&
     ((*(byte *)(lVar3 + 8) >> 2 & 1) != 0)) {
    lVar8 = *(long *)(param_1 + 0x10);
    *(byte *)(lVar3 + 8) = *(byte *)(lVar3 + 8) & 0xfb;
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar8 + 0x50);
    *(long *)(lVar8 + 0x50) = lVar3;
  }
  return 0;
}

