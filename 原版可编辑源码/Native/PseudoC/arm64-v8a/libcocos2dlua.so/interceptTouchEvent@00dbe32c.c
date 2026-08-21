
/* cocos2d::ui::ScrollView::interceptTouchEvent(cocos2d::ui::Widget::TouchEventType,
   cocos2d::ui::Widget*, cocos2d::Touch*) */

void cocos2d::ui::ScrollView::interceptTouchEvent
               (undefined1 param_1 [16],float param_2,Widget *param_3,int param_4,Widget *param_5,
               Touch *param_6)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  GLView *pGVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
                    /* catch() { ... } // from try @ 00dbdf7c with catch @ 00dbe334 */
                    /* catch() { ... } // from try @ 00dbd9b8 with catch @ 00dbe338 */
                    /* catch() { ... } // from try @ 00dbe148 with catch @ 00dbe358 */
                    /* catch() { ... } // from try @ 00dbda04 with catch @ 00dbe35c */
  if (param_3[900] == (Widget)0x0) {
                    /* catch() { ... } // from try @ 00dbda98 with catch @ 00dbe3b8 */
                    /* catch() { ... } // from try @ 00dbdca8 with catch @ 00dbe3bc */
    Widget::interceptTouchEvent(param_3,param_4,param_5,param_6);
    return;
  }
                    /* catch() { ... } // from try @ 00dbd9f8 with catch @ 00dbe360 */
                    /* catch() { ... } // from try @ 00dbd9ec with catch @ 00dbe364 */
  if (*(int *)(param_3 + 0x7c0) == 0) {
    return;
  }
                    /* catch() { ... } // from try @ 00dbd9e0 with catch @ 00dbe368 */
  fVar6 = (float)Touch::getLocation(param_6);
                    /* catch() { ... } // from try @ 00dbde9c with catch @ 00dbe378 */
  if (param_4 - 2U < 2) {
    uVar7 = Touch::getLocation(param_6);
    *(undefined4 *)(param_3 + 0x3d8) = uVar7;
    *(float *)(param_3 + 0x3dc) = param_2;
                    /* catch() { ... } // from try @ 00dbdae4 with catch @ 00dbe3f8 */
    (**(code **)(*(long *)param_3 + 0x7e8))(param_3,param_6);
                    /* catch() { ... } // from try @ 00dbda50 with catch @ 00dbe3fc
                       catch() { ... } // from try @ 00dbdac4 with catch @ 00dbe3fc */
                    /* catch() { ... } // from try @ 00dbda74 with catch @ 00dbe400 */
    uVar2 = Widget::isSwallowTouches(param_5);
    if ((uVar2 & 1) == 0) {
      return;
    }
    param_3[0x7b1] = (Widget)0x0;
    return;
  }
                    /* catch() { ... } // from try @ 00dbd984 with catch @ 00dbe37c */
                    /* catch() { ... } // from try @ 00dbdc50 with catch @ 00dbe380 */
  if (param_4 != 1) {
                    /* catch() { ... } // from try @ 00dbde54 with catch @ 00dbe384 */
    if (param_4 != 0) {
      return;
    }
                    /* catch() { ... } // from try @ 00dbd96c with catch @ 00dbe388
                       catch() { ... } // from try @ 00dbdb04 with catch @ 00dbe388 */
    param_3[0x7b1] = (Widget)0x1;
    uVar7 = Touch::getLocation(param_6);
                    /* catch() { ... } // from try @ 00dbdbb8 with catch @ 00dbe398 */
    *(undefined4 *)(param_3 + 0x3c8) = uVar7;
    *(float *)(param_3 + 0x3cc) = param_2;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_3 + 0x7d8);
    goto LAB_00dbe55c;
  }
  fVar8 = param_2;
  uVar7 = Touch::getLocation(param_6);
  iVar1 = *(int *)(param_3 + 0x7c0);
  *(undefined4 *)(param_3 + 0x3d0) = uVar7;
  *(float *)(param_3 + 0x3d4) = fVar8;
  if (iVar1 == 1) {
    lVar4 = Widget::getTouchBeganPosition(param_5);
    fVar6 = *(float *)(lVar4 + 4);
    lVar4 = Director::getInstance();
                    /* try { // try from 00dbe4ac to 00ebe4b3 has its CatchHandler @ 00dbe510 */
    pGVar5 = *(GLView **)(lVar4 + 0x108);
    iVar1 = Device::getDPI();
    fVar8 = (float)GLView::getScaleX(pGVar5);
                    /* try { // try from 00dbe4c8 to 00ebe4cf has its CatchHandler @ 00dbe4f0 */
    fVar9 = (fVar8 * 0.0) / (float)iVar1;
    fVar8 = (float)GLView::getScaleY(pGVar5);
    fVar6 = (ABS(fVar6 - param_2) * fVar8) / (float)iVar1;
LAB_00dbe52c:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbe51c with catch @ 00dbe52c
                        */
    fVar9 = fVar9 * fVar9;
LAB_00dbe530:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbe474 with catch @ 00dbe530
                        */
    fVar8 = SQRT(fVar9 + fVar6 * fVar6);
  }
  else {
    if (iVar1 == 3) {
      pfVar3 = (float *)Widget::getTouchBeganPosition(param_5);
      fVar8 = *pfVar3;
      fVar10 = pfVar3[1];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbe4c8 with catch @ 00dbe4f0
                        */
      lVar4 = Director::getInstance();
      pGVar5 = *(GLView **)(lVar4 + 0x108);
      iVar1 = Device::getDPI();
      fVar9 = (float)GLView::getScaleX(pGVar5);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbe4ac with catch @ 00dbe510
                        */
                    /* try { // try from 00dbe51c to 00ebe527 has its CatchHandler @ 00dbe52c */
      fVar9 = ((fVar8 - fVar6) * fVar9) / (float)iVar1;
      fVar6 = (float)GLView::getScaleY(pGVar5);
                    /* try { // try from 00dbe528 to 00ebe53b has its CatchHandler @ 00dbe43c */
      fVar6 = ((fVar10 - param_2) * fVar6) / (float)iVar1;
      goto LAB_00dbe52c;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbe528 with catch @ 00dbe43c
                        */
    fVar8 = 0.0;
    if (iVar1 == 2) {
      pfVar3 = (float *)Widget::getTouchBeganPosition(param_5);
      fVar8 = *pfVar3;
      lVar4 = Director::getInstance();
      pGVar5 = *(GLView **)(lVar4 + 0x108);
      iVar1 = Device::getDPI();
      fVar9 = (float)GLView::getScaleX(pGVar5);
                    /* try { // try from 00dbe474 to 00ebe47b has its CatchHandler @ 00dbe530 */
      fVar9 = (ABS(fVar8 - fVar6) * fVar9) / (float)iVar1;
      fVar6 = (float)GLView::getScaleY(pGVar5);
      fVar6 = (fVar6 * 0.0) / (float)iVar1;
      fVar9 = fVar9 * fVar9;
      goto LAB_00dbe530;
    }
  }
                    /* try { // try from 00dbe53c to 00ebe5d3 has its CatchHandler @ 00dbe53c
                       catch() { ... } // from try @ 00dbe53c with catch @ 00dbe53c
                       catch() { ... } // from try @ 00dbe7dc with catch @ 00dbe53c */
  if (fVar8 <= *(float *)(param_3 + 0x7d8)) {
    return;
  }
  Widget::setHighlighted(param_5,false);
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_3 + 0x7e0);
LAB_00dbe55c:
                    /* WARNING: Could not recover jumptable at 0x00dbe57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3,param_6);
  return;
}

