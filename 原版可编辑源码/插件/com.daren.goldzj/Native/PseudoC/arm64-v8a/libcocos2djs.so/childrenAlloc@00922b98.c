
/* cocos2d::renderer::NodeProxy::childrenAlloc() */

void __thiscall cocos2d::renderer::NodeProxy::childrenAlloc(NodeProxy *this)

{
  void *__dest;
  void *__src;
  size_t __n;
  
  __src = *(void **)(this + 0xf0);
  if ((ulong)(*(long *)(this + 0x100) - (long)__src >> 3) < 4) {
    __n = *(long *)(this + 0xf8) - (long)__src;
    __dest = operator_new(0x20);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0xf0) = __dest;
    *(size_t *)(this + 0xf8) = (long)__dest + __n;
    *(long *)(this + 0x100) = (long)__dest + 0x20;
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}

