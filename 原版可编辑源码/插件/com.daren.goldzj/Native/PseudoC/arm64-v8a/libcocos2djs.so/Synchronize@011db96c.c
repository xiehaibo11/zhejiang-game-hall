
/* v8::internal::RootsSerializer::Synchronize(v8::internal::VisitorSynchronization::SyncTag) */

void v8::internal::RootsSerializer::Synchronize(long param_1)

{
  uchar local_14 [4];
  
  local_14[0] = '\x1a';
  if (*(undefined1 **)(param_1 + 0x58) == *(undefined1 **)(param_1 + 0x60)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>
              ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(param_1 + 0x50),
               local_14);
  }
  else {
    **(undefined1 **)(param_1 + 0x58) = 0x1a;
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
  }
  return;
}

