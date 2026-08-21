
/* cocos2d::renderer::MeshBuffer::checkAndSwitchBuffer(unsigned int) */

void __thiscall cocos2d::renderer::MeshBuffer::checkAndSwitchBuffer(MeshBuffer *this,uint param_1)

{
  if (0xffff < *(int *)(this + 0x2c) + param_1) {
    VertexBuffer::update
              (*(VertexBuffer **)(this + 0x88),0,*(void **)this,(ulong)*(uint *)(this + 0x1c));
    IndexBuffer::update(*(IndexBuffer **)(this + 0x90),0,*(void **)(this + 8),
                        (ulong)(uint)(*(int *)(this + 0x24) << 1));
    this[0x44] = (MeshBuffer)0x0;
    ModelBatcher::flush(*(ModelBatcher **)(this + 0x48));
    switchBuffer((uint)this);
    return;
  }
  return;
}

