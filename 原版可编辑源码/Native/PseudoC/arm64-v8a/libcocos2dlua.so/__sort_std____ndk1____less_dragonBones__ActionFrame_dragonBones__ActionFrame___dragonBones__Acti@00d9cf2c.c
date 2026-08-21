
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
  long lVar10;
  ActionFrame *pAVar11;
  undefined8 uVar13;
  undefined8 uVar14;
  ActionFrame *pAVar15;
  long lVar16;
  uint uVar17;
  ActionFrame *pAVar18;
  ActionFrame *pAVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ActionFrame *pAVar9;
  ActionFrame *pAVar12;
  
                    /* try { // try from 00d9cf48 to 00e9cf4f has its CatchHandler @ 00d9d5a8 */
LAB_00d9cf54:
  pAVar18 = param_2 + -0x20;
  pAVar15 = param_1;
LAB_00d9cf5c:
  param_1 = pAVar15;
  lVar10 = (long)param_2 - (long)param_1;
  uVar7 = lVar10 >> 5;
                    /* try { // try from 00d9d274 to 00e9d29f has its CatchHandler @ 00d9d5d0 */
  switch(uVar7) {
  case 0:
  case 1:
    goto switchD_00d9d288_caseD_0;
  case 2:
    uVar6 = *(uint *)param_1;
    if (uVar6 <= *(uint *)(param_2 + -0x20)) {
      return;
    }
    uVar14 = *(undefined8 *)(param_1 + 0x10);
    uVar20 = *(undefined8 *)(param_1 + 8);
    uVar13 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)param_1 = *(undefined4 *)(param_2 + -0x20);
    uVar21 = *(undefined8 *)(param_2 + -0x18);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + -0x10);
    *(undefined8 *)(param_1 + 8) = uVar21;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + -8);
    *(uint *)(param_2 + -0x20) = uVar6;
    *(undefined8 *)(param_2 + -0x10) = uVar14;
    *(undefined8 *)(param_2 + -0x18) = uVar20;
    *(undefined8 *)(param_2 + -8) = uVar13;
    return;
  case 3:
                    /* try { // try from 00d9d3b0 to 00e9d3bf has its CatchHandler @ 00d9d53c */
    __sort3<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
              (param_1,param_1 + 0x20,pAVar18,param_3);
    return;
  case 4:
    __sort4<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
              (param_1,param_1 + 0x20,param_1 + 0x40,pAVar18,param_3);
    return;
  case 5:
    FUN_00d9d694(param_1,param_1 + 0x20,param_1 + 0x40,param_1 + 0x60,pAVar18,param_3);
    return;
  default:
    if (0xdf < lVar10) {
      uVar1 = uVar7;
      if ((long)uVar7 < 0) {
        uVar1 = uVar7 + 1;
      }
                    /* try { // try from 00d9cf84 to 00e9cf8b has its CatchHandler @ 00d9d5a4 */
      pAVar15 = param_1 + (uVar1 & 0xffffffffffffffe) * 0x10;
      if (lVar10 < 0x7ce1) {
        uVar6 = __sort3<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
                          (param_1,pAVar15,pAVar18,param_3);
      }
      else {
        uVar1 = uVar7 + 3;
        if (-1 < (long)uVar7) {
          uVar1 = uVar7;
        }
        lVar10 = (uVar1 & 0x1ffffffffffffffc) * 8;
                    /* try { // try from 00d9cfb0 to 00e9cfb3 has its CatchHandler @ 00d9d554 */
        uVar6 = FUN_00d9d694(param_1,param_1 + lVar10,pAVar15,pAVar15 + lVar10,pAVar18,param_3);
      }
      uVar17 = *(uint *)param_1;
      pAVar8 = pAVar18;
      if (*(uint *)pAVar15 <= uVar17) goto LAB_00d9cff4;
      goto LAB_00d9d04c;
    }
    __sort3<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
              (param_1,param_1 + 0x20,param_1 + 0x40,param_3);
    if (param_1 + 0x60 == param_2) {
      return;
    }
    lVar10 = 0;
    pAVar15 = param_1 + 0x60;
    pAVar18 = param_1 + 0x40;
  }
