
/* fairygui::InputProcessor::onMouseUp(cocos2d::EventMouse*) */

void fairygui::InputProcessor::onMouseUp(EventMouse *param_1)

{
  long lVar1;
  undefined8 uVar2;
  GObject *this;
  TouchInfo *pTVar3;
  clock_t cVar4;
  long *plVar5;
  InputProcessor *this_00;
  UIEventDispatcher *pUVar6;
  long lVar7;
  ulong uVar8;
  long in_x1;
  InputProcessor *pIVar9;
  long lVar10;
  WeakPtr *this_01;
  int iVar11;
  WeakPtr *pWVar12;
  long lVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined4 in_s1;
  undefined4 local_78 [2];
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(int *)(in_x1 + 0x3c) != 0) {
    uVar2 = cocos2d::Camera::getVisitingCamera();
    local_70 = *(undefined8 *)(in_x1 + 0x40);
                    /* try { // try from 00aae5b0 to 00bae5b3 has its CatchHandler @ 00aae9e4 */
                    /* try { // try from 00aae5b4 to 00bae5f3 has its CatchHandler @ 00aae490 */
    this = (GObject *)
           (**(code **)(**(long **)(param_1 + 0x30) + 0x48))
                     (*(long **)(param_1 + 0x30),&local_70,uVar2);
    if (this == (GObject *)0x0) {
      this = *(GObject **)(param_1 + 0x30);
    }
    iVar11 = 1;
    pTVar3 = (TouchInfo *)getTouch((InputProcessor *)param_1,0,true);
                    /* try { // try from 00aae5f4 to 00bae607 has its CatchHandler @ 00aaea08 */
    uVar15 = GRoot::worldToRoot(GRoot::_inst,(Vec2 *)&local_70);
    *(undefined4 *)(pTVar3 + 8) = uVar15;
    *(undefined4 *)(pTVar3 + 0xc) = in_s1;
    uVar15 = *(undefined4 *)(in_x1 + 0x3c);
    *(undefined8 *)pTVar3 = 0;
                    /* try { // try from 00aae608 to 00bae71b has its CatchHandler @ 00aae490 */
    pTVar3[0x28] = (TouchInfo)0x0;
    *(undefined4 *)(pTVar3 + 0x1c) = uVar15;
    cVar4 = clock();
    if ((float)((double)(cVar4 - *(long *)(pTVar3 + 0x30)) / 1000000.0) < 0.45) {
      iVar11 = 1;
      if (*(int *)(pTVar3 + 0x14) != 2) {
        iVar11 = *(int *)(pTVar3 + 0x14) + 1;
      }
    }
    uVar2 = *(undefined8 *)(pTVar3 + 8);
    *(int *)(pTVar3 + 0x14) = iVar11;
    *(clock_t *)(pTVar3 + 0x30) = cVar4;
    *(GObject **)(param_1 + 0x70) = this;
    uVar2 = NEON_scvtf(CONCAT44((int)(float)((ulong)uVar2 >> 0x20),(int)(float)uVar2),4);
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    *(int *)(param_1 + 0x8c) = iVar11;
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(pTVar3 + 0x18);
    lVar10 = *(long *)pTVar3;
    *(long *)(param_1 + 0x78) = lVar10;
    if (lVar10 == 0) {
      uVar15 = 0xffffffff;
    }
    else {
      uVar15 = *(undefined4 *)(pTVar3 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x88) = uVar15;
    lVar10 = cocos2d::Director::getInstance();
    iVar11 = *(int *)(lVar10 + 0x14c);
    if (iVar11 == _touchOnUIFlagFrameId) {
      if (*(GObject **)(param_1 + 0x30) != this) {
        _touchOnUI = 1;
      }
    }
    else {
      _touchOnUI = *(GObject **)(param_1 + 0x30) != this;
    }
    plVar5 = *(long **)(param_1 + 0x60);
    _activeProcessor = param_1;
    _touchOnUIFlagFrameId = iVar11;
    if (plVar5 != (long *)0x0) {
      local_78[0] = 0xc;
      (**(code **)(*plVar5 + 0x30))(plVar5,local_78);
    }
    this_00 = (InputProcessor *)WeakPtr::WeakPtr((WeakPtr *)local_78,this);
    pWVar12 = *(WeakPtr **)(pTVar3 + 0x58);
                    /* try { // try from 00aae71c to 00bae723 has its CatchHandler @ 00aae9e4 */
    lVar10 = *(long *)(pTVar3 + 0x60) - (long)pWVar12;
    if (lVar10 != 0) {
                    /* try { // try from 00aae740 to 00bae76f has its CatchHandler @ 00aae89c */
      lVar13 = 0;
      uVar14 = 0;
      do {
        pUVar6 = (UIEventDispatcher *)WeakPtr::ptr(pWVar12 + lVar13);
                    /* try { // try from 00aae78c to 00bae7af has its CatchHandler @ 00aae894 */
                    /* try { // try from 00aae7b0 to 00bae7cf has its CatchHandler @ 00aae8a4 */
        if (((pUVar6 != (UIEventDispatcher *)0x0) && (pUVar6 != (UIEventDispatcher *)this)) &&
           ((lVar7 = __dynamic_cast(pUVar6,&GObject::typeinfo,&GComponent::typeinfo,0), lVar7 == 0
            || (uVar8 = GComponent::isAncestorOf((GComponent *)pUVar6,this), (uVar8 & 1) == 0)))) {
          UIEventDispatcher::dispatchEvent(pUVar6,0xc,(void *)0x0,(Value *)&cocos2d::Value::Null);
        }
        pWVar12 = *(WeakPtr **)(pTVar3 + 0x58);
        uVar14 = uVar14 + 1;
        lVar13 = lVar13 + 8;
      } while (uVar14 < (ulong)(lVar10 >> 3));
      this_01 = *(WeakPtr **)(pTVar3 + 0x60);
                    /* try { // try from 00aae7d0 to 00bae85f has its CatchHandler @ 00aae490 */
      while (this_01 != pWVar12) {
        this_01 = this_01 + -8;
        WeakPtr::~WeakPtr(this_01);
      }
      *(WeakPtr **)(pTVar3 + 0x60) = pWVar12;
      this_00 = (InputProcessor *)WeakPtr::ptr((WeakPtr *)local_78);
      this = (GObject *)this_00;
    }
    if (this == (GObject *)0x0) {
      pIVar9 = (InputProcessor *)0x0;
    }
    else {
      UIEventDispatcher::bubbleEvent
                ((UIEventDispatcher *)this,0xc,(void *)0x0,(Value *)&cocos2d::Value::Null);
      this_00 = (InputProcessor *)WeakPtr::ptr((WeakPtr *)local_78);
      pIVar9 = this_00;
    }
    pUVar6 = (UIEventDispatcher *)clickTest(this_00,pTVar3,(GObject *)pIVar9);
    if (pUVar6 != (UIEventDispatcher *)0x0) {
      WeakPtr::operator=((WeakPtr *)local_78,(GObject *)pUVar6);
      uVar2 = *(undefined8 *)(pTVar3 + 8);
      *(UIEventDispatcher **)(param_1 + 0x70) = pUVar6;
                    /* try { // try from 00aae860 to 00bae87f has its CatchHandler @ 00aae9e4 */
      uVar2 = NEON_scvtf(CONCAT44((int)(float)((ulong)uVar2 >> 0x20),(int)(float)uVar2),4);
      *(undefined8 *)(param_1 + 0x80) = uVar2;
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(pTVar3 + 0x1c);
      *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(pTVar3 + 0x14);
      lVar10 = *(long *)pTVar3;
      *(long *)(param_1 + 0x78) = lVar10;
                    /* try { // try from 00aae880 to 00baea37 has its CatchHandler @ 00aae490 */
      if (lVar10 == 0) {
        uVar15 = 0xffffffff;
      }
      else {
        uVar15 = *(undefined4 *)(pTVar3 + 0x10);
      }
      *(undefined4 *)(param_1 + 0x88) = uVar15;
                    /* catch() { ... } // from try @ 00aae78c with catch @ 00aae894 */
      lVar10 = cocos2d::Director::getInstance();
      iVar11 = *(int *)(lVar10 + 0x14c);
                    /* catch() { ... } // from try @ 00aae740 with catch @ 00aae89c */
                    /* catch() { ... } // from try @ 00aae7b0 with catch @ 00aae8a4 */
      if (iVar11 == _touchOnUIFlagFrameId) {
        if (*(UIEventDispatcher **)(param_1 + 0x30) != pUVar6) {
          _touchOnUI = 1;
        }
      }
      else {
        _touchOnUI = *(UIEventDispatcher **)(param_1 + 0x30) != pUVar6;
      }
      _touchOnUIFlagFrameId = iVar11;
      if (*(int *)(pTVar3 + 0x1c) == 2) {
        UIEventDispatcher::bubbleEvent(pUVar6,0x12,(void *)0x0,(Value *)&cocos2d::Value::Null);
      }
      else {
        UIEventDispatcher::bubbleEvent(pUVar6,0x11,(void *)0x0,(Value *)&cocos2d::Value::Null);
      }
    }
    *(undefined4 *)(pTVar3 + 0x10) = 0xffffffff;
    *(undefined4 *)(pTVar3 + 0x1c) = 0xffffffff;
    _activeProcessor = (EventMouse *)0x0;
    WeakPtr::~WeakPtr((WeakPtr *)local_78);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

