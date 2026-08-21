
/* v8::internal::PreparseDataBuilder::ByteData::Reserve(unsigned long) */

void __thiscall v8::internal::PreparseDataBuilder::ByteData::Reserve(ByteData *this,ulong param_1)

{
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *pvVar1;
  ulong uVar2;
  undefined1 local_14 [4];
  
  pvVar1 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)this;
  uVar2 = (*(long *)(pvVar1 + 8) - *(long *)pvVar1) - (long)*(int *)(this + 8);
  if (uVar2 < param_1) {
    local_14[0] = 0;
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::insert
              (pvVar1,*(long *)(pvVar1 + 8),param_1 - uVar2,local_14);
  }
  return;
}

