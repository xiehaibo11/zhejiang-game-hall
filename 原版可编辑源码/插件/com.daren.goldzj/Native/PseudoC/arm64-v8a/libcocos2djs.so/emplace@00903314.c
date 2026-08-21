
/* se::NonRefNativePtrCreatedByCtorMap::emplace(void*) */

void se::NonRefNativePtrCreatedByCtorMap::emplace(void *param_1)

{
  long lVar1;
  bool local_34 [4];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_34[0] = true;
  local_30 = param_1;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<void*,bool>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,bool>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,bool>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,bool>>>
  ::__emplace_unique_key_args<void*,void*&,bool>
            (__nonRefNativeObjectCreatedByCtorMap,&local_30,&local_30,local_34);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

