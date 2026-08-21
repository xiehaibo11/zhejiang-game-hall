
undefined8 uv_timer_stop(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  
  uVar13 = *(uint *)(param_1 + 0x58);
  if ((uVar13 >> 0xe & 1) == 0) {
    return 0;
  }
  lVar14 = *(long *)(param_1 + 8);
  puVar1 = (undefined8 *)(lVar14 + 0x208);
  uVar4 = *(uint *)(lVar14 + 0x210);
  if (uVar4 != 0) {
    puVar11 = puVar1;
    if (1 < uVar4) {
      iVar6 = 0;
      uVar8 = 0;
      uVar10 = uVar4;
      do {
        uVar3 = uVar10 & 1;
        uVar10 = uVar10 >> 1;
        uVar8 = uVar3 | uVar8 << 1;
        iVar6 = iVar6 + 1;
      } while (uVar10 != 1);
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar11 = (undefined8 *)*puVar11;
        if ((uVar8 & 1) != 0) {
          puVar11 = puVar11 + 1;
        }
        uVar8 = uVar8 >> 1;
      }
    }
    plVar15 = (long *)*puVar11;
    plVar2 = (long *)(param_1 + 0x68);
    *(uint *)(lVar14 + 0x210) = uVar4 - 1;
    *puVar11 = 0;
    if (plVar2 != plVar15) {
      plVar9 = *(long **)(param_1 + 0x68);
      plVar7 = *(long **)(param_1 + 0x70);
      plVar15[2] = *(long *)(param_1 + 0x78);
      *plVar15 = (long)plVar9;
      plVar15[1] = (long)plVar7;
      if (plVar9 != (long *)0x0) {
        plVar9[2] = (long)plVar15;
      }
      if (plVar7 != (long *)0x0) {
        plVar7[2] = (long)plVar15;
      }
      puVar11 = *(undefined8 **)(param_1 + 0x78);
      if (puVar11 == (undefined8 *)0x0) {
        *(long **)(lVar14 + 0x208) = plVar15;
      }
      else if (plVar2 == (long *)*puVar11) {
        *puVar11 = plVar15;
        plVar9 = (long *)*plVar15;
      }
      else {
        puVar11[1] = plVar15;
        plVar7 = (long *)plVar15[1];
      }
      do {
        if (plVar9 == (long *)0x0) {
LAB_00bf4710:
          if (plVar7 == (long *)0x0) goto LAB_00bf47bc;
          bVar5 = (ulong)plVar7[3] <= (ulong)plVar15[3];
          plVar9 = plVar15;
          plVar2 = plVar7;
          if ((ulong)plVar15[3] <= (ulong)plVar7[3]) {
LAB_00bf4728:
            plVar2 = plVar9;
            if ((bVar5) && ((ulong)plVar7[5] < (ulong)plVar9[5])) {
              plVar2 = plVar7;
            }
          }
        }
        else {
          uVar12 = plVar9[3];
          if (((ulong)plVar15[3] <= uVar12) &&
             (((ulong)plVar15[3] < uVar12 || ((ulong)plVar15[5] <= (ulong)plVar9[5]))))
          goto LAB_00bf4710;
          plVar2 = plVar9;
          if ((plVar7 != (long *)0x0) &&
             (bVar5 = (ulong)plVar7[3] <= uVar12, plVar2 = plVar7, uVar12 <= (ulong)plVar7[3]))
          goto LAB_00bf4728;
        }
        if (plVar15 == plVar2) goto LAB_00bf47bc;
        FUN_00bf4528(puVar1,plVar15);
        plVar9 = (long *)*plVar15;
        plVar7 = (long *)plVar15[1];
      } while( true );
    }
    if (plVar2 == *(long **)(lVar14 + 0x208)) {
      *(undefined8 *)(lVar14 + 0x208) = 0;
    }
  }
  goto LAB_00bf476c;
LAB_00bf47bc:
  lVar14 = plVar15[2];
  while (lVar14 != 0) {
    if ((*(ulong *)(lVar14 + 0x18) <= (ulong)plVar15[3]) &&
       ((*(ulong *)(lVar14 + 0x18) < (ulong)plVar15[3] ||
        (*(ulong *)(lVar14 + 0x28) <= (ulong)plVar15[5])))) break;
    FUN_00bf4528(puVar1,lVar14,plVar15);
    lVar14 = plVar15[2];
  }
  uVar13 = *(uint *)(param_1 + 0x58);
  if ((uVar13 & 0x4000) == 0) {
    return 0;
  }
LAB_00bf476c:
  *(uint *)(param_1 + 0x58) = uVar13 & 0xffffbfff;
  if ((uVar13 >> 0xd & 1) == 0) {
    return 0;
  }
  *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
  return 0;
}

