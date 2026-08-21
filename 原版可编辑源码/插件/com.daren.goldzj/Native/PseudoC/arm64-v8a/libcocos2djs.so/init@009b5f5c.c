
/* cocos2d::renderer::FrameBuffer::init(cocos2d::renderer::DeviceGraphics*, unsigned short, unsigned
   short) */

undefined8 __thiscall
cocos2d::renderer::FrameBuffer::init
          (FrameBuffer *this,DeviceGraphics *param_1,ushort param_2,ushort param_3)

{
  *(DeviceGraphics **)(this + 0x10) = param_1;
  *(ushort *)(this + 0x48) = param_2;
  *(ushort *)(this + 0x4a) = param_3;
  glGenFramebuffers(1,this + 0xc);
  return 1;
}

