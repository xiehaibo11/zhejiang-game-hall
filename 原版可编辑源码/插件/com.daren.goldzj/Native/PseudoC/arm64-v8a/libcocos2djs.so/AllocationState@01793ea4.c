
/* v8::internal::compiler::MemoryLowering::AllocationState::AllocationState(v8::internal::compiler::MemoryLowering::AllocationGroup*,
   long, v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::MemoryLowering::AllocationState::AllocationState
          (AllocationState *this,AllocationGroup *param_1,long param_2,Node *param_3,Node *param_4)

{
  *(AllocationGroup **)this = param_1;
  *(long *)(this + 8) = param_2;
  *(Node **)(this + 0x10) = param_3;
  *(Node **)(this + 0x18) = param_4;
  return;
}

