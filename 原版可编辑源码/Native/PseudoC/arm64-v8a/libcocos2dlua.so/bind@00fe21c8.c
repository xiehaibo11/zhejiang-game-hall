
/* cocos2d::RenderState::bind(cocos2d::Pass*) */

void __thiscall cocos2d::RenderState::bind(RenderState *this,Pass *param_1)

{
  uint uVar1;
  Texture2D *this_00;
  ulong uVar2;
  long lVar3;
  RenderState *pRVar4;
  RenderState *pRVar5;
  RenderState *pRVar6;
  
                    /* catch() { ... } // from try @ 00fe2158 with catch @ 00fe21c8 */
  if (param_1 == (Pass *)0x0) {
                    /* try { // try from 00fe221c to 010e2223 has its CatchHandler @ 00fe228c */
                    /* try { // try from 00fe2224 to 010e22a7 has its CatchHandler @ 00fe21e4 */
    __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/renderer/CCRenderState.cpp",
                        "bind",0x69);
    this_00 = *(Texture2D **)(this + 0x58);
  }
  else {
    this_00 = *(Texture2D **)(this + 0x58);
  }
  if (this_00 != (Texture2D *)0x0) {
                    /* catch() { ... } // from try @ 00fe2224 with catch @ 00fe21e4 */
    uVar1 = Texture2D::getName(this_00);
    GL::bindTexture2D(uVar1);
  }
  if (*(long *)(this + 0x30) == 0) {
    uVar2 = 0;
    lVar3 = *(long *)(this + 0x38);
  }
  else {
    uVar2 = *(ulong *)(*(long *)(this + 0x30) + 0x60);
    lVar3 = *(long *)(this + 0x38);
  }
  if (lVar3 == 0) {
    StateBlock::restore(uVar2);
  }
  else {
    do {
      if (*(long *)(lVar3 + 0x30) != 0) {
        uVar2 = *(ulong *)(*(long *)(lVar3 + 0x30) + 0x60) | uVar2;
      }
      lVar3 = *(long *)(lVar3 + 0x38);
    } while (lVar3 != 0);
    StateBlock::restore(uVar2);
    if (this == (RenderState *)0x0) {
      return;
    }
  }
  pRVar5 = this;
  pRVar6 = (RenderState *)0x0;
  do {
    do {
      pRVar4 = pRVar5;
      if (pRVar4 == (RenderState *)0x0) {
        return;
      }
      pRVar5 = *(RenderState **)(pRVar4 + 0x38);
                    /* catch() { ... } // from try @ 00fe221c with catch @ 00fe228c */
    } while ((pRVar5 != pRVar6) && (pRVar5 != (RenderState *)0x0));
    if (*(StateBlock **)(pRVar4 + 0x30) != (StateBlock *)0x0) {
      StateBlock::bindNoRestore(*(StateBlock **)(pRVar4 + 0x30));
    }
    pRVar5 = this;
    pRVar6 = pRVar4;
                    /* catch() { ... } // from try @ 00fe22e8 with catch @ 00fe22a8 */
  } while (pRVar4 != this);
  return;
}

