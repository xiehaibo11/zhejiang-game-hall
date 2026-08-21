
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::ui::ScrollView::copySpecialProperties(cocos2d::ui::Widget*) */

void cocos2d::ui::ScrollView::copySpecialProperties(Widget *param_1)

{
  Widget WVar1;
  long lVar2;
  bool bVar3;
  Widget *pWVar4;
  Vec2 *pVVar5;
  Size *pSVar6;
  Widget *pWVar7;
  Widget *pWVar8;
  ScrollViewBar *pSVar9;
  long *plVar10;
  undefined2 *puVar11;
  Widget *in_x1;
  Widget *pWVar12;
  long lVar13;
  undefined8 uVar14;
  code *pcVar15;
  long lVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  long local_90 [4];
  long *local_70;
  long local_58;
  
                    /* try { // try from 00dbeb04 to 00ebeb1f has its CatchHandler @ 00dbeff8 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00dbeb24 to 00ebeb27 has its CatchHandler @ 00dbefec */
                    /* try { // try from 00dbeb34 to 00ebeb4f has its CatchHandler @ 00dbeff4 */
                    /* try { // try from 00dbeb50 to 00ebeb5b has its CatchHandler @ 00dbf020 */
  if ((in_x1 == (Widget *)0x0) || (pWVar4 = (Widget *)__dynamic_cast(), pWVar4 == (Widget *)0x0))
  goto LAB_00dbeff4;
  Layout::copySpecialProperties((Layout *)param_1,in_x1);
                    /* try { // try from 00dbeb70 to 00ebeb93 has its CatchHandler @ 00dbf05c */
  (**(code **)(*(long *)param_1 + 0x6d0))(param_1,*(undefined4 *)(pWVar4 + 0x7c0));
  pVVar5 = (Vec2 *)(**(code **)(**(long **)(pWVar4 + 0x7b8) + 0xb0))();
                    /* try { // try from 00dbeb98 to 00ebeba3 has its CatchHandler @ 00dbf020 */
  setInnerContainerPosition((ScrollView *)param_1,pVVar5);
  pSVar6 = (Size *)(**(code **)(**(long **)(pWVar4 + 0x7b8) + 0x168))();
  setInnerContainerSize((ScrollView *)param_1,pSVar6);
  uVar14 = *(undefined8 *)(pWVar4 + 0x7c4);
  *(undefined8 *)(param_1 + 0x7cc) = *(undefined8 *)(pWVar4 + 0x7cc);
  *(undefined8 *)(param_1 + 0x7c4) = uVar14;
                    /* try { // try from 00dbebc8 to 00ebebd7 has its CatchHandler @ 00dbf058 */
  param_1[0x7d4] = pWVar4[0x7d4];
  *(undefined4 *)(param_1 + 0x7d8) = *(undefined4 *)(pWVar4 + 0x7d8);
  if (param_1 != pWVar4) {
    pWVar12 = *(Widget **)(pWVar4 + 0x7e8);
    pWVar8 = param_1 + 0x7e0;
    for (pWVar7 = *(Widget **)(param_1 + 0x7e8); (pWVar4 + 0x7e0 != pWVar12 && (pWVar8 != pWVar7));
        pWVar7 = *(Widget **)(pWVar7 + 8)) {
                    /* try { // try from 00dbebf8 to 00ebec07 has its CatchHandler @ 00dbf0a4 */
      *(undefined8 *)(pWVar7 + 0x10) = *(undefined8 *)(pWVar12 + 0x10);
      pWVar12 = *(Widget **)(pWVar12 + 8);
                    /* try { // try from 00dbec0c to 00ebec1b has its CatchHandler @ 00dbf0e0 */
    }
    if (pWVar8 == pWVar7) {
                    /* try { // try from 00dbece0 to 00ebed03 has its CatchHandler @ 00dbe8b4 */
      std::__ndk1::list<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
      insert<std::__ndk1::__list_const_iterator<cocos2d::Vec2,void*>>
                (pWVar8,pWVar8,pWVar12,pWVar4 + 0x7e0,0);
    }
    else {
      lVar13 = *(long *)(param_1 + 0x7e0);
      lVar16 = *(long *)pWVar7;
      *(undefined8 *)(lVar16 + 8) = *(undefined8 *)(lVar13 + 8);
      **(long **)(lVar13 + 8) = lVar16;
      do {
        pWVar12 = *(Widget **)(pWVar7 + 8);
        *(long *)(param_1 + 0x7f0) = *(long *)(param_1 + 0x7f0) + -1;
        operator_delete(pWVar7);
        pWVar7 = pWVar12;
      } while (pWVar8 != pWVar12);
    }
  }
  if (param_1 != pWVar4) {
    pWVar12 = *(Widget **)(pWVar4 + 0x800);
    pWVar8 = param_1 + 0x7f8;
    for (pWVar7 = *(Widget **)(param_1 + 0x800); (pWVar4 + 0x7f8 != pWVar12 && (pWVar8 != pWVar7));
        pWVar7 = *(Widget **)(pWVar7 + 8)) {
      *(undefined4 *)(pWVar7 + 0x10) = *(undefined4 *)(pWVar12 + 0x10);
      pWVar12 = *(Widget **)(pWVar12 + 8);
    }
    if (pWVar8 == pWVar7) {
                    /* try { // try from 00dbed04 to 00ebed43 has its CatchHandler @ 00dbf074 */
      std::__ndk1::list<float,std::__ndk1::allocator<float>>::
      insert<std::__ndk1::__list_const_iterator<float,void*>>
                (pWVar8,pWVar8,pWVar12,pWVar4 + 0x7f8,0);
    }
    else {
      lVar13 = *(long *)(param_1 + 0x7f8);
      lVar16 = *(long *)pWVar7;
      *(undefined8 *)(lVar16 + 8) = *(undefined8 *)(lVar13 + 8);
      **(long **)(lVar13 + 8) = lVar16;
      do {
        pWVar12 = *(Widget **)(pWVar7 + 8);
        *(long *)(param_1 + 0x808) = *(long *)(param_1 + 0x808) + -1;
        operator_delete(pWVar7);
        pWVar7 = pWVar12;
      } while (pWVar8 != pWVar12);
    }
  }
  *(undefined8 *)(param_1 + 0x810) = *(undefined8 *)(pWVar4 + 0x810);
  param_1[0x81c] = pWVar4[0x81c];
  param_1[0x81d] = pWVar4[0x81d];
  param_1[0x81e] = pWVar4[0x81e];
  *(undefined8 *)(param_1 + 0x820) = *(undefined8 *)(pWVar4 + 0x820);
  *(undefined8 *)(param_1 + 0x828) = *(undefined8 *)(pWVar4 + 0x828);
  *(undefined8 *)(param_1 + 0x830) = *(undefined8 *)(pWVar4 + 0x830);
  param_1[0x838] = pWVar4[0x838];
  param_1[0x839] = pWVar4[0x839];
  *(undefined8 *)(param_1 + 0x83c) = *(undefined8 *)(pWVar4 + 0x83c);
  param_1[0x844] = pWVar4[0x844];
  param_1[0x845] = pWVar4[0x845];
  uVar19 = *(undefined8 *)(pWVar4 + 0x868);
                    /* try { // try from 00dbed6c to 00ebed7b has its CatchHandler @ 00dbf03c */
  uVar14 = *(undefined8 *)(pWVar4 + 0x878);
  *(undefined8 *)(param_1 + 0x870) = *(undefined8 *)(pWVar4 + 0x870);
  *(undefined8 *)(param_1 + 0x868) = uVar19;
  *(undefined8 *)(param_1 + 0x878) = uVar14;
  pWVar8 = *(Widget **)(pWVar4 + 0x8a0);
                    /* try { // try from 00dbed7c to 00ebedbb has its CatchHandler @ 00dbf044 */
  if (pWVar8 == (Widget *)0x0) {
    local_70 = (long *)0x0;
  }
  else if (pWVar4 + 0x880 == pWVar8) {
    local_70 = local_90;
    (**(code **)(*(long *)pWVar8 + 0x18))(pWVar8,local_90);
  }
  else {
    local_70 = (long *)(**(code **)(*(long *)pWVar8 + 0x10))();
  }
  FUN_00dbf1f8(local_90,param_1 + 0x880);
                    /* try { // try from 00dbedd0 to 00ebeddf has its CatchHandler @ 00dbf008 */
  if (local_90 == local_70) {
    pcVar15 = *(code **)(*local_70 + 0x20);
LAB_00dbedf4:
    (*pcVar15)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar15 = *(code **)(*local_70 + 0x28);
    goto LAB_00dbedf4;
  }
  pWVar8 = *(Widget **)(pWVar4 + 0x4b0);
  if (pWVar8 == (Widget *)0x0) {
    local_70 = (long *)0x0;
  }
  else if (pWVar4 + 0x490 == pWVar8) {
                    /* try { // try from 00dbee28 to 00ebee37 has its CatchHandler @ 00dbf064 */
    local_70 = local_90;
    (**(code **)(*(long *)pWVar8 + 0x18))(pWVar8,local_90);
  }
  else {
                    /* try { // try from 00dbee14 to 00ebee23 has its CatchHandler @ 00dbf060 */
    local_70 = (long *)(**(code **)(*(long *)pWVar8 + 0x10))();
  }
  FUN_00dad59c(local_90,param_1 + 0x490);
  if (local_90 == local_70) {
    pcVar15 = *(code **)(*local_70 + 0x20);
LAB_00dbee74:
    (*pcVar15)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar15 = *(code **)(*local_70 + 0x28);
    goto LAB_00dbee74;
  }
  WVar1 = pWVar4[0x851];
  if (param_1[0x851] != WVar1) {
    if (param_1[0x851] != (Widget)0x0) {
      (**(code **)(*(long *)param_1 + 0x7b0))(param_1);
    }
    param_1[0x851] = WVar1;
    if (WVar1 == (Widget)0x0) goto LAB_00dbeff4;
    (**(code **)(*(long *)param_1 + 0x7a8))(param_1);
                    /* try { // try from 00dbeeb4 to 00ebeebb has its CatchHandler @ 00dbf024 */
    WVar1 = param_1[0x851];
  }
  if (WVar1 == (Widget)0x0) goto LAB_00dbeff4;
  if (*(int *)(param_1 + 0x7c0) == 2) {
LAB_00dbeeec:
                    /* try { // try from 00dbeef0 to 00ebef57 has its CatchHandler @ 00dbf038 */
    local_90[0]._0_4_ = ScrollViewBar::getPositionFromCorner(*(ScrollViewBar **)(pWVar4 + 0x860));
    ScrollViewBar::setPositionFromCorner(*(ScrollViewBar **)(param_1 + 0x860),(Vec2 *)local_90);
  }
  else {
    local_90[0]._0_4_ = ScrollViewBar::getPositionFromCorner(*(ScrollViewBar **)(pWVar4 + 0x858));
    ScrollViewBar::setPositionFromCorner(*(ScrollViewBar **)(param_1 + 0x858),(Vec2 *)local_90);
    if (*(int *)(param_1 + 0x7c0) != 1) goto LAB_00dbeeec;
  }
  pSVar9 = *(ScrollViewBar **)(pWVar4 + 0x858);
  if ((pSVar9 == (ScrollViewBar *)0x0) &&
     (pSVar9 = *(ScrollViewBar **)(pWVar4 + 0x860), pSVar9 == (ScrollViewBar *)0x0)) {
                    /* catch() { ... } // from try @ 00dbeeb4 with catch @ 00dbf024 */
    fVar17 = 0.0;
    pSVar9 = *(ScrollViewBar **)(param_1 + 0x858);
  }
  else {
    fVar17 = (float)ScrollViewBar::getWidth(pSVar9);
    pSVar9 = *(ScrollViewBar **)(param_1 + 0x858);
  }
  if (pSVar9 != (ScrollViewBar *)0x0) {
    ScrollViewBar::setWidth(pSVar9,fVar17);
  }
  if (*(ScrollViewBar **)(param_1 + 0x860) != (ScrollViewBar *)0x0) {
    ScrollViewBar::setWidth(*(ScrollViewBar **)(param_1 + 0x860),fVar17);
  }
  plVar10 = *(long **)(pWVar4 + 0x858);
  if ((plVar10 == (long *)0x0) && (plVar10 = *(long **)(pWVar4 + 0x860), plVar10 == (long *)0x0)) {
                    /* catch() { ... } // from try @ 00dbeef0 with catch @ 00dbf038 */
    puVar11 = &Color3B::WHITE;
                    /* catch() { ... } // from try @ 00dbed6c with catch @ 00dbf03c */
    plVar10 = *(long **)(param_1 + 0x858);
                    /* catch() { ... } // from try @ 00dbecd8 with catch @ 00dbf040 */
  }
  else {
    puVar11 = (undefined2 *)(**(code **)(*plVar10 + 0x4b0))();
    plVar10 = *(long **)(param_1 + 0x858);
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x4c0))(plVar10,puVar11);
  }
  plVar10 = *(long **)(param_1 + 0x860);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x4c0))(plVar10,puVar11);
  }
  lVar13 = *(long *)(pWVar4 + 0x858);
  if ((lVar13 == 0) && (lVar13 = *(long *)(pWVar4 + 0x860), lVar13 == 0)) {
    bVar3 = false;
    pSVar9 = *(ScrollViewBar **)(param_1 + 0x858);
  }
  else {
    bVar3 = *(char *)(lVar13 + 0x34d) != '\0';
    pSVar9 = *(ScrollViewBar **)(param_1 + 0x858);
  }
  if (pSVar9 != (ScrollViewBar *)0x0) {
    ScrollViewBar::setAutoHideEnabled(pSVar9,bVar3);
  }
  if (*(ScrollViewBar **)(param_1 + 0x860) != (ScrollViewBar *)0x0) {
    ScrollViewBar::setAutoHideEnabled(*(ScrollViewBar **)(param_1 + 0x860),bVar3);
  }
  lVar13 = *(long *)(pWVar4 + 0x858);
                    /* try { // try from 00dbefd4 to 00ebefdb has its CatchHandler @ 00dbefe8 */
  if ((lVar13 == 0) && (lVar13 = *(long *)(pWVar4 + 0x860), lVar13 == 0)) {
                    /* catch() { ... } // from try @ 00dbebc8 with catch @ 00dbf058 */
    uVar18 = 0;
                    /* catch() { ... } // from try @ 00dbeb70 with catch @ 00dbf05c */
    lVar13 = *(long *)(param_1 + 0x858);
                    /* catch() { ... } // from try @ 00dbee14 with catch @ 00dbf060 */
  }
  else {
    uVar18 = *(undefined4 *)(lVar13 + 0x350);
                    /* try { // try from 00dbefdc to 00ebf113 has its CatchHandler @ 00dbe8b4 */
    lVar13 = *(long *)(param_1 + 0x858);
  }
  if (lVar13 != 0) {
    *(undefined4 *)(lVar13 + 0x350) = uVar18;
  }
                    /* catch() { ... } // from try @ 00dbefd4 with catch @ 00dbefe8 */
                    /* catch() { ... } // from try @ 00dbeb24 with catch @ 00dbefec */
  if (*(long *)(param_1 + 0x860) != 0) {
                    /* catch() { ... } // from try @ 00dbeaf4 with catch @ 00dbeff0 */
    *(undefined4 *)(*(long *)(param_1 + 0x860) + 0x350) = uVar18;
  }
LAB_00dbeff4:
                    /* catch() { ... } // from try @ 00dbeb34 with catch @ 00dbeff4 */
                    /* catch() { ... } // from try @ 00dbeb04 with catch @ 00dbeff8 */
                    /* catch() { ... } // from try @ 00dbeab4 with catch @ 00dbeffc */
                    /* catch() { ... } // from try @ 00dbea68 with catch @ 00dbf000 */
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 00dbea5c with catch @ 00dbf004 */
                    /* catch() { ... } // from try @ 00dbedd0 with catch @ 00dbf008 */
                    /* catch() { ... } // from try @ 00dbe9e4 with catch @ 00dbf00c */
                    /* catch() { ... } // from try @ 00dbea7c with catch @ 00dbf01c */
                    /* catch() { ... } // from try @ 00dbeb50 with catch @ 00dbf020
                       catch() { ... } // from try @ 00dbeb98 with catch @ 00dbf020 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

