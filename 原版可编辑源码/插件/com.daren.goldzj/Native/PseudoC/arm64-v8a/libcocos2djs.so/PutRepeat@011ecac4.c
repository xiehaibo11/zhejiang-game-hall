
/* v8::internal::Serializer::PutRepeat(int) */

void __thiscall v8::internal::Serializer::PutRepeat(Serializer *this,int param_1)

{
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this_00;
  uchar local_28 [4];
  uchar local_24 [4];
  
  this_00 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x50);
  if (param_1 < 0x12) {
    local_24[0] = (char)param_1 + '~';
    if (*(uchar **)(this + 0x58) == *(uchar **)(this + 0x60)) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
      __push_back_slow_path<unsigned_char_const&>(this_00,local_24);
    }
    else {
      **(uchar **)(this + 0x58) = local_24[0];
      *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
    }
  }
  else {
    local_28[0] = '\x1b';
    if (*(undefined1 **)(this + 0x58) == *(undefined1 **)(this + 0x60)) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
      __push_back_slow_path<unsigned_char_const&>(this_00,local_28);
    }
    else {
      **(undefined1 **)(this + 0x58) = 0x1b;
      *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
    }
    SnapshotByteSink::PutInt((ulong)this_00,(char *)(long)(param_1 + -0x12));
  }
  return;
}

