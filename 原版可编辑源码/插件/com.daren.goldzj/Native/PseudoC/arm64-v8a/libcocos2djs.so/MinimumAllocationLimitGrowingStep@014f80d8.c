
/* v8::internal::MemoryController<v8::internal::GlobalMemoryTrait>::MinimumAllocationLimitGrowingStep(v8::internal::Heap::HeapGrowingMode)
    */

undefined8
v8::internal::MemoryController<v8::internal::GlobalMemoryTrait>::MinimumAllocationLimitGrowingStep
          (int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x200000;
  if (param_1 != 1) {
    uVar1 = 0x800000;
  }
  return uVar1;
}

