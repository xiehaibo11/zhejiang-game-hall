
/* v8::ResourceConstraints::set_max_semi_space_size_in_kb(unsigned long) */

void __thiscall
v8::ResourceConstraints::set_max_semi_space_size_in_kb(ResourceConstraints *this,ulong param_1)

{
  undefined8 uVar1;
  
  uVar1 = internal::Heap::YoungGenerationSizeFromSemiSpaceSize(param_1 << 10);
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}

