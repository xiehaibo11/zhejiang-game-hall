
/* cocos2d::renderer::MemPool::removeCommonData(unsigned long) */

void __thiscall cocos2d::renderer::MemPool::removeCommonData(MemPool *this,ulong param_1)

{
  long *__dest;
  size_t __n;
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(this + 8) + param_1 * 8);
  if (plVar1 != (long *)0x0) {
    for (__dest = *(long **)(this + 0x20); __dest != *(long **)(this + 0x28); __dest = __dest + 1) {
      if (*(ulong *)(*__dest + 8) == param_1) {
        __n = (long)*(long **)(this + 0x28) - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        *(long **)(this + 0x28) = __dest + ((long)__n >> 3);
        break;
      }
    }
    (**(code **)(*plVar1 + 8))(plVar1);
    *(undefined8 *)(*(long *)(this + 8) + param_1 * 8) = 0;
  }
  return;
}