LAB_00d9d324:
  pAVar8 = pAVar15;
  uVar6 = *(uint *)pAVar8;
  if (uVar6 < *(uint *)pAVar18) {
    uVar13 = *(undefined8 *)(pAVar8 + 8);
    uVar20 = *(undefined8 *)(pAVar8 + 0x10);
    uVar14 = *(undefined8 *)(pAVar8 + 0x18);
    *(undefined8 *)(pAVar8 + 0x10) = 0;
    *(undefined8 *)(pAVar8 + 0x18) = 0;
    *(undefined8 *)(pAVar8 + 8) = 0;
    uVar17 = *(uint *)pAVar18;
    lVar3 = lVar10;
    do {
      lVar16 = lVar3;
      *(uint *)(param_1 + lVar16 + 0x60) = uVar17;
      uVar22 = *(undefined8 *)(param_1 + lVar16 + 0x50);
      uVar21 = *(undefined8 *)(param_1 + lVar16 + 0x48);
      *(undefined8 *)(param_1 + lVar16 + 0x48) = 0;
      *(undefined8 *)(param_1 + lVar16 + 0x50) = 0;
      *(undefined8 *)(param_1 + lVar16 + 0x70) = uVar22;
      *(undefined8 *)(param_1 + lVar16 + 0x68) = uVar21;
      *(undefined8 *)(param_1 + lVar16 + 0x78) = *(undefined8 *)(param_1 + lVar16 + 0x58);
      *(undefined8 *)(param_1 + lVar16 + 0x58) = 0;
      pAVar15 = param_1;
      if (lVar16 == -0x40) goto LAB_00d9d304;
      uVar17 = *(uint *)(param_1 + lVar16 + 0x20);
                    /* try { // try from 00d9d37c to 00e9d383 has its CatchHandler @ 00d9d534 */
      lVar3 = lVar16 + -0x20;
                    /* try { // try from 00d9d384 to 00e9d3af has its CatchHandler @ 00d9cec0 */
    } while (uVar6 < uVar17);
    pAVar15 = param_1 + lVar16 + 0x40;
LAB_00d9d304:
    *(uint *)pAVar15 = uVar6;
    *(undefined8 *)(param_1 + lVar16 + 0x48) = uVar13;
    *(undefined8 *)(param_1 + lVar16 + 0x50) = uVar20;
    *(undefined8 *)(param_1 + lVar16 + 0x58) = uVar14;
  }
  lVar10 = lVar10 + 0x20;
  pAVar15 = pAVar8 + 0x20;
  pAVar18 = pAVar8;
  if (pAVar8 + 0x20 == param_2) {
switchD_00d9d288_caseD_0:
    return;
  }
  goto LAB_00d9d324;
