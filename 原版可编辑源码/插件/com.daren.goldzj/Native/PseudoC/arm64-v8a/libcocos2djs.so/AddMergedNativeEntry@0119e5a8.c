
/* v8::internal::HeapObjectsMap::AddMergedNativeEntry(void*, unsigned long) */

void __thiscall
v8::internal::HeapObjectsMap::AddMergedNativeEntry(HeapObjectsMap *this,void *param_1,ulong param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  void *local_30;
  ulong uStack_28;
  
  uVar1 = ~(uint)param_2 + (uint)param_2 * 0x8000;
  uVar1 = (uVar1 ^ uVar1 >> 0xc) * 5;
  uVar1 = (uVar1 ^ uVar1 >> 4) * 0x809;
  uVar4 = (ulong)(*(int *)(this + 0x10) - 1U & (uVar1 & 0x3fffffff ^ uVar1 >> 0x10));
  puVar3 = (ulong *)(*(long *)(this + 8) + uVar4 * 0x18);
  uVar5 = *puVar3;
  while (uVar5 != 0) {
    if (uVar5 == param_2) goto LAB_0119e630;
    uVar4 = (ulong)((int)uVar4 + 1U & *(int *)(this + 0x10) - 1U);
    puVar3 = (ulong *)(*(long *)(this + 8) + uVar4 * 0x18);
    uVar5 = *puVar3;
  }
  param_2 = 0;
LAB_0119e630:
  puVar2 = (ulong *)0x0;
  if (param_2 != 0) {
    puVar2 = puVar3;
  }
  uStack_28 = puVar2[1];
  local_30 = param_1;
  auVar6 = std::__ndk1::
           __hash_table<std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,unsigned_long>>>
           ::__emplace_unique_key_args<void*,std::__ndk1::pair<void*const,unsigned_long>>
                     ((__hash_table<std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,unsigned_long>>>
                       *)(this + 0x50),&local_30,(pair *)&local_30);
  if ((auVar6._8_8_ & 0xff) == 0) {
    *(ulong *)(auVar6._0_8_ + 0x18) = puVar2[1];
  }
  return;
}

