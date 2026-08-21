
/* v8::internal::V8NameConverter::InitExternalRefsCache() const */

void __thiscall v8::internal::V8NameConverter::InitExternalRefsCache(V8NameConverter *this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int local_50 [2];
  undefined *local_48;
  
  lVar2 = *(long *)(this + 0x98);
  if (*(int *)(lVar2 + 0x2bb0) != 0) {
    lVar3 = 0;
    do {
      uVar1 = *(long *)(lVar2 + 0x1010 + lVar3 * 8) - lVar2;
      if (uVar1 < 0x8848) {
        local_48 = (&ExternalReferenceTable::ref_name_)[lVar3];
        local_50[0] = (int)uVar1;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<int,char_const*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,char_const*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,char_const*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,char_const*>>>
        ::__emplace_unique_key_args<int,std::__ndk1::pair<int_const,char_const*>>
                  ((__hash_table<std::__ndk1::__hash_value_type<int,char_const*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,char_const*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,char_const*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,char_const*>>>
                    *)(this + 0x140),local_50,(pair *)local_50);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x374);
  }
  return;
}

