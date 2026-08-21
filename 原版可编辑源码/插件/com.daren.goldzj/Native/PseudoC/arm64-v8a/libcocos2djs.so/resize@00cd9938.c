
/* cocos2d::middleware::IOBuffer::resize(unsigned long, bool) */

void __thiscall cocos2d::middleware::IOBuffer::resize(IOBuffer *this,ulong param_1,bool param_2)

{
  void *__dest;
  ulong __n;
  void *__src;
  
  __n = *(ulong *)(this + 0x10);
  if (__n < param_1) {
    __dest = operator_new__(param_1);
    __src = *(void **)(this + 8);
    if (param_2) {
      memcpy(__dest,__src,__n);
    }
    if (__src != (void *)0x0) {
      operator_delete__(__src);
    }
    *(void **)(this + 8) = __dest;
    *(ulong *)(this + 0x10) = param_1;
    this[0x28] = (IOBuffer)0x0;
  }
  return;
}

