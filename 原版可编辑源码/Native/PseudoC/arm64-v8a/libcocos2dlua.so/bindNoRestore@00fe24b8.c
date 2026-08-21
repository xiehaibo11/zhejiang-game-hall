
/* cocos2d::RenderState::StateBlock::bindNoRestore() */

void __thiscall cocos2d::RenderState::StateBlock::bindNoRestore(StateBlock *this)

{
  ulong uVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 00fe243c with catch @ 00fe24bc */
  if (_defaultState == 0) {
                    /* try { // try from 00fe2508 to 010e250f has its CatchHandler @ 00fe259c */
    __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/renderer/CCRenderState.cpp",
                        "bindNoRestore",0xec);
                    /* try { // try from 00fe2510 to 010e25b7 has its CatchHandler @ 00fe24d8 */
    uVar1 = *(ulong *)(this + 0x60);
  }
  else {
                    /* catch() { ... } // from try @ 00fe2510 with catch @ 00fe24d8 */
    uVar1 = *(ulong *)(this + 0x60);
  }
  if (((uVar1 & 1) != 0) && (this[0x28] != *(StateBlock *)(_defaultState + 0x28))) {
    if (this[0x28] == (StateBlock)0x0) {
      glDisable(0xbe2);
    }
    else {
      glEnable();
    }
    *(StateBlock *)(_defaultState + 0x28) = this[0x28];
    uVar1 = *(ulong *)(this + 0x60);
  }
  if (((uint)uVar1 >> 1 & 1) != 0) {
    if ((*(uint *)(this + 0x2c) != *(uint *)(_defaultState + 0x2c)) ||
       (*(uint *)(this + 0x30) != *(uint *)(_defaultState + 0x30))) {
      GL::blendFunc(*(uint *)(this + 0x2c),*(uint *)(this + 0x30));
      *(undefined8 *)(_defaultState + 0x2c) = *(undefined8 *)(this + 0x2c);
      uVar1 = *(ulong *)(this + 0x60);
    }
  }
                    /* catch() { ... } // from try @ 00fe2508 with catch @ 00fe259c */
  if ((((uint)uVar1 >> 2 & 1) != 0) && (this[0x21] != *(StateBlock *)(_defaultState + 0x21))) {
    if (this[0x21] == (StateBlock)0x0) {
      glDisable(0xb44);
    }
    else {
      glEnable();
    }
    *(StateBlock *)(_defaultState + 0x21) = this[0x21];
    uVar1 = *(ulong *)(this + 0x60);
  }
  if ((((uint)uVar1 >> 6 & 1) != 0) && (*(int *)(this + 0x34) != *(int *)(_defaultState + 0x34))) {
    glCullFace();
    *(undefined4 *)(_defaultState + 0x34) = *(undefined4 *)(this + 0x34);
    uVar1 = *(ulong *)(this + 0x60);
  }
  if ((((uint)uVar1 >> 0xb & 1) != 0) && (*(int *)(this + 0x38) != *(int *)(_defaultState + 0x38)))
  {
    glFrontFace();
    *(undefined4 *)(_defaultState + 0x38) = *(undefined4 *)(this + 0x38);
    uVar1 = *(ulong *)(this + 0x60);
  }
  if ((((uint)uVar1 >> 3 & 1) != 0) && (this[0x22] != *(StateBlock *)(_defaultState + 0x22))) {
    if (this[0x22] == (StateBlock)0x0) {
      glDisable(0xb71);
    }
    else {
      glEnable();
    }
    *(StateBlock *)(_defaultState + 0x22) = this[0x22];
    uVar1 = *(ulong *)(this + 0x60);
  }
  if ((((uint)uVar1 >> 4 & 1) != 0) && (this[0x23] != *(StateBlock *)(_defaultState + 0x23))) {
    glDepthMask();
    *(StateBlock *)(_defaultState + 0x23) = this[0x23];
    uVar1 = *(ulong *)(this + 0x60);
  }
  lVar2 = _defaultState;
  if ((((uint)uVar1 >> 5 & 1) != 0) && (*(int *)(this + 0x24) != *(int *)(_defaultState + 0x24))) {
    glDepthFunc();
    lVar2 = _defaultState;
    *(undefined4 *)(_defaultState + 0x24) = *(undefined4 *)(this + 0x24);
    uVar1 = *(ulong *)(this + 0x60);
  }
  *(ulong *)(lVar2 + 0x60) = *(ulong *)(lVar2 + 0x60) | uVar1;
  return;
}

