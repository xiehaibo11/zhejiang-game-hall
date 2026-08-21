
/* cocos2d::renderer::MeshBuffer::uploadData() */

void __thiscall cocos2d::renderer::MeshBuffer::uploadData(MeshBuffer *this)

{
  VertexBuffer::update
            (*(VertexBuffer **)(this + 0x88),0,*(void **)this,(ulong)*(uint *)(this + 0x1c));
  IndexBuffer::update(*(IndexBuffer **)(this + 0x90),0,*(void **)(this + 8),
                      (ulong)(uint)(*(int *)(this + 0x24) << 1));
  this[0x44] = (MeshBuffer)0x0;
  return;
}

