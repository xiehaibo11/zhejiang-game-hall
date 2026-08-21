
/* se::NativePtrToObjectMap::erase(std::__ndk1::__hash_map_iterator<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<void*,
   se::Object*>, void*>*> >) */

undefined8 se::NativePtrToObjectMap::erase(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *local_40 [3];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = *param_1;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<void*,se::Object*>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,se::Object*>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,se::Object*>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,se::Object*>>>
  ::remove(local_40,__nativePtrToObjectMap);
  pvVar2 = local_40[0];
  local_40[0] = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

