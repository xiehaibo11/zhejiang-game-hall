
/* v8::internal::RegExpBytecodeGenerator::Bind(v8::internal::Label*) */

void __thiscall
v8::internal::RegExpBytecodeGenerator::Bind(RegExpBytecodeGenerator *this,Label *param_1)

{
  int iVar1;
  int local_24;
  
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  local_24 = *(int *)param_1 + -1;
  if ((0 < *(int *)param_1) && (local_24 != 0)) {
    do {
      iVar1 = *(int *)(*(long *)(this + 0x28) + (long)local_24);
      *(undefined4 *)(*(long *)(this + 0x28) + (long)local_24) = *(undefined4 *)(this + 0x38);
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
      ::__emplace_unique_key_args<int,int&,int&>
                ((__hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
                  *)(this + 0x50),&local_24,&local_24,(int *)(this + 0x38));
      local_24 = iVar1;
    } while (iVar1 != 0);
  }
  *(uint *)param_1 = ~*(uint *)(this + 0x38);
  return;
}

