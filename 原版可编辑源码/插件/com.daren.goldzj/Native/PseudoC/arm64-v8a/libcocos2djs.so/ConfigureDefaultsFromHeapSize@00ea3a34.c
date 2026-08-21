
/* v8::ResourceConstraints::ConfigureDefaultsFromHeapSize(unsigned long, unsigned long) */

void __thiscall
v8::ResourceConstraints::ConfigureDefaultsFromHeapSize
          (ResourceConstraints *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_40;
  ulong local_38;
  
  if (param_1 <= param_2) {
    if (param_2 != 0) {
      internal::Heap::GenerationSizesFromHeapSize(param_2,&local_38,&local_40);
      uVar2 = local_38;
      uVar3 = internal::Heap::MinYoungGenerationSize();
      uVar1 = local_40;
      if (uVar3 <= uVar2) {
        uVar3 = uVar2;
      }
      *(ulong *)(this + 0x10) = uVar3;
      uVar3 = internal::Heap::MinOldGenerationSize();
      if (uVar3 <= uVar1) {
        uVar3 = uVar1;
      }
      *(ulong *)(this + 8) = uVar3;
      if (param_1 != 0) {
        internal::Heap::GenerationSizesFromHeapSize(param_1,&local_38,&local_40);
        *(ulong *)(this + 0x28) = local_38;
        *(ulong *)(this + 0x20) = local_40;
      }
      if (param_2 >> 0x1b != 0) {
        param_2 = 0x8000000;
      }
      *(ulong *)this = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","initial_heap_size_in_bytes <= maximum_heap_size_in_bytes");
}

