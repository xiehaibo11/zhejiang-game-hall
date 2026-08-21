
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00a28410(long *param_1,long param_2,uint param_3,int param_4,int *param_5)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ushort *puVar11;
  ushort *puVar12;
  ulong uVar13;
  long *plVar14;
  int iVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  int local_74 [5];
  
                    /* catch() { ... } // from try @ 00a28394 with catch @ 00a2842c */
                    /* catch() { ... } // from try @ 00a283ac with catch @ 00a28430 */
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
                    /* catch() { ... } // from try @ 00a28360 with catch @ 00a28460 */
  if (param_1[0x10] == 0) {
    uVar10 = 0xffffffffffffffff;
  }
  else {
    auVar17 = FUN_00a2e828();
    lVar9 = auVar17._0_8_;
    lVar7 = FUN_00a2b908(0,0,param_1[0x10]);
    param_1[0x10] = lVar7;
    lVar8 = *(long *)(lVar7 + 0x18);
    uVar10 = 0;
    if (lVar9 <= lVar8) {
      if ((lVar9 < lVar8) || (auVar17._8_8_ < *(long *)(lVar7 + 0x20))) {
        uVar10 = FUN_00a2e888(lVar8,*(long *)(lVar7 + 0x20),lVar9,auVar17._8_8_);
        if (uVar10 == 0) {
          uVar10 = 1;
        }
      }
      else {
        uVar10 = 0;
      }
    }
  }
  plVar14 = (long *)param_1[1];
  iVar15 = (int)uVar10;
  if ((long)param_4 <= (long)uVar10 || 0x7fffffffffffffff < uVar10) {
    iVar15 = param_4;
  }
  uVar16 = 0;
  for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
    uVar4 = FUN_00a282e4(plVar14,local_74);
    uVar10 = 0;
    do {
      if ((1 << (ulong)((uint)uVar10 & 0x1f) & uVar4) == 0) {
        iVar6 = -1;
      }
      else {
        iVar6 = local_74[uVar10];
        uVar16 = uVar16 + 1;
      }
      if ((1 << (ulong)((uint)uVar10 + 0x10 & 0x1f) & uVar4) != 0) {
        iVar6 = local_74[uVar10];
        uVar16 = uVar16 + 1;
      }
    } while ((iVar6 != -1) && (uVar10 = uVar10 + 1, uVar10 < 5));
  }
  if (uVar16 + param_3 == 0 && param_3 == 0) {
    lVar9 = 0;
    if (uVar16 != 0) goto LAB_00a285b4;
LAB_00a286d8:
    uVar4 = 0;
  }
  else {
    lVar9 = (*(code *)PTR_malloc_017699f8)((ulong)(uVar16 + param_3) << 3);
    if (lVar9 == 0) {
      return 3;
    }
    if (uVar16 == 0) goto LAB_00a286d8;
LAB_00a285b4:
    plVar14 = (long *)param_1[1];
    if (plVar14 == (long *)0x0) goto LAB_00a286d8;
    uVar4 = 0;
    do {
      uVar5 = FUN_00a282e4(plVar14,local_74);
      uVar10 = 0;
      do {
        if ((1 << (ulong)((uint)uVar10 & 0x1f) & uVar5) == 0) {
          iVar6 = -1;
        }
        else {
          iVar6 = local_74[uVar10];
          piVar1 = (int *)(lVar9 + (ulong)uVar4 * 8);
          *(undefined2 *)(piVar1 + 1) = 1;
          uVar4 = uVar4 + 1;
          *piVar1 = iVar6;
          iVar6 = local_74[uVar10];
        }
        if ((1 << (ulong)((uint)uVar10 + 0x10 & 0x1f) & uVar5) != 0) {
          iVar6 = local_74[uVar10];
          piVar1 = (int *)(lVar9 + (ulong)uVar4 * 8);
          *(undefined2 *)(piVar1 + 1) = 4;
          uVar4 = uVar4 + 1;
          *piVar1 = iVar6;
          iVar6 = local_74[uVar10];
        }
      } while ((iVar6 != -1) && (uVar10 = uVar10 + 1, uVar10 < 5));
      plVar14 = (long *)*plVar14;
    } while (plVar14 != (long *)0x0);
  }
  if (param_3 != 0) {
    uVar10 = (ulong)param_3;
    puVar11 = (ushort *)(param_2 + 4);
    uVar5 = uVar4;
    do {
      *(undefined4 *)(lVar9 + (ulong)uVar5 * 8) = *(undefined4 *)(puVar11 + -2);
      puVar12 = (ushort *)(lVar9 + (ulong)uVar5 * 8 + 4);
      *puVar12 = 0;
      uVar2 = *puVar11;
      *puVar12 = uVar2 & 1;
      uVar3 = *puVar11;
      if ((uVar3 & 6) != 0) {
        *puVar12 = uVar3 & 4 | uVar3 & 2 | uVar2 & 1;
      }
      uVar5 = uVar5 + 1;
      uVar10 = uVar10 - 1;
      puVar11 = puVar11 + 4;
    } while (uVar10 != 0);
    uVar4 = uVar4 + param_3;
  }
  if (uVar4 == 0) {
    iVar15 = 0;
    goto LAB_00a287b8;
  }
  iVar6 = FUN_00a2b6e4(lVar9,uVar4,iVar15);
  iVar15 = 0;
  if ((iVar6 < 1) || (iVar15 = iVar6, param_3 == 0)) goto LAB_00a287b8;
  uVar10 = (ulong)param_3;
  if (param_3 < 2) {
LAB_00a28784:
    lVar8 = 0;
  }
  else {
    lVar7 = uVar10 - (param_3 & 1);
    if (lVar7 == 0) goto LAB_00a28784;
    lVar8 = 0;
                    /* try { // try from 00a28728 to 00b28773 has its CatchHandler @ 00a28728
                       catch() { ... } // from try @ 00a28728 with catch @ 00a28728
                       catch() { ... } // from try @ 00a28778 with catch @ 00a28728 */
    if ((!CARRY4(uVar16,(uint)(uVar10 - 1))) && (uVar10 - 1 >> 0x20 == 0)) {
      puVar11 = (ushort *)(param_2 + 0xe);
      lVar8 = lVar7;
      uVar4 = uVar16;
      do {
        uVar13 = (ulong)uVar4;
        uVar2 = *(ushort *)(lVar9 + (ulong)(uVar4 + 1) * 8 + 6);
        lVar8 = lVar8 + -2;
        uVar4 = uVar4 + 2;
        puVar11[-4] = *(ushort *)(lVar9 + uVar13 * 8 + 6) & 7;
        *puVar11 = uVar2 & 7;
        puVar11 = puVar11 + 8;
      } while (lVar8 != 0);
                    /* try { // try from 00a28774 to 00b28777 has its CatchHandler @ 00a287ac */
      lVar8 = lVar7;
      if ((param_3 & 1) == 0) goto LAB_00a287b8;
    }
  }
  uVar16 = uVar16 + (int)lVar8;
  lVar7 = uVar10 - lVar8;
  puVar11 = (ushort *)(param_2 + lVar8 * 8 + 6);
  do {
    uVar10 = (ulong)uVar16;
    lVar7 = lVar7 + -1;
    uVar16 = uVar16 + 1;
                    /* catch() { ... } // from try @ 00a28774 with catch @ 00a287ac */
    *puVar11 = *(ushort *)(lVar9 + uVar10 * 8 + 6) & 7;
    puVar11 = puVar11 + 4;
  } while (lVar7 != 0);
LAB_00a287b8:
                    /* try { // try from 00a287c0 to 00b288a7 has its CatchHandler @ 00a287c0
                       catch() { ... } // from try @ 00a287c0 with catch @ 00a287c0
                       catch() { ... } // from try @ 00a28928 with catch @ 00a287c0 */
  (*(code *)PTR_free_01769a00)(lVar9);
  if (param_5 != (int *)0x0) {
    *param_5 = iVar15;
  }
  return 0;
}

