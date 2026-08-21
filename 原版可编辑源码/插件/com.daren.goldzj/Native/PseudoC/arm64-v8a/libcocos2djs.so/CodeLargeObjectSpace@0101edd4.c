
/* v8::internal::CodeLargeObjectSpace::CodeLargeObjectSpace(v8::internal::Heap*) */

void __thiscall
v8::internal::CodeLargeObjectSpace::CodeLargeObjectSpace(CodeLargeObjectSpace *this,Heap *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR__FreeList_01caa258;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined8 **)(this + 0x60) = puVar1;
  *(undefined ***)this = &PTR__Space_01ca9d00;
  this[0x38] = (CodeLargeObjectSpace)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(Heap **)(this + 0x40) = param_1;
  *(undefined4 *)(this + 0x48) = 6;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  puVar1 = operator_new__(0x10);
  *(undefined8 **)(this + 0x30) = puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined ***)this = &PTR__CodeLargeObjectSpace_01ca9ba0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0xa0) = 0x3f800000;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>>>
  ::__rehash((__hash_table<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>>>
              *)(this + 0x80),0x400);
  return;
}

