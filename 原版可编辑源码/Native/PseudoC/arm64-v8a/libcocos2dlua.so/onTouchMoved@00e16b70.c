
/* cocos2d::extension::ScrollView::onTouchMoved(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::extension::ScrollView::onTouchMoved(Touch *param_1,Event *param_2)

{
  undefined8 *puVar1;
  Touch TVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  GLView *this;
  float fVar11;
  float fVar12;
  float fVar13;
  float in_s1;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  Rect aRStack_a8 [16];
  Rect aRStack_98 [16];
  long local_88;
  
                    /* try { // try from 00e16b78 to 00f16b8f has its CatchHandler @ 00e16e44 */
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  uVar5 = (**(code **)(*(long *)param_1 + 0x178))();
  if ((uVar5 & 1) == 0) goto LAB_00e17394;
  puVar8 = *(undefined8 **)(param_1 + 0x378);
  puVar9 = *(undefined8 **)(param_1 + 0x380);
  puVar6 = puVar8;
  if ((puVar8 != puVar9) && ((Event *)*puVar8 != param_2)) {
    do {
      if (puVar9 + -1 == puVar6) goto LAB_00e17394;
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 1;
    } while ((Event *)*puVar1 != param_2);
  }
  if (puVar6 == puVar9) goto LAB_00e17394;
  lVar10 = (long)puVar9 - (long)puVar8 >> 3;
                    /* try { // try from 00e16c20 to 00f16c5f has its CatchHandler @ 00e16e08 */
  if (lVar10 == 2) {
    if (param_1[0x334] == (Touch)0x0) {
      fVar13 = (float)Node::convertTouchToNodeSpace(*(Touch **)(param_1 + 0x340));
      fVar16 = in_s1;
      fVar14 = (float)Node::convertTouchToNodeSpace(*(Touch **)(param_1 + 0x340));
      fVar11 = (float)(**(code **)(**(long **)(param_1 + 0x340) + 0x88))();
                    /* try { // try from 00e16d28 to 00f16d2f has its CatchHandler @ 00e16e14 */
      setZoomScale((ScrollView *)param_1,
                   (fVar11 * SQRT((fVar13 - fVar14) * (fVar13 - fVar14) +
                                  (in_s1 - fVar16) * (in_s1 - fVar16))) /
                   *(float *)(param_1 + 0x370));
    }
    goto LAB_00e17394;
  }
  if ((lVar10 != 1) || (param_1[0x334] == (Touch)0x0)) goto LAB_00e17394;
  Rect::Rect(aRStack_98);
  getViewRect();
  Rect::operator=(aRStack_98,aRStack_a8);
  fVar11 = (float)Node::convertTouchToNodeSpace(param_1);
                    /* try { // try from 00e16c64 to 00f16c7b has its CatchHandler @ 00e16e0c */
  fVar14 = fVar11 - *(float *)(param_1 + 0x368);
  fVar16 = in_s1 - *(float *)(param_1 + 0x36c);
  fVar13 = fVar16;
  if (*(int *)(param_1 + 0x330) == 0) {
                    /* try { // try from 00e16d40 to 00f16d5b has its CatchHandler @ 00e16e10 */
    pfVar7 = (float *)(**(code **)(**(long **)(param_1 + 0x340) + 0xb0))();
    fVar16 = *pfVar7;
                    /* try { // try from 00e16d5c to 00f16e63 has its CatchHandler @ 00e16a50 */
    uVar5 = (**(code **)(**(long **)(param_1 + 0x340) + 0x200))(*(long **)(param_1 + 0x340));
    if ((uVar5 & 1) == 0) {
      pfVar7 = (float *)(**(code **)(**(long **)(param_1 + 0x340) + 0x150))();
    }
    else {
      pfVar7 = (float *)&Vec2::ZERO;
    }
    fVar12 = *pfVar7;
                    /* catch() { ... } // from try @ 00e16f04 with catch @ 00e16e64
                       catch() { ... } // from try @ 00e17488 with catch @ 00e16e64 */
    pfVar7 = (float *)(**(code **)(**(long **)(param_1 + 0x340) + 0x168))
                                (*(long **)(param_1 + 0x340));
    fVar17 = *pfVar7;
    fVar15 = (float)(**(code **)(**(long **)(param_1 + 0x340) + 0x58))(*(long **)(param_1 + 0x340));
    (**(code **)(**(long **)(param_1 + 0x340) + 0x168))();
    (**(code **)(**(long **)(param_1 + 0x340) + 0x68))();
                    /* try { // try from 00e16ec8 to 00f16ecf has its CatchHandler @ 00e174d8 */
    if (fVar16 < *(float *)(param_1 + 0x390) - (1.0 - fVar12) * fVar17 * fVar15) {
LAB_00e17094:
      fVar15 = fVar14 * 0.35;
    }
    else {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x340) + 0x200))();
      if ((uVar5 & 1) == 0) {
        pfVar7 = (float *)(**(code **)(**(long **)(param_1 + 0x340) + 0x150))();
      }
      else {
        pfVar7 = (float *)&Vec2::ZERO;
      }
      fVar17 = *pfVar7;
      pfVar7 = (float *)(**(code **)(**(long **)(param_1 + 0x340) + 0x168))
                                  (*(long **)(param_1 + 0x340));
      fVar18 = *pfVar7;
      fVar12 = (float)(**(code **)(**(long **)(param_1 + 0x340) + 0x58))
                                (*(long **)(param_1 + 0x340));
      (**(code **)(**(long **)(param_1 + 0x340) + 0x168))();
      (**(code **)(**(long **)(param_1 + 0x340) + 0x68))();
      fVar15 = fVar14;
      if (fVar17 * fVar18 * fVar12 < fVar16) goto LAB_00e17094;
    }
    TVar2 = param_1[0x348];
    fVar16 = fVar14;
    fVar14 = fVar15;
  }
  else if (*(int *)(param_1 + 0x330) == 1) {
    lVar10 = (**(code **)(**(long **)(param_1 + 0x340) + 0xb0))();
    fVar15 = *(float *)(lVar10 + 4);
    uVar5 = (**(code **)(**(long **)(param_1 + 0x340) + 0x200))(*(long **)(param_1 + 0x340));
    if ((uVar5 & 1) == 0) {
      puVar6 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x340) + 0x150))();
    }
    else {
      puVar6 = &Vec2::ZERO;
    }
    fVar17 = *(float *)((long)puVar6 + 4);
    (**(code **)(**(long **)(param_1 + 0x340) + 0x168))(*(long **)(param_1 + 0x340));
    (**(code **)(**(long **)(param_1 + 0x340) + 0x58))();
    lVar10 = (**(code **)(**(long **)(param_1 + 0x340) + 0x168))();
    fVar18 = *(float *)(lVar10 + 4);
                    /* catch() { ... } // from try @ 00e16c20 with catch @ 00e16e08 */
    fVar12 = (float)(**(code **)(**(long **)(param_1 + 0x340) + 0x68))(*(long **)(param_1 + 0x340));
                    /* catch() { ... } // from try @ 00e16c64 with catch @ 00e16e0c */
                    /* catch() { ... } // from try @ 00e16d40 with catch @ 00e16e10 */
                    /* catch() { ... } // from try @ 00e16bfc with catch @ 00e16e14
                       catch() { ... } // from try @ 00e16d28 with catch @ 00e16e14 */
    if (*(float *)(param_1 + 0x394) - (1.0 - fVar17) * fVar18 * fVar12 <= fVar15) {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x340) + 0x200))();
      if ((uVar5 & 1) == 0) {
        puVar6 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x340) + 0x150))();
      }
      else {
                    /* catch() { ... } // from try @ 00e16b78 with catch @ 00e16e44 */
        puVar6 = &Vec2::ZERO;
                    /* catch() { ... } // from try @ 00e16aa8 with catch @ 00e16e48 */
      }
      fVar17 = *(float *)((long)puVar6 + 4);
      (**(code **)(**(long **)(param_1 + 0x340) + 0x168))(*(long **)(param_1 + 0x340));
      (**(code **)(**(long **)(param_1 + 0x340) + 0x58))();
      lVar10 = (**(code **)(**(long **)(param_1 + 0x340) + 0x168))();
      fVar18 = *(float *)(lVar10 + 4);
      fVar12 = (float)(**(code **)(**(long **)(param_1 + 0x340) + 0x68))
                                (*(long **)(param_1 + 0x340));
      if (fVar15 <= fVar17 * fVar18 * fVar12) goto LAB_00e172a4;
    }
    TVar2 = param_1[0x348];
    fVar13 = fVar16 * 0.35;
  }
  else {
    lVar10 = (**(code **)(**(long **)(param_1 + 0x340) + 0xb0))();
    fVar15 = *(float *)(lVar10 + 4);
    uVar5 = (**(code **)(**(long **)(param_1 + 0x340) + 0x200))(*(long **)(param_1 + 0x340));
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 00e16ef8 to 00f16f03 has its CatchHandler @ 00e174e4 */
      puVar6 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x340) + 0x150))();
    }
    else {
      puVar6 = &Vec2::ZERO;
    }
    fVar18 = *(float *)((long)puVar6 + 4);
                    /* try { // try from 00e16f04 to 00f173c7 has its CatchHandler @ 00e16e64 */
    (**(code **)(**(long **)(param_1 + 0x340) + 0x168))(*(long **)(param_1 + 0x340));
    (**(code **)(**(long **)(param_1 + 0x340) + 0x58))();
    lVar10 = (**(code **)(**(long **)(param_1 + 0x340) + 0x168))();
    fVar17 = *(float *)(lVar10 + 4);
    fVar12 = (float)(**(code **)(**(long **)(param_1 + 0x340) + 0x68))(*(long **)(param_1 + 0x340));
    if (fVar15 < *(float *)(param_1 + 0x394) - (1.0 - fVar18) * fVar17 * fVar12) {
LAB_00e17128:
      fVar13 = fVar16 * 0.35;
    }
    else {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x340) + 0x200))();
      if ((uVar5 & 1) == 0) {
        puVar6 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x340) + 0x150))();
      }
      else {
        puVar6 = &Vec2::ZERO;
      }
      fVar17 = *(float *)((long)puVar6 + 4);
      (**(code **)(**(long **)(param_1 + 0x340) + 0x168))(*(long **)(param_1 + 0x340));
      (**(code **)(**(long **)(param_1 + 0x340) + 0x58))();
      lVar10 = (**(code **)(**(long **)(param_1 + 0x340) + 0x168))();
      fVar18 = *(float *)(lVar10 + 4);
      fVar12 = (float)(**(code **)(**(long **)(param_1 + 0x340) + 0x68))
                                (*(long **)(param_1 + 0x340));
      if (fVar17 * fVar18 * fVar12 < fVar15) goto LAB_00e17128;
    }
    pfVar7 = (float *)(**(code **)(**(long **)(param_1 + 0x340) + 0xb0))();
    fVar15 = *pfVar7;
    uVar5 = (**(code **)(**(long **)(param_1 + 0x340) + 0x200))(*(long **)(param_1 + 0x340));
    if ((uVar5 & 1) == 0) {
      pfVar7 = (float *)(**(code **)(**(long **)(param_1 + 0x340) + 0x150))();
    }
    else {
      pfVar7 = (float *)&Vec2::ZERO;
    }
    fVar17 = *pfVar7;
    fVar16 = SQRT(fVar14 * fVar14 + fVar16 * fVar16);
    pfVar7 = (float *)(**(code **)(**(long **)(param_1 + 0x340) + 0x168))
                                (*(long **)(param_1 + 0x340));
    fVar18 = *pfVar7;
    fVar12 = (float)(**(code **)(**(long **)(param_1 + 0x340) + 0x58))(*(long **)(param_1 + 0x340));
    (**(code **)(**(long **)(param_1 + 0x340) + 0x168))();
    (**(code **)(**(long **)(param_1 + 0x340) + 0x68))();
    if (*(float *)(param_1 + 0x390) - (1.0 - fVar17) * fVar18 * fVar12 <= fVar15) {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x340) + 0x200))();
      if ((uVar5 & 1) == 0) {
        pfVar7 = (float *)(**(code **)(**(long **)(param_1 + 0x340) + 0x150))();
      }
      else {
        pfVar7 = (float *)&Vec2::ZERO;
      }
      fVar17 = *pfVar7;
      pfVar7 = (float *)(**(code **)(**(long **)(param_1 + 0x340) + 0x168))
                                  (*(long **)(param_1 + 0x340));
      fVar18 = *pfVar7;
      fVar12 = (float)(**(code **)(**(long **)(param_1 + 0x340) + 0x58))
                                (*(long **)(param_1 + 0x340));
      (**(code **)(**(long **)(param_1 + 0x340) + 0x168))();
      (**(code **)(**(long **)(param_1 + 0x340) + 0x68))();
      if (fVar15 <= fVar17 * fVar18 * fVar12) goto LAB_00e172a4;
    }
    fVar14 = fVar14 * 0.35;
