
/* cocos2d::LinearAllocator::LinearAllocator(int) */

void __thiscall cocos2d::LinearAllocator::LinearAllocator(LinearAllocator *this,int param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__LinearAllocator_01727220;
  *(undefined4 *)(this + 0x18) = 0;
  uVar1 = dtAlloc(param_1,0);
  *(undefined8 *)(this + 8) = uVar1;
  *(int *)(this + 0x10) = param_1;
  return;
}

