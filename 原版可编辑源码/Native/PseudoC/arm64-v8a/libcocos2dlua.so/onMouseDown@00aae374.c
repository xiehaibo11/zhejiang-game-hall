
/* fairygui::InputProcessor::onMouseDown(cocos2d::EventMouse*) */

void fairygui::InputProcessor::onMouseDown(EventMouse *param_1)

{
  UIEventDispatcher *this;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  UIEventDispatcher *pUVar4;
  TouchInfo *pTVar5;
  InputProcessor *this_00;
  long *plVar6;
  long in_x1;
  undefined4 uVar7;
  long lVar8;
  undefined4 extraout_s0;
  undefined4 in_s1;
  undefined4 local_58 [2];
  undefined8 local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 00aae33c with catch @ 00aae380 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(int *)(in_x1 + 0x3c) != 0) {
    uVar3 = cocos2d::Camera::getVisitingCamera();
    local_50 = *(undefined8 *)(in_x1 + 0x40);
    pUVar4 = (UIEventDispatcher *)
             (**(code **)(**(long **)(param_1 + 0x30) + 0x48))
                       (*(long **)(param_1 + 0x30),&local_50,uVar3);
    this = *(UIEventDispatcher **)(param_1 + 0x30);
    if (pUVar4 != (UIEventDispatcher *)0x0) {
      this = pUVar4;
    }
    cocos2d::EventListenerTouchOneByOne::setSwallowTouches
              (*(EventListenerTouchOneByOne **)param_1,
               this != *(UIEventDispatcher **)(param_1 + 0x30));
    pTVar5 = (TouchInfo *)getTouch((InputProcessor *)param_1,0,true);
    this_00 = (InputProcessor *)GRoot::worldToRoot(GRoot::_inst,(Vec2 *)&local_50);
    *(undefined4 *)(pTVar5 + 8) = extraout_s0;
    *(undefined4 *)(pTVar5 + 0xc) = in_s1;
    uVar7 = *(undefined4 *)(in_x1 + 0x3c);
    *(undefined8 *)pTVar5 = 0;
    *(undefined4 *)(pTVar5 + 0x1c) = uVar7;
    setBegin(this_00,pTVar5,(GObject *)this);
    uVar3 = *(undefined8 *)(pTVar5 + 8);
    *(UIEventDispatcher **)(param_1 + 0x70) = this;
    uVar3 = NEON_scvtf(CONCAT44((int)(float)((ulong)uVar3 >> 0x20),(int)(float)uVar3),4);
    *(undefined8 *)(param_1 + 0x80) = uVar3;
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(pTVar5 + 0x1c);
    *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(pTVar5 + 0x14);
    lVar8 = *(long *)pTVar5;
    *(long *)(param_1 + 0x78) = lVar8;
    if (lVar8 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(undefined4 *)(pTVar5 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x88) = uVar7;
    lVar8 = cocos2d::Director::getInstance();
    iVar1 = *(int *)(lVar8 + 0x14c);
                    /* try { // try from 00aae490 to 00bae4df has its CatchHandler @ 00aae490
                       catch() { ... } // from try @ 00aae490 with catch @ 00aae490
                       catch() { ... } // from try @ 00aae5b4 with catch @ 00aae490
                       catch() { ... } // from try @ 00aae608 with catch @ 00aae490
                       catch() { ... } // from try @ 00aae7d0 with catch @ 00aae490
                       catch() { ... } // from try @ 00aae880 with catch @ 00aae490 */
    if (iVar1 == _touchOnUIFlagFrameId) {
      if (*(UIEventDispatcher **)(param_1 + 0x30) != this) {
        _touchOnUI = 1;
      }
    }
    else {
      _touchOnUI = *(UIEventDispatcher **)(param_1 + 0x30) != this;
    }
    plVar6 = *(long **)(param_1 + 0x60);
    _activeProcessor = param_1;
    _touchOnUIFlagFrameId = iVar1;
    if (plVar6 != (long *)0x0) {
      local_58[0] = 10;
                    /* try { // try from 00aae4e0 to 00bae4fb has its CatchHandler @ 00aae9f8 */
      (**(code **)(*plVar6 + 0x30))(plVar6,local_58);
    }
    WeakPtr::WeakPtr((WeakPtr *)local_58,(GObject *)this);
    UIEventDispatcher::bubbleEvent(this,10,(void *)0x0,(Value *)&cocos2d::Value::Null);
    _activeProcessor = (EventMouse *)0x0;
    WeakPtr::~WeakPtr((WeakPtr *)local_58);
  }
                    /* try { // try from 00aae51c to 00bae537 has its CatchHandler @ 00aae9e8 */
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