LAB_00d9cff4:
                    /* try { // try from 00d9cff4 to 00e9cffb has its CatchHandler @ 00d9d558 */
  pAVar8 = param_2;
  while (pAVar11 = pAVar8, param_1 + 0x40 != pAVar11) {
    pAVar8 = pAVar11 + -0x20;
    if (*(uint *)(pAVar11 + -0x40) < *(uint *)pAVar15) goto code_r0x00d9d014;
  }
  pAVar8 = param_1 + 0x20;
  if (*(uint *)pAVar18 <= uVar17) {
    if (pAVar8 == pAVar18) {
      return;
    }
                    /* try { // try from 00d9d190 to 00e9d197 has its CatchHandler @ 00d9d55c */
    pAVar8 = param_1 + 0x40;
    while (uVar6 = *(uint *)(pAVar8 + -0x20), uVar6 <= uVar17) {
      pAVar8 = pAVar8 + 0x20;
      if (param_2 == pAVar8) {
        return;
      }
    }
                    /* try { // try from 00d9d1b0 to 00e9d20f has its CatchHandler @ 00d9d5c8 */
    uVar14 = *(undefined8 *)(pAVar8 + -0x10);
    uVar20 = *(undefined8 *)(pAVar8 + -0x18);
    uVar13 = *(undefined8 *)(pAVar8 + -8);
    *(undefined8 *)(pAVar8 + -0x10) = 0;
    *(undefined8 *)(pAVar8 + -8) = 0;
    *(undefined8 *)(pAVar8 + -0x18) = 0;
    *(uint *)(pAVar8 + -0x20) = *(uint *)(param_2 + -0x20);
    uVar21 = *(undefined8 *)(param_2 + -0x18);
    *(undefined8 *)(pAVar8 + -0x10) = *(undefined8 *)(param_2 + -0x10);
    *(undefined8 *)(pAVar8 + -0x18) = uVar21;
    *(undefined8 *)(pAVar8 + -8) = *(undefined8 *)(param_2 + -8);
    *(uint *)(param_2 + -0x20) = uVar6;
    *(undefined8 *)(param_2 + -0x10) = uVar14;
    *(undefined8 *)(param_2 + -0x18) = uVar20;
    *(undefined8 *)(param_2 + -8) = uVar13;
  }
  pAVar11 = pAVar18;
  if (pAVar8 == pAVar18) {
    return;
  }
  while( true ) {
    do {
      pAVar15 = pAVar8;
      pAVar8 = pAVar15 + 0x20;
      uVar6 = *(uint *)pAVar15;
    } while (uVar6 <= *(uint *)param_1);
    do {
      pAVar19 = pAVar11;
      pAVar11 = pAVar19 + -0x20;
    } while (*(uint *)param_1 < *(uint *)pAVar11);
                    /* try { // try from 00d9d210 to 00e9d253 has its CatchHandler @ 00d9d5d0 */
    if (pAVar11 <= pAVar15) break;
    uVar14 = *(undefined8 *)(pAVar15 + 0x10);
    uVar20 = *(undefined8 *)(pAVar15 + 8);
    uVar13 = *(undefined8 *)(pAVar15 + 0x18);
    *(undefined8 *)(pAVar15 + 0x10) = 0;
    *(undefined8 *)(pAVar15 + 0x18) = 0;
    *(undefined8 *)(pAVar15 + 8) = 0;
    *(uint *)pAVar15 = *(uint *)pAVar11;
    uVar21 = *(undefined8 *)(pAVar19 + -0x18);
    *(undefined8 *)(pAVar15 + 0x10) = *(undefined8 *)(pAVar19 + -0x10);
    *(undefined8 *)(pAVar15 + 8) = uVar21;
    *(undefined8 *)(pAVar15 + 0x18) = *(undefined8 *)(pAVar19 + -8);
    *(uint *)pAVar11 = uVar6;
    *(undefined8 *)(pAVar19 + -0x10) = uVar14;
    *(undefined8 *)(pAVar19 + -0x18) = uVar20;
    *(undefined8 *)(pAVar19 + -8) = uVar13;
  }
  goto LAB_00d9cf5c;
code_r0x00d9d014:
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  uVar20 = *(undefined8 *)(param_1 + 8);
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
                    /* try { // try from 00d9d024 to 00e9d02b has its CatchHandler @ 00d9d578 */
  pAVar8 = pAVar11 + -0x40;
  uVar6 = uVar6 + 1;
  *(undefined4 *)param_1 = *(undefined4 *)pAVar8;
  uVar21 = *(undefined8 *)(pAVar11 + -0x38);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(pAVar11 + -0x30);
  *(undefined8 *)(param_1 + 8) = uVar21;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(pAVar11 + -0x28);
  *(uint *)pAVar8 = uVar17;
  *(undefined8 *)(pAVar11 + -0x30) = uVar14;
  *(undefined8 *)(pAVar11 + -0x38) = uVar20;
  *(undefined8 *)(pAVar11 + -0x28) = uVar13;
