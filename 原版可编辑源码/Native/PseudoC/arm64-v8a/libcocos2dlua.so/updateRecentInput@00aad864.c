
/* fairygui::InputProcessor::updateRecentInput(fairygui::TouchInfo*, fairygui::GObject*) */

void __thiscall
fairygui::InputProcessor::updateRecentInput
          (InputProcessor *this,TouchInfo *param_1,GObject *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(GObject **)(this + 0x70) = param_2;
                    /* try { // try from 00aad878 to 00bad87b has its CatchHandler @ 00aad8b0 */
                    /* try { // try from 00aad87c to 00bad8c3 has its CatchHandler @ 00aad82c */
  uVar3 = NEON_scvtf(CONCAT44((int)(float)((ulong)uVar3 >> 0x20),(int)(float)uVar3),4);
  *(undefined8 *)(this + 0x80) = uVar3;
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined8 *)(this + 0x8c) = *(undefined8 *)(param_1 + 0x14);
  lVar2 = *(long *)param_1;
  *(long *)(this + 0x78) = lVar2;
  if (lVar2 == 0) {
                    /* catch() { ... } // from try @ 00aad878 with catch @ 00aad8b0 */
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  *(undefined4 *)(this + 0x88) = uVar1;
  lVar2 = cocos2d::Director::getInstance();
                    /* try { // try from 00aad8c4 to 00bada83 has its CatchHandler @ 00aad8c4
                       catch() { ... } // from try @ 00aad8c4 with catch @ 00aad8c4
                       catch() { ... } // from try @ 00aadb04 with catch @ 00aad8c4 */
  if (*(int *)(lVar2 + 0x14c) == _touchOnUIFlagFrameId) {
    if (*(GObject **)(this + 0x30) != param_2) {
      _touchOnUI = 1;
    }
  }
  else {
    _touchOnUI = *(GObject **)(this + 0x30) != param_2;
  }
  _touchOnUIFlagFrameId = *(int *)(lVar2 + 0x14c);
  return;
}

