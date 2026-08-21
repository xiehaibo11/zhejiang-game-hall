
/* v8::internal::compiler::LinearScanAllocator::MaybeSpillPreviousRanges(v8::internal::compiler::LiveRange*,
   v8::internal::compiler::LifetimePosition, v8::internal::compiler::LiveRange*) */

void __thiscall
v8::internal::compiler::LinearScanAllocator::MaybeSpillPreviousRanges
          (LinearScanAllocator *this,long param_1,undefined4 param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 != param_4) {
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      uVar2 = RegisterAllocator::SplitRangeAt((RegisterAllocator *)this,param_1,param_3);
      RegisterAllocator::Spill((RegisterAllocator *)this,uVar2,0);
    }
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != param_4) {
      uVar1 = *(uint *)(lVar3 + 4);
      while( true ) {
        if ((uVar1 & 1) == 0) {
          *(uint *)(lVar3 + 4) = uVar1 & 0xffffe07f | 0x1001;
        }
        lVar3 = *(long *)(lVar3 + 0x28);
        if (lVar3 == param_4) break;
        uVar1 = *(uint *)(lVar3 + 4);
      }
    }
  }
  return;
}

