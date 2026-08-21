
/* v8::ResourceConstraints::max_semi_space_size_in_kb() const */

ulong __thiscall v8::ResourceConstraints::max_semi_space_size_in_kb(ResourceConstraints *this)

{
  ulong uVar1;
  
  uVar1 = internal::Heap::SemiSpaceSizeFromYoungGenerationSize(*(ulong *)(this + 0x10));
  return uVar1 >> 10;
}