LAB_00e172a4:
    TVar2 = param_1[0x348];
  }
  fVar15 = fVar14;
  fVar12 = fVar13;
  if (TVar2 == (Touch)0x0) {
    lVar10 = Director::getInstance();
    this = *(GLView **)(lVar10 + 0x108);
    fVar15 = (float)GLView::getScaleX(this);
    fVar12 = (float)GLView::getScaleY(this);
    iVar4 = Device::getDPI();
    if (ABS((fVar16 * (fVar15 + fVar12) * 0.5) / (float)iVar4) < 0.04375) goto LAB_00e17394;
    fVar15 = 0.0;
    if (param_1[0x348] != (Touch)0x0) {
      fVar15 = fVar14;
    }
    fVar12 = 0.0;
    if (param_1[0x348] != (Touch)0x0) {
      fVar12 = fVar13;
    }
  }
  *(float *)(param_1 + 0x368) = fVar11;
  *(float *)(param_1 + 0x36c) = in_s1;
  param_1[0x348] = (Touch)0x1;
  if (param_1[0x334] != (Touch)0x0) {
    if (*(int *)(param_1 + 0x330) == 0) {
      fVar12 = 0.0;
    }
    else if (*(int *)(param_1 + 0x330) == 1) {
      fVar15 = 0.0;
    }
    pfVar7 = (float *)(**(code **)(**(long **)(param_1 + 0x340) + 0xb0))();
    fVar16 = *pfVar7;
    lVar10 = (**(code **)(**(long **)(param_1 + 0x340) + 0xb0))(*(long **)(param_1 + 0x340));
    fVar13 = *(float *)(lVar10 + 4);
    *(float *)(param_1 + 0x360) = fVar15;
    *(float *)(param_1 + 0x364) = fVar12;
    setContentOffset(fVar16 + fVar15,fVar13 + fVar12,param_1,0);
  }
LAB_00e17394:
  if (*(long *)(lVar3 + 0x28) == local_88) {
                    /* try { // try from 00e173c8 to 00f17463 has its CatchHandler @ 00e1750c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

