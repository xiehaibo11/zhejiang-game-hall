
/* void std::__ndk1::__sort<std::__ndk1::__less<dragonBones::ActionFrame,
   dragonBones::ActionFrame>&, dragonBones::ActionFrame*>(dragonBones::ActionFrame*,
   dragonBones::ActionFrame*, std::__ndk1::__less<dragonBones::ActionFrame,
   dragonBones::ActionFrame>&) */

void std::__ndk1::
     __sort<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
               (ActionFrame *param_1,ActionFrame *param_2,__less *param_3)

{
  ulong uVar1;
  ActionFrame *pAVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  ActionFrame *pAVar8;
  ActionFrame *pAVar10;
  long lVar11;
  ActionFrame *pAVar12;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  uint uVar17;
  ActionFrame *pAVar18;
  ActionFrame *pAVar19;
  ActionFrame *pAVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ActionFrame *pAVar9;
  ActionFrame *pAVar13;
  
LAB_00d4ec48:
  pAVar18 = param_2 + -0x20;
LAB_00d4ec6c:
  pAVar19 = param_1;
  lVar11 = (long)param_2 - (long)pAVar19;
  uVar7 = lVar11 >> 5;
  switch(uVar7) {
  case 0:
  case 1:
    return;
  case 2:
    uVar6 = *(uint *)pAVar19;
    if (uVar6 <= *(uint *)(param_2 + -0x20)) {
      return;
    }
    uVar15 = *(undefined8 *)(pAVar19 + 0x10);
    uVar21 = *(undefined8 *)(pAVar19 + 8);
    uVar14 = *(undefined8 *)(pAVar19 + 0x18);
    *(undefined8 *)(pAVar19 + 8) = 0;
    *(undefined8 *)(pAVar19 + 0x10) = 0;
    *(undefined8 *)(pAVar19 + 0x18) = 0;
    *(undefined4 *)pAVar19 = *(undefined4 *)(param_2 + -0x20);
    uVar22 = *(undefined8 *)(param_2 + -0x18);
    *(undefined8 *)(pAVar19 + 0x10) = *(undefined8 *)(param_2 + -0x10);
    *(undefined8 *)(pAVar19 + 8) = uVar22;
    *(undefined8 *)(pAVar19 + 0x18) = *(undefined8 *)(param_2 + -8);
    *(uint *)(param_2 + -0x20) = uVar6;
    *(undefined8 *)(param_2 + -0x10) = uVar15;
    *(undefined8 *)(param_2 + -0x18) = uVar21;
    *(undefined8 *)(param_2 + -8) = uVar14;
    return;
  case 3:
    __sort3<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
              (pAVar19,pAVar19 + 0x20,pAVar18,param_3);
    return;
  case 4:
    __sort4<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
              (pAVar19,pAVar19 + 0x20,pAVar19 + 0x40,pAVar18,param_3);
    return;
  case 5:
    FUN_00d4f3c4(pAVar19,pAVar19 + 0x20,pAVar19 + 0x40,pAVar19 + 0x60,pAVar18,param_3);
    return;
  }
  if (0xdf < lVar11) {
    uVar1 = uVar7;
    if ((long)uVar7 < 0) {
      uVar1 = uVar7 + 1;
    }
    pAVar10 = pAVar19 + (uVar1 & 0xffffffffffffffe) * 0x10;
    if (lVar11 < 0x7ce1) {
      uVar6 = __sort3<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
                        (pAVar19,pAVar10,pAVar18,param_3);
    }
    else {
      uVar1 = uVar7 + 3;
      if (-1 < (long)uVar7) {
        uVar1 = uVar7;
      }
      lVar11 = (uVar1 & 0x1ffffffffffffffc) * 8;
      uVar6 = FUN_00d4f3c4(pAVar19,pAVar19 + lVar11,pAVar10,pAVar10 + lVar11,pAVar18,param_3);
    }
    uVar17 = *(uint *)pAVar19;
    pAVar8 = pAVar18;
    pAVar12 = param_2 + -0x40;
    if (*(uint *)pAVar10 <= uVar17) {
LAB_00d4ed08:
      pAVar8 = pAVar12;
      if (pAVar19 != pAVar8) goto code_r0x00d4ed10;
      pAVar10 = pAVar19 + 0x20;
      if (*(uint *)pAVar18 <= uVar17) {
        if (pAVar10 == pAVar18) {
          return;
        }
        pAVar10 = pAVar19 + 0x40;
        while (uVar6 = *(uint *)(pAVar10 + -0x20), uVar6 <= uVar17) {
          pAVar10 = pAVar10 + 0x20;
          if (param_2 == pAVar10) {
            return;
          }
        }
        uVar15 = *(undefined8 *)(pAVar10 + -0x10);
        uVar21 = *(undefined8 *)(pAVar10 + -0x18);
        uVar14 = *(undefined8 *)(pAVar10 + -8);
        *(undefined8 *)(pAVar10 + -0x18) = 0;
        *(undefined8 *)(pAVar10 + -0x10) = 0;
        *(undefined8 *)(pAVar10 + -8) = 0;
        *(uint *)(pAVar10 + -0x20) = *(uint *)(param_2 + -0x20);
        uVar22 = *(undefined8 *)(param_2 + -0x18);
        *(undefined8 *)(pAVar10 + -0x10) = *(undefined8 *)(param_2 + -0x10);
        *(undefined8 *)(pAVar10 + -0x18) = uVar22;
        *(undefined8 *)(pAVar10 + -8) = *(undefined8 *)(param_2 + -8);
        *(uint *)(param_2 + -0x20) = uVar6;
        *(undefined8 *)(param_2 + -0x10) = uVar15;
        *(undefined8 *)(param_2 + -0x18) = uVar21;
        *(undefined8 *)(param_2 + -8) = uVar14;
      }
      if (pAVar10 == pAVar18) {
        return;
      }
      while( true ) {
        do {
          param_1 = pAVar10;
          pAVar10 = param_1 + 0x20;
          uVar6 = *(uint *)param_1;
        } while (uVar6 <= *(uint *)pAVar19);
        do {
          pAVar8 = pAVar18;
          pAVar18 = pAVar8 + -0x20;
        } while (*(uint *)pAVar19 < *(uint *)pAVar18);
        if (pAVar18 <= param_1) break;
        uVar15 = *(undefined8 *)(param_1 + 0x10);
        uVar21 = *(undefined8 *)(param_1 + 8);
        uVar14 = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(uint *)param_1 = *(uint *)pAVar18;
        uVar22 = *(undefined8 *)(pAVar8 + -0x18);
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(pAVar8 + -0x10);
        *(undefined8 *)(param_1 + 8) = uVar22;
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(pAVar8 + -8);
        *(uint *)pAVar18 = uVar6;
        *(undefined8 *)(pAVar8 + -0x10) = uVar15;
        *(undefined8 *)(pAVar8 + -0x18) = uVar21;
        *(undefined8 *)(pAVar8 + -8) = uVar14;
      }
      uVar6 = 4;
      goto LAB_00d4ef58;
    }
    goto LAB_00d4ed54;
  }
  __sort3<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
            (pAVar19,pAVar19 + 0x20,pAVar19 + 0x40,param_3);
  if (pAVar19 + 0x60 == param_2) {
    return;
  }
  lVar11 = 0;
  pAVar18 = pAVar19 + 0x60;
  pAVar10 = pAVar19 + 0x40;
LAB_00d4f00c:
  pAVar8 = pAVar18;
  uVar6 = *(uint *)pAVar8;
  if (uVar6 < *(uint *)pAVar10) {
    uVar14 = *(undefined8 *)(pAVar8 + 8);
    uVar21 = *(undefined8 *)(pAVar8 + 0x10);
    uVar15 = *(undefined8 *)(pAVar8 + 0x18);
    *(undefined8 *)(pAVar8 + 8) = 0;
    *(undefined8 *)(pAVar8 + 0x10) = 0;
    *(undefined8 *)(pAVar8 + 0x18) = 0;
    uVar17 = *(uint *)pAVar10;
    lVar3 = lVar11;
    do {
      lVar16 = lVar3;
      *(uint *)(pAVar19 + lVar16 + 0x60) = uVar17;
      uVar23 = *(undefined8 *)(pAVar19 + lVar16 + 0x50);
      uVar22 = *(undefined8 *)(pAVar19 + lVar16 + 0x48);
      *(undefined8 *)(pAVar19 + lVar16 + 0x48) = 0;
      *(undefined8 *)(pAVar19 + lVar16 + 0x50) = 0;
      *(undefined8 *)(pAVar19 + lVar16 + 0x70) = uVar23;
      *(undefined8 *)(pAVar19 + lVar16 + 0x68) = uVar22;
      *(undefined8 *)(pAVar19 + lVar16 + 0x78) = *(undefined8 *)(pAVar19 + lVar16 + 0x58);
      *(undefined8 *)(pAVar19 + lVar16 + 0x58) = 0;
      pAVar18 = pAVar19;
      if (lVar16 == -0x40) goto LAB_00d4f080;
      uVar17 = *(uint *)(pAVar19 + lVar16 + 0x20);
      lVar3 = lVar16 + -0x20;
    } while (uVar6 < uVar17);
    pAVar18 = pAVar19 + lVar16 + 0x40;
LAB_00d4f080:
    *(uint *)pAVar18 = uVar6;
    *(undefined8 *)(pAVar19 + lVar16 + 0x48) = uVar14;
    *(undefined8 *)(pAVar19 + lVar16 + 0x50) = uVar21;
    *(undefined8 *)(pAVar19 + lVar16 + 0x58) = uVar15;
  }
  lVar11 = lVar11 + 0x20;
  pAVar18 = pAVar8 + 0x20;
  pAVar10 = pAVar8;
  if (pAVar8 + 0x20 == param_2) {
    return;
  }
  goto LAB_00d4f00c;
code_r0x00d4ed10:
  pAVar12 = pAVar8 + -0x20;
  if (*(uint *)pAVar8 < *(uint *)pAVar10) goto code_r0x00d4ed1c;
  goto LAB_00d4ed08;
code_r0x00d4ed1c:
  uVar15 = *(undefined8 *)(pAVar19 + 0x10);
  uVar21 = *(undefined8 *)(pAVar19 + 8);
  uVar14 = *(undefined8 *)(pAVar19 + 0x18);
  *(undefined8 *)(pAVar19 + 8) = 0;
  *(undefined8 *)(pAVar19 + 0x10) = 0;
  *(undefined8 *)(pAVar19 + 0x18) = 0;
  uVar6 = uVar6 + 1;
  *(undefined4 *)pAVar19 = *(undefined4 *)pAVar8;
  uVar22 = *(undefined8 *)(pAVar8 + 8);
  *(undefined8 *)(pAVar19 + 0x10) = *(undefined8 *)(pAVar8 + 0x10);
  *(undefined8 *)(pAVar19 + 8) = uVar22;
  *(undefined8 *)(pAVar19 + 0x18) = *(undefined8 *)(pAVar8 + 0x18);
  *(uint *)pAVar8 = uVar17;
  *(undefined8 *)(pAVar8 + 0x10) = uVar15;
  *(undefined8 *)(pAVar8 + 8) = uVar21;
  *(undefined8 *)(pAVar8 + 0x18) = uVar14;
LAB_00d4ed54:
  pAVar12 = pAVar19 + 0x20;
  pAVar20 = pAVar12;
  if (pAVar12 < pAVar8) {
    while( true ) {
      pAVar12 = pAVar20 + -0x20;
      do {
        pAVar13 = pAVar12;
        pAVar12 = pAVar13 + 0x20;
        uVar17 = *(uint *)pAVar12;
      } while (uVar17 < *(uint *)pAVar10);
      pAVar20 = pAVar13 + 0x40;
      do {
        pAVar9 = pAVar8;
        pAVar8 = pAVar9 + -0x20;
      } while (*(uint *)pAVar10 <= *(uint *)pAVar8);
      if (pAVar8 < pAVar12) break;
      uVar15 = *(undefined8 *)(pAVar13 + 0x30);
      uVar21 = *(undefined8 *)(pAVar13 + 0x28);
      uVar14 = *(undefined8 *)(pAVar13 + 0x38);
      *(undefined8 *)(pAVar13 + 0x28) = 0;
      *(undefined8 *)(pAVar13 + 0x30) = 0;
      *(undefined8 *)(pAVar13 + 0x38) = 0;
      uVar6 = uVar6 + 1;
      pAVar2 = pAVar8;
      if (pAVar10 != pAVar12) {
        pAVar2 = pAVar10;
      }
      *(undefined4 *)pAVar12 = *(undefined4 *)pAVar8;
      uVar22 = *(undefined8 *)(pAVar9 + -0x18);
      *(undefined8 *)(pAVar13 + 0x30) = *(undefined8 *)(pAVar9 + -0x10);
      *(undefined8 *)(pAVar13 + 0x28) = uVar22;
      *(undefined8 *)(pAVar13 + 0x38) = *(undefined8 *)(pAVar9 + -8);
      *(uint *)pAVar8 = uVar17;
      *(undefined8 *)(pAVar9 + -0x10) = uVar15;
      *(undefined8 *)(pAVar9 + -0x18) = uVar21;
      *(undefined8 *)(pAVar9 + -8) = uVar14;
      pAVar10 = pAVar2;
    }
    if (pAVar12 == pAVar10) goto LAB_00d4ee2c;
  }
  else if (pAVar12 == pAVar10) goto LAB_00d4ee2c;
  uVar17 = *(uint *)pAVar12;
  if (*(uint *)pAVar10 < uVar17) {
    uVar15 = *(undefined8 *)(pAVar12 + 0x10);
    uVar21 = *(undefined8 *)(pAVar12 + 8);
    uVar14 = *(undefined8 *)(pAVar12 + 0x18);
    *(undefined8 *)(pAVar12 + 8) = 0;
    *(undefined8 *)(pAVar12 + 0x10) = 0;
    *(undefined8 *)(pAVar12 + 0x18) = 0;
    uVar6 = uVar6 + 1;
    *(undefined4 *)pAVar12 = *(undefined4 *)pAVar10;
    uVar22 = *(undefined8 *)(pAVar10 + 8);
    *(undefined8 *)(pAVar12 + 0x10) = *(undefined8 *)(pAVar10 + 0x10);
    *(undefined8 *)(pAVar12 + 8) = uVar22;
    *(undefined8 *)(pAVar12 + 0x18) = *(undefined8 *)(pAVar10 + 0x18);
    *(uint *)pAVar10 = uVar17;
    *(undefined8 *)(pAVar10 + 0x10) = uVar15;
    *(undefined8 *)(pAVar10 + 8) = uVar21;
    *(undefined8 *)(pAVar10 + 0x18) = uVar14;
  }
LAB_00d4ee2c:
  if (uVar6 == 0) {
    bVar4 = __insertion_sort_incomplete<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
                      (pAVar19,pAVar12,param_3);
    bVar5 = __insertion_sort_incomplete<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
                      (pAVar12 + 0x20,param_2,param_3);
    if (bVar5) goto LAB_00d4ef6c;
    param_1 = pAVar12 + 0x20;
    if (bVar4) goto LAB_00d4ec6c;
  }
  if ((long)param_2 - (long)pAVar12 <= (long)pAVar12 - (long)pAVar19) {
    __sort<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
              (pAVar12 + 0x20,param_2,param_3);
    param_2 = pAVar12;
    param_1 = pAVar19;
    goto LAB_00d4ec48;
  }
  __sort<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
            (pAVar19,pAVar12,param_3);
  param_1 = pAVar12 + 0x20;
  goto LAB_00d4ec6c;
LAB_00d4ef6c:
  if (!bVar4) {
    param_2 = pAVar12;
  }
  uVar6 = 1;
  if (!bVar4) {
    uVar6 = 2;
  }
  param_1 = pAVar19;
  if (4 < uVar6) {
    return;
  }
LAB_00d4ef58:
  if ((1 << uVar6 & 0x15U) == 0) {
    return;
  }
  goto LAB_00d4ec48;
}

