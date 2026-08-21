
void FUN_00bfdcd8(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  
  uVar1 = param_2 + 8;
  lVar12 = *(long *)(param_1 + 0x38);
  uVar3 = *(uint *)(param_1 + 0x58);
  uVar11 = (ulong)uVar3;
  lVar6 = FUN_00c1a2b4(param_1,lVar12,(uVar11 & 0x1fffffff) << 3,((ulong)uVar1 & 0x1fffffff) << 3);
  *(long *)(param_1 + 0x38) = lVar6;
  *(ulong *)(param_1 + 0x30) = lVar6 + (ulong)param_2 * 8;
  lVar8 = lVar6 - lVar12;
  if (uVar1 <= uVar3) goto LAB_00bfdd7c;
  iVar5 = param_2 - uVar3;
  uVar2 = (iVar5 + 6U >> 1) + 1;
  iVar4 = uVar2 * 2;
  if (iVar5 == -7) {
LAB_00bfdd70:
    *(undefined8 *)(lVar6 + uVar11 * 8) = 0xffffffffffffffff;
  }
  else {
    uVar9 = 0;
    puVar10 = (undefined8 *)(lVar6 + uVar11 * 8);
    do {
      puVar10[1] = 0xffffffffffffffff;
      *puVar10 = 0xffffffffffffffff;
      uVar9 = uVar9 + 1;
      puVar10 = puVar10 + 2;
    } while (uVar9 < uVar2);
    uVar11 = (ulong)(uVar3 + iVar4);
    if (iVar4 != iVar5 + 8) goto LAB_00bfdd70;
  }
  uVar11 = (ulong)uVar1;
LAB_00bfdd7c:
  *(uint *)(param_1 + 0x58) = uVar1;
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x160);
  if ((ulong)(lVar6 - lVar12) < uVar11) {
    *(long *)(*(long *)(param_1 + 0x10) + 0x160) = lVar8 + lVar6;
  }
  plVar7 = *(long **)(param_1 + 0x40);
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar8;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + lVar8;
  for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    plVar7[4] = plVar7[4] + lVar8;
  }
  return;
}

