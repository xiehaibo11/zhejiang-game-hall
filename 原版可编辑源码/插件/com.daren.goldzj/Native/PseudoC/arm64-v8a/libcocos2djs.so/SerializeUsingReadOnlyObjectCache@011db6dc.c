
/* v8::internal::ReadOnlySerializer::SerializeUsingReadOnlyObjectCache(v8::internal::SnapshotByteSink*,
   v8::internal::HeapObject) */

undefined8 __thiscall
v8::internal::ReadOnlySerializer::SerializeUsingReadOnlyObjectCache
          (ReadOnlySerializer *this,
          vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *param_1,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  uchar local_14 [4];
  
  uVar2 = ReadOnlyHeap::Contains(param_3);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = RootsSerializer::SerializeInObjectCache((RootsSerializer *)this,param_3);
    local_14[0] = '\x13';
    if (*(undefined1 **)(param_1 + 8) == *(undefined1 **)(param_1 + 0x10)) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
      __push_back_slow_path<unsigned_char_const&>(param_1,local_14);
    }
    else {
      **(undefined1 **)(param_1 + 8) = 0x13;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
    }
    SnapshotByteSink::PutInt((ulong)param_1,(char *)(long)iVar1);
    uVar3 = 1;
  }
  return uVar3;
}

