
/* cocos2d::GLView::setGLContextAttrs(GLContextAttrs&) */

void cocos2d::GLView::setGLContextAttrs(GLContextAttrs *param_1)

{
  _glContextAttrs._20_8_ = *(undefined8 *)(param_1 + 0x14);
  _glContextAttrs._16_4_ = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  _glContextAttrs._8_4_ = (undefined4)*(undefined8 *)(param_1 + 8);
  _glContextAttrs._12_4_ = (undefined4)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  _glContextAttrs._0_8_ = *(undefined8 *)param_1;
  return;
}

