
/* v8::internal::Serializer::PutNextChunk(v8::internal::SnapshotSpace) */

void __thiscall v8::internal::Serializer::PutNextChunk(Serializer *this,uchar param_2)

{
  uchar *puVar1;
  uchar local_18 [4];
  uchar local_14 [4];
  
  local_18[0] = '\x15';
  if (*(undefined1 **)(this + 0x58) == *(undefined1 **)(this + 0x60)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>
              ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x50),local_18
              );
    puVar1 = *(uchar **)(this + 0x58);
  }
  else {
    **(undefined1 **)(this + 0x58) = 0x15;
    puVar1 = (uchar *)(*(long *)(this + 0x58) + 1);
    *(uchar **)(this + 0x58) = puVar1;
  }
  if (puVar1 == *(uchar **)(this + 0x60)) {
    local_14[0] = param_2;
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>
              ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x50),local_14
              );
  }
  else {
    *puVar1 = param_2;
    *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
  }
  return;
}

