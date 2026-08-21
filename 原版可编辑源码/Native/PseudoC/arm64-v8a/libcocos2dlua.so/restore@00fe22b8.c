
/* cocos2d::RenderState::StateBlock::restore(long) */

void cocos2d::RenderState::StateBlock::restore(long param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  
  if (_defaultState == 0) {
                    /* try { // try from 00fe22e0 to 010e22e7 has its CatchHandler @ 00fe2358 */
                    /* try { // try from 00fe22e8 to 010e2373 has its CatchHandler @ 00fe22a8 */
    __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/renderer/CCRenderState.cpp",
                        "restore",0x146);
  }
  uVar3 = *(ulong *)(_defaultState + 0x60);
  if ((uVar3 | param_1) != param_1) {
    uVar4 = (uint)param_1;
    if (((param_1 & 1U) == 0) && ((uVar3 & 1) != 0)) {
      glEnable(0xbe2);
      lVar2 = _defaultState;
      puVar1 = (ulong *)(_defaultState + 0x60);
      *(undefined1 *)(_defaultState + 0x28) = 1;
      uVar3 = *puVar1 & 0xfffffffe;
      *(ulong *)(lVar2 + 0x60) = uVar3;
    }
    if (((uVar4 >> 1 & 1) == 0) && (((uint)uVar3 >> 1 & 1) != 0)) {
                    /* catch() { ... } // from try @ 00fe22e0 with catch @ 00fe2358 */
      GL::blendFunc(1,0);
      lVar2 = _defaultState;
      puVar1 = (ulong *)(_defaultState + 0x60);
      *(undefined8 *)(_defaultState + 0x2c) = 1;
      uVar3 = *puVar1 & 0xfffffffd;
      *(ulong *)(lVar2 + 0x60) = uVar3;
    }
    if (((uVar4 >> 2 & 1) == 0) && (((uint)uVar3 >> 2 & 1) != 0)) {
      glDisable(0xb44);
      lVar2 = _defaultState;
      puVar1 = (ulong *)(_defaultState + 0x60);
      *(undefined1 *)(_defaultState + 0x21) = 0;
      uVar3 = *puVar1 & 0xfffffffb;
      *(ulong *)(lVar2 + 0x60) = uVar3;
    }
    if (((uVar4 >> 6 & 1) == 0) && (((uint)uVar3 >> 6 & 1) != 0)) {
      glCullFace(0x405);
      lVar2 = _defaultState;
      puVar1 = (ulong *)(_defaultState + 0x60);
      *(undefined4 *)(_defaultState + 0x34) = 0x405;
      uVar3 = *puVar1 & 0xffffffbf;
      *(ulong *)(lVar2 + 0x60) = uVar3;
    }
    if (((uVar4 >> 0xb & 1) == 0) && (((uint)uVar3 >> 0xb & 1) != 0)) {
      glFrontFace(0x901);
      lVar2 = _defaultState;
      puVar1 = (ulong *)(_defaultState + 0x60);
      *(undefined4 *)(_defaultState + 0x38) = 0x901;
      uVar3 = *puVar1 & 0xfffff7ff;
      *(ulong *)(lVar2 + 0x60) = uVar3;
    }
    if (((uVar4 >> 3 & 1) == 0) && (((uint)uVar3 >> 3 & 1) != 0)) {
                    /* catch() { ... } // from try @ 00fe2444 with catch @ 00fe2404 */
      glEnable(0xb71);
      lVar2 = _defaultState;
      puVar1 = (ulong *)(_defaultState + 0x60);
      *(undefined1 *)(_defaultState + 0x22) = 1;
      uVar3 = *puVar1 & 0xfffffff7;
      *(ulong *)(lVar2 + 0x60) = uVar3;
    }
    if (((uVar4 >> 4 & 1) == 0) && (((uint)uVar3 >> 4 & 1) != 0)) {
      glDepthMask(0);
      lVar2 = _defaultState;
                    /* try { // try from 00fe243c to 010e2443 has its CatchHandler @ 00fe24bc */
      puVar1 = (ulong *)(_defaultState + 0x60);
      *(undefined1 *)(_defaultState + 0x23) = 0;
                    /* try { // try from 00fe2444 to 010e24d7 has its CatchHandler @ 00fe2404 */
      uVar3 = *puVar1 & 0xffffffef;
      *(ulong *)(lVar2 + 0x60) = uVar3;
    }
    if (((uVar4 >> 5 & 1) == 0) && (((uint)uVar3 >> 5 & 1) != 0)) {
      glDepthFunc(0x201);
      lVar2 = _defaultState;
      puVar1 = (ulong *)(_defaultState + 0x60);
      *(undefined4 *)(_defaultState + 0x24) = 0x201;
      *(ulong *)(lVar2 + 0x60) = *puVar1 & 0xffffffdf;
    }
  }
  return;
}

