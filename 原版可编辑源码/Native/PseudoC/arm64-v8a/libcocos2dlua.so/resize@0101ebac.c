
/* cocos2d::LinearAllocator::resize(int) */

void __thiscall cocos2d::LinearAllocator::resize(LinearAllocator *this,int param_1)

{
  undefined8 uVar1;
  
  if (*(void **)(this + 8) != (void *)0x0) {
    dtFree(*(void **)(this + 8));
  }
  uVar1 = dtAlloc(param_1,0);
  *(undefined8 *)(this + 8) = uVar1;
  *(int *)(this + 0x10) = param_1;
  return;
}

