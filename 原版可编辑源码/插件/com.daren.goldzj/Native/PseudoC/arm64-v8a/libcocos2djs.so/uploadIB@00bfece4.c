
/* cocos2d::middleware::MeshBuffer::uploadIB() */

void __thiscall cocos2d::middleware::MeshBuffer::uploadIB(MeshBuffer *this)

{
  if (*(ulong *)(this + 0xf8) != 0) {
    renderer::IndexBuffer::update
              (*(IndexBuffer **)(*(long *)(this + 8) + *(long *)(this + 0x38) * 8),0,
               *(void **)(this + 0xe8),*(ulong *)(this + 0xf8));
    return;
  }
  return;
}

