
/* v8::internal::compiler::MemoryLowering::AllocationState::IsYoungGenerationAllocation() const */

bool __thiscall
v8::internal::compiler::MemoryLowering::AllocationState::IsYoungGenerationAllocation
          (AllocationState *this)

{
  if (*(long *)this != 0) {
    return *(char *)(*(long *)this + 0x20) == '\0';
  }
  return false;
}

