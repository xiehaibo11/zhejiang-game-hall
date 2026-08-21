
/* v8::internal::compiler::MemoryOptimizer::EnqueueUse(v8::internal::compiler::Node*, int,
   v8::internal::compiler::MemoryLowering::AllocationState const*) */

void __thiscall
v8::internal::compiler::MemoryOptimizer::EnqueueUse
          (MemoryOptimizer *this,Node *param_1,int param_2,AllocationState *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(short *)(*(long *)param_1 + 0x10) == 0x24) {
    EnqueueMerge(this,param_1,param_2,param_3);
    return;
  }
  lVar2 = *(long *)(this + 0x108);
  lVar4 = *(long *)(this + 0x110);
  uVar1 = 0;
  if (lVar4 - lVar2 != 0) {
    uVar1 = (lVar4 - lVar2) * 0x20 - 1;
  }
  uVar5 = *(long *)(this + 0x138) + *(long *)(this + 0x130);
  if (uVar1 == uVar5) {
    std::__ndk1::
    deque<v8::internal::compiler::MemoryOptimizer::Token,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::MemoryOptimizer::Token>>
    ::__add_back_capacity
              ((deque<v8::internal::compiler::MemoryOptimizer::Token,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::MemoryOptimizer::Token>>
                *)(this + 0x100));
    lVar2 = *(long *)(this + 0x108);
    lVar4 = *(long *)(this + 0x110);
    uVar5 = *(long *)(this + 0x130) + *(long *)(this + 0x138);
  }
  if (lVar4 == lVar2) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)
             (*(long *)(lVar2 + (uVar5 >> 5 & 0x7fffffffffffff8)) + (uVar5 & 0xff) * 0x10);
  }
  *puVar3 = param_1;
  puVar3[1] = param_3;
  *(long *)(this + 0x138) = *(long *)(this + 0x138) + 1;
  return;
}

