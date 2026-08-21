
/* cocos2d::RenderState::StateBlock::cloneInto(cocos2d::RenderState::StateBlock*) const */

void __thiscall cocos2d::RenderState::StateBlock::cloneInto(StateBlock *this,StateBlock *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (StateBlock *)0x0) {
                    /* catch() { ... } // from try @ 00fe287c with catch @ 00fe2848 */
    __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/renderer/CCRenderState.cpp",
                        "cloneInto",0x1b0);
  }
  param_1[0x21] = this[0x21];
  param_1[0x22] = this[0x22];
                    /* try { // try from 00fe2874 to 010e287b has its CatchHandler @ 00fe28e4 */
  param_1[0x23] = this[0x23];
                    /* try { // try from 00fe287c to 010e28ff has its CatchHandler @ 00fe2848 */
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(this + 0x24);
  param_1[0x28] = this[0x28];
  uVar1 = *(undefined8 *)(this + 0x2c);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(this + 0x34);
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  param_1[0x3c] = this[0x3c];
  uVar1 = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(this + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(this + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(this + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(this + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(this + 0x60);
  return;
}

