
/* v8::internal::CodeLargeObjectSpace::RemovePage(v8::internal::LargePage*, unsigned long) */

void __thiscall
v8::internal::CodeLargeObjectSpace::RemovePage
          (CodeLargeObjectSpace *this,LargePage *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  LargePage *local_38;
  
  lVar1 = *(long *)param_1;
  if (param_1 < param_1 + lVar1) {
    local_38 = param_1;
    do {
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>>>
      ::__erase_unique<unsigned_long>
                ((__hash_table<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,v8::internal::LargePage*>>>
                  *)(this + 0x80),(ulong *)&local_38);
      local_38 = local_38 + 0x40000;
      lVar1 = *(long *)param_1;
    } while (local_38 < param_1 + lVar1);
  }
  *(long *)(this + 0x68) = *(long *)(this + 0x68) - (long)(int)lVar1;
  lVar1 = *(long *)param_1;
  *(ulong *)(this + 0x78) = *(long *)(this + 0x78) - param_2;
  *(long *)(this + 0x50) = *(long *)(this + 0x50) - lVar1;
  *(int *)(this + 0x70) = *(int *)(this + 0x70) + -1;
  if (*(LargePage **)(this + 0x28) == param_1) {
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0xe8);
  }
  if (*(LargePage **)(this + 0x20) == param_1) {
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0xe0);
  }
  lVar1 = *(long *)(param_1 + 0xe0);
  lVar2 = *(long *)(param_1 + 0xe8);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0xe8) = lVar2;
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0xe0) = lVar1;
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}