LAB_00d9d04c:
  pAVar11 = param_1 + 0x20;
  pAVar19 = pAVar11;
  if (pAVar11 < pAVar8) {
    while( true ) {
      pAVar11 = pAVar19 + -0x20;
      do {
        pAVar12 = pAVar11;
                    /* try { // try from 00d9d060 to 00e9d06b has its CatchHandler @ 00d9d574 */
        pAVar11 = pAVar12 + 0x20;
        uVar17 = *(uint *)pAVar11;
      } while (uVar17 < *(uint *)pAVar15);
      pAVar19 = pAVar12 + 0x40;
      do {
        pAVar9 = pAVar8;
        pAVar8 = pAVar9 + -0x20;
      } while (*(uint *)pAVar15 <= *(uint *)pAVar8);
                    /* try { // try from 00d9d080 to 00e9d087 has its CatchHandler @ 00d9d570 */
      if (pAVar8 < pAVar11) break;
      uVar14 = *(undefined8 *)(pAVar12 + 0x30);
      uVar20 = *(undefined8 *)(pAVar12 + 0x28);
      uVar13 = *(undefined8 *)(pAVar12 + 0x38);
      *(undefined8 *)(pAVar12 + 0x30) = 0;
      *(undefined8 *)(pAVar12 + 0x38) = 0;
      *(undefined8 *)(pAVar12 + 0x28) = 0;
      uVar6 = uVar6 + 1;
      pAVar2 = pAVar8;
      if (pAVar15 != pAVar11) {
        pAVar2 = pAVar15;
      }
      *(undefined4 *)pAVar11 = *(undefined4 *)pAVar8;
      uVar21 = *(undefined8 *)(pAVar9 + -0x18);
      *(undefined8 *)(pAVar12 + 0x30) = *(undefined8 *)(pAVar9 + -0x10);
      *(undefined8 *)(pAVar12 + 0x28) = uVar21;
      *(undefined8 *)(pAVar12 + 0x38) = *(undefined8 *)(pAVar9 + -8);
      *(uint *)pAVar8 = uVar17;
      *(undefined8 *)(pAVar9 + -0x10) = uVar14;
      *(undefined8 *)(pAVar9 + -0x18) = uVar20;
      *(undefined8 *)(pAVar9 + -8) = uVar13;
      pAVar15 = pAVar2;
    }
  }
                    /* try { // try from 00d9d0cc to 00e9d0d3 has its CatchHandler @ 00d9d550 */
  if ((pAVar11 != pAVar15) && (uVar17 = *(uint *)pAVar11, *(uint *)pAVar15 < uVar17)) {
    uVar14 = *(undefined8 *)(pAVar11 + 0x10);
    uVar20 = *(undefined8 *)(pAVar11 + 8);
    uVar13 = *(undefined8 *)(pAVar11 + 0x18);
    *(undefined8 *)(pAVar11 + 0x10) = 0;
    *(undefined8 *)(pAVar11 + 0x18) = 0;
    *(undefined8 *)(pAVar11 + 8) = 0;
    uVar6 = uVar6 + 1;
    *(undefined4 *)pAVar11 = *(undefined4 *)pAVar15;
                    /* try { // try from 00d9d100 to 00e9d11b has its CatchHandler @ 00d9d5b8 */
    uVar21 = *(undefined8 *)(pAVar15 + 8);
    *(undefined8 *)(pAVar11 + 0x10) = *(undefined8 *)(pAVar15 + 0x10);
    *(undefined8 *)(pAVar11 + 8) = uVar21;
    *(undefined8 *)(pAVar11 + 0x18) = *(undefined8 *)(pAVar15 + 0x18);
    *(uint *)pAVar15 = uVar17;
    *(undefined8 *)(pAVar15 + 0x10) = uVar14;
    *(undefined8 *)(pAVar15 + 8) = uVar20;
    *(undefined8 *)(pAVar15 + 0x18) = uVar13;
  }
                    /* try { // try from 00d9d11c to 00e9d12b has its CatchHandler @ 00d9d56c */
  if (uVar6 == 0) {
    bVar4 = __insertion_sort_incomplete<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
                      (param_1,pAVar11,param_3);
    bVar5 = __insertion_sort_incomplete<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
                      (pAVar11 + 0x20,param_2,param_3);
    if (bVar5) goto LAB_00d9d268;
    pAVar15 = pAVar11 + 0x20;
    if (bVar4) goto LAB_00d9cf5c;
  }
  if ((long)param_2 - (long)pAVar11 <= (long)pAVar11 - (long)param_1) {
                    /* try { // try from 00d9d254 to 00e9d273 has its CatchHandler @ 00d9d5cc */
    __sort<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
              (pAVar11 + 0x20,param_2,param_3);
    param_2 = pAVar11;
    goto LAB_00d9cf54;
  }
  __sort<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
            (param_1,pAVar11,param_3);
  pAVar15 = pAVar11 + 0x20;
  goto LAB_00d9cf5c;
LAB_00d9d268:
  param_2 = pAVar11;
  if (bVar4) {
    return;
  }
  goto LAB_00d9cf54;
}

