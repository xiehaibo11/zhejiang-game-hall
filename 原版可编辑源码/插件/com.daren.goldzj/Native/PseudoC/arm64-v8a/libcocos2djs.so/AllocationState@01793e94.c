
/* v8::internal::compiler::MemoryLowering::AllocationState::AllocationState(v8::internal::compiler::MemoryLowering::AllocationGroup*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::MemoryLowering::AllocationState::AllocationState
          (AllocationState *this,AllocationGroup *param_1,Node *param_2)

{
  *(AllocationGroup **)this = param_1;
  *(undefined8 *)(this + 8) = 0x7fffffff;
  *(undefined8 *)(this + 0x10) = 0;
  *(Node **)(this + 0x18) = param_2;
  return;
}

