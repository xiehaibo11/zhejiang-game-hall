
/* cocos2d::experimental::FrameBuffer::attachRenderTarget(cocos2d::experimental::RenderTargetBase*)
    */

void __thiscall
cocos2d::experimental::FrameBuffer::attachRenderTarget(FrameBuffer *this,RenderTargetBase *param_1)

{
  if (this[0x60] == (FrameBuffer)0x0) {
    if (param_1 == (RenderTargetBase *)0x0) {
                    /* catch() { ... } // from try @ 00ff7f50 with catch @ 00ff7f14 */
      __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                          "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/renderer/CCFrameBuffer.cpp"
                          ,"attachRenderTarget",0x1b3);
    }
                    /* try { // try from 00ff7f48 to 010f7f4f has its CatchHandler @ 00ff7f80 */
                    /* try { // try from 00ff7f50 to 010f7f9b has its CatchHandler @ 00ff7f14 */
    if ((*(int *)(param_1 + 0x28) == *(int *)(this + 0x48)) &&
       (*(int *)(param_1 + 0x2c) == *(int *)(this + 0x4c))) {
      Ref::retain((Ref *)param_1);
      if (*(Ref **)(this + 0x50) != (Ref *)0x0) {
        Ref::release(*(Ref **)(this + 0x50));
      }
      *(RenderTargetBase **)(this + 0x50) = param_1;
      this[0x2c] = (FrameBuffer)0x1;
    }
  }
  return;
}

