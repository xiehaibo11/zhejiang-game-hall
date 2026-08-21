
/* fairygui::InputProcessor::onMouseScroll(cocos2d::EventMouse*) */

void fairygui::InputProcessor::onMouseScroll(EventMouse *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  UIEventDispatcher *this;
  undefined8 *puVar4;
  long lVar5;
  long in_x1;
  float fVar6;
  float fVar7;
  float in_s1;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = cocos2d::Camera::getVisitingCamera();
                    /* try { // try from 00aaebe4 to 00baebff has its CatchHandler @ 00aaee5c */
  local_50 = *(undefined8 *)(in_x1 + 0x40);
  this = (UIEventDispatcher *)
         (**(code **)(**(long **)(param_1 + 0x30) + 0x48))
                   (*(long **)(param_1 + 0x30),&local_50,uVar3);
  if (this == (UIEventDispatcher *)0x0) {
    this = *(UIEventDispatcher **)(param_1 + 0x30);
  }
                    /* try { // try from 00aaec20 to 00baec63 has its CatchHandler @ 00aaee74 */
  puVar4 = (undefined8 *)getTouch((InputProcessor *)param_1,0,true);
  fVar6 = (float)GRoot::worldToRoot(GRoot::_inst,(Vec2 *)&local_50);
  *(float *)(puVar4 + 1) = fVar6;
  *(float *)((long)puVar4 + 0xc) = in_s1;
  *puVar4 = 0;
  fVar7 = *(float *)(in_x1 + 0x48);
  if (*(float *)(in_x1 + 0x48) <= *(float *)(in_x1 + 0x4c)) {
    fVar7 = *(float *)(in_x1 + 0x4c);
  }
                    /* try { // try from 00aaec68 to 00baec77 has its CatchHandler @ 00aaee34 */
  *(int *)(puVar4 + 3) = (int)fVar7;
  *(float *)(param_1 + 0x80) = (float)(int)fVar6;
  *(float *)(param_1 + 0x84) = (float)(int)in_s1;
  *(UIEventDispatcher **)(param_1 + 0x70) = this;
                    /* try { // try from 00aaec78 to 00baec7f has its CatchHandler @ 00aaee74 */
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)((long)puVar4 + 0x14);
  uVar1 = *(undefined4 *)((long)puVar4 + 0x1c);
  *(undefined8 *)(param_1 + 0x78) = 0;
                    /* try { // try from 00aaec88 to 00baec9b has its CatchHandler @ 00aaee30 */
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(int *)(param_1 + 0x90) = (int)fVar7;
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  lVar5 = cocos2d::Director::getInstance();
  if (*(int *)(lVar5 + 0x14c) == _touchOnUIFlagFrameId) {
                    /* try { // try from 00aaecb4 to 00baecef has its CatchHandler @ 00aaeeb4 */
    if (*(UIEventDispatcher **)(param_1 + 0x30) != this) {
      _touchOnUI = 1;
    }
  }
  else {
    _touchOnUI = *(UIEventDispatcher **)(param_1 + 0x30) != this;
  }
  _activeProcessor = param_1;
  _touchOnUIFlagFrameId = *(int *)(lVar5 + 0x14c);
                    /* try { // try from 00aaecf4 to 00baed03 has its CatchHandler @ 00aaee24 */
  UIEventDispatcher::bubbleEvent(this,0x10,(void *)0x0,(Value *)&cocos2d::Value::Null);
  *(undefined4 *)(puVar4 + 3) = 0;
  _activeProcessor = (EventMouse *)0x0;
                    /* try { // try from 00aaed04 to 00baed0b has its CatchHandler @ 00aaeeb4 */
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 00aaed14 to 00baed27 has its CatchHandler @ 00aaee20 */
                    /* try { // try from 00aaed28 to 00baed5b has its CatchHandler @ 00aaea38 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

