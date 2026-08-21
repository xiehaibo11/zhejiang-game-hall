
/* cocos2d::LinearAllocator::alloc(int) */

long __thiscall cocos2d::LinearAllocator::alloc(LinearAllocator *this,int param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  if (lVar2 != 0) {
    iVar1 = *(int *)(this + 0x14) + param_1;
    if (*(int *)(this + 0x10) < iVar1) {
      return 0;
    }
    lVar2 = lVar2 + *(int *)(this + 0x14);
    *(int *)(this + 0x14) = iVar1;
  }
  return lVar2;
}

