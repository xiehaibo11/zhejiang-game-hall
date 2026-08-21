
/* cocos2d::LinearAllocator::reset() */

void __thiscall cocos2d::LinearAllocator::reset(LinearAllocator *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x18);
  if (*(int *)(this + 0x18) <= *(int *)(this + 0x14)) {
    iVar1 = *(int *)(this + 0x14);
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(int *)(this + 0x18) = iVar1;
  return;
}

