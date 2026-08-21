
/* cocos2d::renderer::MeshBuffer::reallocVBuffer() */

void __thiscall cocos2d::renderer::MeshBuffer::reallocVBuffer(MeshBuffer *this)

{
  void *__dest;
  void *__src;
  
  __src = *(void **)this;
  __dest = operator_new__((ulong)*(uint *)(this + 0x34) << 2);
  *(void **)this = __dest;
  if (__src != (void *)0x0) {
    memcpy(__dest,__src,(ulong)*(uint *)(this + 0x3c) << 2);
    operator_delete__(__src);
    return;
  }
  return;
}

