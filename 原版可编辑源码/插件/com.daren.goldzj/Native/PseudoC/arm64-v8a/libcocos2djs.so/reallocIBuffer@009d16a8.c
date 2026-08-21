
/* cocos2d::renderer::MeshBuffer::reallocIBuffer() */

void __thiscall cocos2d::renderer::MeshBuffer::reallocIBuffer(MeshBuffer *this)

{
  void *__dest;
  void *__src;
  
  __src = *(void **)(this + 8);
  __dest = operator_new__((ulong)*(uint *)(this + 0x38) << 1);
  *(void **)(this + 8) = __dest;
  if (__src != (void *)0x0) {
    memcpy(__dest,__src,(ulong)*(uint *)(this + 0x40) << 1);
    operator_delete__(__src);
    return;
  }
  return;
}

