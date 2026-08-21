
/* fairygui::InputProcessor::onTouchBegan(cocos2d::Touch*, cocos2d::Event*) */

void fairygui::InputProcessor::onTouchBegan(Touch *param_1,Event *param_2)

{
  UIEventDispatcher *this;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  UIEventDispatcher *pUVar4;
  TouchInfo *pTVar5;
  InputProcessor *pIVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  undefined4 extraout_s0;
  undefined4 in_s1;
  undefined4 local_58 [2];
  undefined4 local_50 [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((*(char *)(*(long *)(param_1 + 0x30) + 0xf5) == '\0') ||
     (*(char *)(*(long *)(param_1 + 0x30) + 0xf4) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = cocos2d::Camera::getVisitingCamera();
    local_50[0] = cocos2d::Touch::getLocation((Touch *)param_2);
    pUVar4 = (UIEventDispatcher *)
             (**(code **)(**(long **)(param_1 + 0x30) + 0x48))
                       (*(long **)(param_1 + 0x30),local_50,uVar3);
                    /* try { // try from 00aaca7c to 00bacad3 has its CatchHandler @ 00aaca7c
                       catch() { ... } // from try @ 00aaca7c with catch @ 00aaca7c
                       catch() { ... } // from try @ 00aacad8 with catch @ 00aaca7c */
    this = *(UIEventDispatcher **)(param_1 + 0x30);
    if (pUVar4 != (UIEventDispatcher *)0x0) {
      this = pUVar4;
    }
    cocos2d::EventListenerTouchOneByOne::setSwallowTouches
              (*(EventListenerTouchOneByOne **)param_1,
               this != *(UIEventDispatcher **)(param_1 + 0x30));
    pTVar5 = (TouchInfo *)getTouch((InputProcessor *)param_1,*(int *)(param_2 + 0x24),true);
    pIVar6 = (InputProcessor *)GRoot::worldToRoot(GRoot::_inst,(Vec2 *)local_50);
    *(undefined4 *)(pTVar5 + 8) = extraout_s0;
    *(undefined4 *)(pTVar5 + 0xc) = in_s1;
    *(undefined4 *)(pTVar5 + 0x1c) = 0;
    *(Event **)pTVar5 = param_2;
                    /* try { // try from 00aacad4 to 00bacad7 has its CatchHandler @ 00aacb44 */
    setBegin(pIVar6,pTVar5,(GObject *)this);
                    /* try { // try from 00aacad8 to 00bacb5f has its CatchHandler @ 00aaca7c */
    uVar3 = *(undefined8 *)(pTVar5 + 8);
    *(UIEventDispatcher **)(param_1 + 0x70) = this;
    uVar3 = NEON_scvtf(CONCAT44((int)(float)((ulong)uVar3 >> 0x20),(int)(float)uVar3),4);
    *(undefined8 *)(param_1 + 0x80) = uVar3;
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(pTVar5 + 0x1c);
    *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(pTVar5 + 0x14);
    lVar9 = *(long *)pTVar5;
    *(long *)(param_1 + 0x78) = lVar9;
    if (lVar9 == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = *(undefined4 *)(pTVar5 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x88) = uVar8;
    lVar9 = cocos2d::Director::getInstance();
    iVar1 = *(int *)(lVar9 + 0x14c);
    if (iVar1 == _touchOnUIFlagFrameId) {
                    /* catch() { ... } // from try @ 00aacad4 with catch @ 00aacb44 */
      if (*(UIEventDispatcher **)(param_1 + 0x30) != this) {
        _touchOnUI = 1;
      }
    }
    else {
      _touchOnUI = *(UIEventDispatcher **)(param_1 + 0x30) != this;
    }
    plVar7 = *(long **)(param_1 + 0x60);
    _activeProcessor = param_1;
    _touchOnUIFlagFrameId = iVar1;
    if (plVar7 != (long *)0x0) {
      local_58[0] = 10;
      (**(code **)(*plVar7 + 0x30))(plVar7,local_58);
    }
    WeakPtr::WeakPtr((WeakPtr *)local_58,(GObject *)this);
                    /* try { // try from 00aacbac to 00bacbaf has its CatchHandler @ 00aacbf4 */
                    /* try { // try from 00aacbb0 to 00bacc07 has its CatchHandler @ 00aacb60 */
    UIEventDispatcher::bubbleEvent(this,10,(void *)0x0,(Value *)&cocos2d::Value::Null);
    pIVar6 = (InputProcessor *)WeakPtr::ptr((WeakPtr *)local_58);
    handleRollOver(pIVar6,pTVar5,(GObject *)pIVar6);
    _activeProcessor = (Touch *)0x0;
    WeakPtr::~WeakPtr((WeakPtr *)local_58);
    uVar3 = 1;
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
                    /* catch() { ... } // from try @ 00aacbac with catch @ 00aacbf4 */
  return;
}

