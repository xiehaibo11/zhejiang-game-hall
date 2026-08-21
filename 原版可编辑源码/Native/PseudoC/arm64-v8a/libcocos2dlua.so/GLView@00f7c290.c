
/* cocos2d::GLView::GLView() */

void __thiscall cocos2d::GLView::GLView(GLView *this)

{
  undefined8 uVar1;
  
  Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR__GLView_01721e88;
  Size::Size((Size *)(this + 0x24),0.0,0.0);
  Size::Size((Size *)(this + 0x2c),0.0,0.0);
  Rect::Rect((Rect *)(this + 0x34));
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = uVar1;
  *(undefined4 *)(this + 0x68) = 5;
  *(undefined8 *)(this + 0x70) = 0;
  return;
}

