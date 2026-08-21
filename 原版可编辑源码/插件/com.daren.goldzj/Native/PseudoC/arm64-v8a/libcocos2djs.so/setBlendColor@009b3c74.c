
/* cocos2d::renderer::DeviceGraphics::setBlendColor(unsigned char, unsigned char, unsigned char,
   unsigned char) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setBlendColor
          (DeviceGraphics *this,uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  *(uint *)(*(long *)(this + 0xb8) + 4) =
       (uint)param_1 << 0x18 | (uint)param_2 << 0x10 | (uint)param_3 << 8 | (uint)param_4;
  return;
}

