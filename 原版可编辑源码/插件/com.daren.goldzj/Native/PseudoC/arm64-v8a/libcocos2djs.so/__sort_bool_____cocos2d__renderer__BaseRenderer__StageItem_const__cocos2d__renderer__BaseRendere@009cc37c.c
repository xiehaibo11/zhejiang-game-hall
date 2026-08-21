
/* void std::__ndk1::__sort<bool (*&)(cocos2d::renderer::BaseRenderer::StageItem const&,
   cocos2d::renderer::BaseRenderer::StageItem const&),
   cocos2d::renderer::BaseRenderer::StageItem*>(cocos2d::renderer::BaseRenderer::StageItem*,
   cocos2d::renderer::BaseRenderer::StageItem*, bool (*&)(cocos2d::renderer::BaseRenderer::StageItem
   const&, cocos2d::renderer::BaseRenderer::StageItem const&)) */

void std::__ndk1::
     __sort<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
               (StageItem *param_1,StageItem *param_2,
               _func_bool_StageItem_ptr_StageItem_ptr *param_3)

{
  StageItem *pSVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  StageItem *pSVar15;
  StageItem *pSVar16;
  StageItem *pSVar17;
  StageItem *pSVar18;
  StageItem *pSVar19;
  StageItem *pSVar20;
  StageItem *pSVar21;
  StageItem *pSVar22;
  StageItem *pSVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
LAB_009cc3f8:
  pSVar23 = param_2 + -0x38;
LAB_009cc41c:
  pSVar17 = param_1;
  uVar9 = (long)param_2 - (long)pSVar17;
                    /* try { // try from 009cc8d4 to 00acc933 has its CatchHandler @ 009cca48 */
  switch(((long)uVar9 >> 3) * 0x6db6db6db6db6db7) {
  case 0:
  case 1:
    goto switchD_009cc8e4_caseD_0;
  case 2:
    uVar9 = (**(code **)param_3)(pSVar23,pSVar17);
    if ((uVar9 & 1) != 0) {
      uVar11 = *(undefined8 *)(pSVar17 + 0x10);
      uVar26 = *(undefined8 *)(pSVar17 + 8);
      uVar24 = *(undefined8 *)pSVar17;
      uVar13 = *(undefined8 *)(pSVar17 + 0x20);
      uVar25 = *(undefined8 *)(pSVar17 + 0x18);
      uVar12 = *(undefined8 *)(pSVar17 + 0x28);
      *(undefined8 *)(pSVar17 + 0x20) = 0;
      *(undefined8 *)(pSVar17 + 0x28) = 0;
      *(undefined8 *)(pSVar17 + 0x18) = 0;
      uVar27 = *(undefined8 *)(param_2 + -0x30);
      uVar14 = *(undefined8 *)pSVar23;
      uVar2 = *(undefined4 *)(pSVar17 + 0x30);
      *(undefined8 *)(pSVar17 + 0x10) = *(undefined8 *)(param_2 + -0x28);
      *(undefined8 *)(pSVar17 + 8) = uVar27;
      *(undefined8 *)pSVar17 = uVar14;
      uVar14 = *(undefined8 *)(param_2 + -0x20);
      uVar3 = *(undefined4 *)(param_2 + -8);
      *(undefined8 *)(pSVar17 + 0x20) = *(undefined8 *)(param_2 + -0x18);
      *(undefined8 *)(pSVar17 + 0x18) = uVar14;
      uVar14 = *(undefined8 *)(param_2 + -0x10);
      *(undefined4 *)(pSVar17 + 0x30) = uVar3;
      *(undefined8 *)(pSVar17 + 0x28) = uVar14;
      *(undefined8 *)(param_2 + -0x28) = uVar11;
      *(undefined8 *)(param_2 + -0x30) = uVar26;
      *(undefined8 *)pSVar23 = uVar24;
      *(undefined8 *)(param_2 + -0x18) = uVar13;
      *(undefined8 *)(param_2 + -0x20) = uVar25;
      *(undefined8 *)(param_2 + -0x10) = uVar12;
      *(undefined4 *)(param_2 + -8) = uVar2;
                    /* try { // try from 009cc964 to 00acc973 has its CatchHandler @ 009cca3c */
    }
    goto switchD_009cc8e4_caseD_0;
  case 3:
    __sort3<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
              (pSVar17,pSVar17 + 0x38,pSVar23,param_3);
    goto switchD_009cc8e4_caseD_0;
  case 4:
    __sort4<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
              (pSVar17,pSVar17 + 0x38,pSVar17 + 0x70,pSVar23,param_3);
    goto switchD_009cc8e4_caseD_0;
  case 5:
                    /* try { // try from 009cc9c8 to 00accac7 has its CatchHandler @ 009cc79c */
    FUN_009ccec4(pSVar17,pSVar17 + 0x38,pSVar17 + 0x70,pSVar17 + 0xa8,pSVar23,param_3);
    goto switchD_009cc8e4_caseD_0;
  }
  if ((long)uVar9 < 0x188) {
    __insertion_sort_3<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
              (pSVar17,param_2,param_3);
    goto switchD_009cc8e4_caseD_0;
  }
  pSVar18 = pSVar17 + (uVar9 / 0x70) * 0x38;
  if ((long)uVar9 < 0xda89) {
    uVar7 = __sort3<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
                      (pSVar17,pSVar18,pSVar23,param_3);
  }
  else {
    lVar10 = (uVar9 / 0xe0) * 0x38;
                    /* catch() { ... } // from try @ 009cc28c with catch @ 009cc460 */
                    /* catch() { ... } // from try @ 009cc280 with catch @ 009cc464 */
                    /* catch() { ... } // from try @ 009cc260 with catch @ 009cc468 */
                    /* catch() { ... } // from try @ 009cc298 with catch @ 009cc478 */
    uVar7 = FUN_009ccec4(pSVar17,pSVar17 + lVar10,pSVar18,pSVar18 + lVar10,pSVar23,param_3);
  }
  uVar9 = (**(code **)param_3)(pSVar17,pSVar18);
  pSVar15 = pSVar23;
  pSVar16 = param_2 + -0x70;
  if ((uVar9 & 1) == 0) {
    do {
      pSVar15 = pSVar16;
      if (pSVar17 == pSVar15) {
        pSVar18 = pSVar17 + 0x38;
                    /* catch() { ... } // from try @ 009cc550 with catch @ 009cc72c */
        uVar9 = (**(code **)param_3)(pSVar17,pSVar23);
                    /* catch() { ... } // from try @ 009cc544 with catch @ 009cc730 */
        if ((uVar9 & 1) != 0) goto LAB_009cc7cc;
                    /* catch() { ... } // from try @ 009cc524 with catch @ 009cc734 */
        if (pSVar18 == pSVar23) goto switchD_009cc8e4_caseD_0;
        pSVar18 = pSVar17 + 0x70;
        goto LAB_009cc740;
      }
      uVar9 = (**(code **)param_3)(pSVar15,pSVar18);
                    /* try { // try from 009cc4d0 to 00acc523 has its CatchHandler @ 009cc4d0
                       catch() { ... } // from try @ 009cc4d0 with catch @ 009cc4d0
                       catch() { ... } // from try @ 009cc6b8 with catch @ 009cc4d0 */
      pSVar16 = pSVar15 + -0x38;
    } while ((uVar9 & 1) == 0);
    uVar11 = *(undefined8 *)(pSVar17 + 0x10);
    uVar26 = *(undefined8 *)(pSVar17 + 8);
    uVar24 = *(undefined8 *)pSVar17;
    uVar7 = uVar7 + 1;
    uVar13 = *(undefined8 *)(pSVar17 + 0x20);
    uVar25 = *(undefined8 *)(pSVar17 + 0x18);
    uVar12 = *(undefined8 *)(pSVar17 + 0x28);
    *(undefined8 *)(pSVar17 + 0x20) = 0;
    *(undefined8 *)(pSVar17 + 0x28) = 0;
    *(undefined8 *)(pSVar17 + 0x18) = 0;
    uVar27 = *(undefined8 *)(pSVar15 + 8);
    uVar14 = *(undefined8 *)pSVar15;
    uVar2 = *(undefined4 *)(pSVar17 + 0x30);
    *(undefined8 *)(pSVar17 + 0x10) = *(undefined8 *)(pSVar15 + 0x10);
    *(undefined8 *)(pSVar17 + 8) = uVar27;
    *(undefined8 *)pSVar17 = uVar14;
    uVar14 = *(undefined8 *)(pSVar15 + 0x18);
    uVar3 = *(undefined4 *)(pSVar15 + 0x30);
    *(undefined8 *)(pSVar17 + 0x20) = *(undefined8 *)(pSVar15 + 0x20);
    *(undefined8 *)(pSVar17 + 0x18) = uVar14;
    uVar14 = *(undefined8 *)(pSVar15 + 0x28);
                    /* try { // try from 009cc524 to 00acc53b has its CatchHandler @ 009cc734 */
    *(undefined4 *)(pSVar17 + 0x30) = uVar3;
    *(undefined8 *)(pSVar17 + 0x28) = uVar14;
    *(undefined8 *)(pSVar15 + 0x20) = uVar13;
    *(undefined8 *)(pSVar15 + 0x18) = uVar25;
    *(undefined8 *)(pSVar15 + 0x28) = uVar12;
    *(undefined4 *)(pSVar15 + 0x30) = uVar2;
    *(undefined8 *)(pSVar15 + 0x10) = uVar11;
                    /* try { // try from 009cc544 to 00acc54f has its CatchHandler @ 009cc730 */
    *(undefined8 *)(pSVar15 + 8) = uVar26;
    *(undefined8 *)pSVar15 = uVar24;
  }
  pSVar16 = pSVar17 + 0x38;
  pSVar19 = pSVar16;
                    /* try { // try from 009cc550 to 00acc55b has its CatchHandler @ 009cc72c */
  if (pSVar16 < pSVar15) {
    while( true ) {
      pSVar16 = pSVar19 + -0x38;
      do {
        pSVar20 = pSVar16;
        pSVar16 = pSVar20 + 0x38;
        uVar9 = (**(code **)param_3)(pSVar16,pSVar18);
      } while ((uVar9 & 1) != 0);
      pSVar19 = pSVar20 + 0x70;
      pSVar22 = pSVar15 + 0x30;
      do {
        pSVar21 = pSVar22;
        pSVar22 = pSVar21 + -0x38;
        uVar9 = (**(code **)param_3)(pSVar21 + -0x68,pSVar18);
      } while ((uVar9 & 1) == 0);
      pSVar15 = pSVar21 + -0x68;
      if (pSVar15 < pSVar16) break;
      uVar11 = *(undefined8 *)(pSVar20 + 0x48);
                    /* try { // try from 009cc55c to 00acc6b7 has its CatchHandler @ 009cc744 */
      uVar25 = *(undefined8 *)(pSVar20 + 0x40);
      uVar14 = *(undefined8 *)pSVar16;
      uVar7 = uVar7 + 1;
      uVar26 = *(undefined8 *)(pSVar20 + 0x58);
      uVar24 = *(undefined8 *)(pSVar20 + 0x50);
      uVar12 = *(undefined8 *)(pSVar20 + 0x60);
      *(undefined8 *)(pSVar20 + 0x58) = 0;
      *(undefined8 *)(pSVar20 + 0x60) = 0;
      *(undefined8 *)(pSVar20 + 0x50) = 0;
      uVar27 = *(undefined8 *)(pSVar21 + -0x60);
      uVar13 = *(undefined8 *)(pSVar21 + -0x68);
      uVar2 = *(undefined4 *)(pSVar20 + 0x68);
      pSVar1 = pSVar15;
      if (pSVar18 != pSVar16) {
        pSVar1 = pSVar18;
      }
      *(undefined8 *)(pSVar20 + 0x48) = *(undefined8 *)(pSVar21 + -0x58);
      *(undefined8 *)(pSVar20 + 0x40) = uVar27;
      *(undefined8 *)pSVar16 = uVar13;
      uVar13 = *(undefined8 *)(pSVar21 + -0x50);
      uVar3 = *(undefined4 *)pSVar22;
      *(undefined8 *)(pSVar20 + 0x58) = *(undefined8 *)(pSVar21 + -0x48);
      *(undefined8 *)(pSVar20 + 0x50) = uVar13;
      uVar13 = *(undefined8 *)(pSVar21 + -0x40);
      *(undefined4 *)(pSVar20 + 0x68) = uVar3;
      *(undefined8 *)(pSVar20 + 0x60) = uVar13;
      *(undefined8 *)(pSVar21 + -0x48) = uVar26;
      *(undefined8 *)(pSVar21 + -0x50) = uVar24;
      *(undefined8 *)(pSVar21 + -0x40) = uVar12;
      *(undefined4 *)pSVar22 = uVar2;
      *(undefined8 *)(pSVar21 + -0x58) = uVar11;
      *(undefined8 *)(pSVar21 + -0x60) = uVar25;
      *(undefined8 *)(pSVar21 + -0x68) = uVar14;
      pSVar18 = pSVar1;
    }
  }
  if ((pSVar16 != pSVar18) && (uVar9 = (**(code **)param_3)(pSVar18,pSVar16), (uVar9 & 1) != 0)) {
    uVar11 = *(undefined8 *)(pSVar16 + 0x10);
    uVar26 = *(undefined8 *)(pSVar16 + 8);
    uVar24 = *(undefined8 *)pSVar16;
    uVar7 = uVar7 + 1;
    uVar13 = *(undefined8 *)(pSVar16 + 0x20);
    uVar25 = *(undefined8 *)(pSVar16 + 0x18);
    uVar12 = *(undefined8 *)(pSVar16 + 0x28);
    *(undefined8 *)(pSVar16 + 0x20) = 0;
    *(undefined8 *)(pSVar16 + 0x28) = 0;
    *(undefined8 *)(pSVar16 + 0x18) = 0;
    uVar27 = *(undefined8 *)(pSVar18 + 8);
    uVar14 = *(undefined8 *)pSVar18;
    uVar2 = *(undefined4 *)(pSVar16 + 0x30);
    *(undefined8 *)(pSVar16 + 0x10) = *(undefined8 *)(pSVar18 + 0x10);
    *(undefined8 *)(pSVar16 + 8) = uVar27;
    *(undefined8 *)pSVar16 = uVar14;
    uVar14 = *(undefined8 *)(pSVar18 + 0x18);
    uVar3 = *(undefined4 *)(pSVar18 + 0x30);
    *(undefined8 *)(pSVar16 + 0x20) = *(undefined8 *)(pSVar18 + 0x20);
    *(undefined8 *)(pSVar16 + 0x18) = uVar14;
    uVar14 = *(undefined8 *)(pSVar18 + 0x28);
    *(undefined4 *)(pSVar16 + 0x30) = uVar3;
    *(undefined8 *)(pSVar16 + 0x28) = uVar14;
    *(undefined8 *)(pSVar18 + 0x20) = uVar13;
    *(undefined8 *)(pSVar18 + 0x18) = uVar25;
    *(undefined8 *)(pSVar18 + 0x28) = uVar12;
                    /* try { // try from 009cc6b8 to 00acc79b has its CatchHandler @ 009cc4d0 */
    *(undefined4 *)(pSVar18 + 0x30) = uVar2;
    *(undefined8 *)(pSVar18 + 0x10) = uVar11;
    *(undefined8 *)(pSVar18 + 8) = uVar26;
    *(undefined8 *)pSVar18 = uVar24;
  }
  if (uVar7 != 0) goto LAB_009cc6f8;
  bVar5 = __insertion_sort_incomplete<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
                    (pSVar17,pSVar16,param_3);
  bVar6 = __insertion_sort_incomplete<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
                    (pSVar16 + 0x38,param_2,param_3);
  if (!bVar6) goto code_r0x009cc6f4;
  if (!bVar5) {
    param_2 = pSVar16;
  }
  uVar7 = 1;
  if (!bVar5) {
    uVar7 = 2;
  }
  param_1 = pSVar17;
  if (uVar7 < 5) goto LAB_009cc898;
  goto switchD_009cc8e4_caseD_0;
LAB_009cc740:
                    /* catch() { ... } // from try @ 009cc55c with catch @ 009cc744 */
  uVar9 = (**(code **)param_3)(pSVar17,pSVar18 + -0x38);
  if ((uVar9 & 1) != 0) goto LAB_009cc764;
  pSVar18 = pSVar18 + 0x38;
  if (param_2 == pSVar18) goto switchD_009cc8e4_caseD_0;
  goto LAB_009cc740;
LAB_009cc764:
  uVar11 = *(undefined8 *)(pSVar18 + -0x28);
  uVar26 = *(undefined8 *)(pSVar18 + -0x30);
  uVar24 = *(undefined8 *)(pSVar18 + -0x38);
  uVar13 = *(undefined8 *)(pSVar18 + -0x18);
  uVar25 = *(undefined8 *)(pSVar18 + -0x20);
  uVar12 = *(undefined8 *)(pSVar18 + -0x10);
  *(undefined8 *)(pSVar18 + -0x18) = 0;
  *(undefined8 *)(pSVar18 + -0x10) = 0;
  *(undefined8 *)(pSVar18 + -0x20) = 0;
  uVar27 = *(undefined8 *)(param_2 + -0x30);
  uVar14 = *(undefined8 *)pSVar23;
  uVar2 = *(undefined4 *)(pSVar18 + -8);
  *(undefined8 *)(pSVar18 + -0x28) = *(undefined8 *)(param_2 + -0x28);
  *(undefined8 *)(pSVar18 + -0x30) = uVar27;
  *(undefined8 *)(pSVar18 + -0x38) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + -0x20);
                    /* try { // try from 009cc79c to 00acc7ef has its CatchHandler @ 009cc79c
                       catch() { ... } // from try @ 009cc79c with catch @ 009cc79c
                       catch() { ... } // from try @ 009cc9c8 with catch @ 009cc79c */
  uVar3 = *(undefined4 *)(param_2 + -8);
  *(undefined8 *)(pSVar18 + -0x18) = *(undefined8 *)(param_2 + -0x18);
  *(undefined8 *)(pSVar18 + -0x20) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + -0x10);
  *(undefined4 *)(pSVar18 + -8) = uVar3;
  *(undefined8 *)(pSVar18 + -0x10) = uVar14;
  *(undefined8 *)(param_2 + -0x28) = uVar11;
  *(undefined8 *)(param_2 + -0x30) = uVar26;
  *(undefined8 *)pSVar23 = uVar24;
  *(undefined8 *)(param_2 + -0x18) = uVar13;
  *(undefined8 *)(param_2 + -0x20) = uVar25;
  *(undefined8 *)(param_2 + -0x10) = uVar12;
  *(undefined4 *)(param_2 + -8) = uVar2;
