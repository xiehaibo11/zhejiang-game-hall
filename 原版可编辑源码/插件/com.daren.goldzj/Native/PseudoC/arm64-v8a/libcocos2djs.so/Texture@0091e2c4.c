
/* cocos2d::renderer::Texture::Texture() */

void __thiscall cocos2d::renderer::Texture::Texture(Texture *this)

{
  GraphicsHandle::GraphicsHandle((GraphicsHandle *)this);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x28) = 0x1010100;
  *(undefined ***)this = &PTR__Texture_01c693f8;
  *(undefined8 *)(this + 0x18) = 1;
  *(undefined8 *)(this + 0x20) = 0x4000429012901;
  this[0x3a] = (Texture)0x0;
  return;
}

