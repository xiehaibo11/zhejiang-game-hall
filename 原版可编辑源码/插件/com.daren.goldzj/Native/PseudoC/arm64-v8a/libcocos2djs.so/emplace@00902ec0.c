
/* se::NativePtrToObjectMap::emplace(void*, se::Object*) */

void se::NativePtrToObjectMap::emplace(void *param_1,Object *param_2)

{
  long lVar1;
  Object *local_38;
  void *pvStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_2;
  pvStack_30 = param_1;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<void*,se::Object*>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,se::Object*>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,se::Object*>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,se::Object*>>>
  ::__emplace_unique_key_args<void*,void*&,se::Object*&>
            (__nativePtrToObjectMap,&pvStack_30,&pvStack_30,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

