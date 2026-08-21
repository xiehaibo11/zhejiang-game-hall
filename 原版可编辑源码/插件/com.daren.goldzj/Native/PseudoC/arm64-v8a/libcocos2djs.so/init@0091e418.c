
/* cocos2d::renderer::Texture::init(cocos2d::renderer::DeviceGraphics*) */

undefined8 __thiscall cocos2d::renderer::Texture::init(Texture *this,DeviceGraphics *param_1)

{
  if (param_1 != (DeviceGraphics *)0x0) {
    *(DeviceGraphics **)(this + 0x10) = param_1;
    *(undefined2 *)(this + 0x38) = 0;
    *(undefined2 *)(this + 0x29) = 0x101;
    this[0x2b] = (Texture)0x1;
    *(undefined8 *)(this + 0x18) = 0xffffffff00000001;
    *(undefined8 *)(this + 0x20) = 0x4000429012901;
    return 1;
  }
  return 0;
}

