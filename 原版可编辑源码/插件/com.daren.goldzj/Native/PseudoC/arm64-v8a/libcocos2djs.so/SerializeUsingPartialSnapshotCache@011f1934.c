
/* v8::internal::StartupSerializer::SerializeUsingPartialSnapshotCache(v8::internal::SnapshotByteSink*,
   v8::internal::HeapObject) */

void __thiscall
v8::internal::StartupSerializer::SerializeUsingPartialSnapshotCache
          (StartupSerializer *this,
          vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *param_1,undefined8 param_3)

{
  int iVar1;
  uchar local_24 [4];
  
  iVar1 = RootsSerializer::SerializeInObjectCache((RootsSerializer *)this,param_3);
  local_24[0] = '\x10';
  if (*(undefined1 **)(param_1 + 8) == *(undefined1 **)(param_1 + 0x10)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>(param_1,local_24);
  }
  else {
    **(undefined1 **)(param_1 + 8) = 0x10;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  }
  SnapshotByteSink::PutInt((ulong)param_1,(char *)(long)iVar1);
  return;
}