LAB_009cc7cc:
  if (pSVar18 == pSVar23) goto switchD_009cc8e4_caseD_0;
  while( true ) {
    param_1 = pSVar18 + -0x38;
    do {
      pSVar15 = param_1;
      param_1 = pSVar15 + 0x38;
      uVar9 = (**(code **)param_3)(pSVar17,param_1);
    } while ((uVar9 & 1) == 0);
    pSVar18 = pSVar15 + 0x70;
                    /* try { // try from 009cc860 to 00acc867 has its CatchHandler @ 009cca48 */
    pSVar16 = pSVar23 + 0x30;
    do {
      pSVar19 = pSVar16;
      pSVar16 = pSVar19 + -0x38;
      uVar9 = (**(code **)param_3)(pSVar17,pSVar19 + -0x68);
    } while ((uVar9 & 1) != 0);
                    /* try { // try from 009cc87c to 00acc8bf has its CatchHandler @ 009cca70 */
    pSVar23 = pSVar19 + -0x68;
    if (pSVar23 <= param_1) break;
    uVar11 = *(undefined8 *)(pSVar15 + 0x48);
    uVar26 = *(undefined8 *)(pSVar15 + 0x40);
    uVar24 = *(undefined8 *)param_1;
    uVar13 = *(undefined8 *)(pSVar15 + 0x58);
    uVar25 = *(undefined8 *)(pSVar15 + 0x50);
    uVar12 = *(undefined8 *)(pSVar15 + 0x60);
                    /* try { // try from 009cc7f0 to 00acc807 has its CatchHandler @ 009cca60 */
    *(undefined8 *)(pSVar15 + 0x58) = 0;
    *(undefined8 *)(pSVar15 + 0x60) = 0;
    *(undefined8 *)(pSVar15 + 0x50) = 0;
    uVar27 = *(undefined8 *)(pSVar19 + -0x60);
    uVar14 = *(undefined8 *)(pSVar19 + -0x68);
    uVar2 = *(undefined4 *)(pSVar15 + 0x68);
    *(undefined8 *)(pSVar15 + 0x48) = *(undefined8 *)(pSVar19 + -0x58);
    *(undefined8 *)(pSVar15 + 0x40) = uVar27;
    *(undefined8 *)param_1 = uVar14;
    uVar14 = *(undefined8 *)(pSVar19 + -0x50);
                    /* try { // try from 009cc810 to 00acc81b has its CatchHandler @ 009cca44 */
    uVar3 = *(undefined4 *)pSVar16;
    *(undefined8 *)(pSVar15 + 0x58) = *(undefined8 *)(pSVar19 + -0x48);
    *(undefined8 *)(pSVar15 + 0x50) = uVar14;
    uVar14 = *(undefined8 *)(pSVar19 + -0x40);
                    /* try { // try from 009cc81c to 00acc827 has its CatchHandler @ 009cca40 */
    *(undefined4 *)(pSVar15 + 0x68) = uVar3;
    *(undefined8 *)(pSVar15 + 0x60) = uVar14;
                    /* try { // try from 009cc828 to 00acc82f has its CatchHandler @ 009cca70 */
    *(undefined8 *)(pSVar19 + -0x48) = uVar13;
    *(undefined8 *)(pSVar19 + -0x50) = uVar25;
    *(undefined8 *)(pSVar19 + -0x40) = uVar12;
    *(undefined8 *)(pSVar19 + -0x58) = uVar11;
    *(undefined8 *)(pSVar19 + -0x60) = uVar26;
    *(undefined8 *)(pSVar19 + -0x68) = uVar24;
    *(undefined4 *)pSVar16 = uVar2;
  }
  uVar7 = 4;
LAB_009cc898:
  if ((1 << uVar7 & 0x15U) == 0) {
switchD_009cc8e4_caseD_0:
    if (*(long *)(lVar4 + 0x28) == lVar8) {
                    /* try { // try from 009cc98c to 00acc9c7 has its CatchHandler @ 009cca70 */
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_009cc3f8;
code_r0x009cc6f4:
  param_1 = pSVar16 + 0x38;
  if (!bVar5) {
LAB_009cc6f8:
    if (((long)param_2 - (long)pSVar16 >> 3) * 0x6db6db6db6db6db7 <=
        ((long)pSVar16 - (long)pSVar17 >> 3) * 0x6db6db6db6db6db7) {
                    /* try { // try from 009cc3ec to 00acc4cf has its CatchHandler @ 009cc20c */
      __sort<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
                (pSVar16 + 0x38,param_2,param_3);
      param_2 = pSVar16;
      param_1 = pSVar17;
      goto LAB_009cc3f8;
    }
    __sort<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
              (pSVar17,pSVar16,param_3);
    param_1 = pSVar16 + 0x38;
  }
  goto LAB_009cc41c;
}

