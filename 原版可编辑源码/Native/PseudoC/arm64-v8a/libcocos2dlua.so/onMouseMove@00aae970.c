
/* fairygui::InputProcessor::onMouseMove(cocos2d::EventMouse*) */

void fairygui::InputProcessor::onMouseMove(EventMouse *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  TouchInfo *pTVar5;
  undefined8 uVar6;
  GObject *pGVar7;
  long lVar8;
  long *plVar9;
  InputProcessor *this;
  UIEventDispatcher *this_00;
  long in_x1;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float in_s1;
  undefined8 local_78;
  undefined4 local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pTVar5 = (TouchInfo *)getTouch((InputProcessor *)param_1,0,true);
  local_78 = *(undefined8 *)(in_x1 + 0x40);
  fVar12 = (float)GRoot::worldToRoot(GRoot::_inst,(Vec2 *)&local_78);
                    /* catch() { ... } // from try @ 00aae5b0 with catch @ 00aae9e4
                       catch() { ... } // from try @ 00aae71c with catch @ 00aae9e4
                       catch() { ... } // from try @ 00aae860 with catch @ 00aae9e4 */
                    /* catch() { ... } // from try @ 00aae51c with catch @ 00aae9e8 */
  if ((ABS(*(float *)(pTVar5 + 8) - fVar12) < 1.0) &&
     (in_s1 = ABS(*(float *)(pTVar5 + 0xc) - in_s1), in_s1 < 1.0)) goto LAB_00aaeb80;
  uVar6 = cocos2d::Camera::getVisitingCamera();
                    /* catch() { ... } // from try @ 00aae4e0 with catch @ 00aae9f8 */
  local_78 = *(undefined8 *)(in_x1 + 0x40);
                    /* catch() { ... } // from try @ 00aae558 with catch @ 00aaea08
                       catch() { ... } // from try @ 00aae5f4 with catch @ 00aaea08 */
  pGVar7 = (GObject *)
           (**(code **)(**(long **)(param_1 + 0x30) + 0x48))
                     (*(long **)(param_1 + 0x30),&local_78,uVar6);
  if (pGVar7 == (GObject *)0x0) {
    pGVar7 = *(GObject **)(param_1 + 0x30);
  }
  fVar12 = (float)GRoot::worldToRoot(GRoot::_inst,(Vec2 *)&local_78);
                    /* try { // try from 00aaea38 to 00baea97 has its CatchHandler @ 00aaea38
                       catch() { ... } // from try @ 00aaea38 with catch @ 00aaea38
                       catch() { ... } // from try @ 00aaeaa8 with catch @ 00aaea38
                       catch() { ... } // from try @ 00aaed28 with catch @ 00aaea38
                       catch() { ... } // from try @ 00aaedb8 with catch @ 00aaea38 */
  *(float *)(pTVar5 + 8) = fVar12;
  *(float *)(pTVar5 + 0xc) = in_s1;
  *(undefined8 *)pTVar5 = 0;
  *(GObject **)(param_1 + 0x70) = pGVar7;
  *(float *)(param_1 + 0x80) = (float)(int)fVar12;
  *(float *)(param_1 + 0x84) = (float)(int)in_s1;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(pTVar5 + 0x1c);
  uVar6 = *(undefined8 *)(pTVar5 + 0x14);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x8c) = uVar6;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  lVar8 = cocos2d::Director::getInstance();
  iVar1 = *(int *)(lVar8 + 0x14c);
  if (iVar1 == _touchOnUIFlagFrameId) {
    if (*(GObject **)(param_1 + 0x30) != pGVar7) {
                    /* try { // try from 00aaea98 to 00baeaa7 has its CatchHandler @ 00aaee68 */
      _touchOnUI = 1;
    }
  }
  else {
    _touchOnUI = *(GObject **)(param_1 + 0x30) != pGVar7;
  }
  plVar9 = *(long **)(param_1 + 0x60);
  this = (InputProcessor *)0x0;
  _activeProcessor = param_1;
  _touchOnUIFlagFrameId = iVar1;
  if (plVar9 != (long *)0x0) {
    local_6c = 0xb;
                    /* try { // try from 00aaeadc to 00baeaf7 has its CatchHandler @ 00aaee64 */
    this = (InputProcessor *)(**(code **)(*plVar9 + 0x30))(plVar9,&local_6c);
  }
  handleRollOver(this,pTVar5,pGVar7);
  if (pTVar5[0x28] != (TouchInfo)0x0) {
    lVar8 = *(long *)(pTVar5 + 0x58);
    lVar2 = *(long *)(pTVar5 + 0x60) - lVar8;
    if (lVar2 != 0) {
      lVar10 = 0;
      bVar4 = false;
                    /* try { // try from 00aaeb18 to 00baeb57 has its CatchHandler @ 00aaee94 */
      uVar11 = 1;
      while( true ) {
        this_00 = (UIEventDispatcher *)WeakPtr::ptr((WeakPtr *)(lVar8 + lVar10));
        if ((this_00 != (UIEventDispatcher *)0x0) &&
           (UIEventDispatcher::dispatchEvent(this_00,0xb,(void *)0x0,(Value *)&cocos2d::Value::Null)
           , this_00 == *(UIEventDispatcher **)(param_1 + 0x30))) {
          bVar4 = true;
        }
        if ((ulong)(lVar2 >> 3) <= uVar11) break;
        lVar8 = *(long *)(pTVar5 + 0x58);
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 8;
                    /* try { // try from 00aaeb5c to 00baeb6b has its CatchHandler @ 00aaee50 */
      }
      if (bVar4) goto LAB_00aaeb7c;
    }
                    /* try { // try from 00aaeb6c to 00baeb73 has its CatchHandler @ 00aaee94 */
    UIEventDispatcher::dispatchEvent
              (*(UIEventDispatcher **)(param_1 + 0x30),0xb,(void *)0x0,
               (Value *)&cocos2d::Value::Null);
  }
LAB_00aaeb7c:
                    /* try { // try from 00aaeb7c to 00baeb8f has its CatchHandler @ 00aaee4c */
  _activeProcessor = (EventMouse *)0x0;
LAB_00aaeb80:
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 00aaeba8 to 00baebc3 has its CatchHandler @ 00aaee60 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

