
/* v8::internal::Serializer::PutSmi(v8::internal::Smi) */

void __thiscall v8::internal::Serializer::PutSmi(Serializer *this,undefined4 param_2)

{
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this_00;
  uchar *puVar1;
  uchar local_18 [4];
  uchar local_14 [4];
  
  local_18[0] = '`';
  this_00 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x50);
  if (*(undefined1 **)(this + 0x58) == *(undefined1 **)(this + 0x60)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(this_00,local_18);
    puVar1 = *(uchar **)(this + 0x58);
  }
  else {
    **(undefined1 **)(this + 0x58) = 0x60;
    puVar1 = (uchar *)(*(long *)(this + 0x58) + 1);
    *(uchar **)(this + 0x58) = puVar1;
  }
  local_14[0] = (uchar)param_2;
  if (puVar1 == *(uchar **)(this + 0x60)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(this_00,local_14);
    puVar1 = *(uchar **)(this + 0x58);
  }
  else {
    *puVar1 = local_14[0];
    puVar1 = (uchar *)(*(long *)(this + 0x58) + 1);
    *(uchar **)(this + 0x58) = puVar1;
  }
  local_14[0] = (uchar)((uint)param_2 >> 8);
  if (puVar1 == *(uchar **)(this + 0x60)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(this_00,local_14);
    puVar1 = *(uchar **)(this + 0x58);
  }
  else {
    *puVar1 = local_14[0];
    puVar1 = (uchar *)(*(long *)(this + 0x58) + 1);
    *(uchar **)(this + 0x58) = puVar1;
  }
  local_14[0] = (uchar)((uint)param_2 >> 0x10);
  if (puVar1 == *(uchar **)(this + 0x60)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(this_00,local_14);
    puVar1 = *(uchar **)(this + 0x58);
  }
  else {
    *puVar1 = local_14[0];
    puVar1 = (uchar *)(*(long *)(this + 0x58) + 1);
    *(uchar **)(this + 0x58) = puVar1;
  }
  local_14[0] = (uchar)((uint)param_2 >> 0x18);
  if (puVar1 == *(uchar **)(this + 0x60)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(this_00,local_14);
  }
  else {
    *puVar1 = local_14[0];
    *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
  }
  return;
}

