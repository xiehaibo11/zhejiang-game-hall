
/* cocos2d::ccArrayRemoveObjectAtIndex(cocos2d::_ccArray*, long, bool) */

void cocos2d::ccArrayRemoveObjectAtIndex(_ccArray *param_1,long param_2,bool param_3)

{
  void *__dest;
  Ref *this;
  long lVar1;
  
  if ((param_3) && (this = *(Ref **)(*(long *)(param_1 + 0x10) + param_2 * 8), this != (Ref *)0x0))
  {
    Ref::release(this);
  }
  lVar1 = (*(long *)param_1 + -1) - param_2;
  *(long *)param_1 = *(long *)param_1 + -1;
  if (0 < lVar1) {
    __dest = (void *)(*(long *)(param_1 + 0x10) + param_2 * 8);
    memmove(__dest,(void *)((long)__dest + 8),lVar1 * 8);
    return;
  }
  return;
}

