
/* cocos2d::GLView::getGLContextAttrs() */

void __thiscall cocos2d::GLView::getGLContextAttrs(GLView *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *in_x8;
  
  uVar3 = _glContextAttrs._0_8_;
  uVar2 = CONCAT44(_glContextAttrs._16_4_,_glContextAttrs._12_4_);
  uVar1 = CONCAT44(_glContextAttrs._12_4_,_glContextAttrs._8_4_);
  *(undefined8 *)((long)in_x8 + 0x14) = _glContextAttrs._20_8_;
  *(undefined8 *)((long)in_x8 + 0xc) = uVar2;
  in_x8[1] = uVar1;
  *in_x8 = uVar3;
  return;
}

