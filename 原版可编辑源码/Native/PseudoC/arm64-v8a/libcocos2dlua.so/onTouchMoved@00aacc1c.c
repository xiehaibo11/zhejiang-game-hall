
/* fairygui::InputProcessor::onTouchMoved(cocos2d::Touch*, cocos2d::Event*) */

void fairygui::InputProcessor::onTouchMoved(Touch *param_1,Event *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  GObject *pGVar6;
  TouchInfo *pTVar7;
  long lVar8;
  long *plVar9;
  InputProcessor *this;
  UIEventDispatcher *this_00;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  float in_s1;
  undefined4 local_78 [3];
  undefined4 local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar5 = cocos2d::Camera::getVisitingCamera();
  local_78[0] = cocos2d::Touch::getLocation((Touch *)param_2);
  pGVar6 = (GObject *)
           (**(code **)(**(long **)(param_1 + 0x30) + 0x48))
                     (*(long **)(param_1 + 0x30),local_78,uVar5);
  if (pGVar6 == (GObject *)0x0) {
    pGVar6 = *(GObject **)(param_1 + 0x30);
  }
  pTVar7 = (TouchInfo *)getTouch((InputProcessor *)param_1,*(int *)(param_2 + 0x24),true);
  fVar13 = (float)GRoot::worldToRoot(GRoot::_inst,(Vec2 *)local_78);
  *(float *)(pTVar7 + 8) = fVar13;
  *(float *)(pTVar7 + 0xc) = in_s1;
  *(undefined4 *)(pTVar7 + 0x1c) = 0;
  *(Event **)pTVar7 = param_2;
  *(GObject **)(param_1 + 0x70) = pGVar6;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(float *)(param_1 + 0x80) = (float)(int)fVar13;
  *(float *)(param_1 + 0x84) = (float)(int)in_s1;
  uVar5 = *(undefined8 *)(pTVar7 + 0x14);
  *(Event **)(param_1 + 0x78) = param_2;
  *(undefined8 *)(param_1 + 0x8c) = uVar5;
  if (param_2 == (Event *)0x0) {
    uVar10 = 0xffffffff;
  }
  else {
    uVar10 = *(undefined4 *)(pTVar7 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x88) = uVar10;
  lVar8 = cocos2d::Director::getInstance();
                    /* try { // try from 00aacd04 to 00bacd37 has its CatchHandler @ 00aace04 */
  iVar1 = *(int *)(lVar8 + 0x14c);
  if (iVar1 == _touchOnUIFlagFrameId) {
    if (*(GObject **)(param_1 + 0x30) != pGVar6) {
      _touchOnUI = 1;
    }
  }
  else {
    _touchOnUI = *(GObject **)(param_1 + 0x30) != pGVar6;
  }
                    /* try { // try from 00aacd50 to 00bacd83 has its CatchHandler @ 00aacdd4 */
  plVar9 = *(long **)(param_1 + 0x60);
  this = (InputProcessor *)0x0;
  _activeProcessor = param_1;
  _touchOnUIFlagFrameId = iVar1;
  if (plVar9 != (long *)0x0) {
    local_6c = 0xb;
    this = (InputProcessor *)(**(code **)(*plVar9 + 0x30))(plVar9,&local_6c);
  }
  handleRollOver(this,pTVar7,pGVar6);
  if (pTVar7[0x28] != (TouchInfo)0x0) {
                    /* try { // try from 00aacd84 to 00bace1f has its CatchHandler @ 00aacc08 */
    lVar8 = *(long *)(pTVar7 + 0x58);
    lVar2 = *(long *)(pTVar7 + 0x60) - lVar8;
    if (lVar2 != 0) {
      lVar11 = 0;
      bVar4 = false;
      uVar12 = 1;
      while( true ) {
        this_00 = (UIEventDispatcher *)WeakPtr::ptr((WeakPtr *)(lVar8 + lVar11));
                    /* catch() { ... } // from try @ 00aacd38 with catch @ 00aacdd0 */
        if ((this_00 != (UIEventDispatcher *)0x0) &&
           (UIEventDispatcher::dispatchEvent(this_00,0xb,(void *)0x0,(Value *)&cocos2d::Value::Null)
           , this_00 == *(UIEventDispatcher **)(param_1 + 0x30))) {
          bVar4 = true;
        }
                    /* catch() { ... } // from try @ 00aacd50 with catch @ 00aacdd4 */
        if ((ulong)(lVar2 >> 3) <= uVar12) break;
        lVar8 = *(long *)(pTVar7 + 0x58);
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 8;
      }
      if (bVar4) goto LAB_00aace08;
    }
                    /* catch() { ... } // from try @ 00aacd04 with catch @ 00aace04 */
    UIEventDispatcher::dispatchEvent
              (*(UIEventDispatcher **)(param_1 + 0x30),0xb,(void *)0x0,
               (Value *)&cocos2d::Value::Null);
  }
LAB_00aace08:
  _activeProcessor = (Touch *)0x0;
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

