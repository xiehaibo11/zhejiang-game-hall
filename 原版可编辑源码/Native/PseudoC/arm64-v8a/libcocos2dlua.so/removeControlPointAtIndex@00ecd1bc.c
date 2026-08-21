
/* cocos2d::PointArray::removeControlPointAtIndex(long) */

void __thiscall cocos2d::PointArray::removeControlPointAtIndex(PointArray *this,long param_1)

{
  void *__dest;
  size_t __n;
  
  __dest = (void *)(*(long *)(this + 0x30) + param_1 * 8);
  __n = *(long *)(this + 0x38) - ((long)__dest + 8);
  if (__n != 0) {
    memmove(__dest,(void *)((long)__dest + 8),__n);
  }
  *(void **)(this + 0x38) = (void *)((long)__dest + ((long)__n >> 3) * 8);
  return;
}

