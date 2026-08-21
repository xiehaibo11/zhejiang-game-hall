
/* v8::internal::compiler::LinearScanAllocator::SpillAfter(v8::internal::compiler::LiveRange*,
   v8::internal::compiler::LifetimePosition,
   v8::internal::compiler::RegisterAllocationData::SpillMode) */

void __thiscall
v8::internal::compiler::LinearScanAllocator::SpillAfter
          (LinearScanAllocator *this,undefined8 param_1,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = RegisterAllocator::SplitRangeAt((RegisterAllocator *)this,param_1,param_3);
  RegisterAllocator::Spill((RegisterAllocator *)this,uVar1,param_4);
  return;
}

