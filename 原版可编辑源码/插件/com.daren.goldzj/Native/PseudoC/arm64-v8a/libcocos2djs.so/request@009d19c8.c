
/* cocos2d::renderer::MeshBuffer::request(unsigned int, unsigned int) */

void __thiscall cocos2d::renderer::MeshBuffer::request(MeshBuffer *this,uint param_1,uint param_2)

{
  if (*(MeshBuffer **)(*(ModelBatcher **)(this + 0x48) + 0x58) != this) {
    ModelBatcher::flush(*(ModelBatcher **)(this + 0x48));
    *(MeshBuffer **)(*(long *)(this + 0x48) + 0x58) = this;
  }
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(this + 0x2c);
  requestStatic(this,param_1,param_2);
  return;
}

