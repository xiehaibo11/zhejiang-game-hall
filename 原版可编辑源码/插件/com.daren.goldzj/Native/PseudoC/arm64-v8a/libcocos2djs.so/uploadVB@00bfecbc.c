
/* cocos2d::middleware::MeshBuffer::uploadVB() */

void __thiscall cocos2d::middleware::MeshBuffer::uploadVB(MeshBuffer *this)

{
  if (*(ulong *)(this + 0x58) != 0) {
    renderer::VertexBuffer::update
              (*(VertexBuffer **)(*(long *)(this + 0x20) + *(long *)(this + 0x38) * 8),0,
               *(void **)(this + 0x48),*(ulong *)(this + 0x58));
    return;
  }
  return;
}

