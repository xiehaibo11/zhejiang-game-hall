
/* v8::internal::compiler::RegisterAllocator::SplitBetween(v8::internal::compiler::LiveRange*,
   v8::internal::compiler::LifetimePosition, v8::internal::compiler::LifetimePosition) */

void __thiscall
v8::internal::compiler::RegisterAllocator::SplitBetween
          (RegisterAllocator *this,uint *param_1,uint param_3,uint param_4)

{
  undefined4 uVar1;
  
  if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
    PrintF("Splitting live range %d:%d in position between [%d, %d]\n",
           (ulong)*(uint *)(*(long *)(param_1 + 8) + 0x5c),(ulong)*param_1,(ulong)param_3,
           (ulong)param_4);
  }
  uVar1 = FindOptimalSplitPos(this,param_3,param_4);
  SplitRangeAt(this,param_1,uVar1);
  return;
}

