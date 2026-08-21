
/* cocos2d::renderer::MeshBuffer::reset() */

void __thiscall cocos2d::renderer::MeshBuffer::reset(MeshBuffer *this)

{
  undefined8 uVar1;
  
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x88) = **(undefined8 **)(this + 0x58);
  uVar1 = **(undefined8 **)(this + 0x70);
  this[0x44] = (MeshBuffer)0x0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x90) = uVar1;
  return;
}

