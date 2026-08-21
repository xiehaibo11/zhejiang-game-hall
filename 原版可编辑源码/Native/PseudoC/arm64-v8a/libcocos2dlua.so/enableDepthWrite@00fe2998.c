
/* cocos2d::RenderState::StateBlock::enableDepthWrite() */

void cocos2d::RenderState::StateBlock::enableDepthWrite(void)

{
  ulong *puVar1;
  char cVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 00fe292c with catch @ 00fe29a4 */
  if (_defaultState == 0) {
                    /* catch() { ... } // from try @ 00fe29f8 with catch @ 00fe29c8 */
    __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/renderer/CCRenderState.cpp",
                        "enableDepthWrite",0x1a1);
                    /* try { // try from 00fe29f4 to 010e29f7 has its CatchHandler @ 00fe2a60 */
                    /* try { // try from 00fe29f8 to 010e2a7b has its CatchHandler @ 00fe29c8 */
    cVar2 = *(char *)(_defaultState + 0x23);
  }
  else {
    cVar2 = *(char *)(_defaultState + 0x23);
  }
  if (cVar2 == '\0') {
    glDepthMask(1);
    lVar3 = _defaultState;
    puVar1 = (ulong *)(_defaultState + 0x60);
    *(undefined1 *)(_defaultState + 0x23) = 1;
    *(ulong *)(lVar3 + 0x60) = *puVar1 & 0xffffffef;
  }
  return;
}

