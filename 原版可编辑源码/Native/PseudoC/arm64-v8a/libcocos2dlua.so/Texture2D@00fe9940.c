
/* cocos2d::Texture2D::Texture2D() */

void __thiscall cocos2d::Texture2D::Texture2D(Texture2D *this)

{
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined ***)this = &PTR__Texture2D_01724398;
  *(undefined8 *)(this + 0x2c) = 0;
  Size::Size((Size *)(this + 0x3c));
  *(undefined2 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  this[0x50] = (Texture2D)0x1;
  this[0x60] = (Texture2D)0x1;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  return;
}

