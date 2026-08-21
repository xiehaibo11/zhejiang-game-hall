
/* v8::internal::Serializer::PutAttachedReference(v8::internal::SerializerReference) */

void __thiscall v8::internal::Serializer::PutAttachedReference(Serializer *this,ulong param_2)

{
  uchar local_24 [4];
  
  local_24[0] = '\x12';
  if (*(undefined1 **)(this + 0x58) == *(undefined1 **)(this + 0x60)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>
              ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x50),local_24
              );
  }
  else {
    **(undefined1 **)(this + 0x58) = 0x12;
    *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
  }
  SnapshotByteSink::PutInt((ulong)(this + 0x50),(char *)(param_2 >> 0x20));
  return;
}

