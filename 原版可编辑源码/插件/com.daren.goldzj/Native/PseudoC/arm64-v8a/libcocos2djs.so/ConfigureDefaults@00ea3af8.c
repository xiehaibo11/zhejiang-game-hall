
/* v8::ResourceConstraints::ConfigureDefaults(unsigned long, unsigned long) */

void __thiscall
v8::ResourceConstraints::ConfigureDefaults(ResourceConstraints *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong local_30;
  ulong local_28;
  
  uVar1 = internal::Heap::HeapSizeFromPhysicalMemory((Heap *)param_1,param_1);
  internal::Heap::GenerationSizesFromHeapSize(uVar1,&local_28,&local_30);
  *(ulong *)(this + 0x10) = local_28;
  *(ulong *)(this + 8) = local_30;
  if (param_2 != 0) {
    uVar1 = param_2 >> 3;
    if (param_2 >> 0x1e != 0) {
      uVar1 = 0x8000000;
    }
    *(ulong *)this = uVar1;
  }
  return;
}

