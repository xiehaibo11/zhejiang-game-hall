
/* v8::internal::PreparseDataBuilder::DataGatheringScope::Close() */

void __thiscall
v8::internal::PreparseDataBuilder::DataGatheringScope::Close(DataGatheringScope *this)

{
  vector<void*,std::__ndk1::allocator<void*>> *this_00;
  long lVar1;
  void *local_28;
  
  lVar1 = **(long **)(this + 8);
  *(long *)(*(long *)this + 0x120) = lVar1;
  FinalizeChildren(*(PreparseDataBuilder **)(this + 8),
                   *(Zone **)(*(long *)(*(long *)this + 0x28) + 0x448));
  if ((lVar1 != 0) &&
     ((local_28 = *(void **)(this + 8), (*(byte *)((long)local_28 + 0x4c) & 3) == 2 ||
      (*(long *)((long)local_28 + 0x38) != 0)))) {
    this_00 = *(vector<void*,std::__ndk1::allocator<void*>> **)(lVar1 + 0x20);
    if (*(long **)(this_00 + 8) < *(long **)(this_00 + 0x10)) {
      **(long **)(this_00 + 8) = (long)local_28;
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
    }
    else {
      std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                (this_00,&local_28);
    }
    *(long *)(lVar1 + 0x30) = *(long *)(lVar1 + 0x30) + 1;
  }
  return;
}

