
/* void JSBClassType::registerClass<cocos2d::ParticleSimulator>(se::Class*) */

void JSBClassType::registerClass<cocos2d::ParticleSimulator>(Class *param_1)

{
  long lVar1;
  char **ppcVar2;
  void *pvVar3;
  ulong extraout_x1;
  Class *local_50;
  Class *pCStack_48;
  void *local_40;
  char local_30;
  long local_28;
  
  ppcVar2 = __jsbClassTypeMap;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_50 = (Class *)0x1946b24;
  pCStack_48 = param_1;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__construct_node<char_const*&,se::Class*&>(__jsbClassTypeMap,&local_50);
  FUN_008a45b8(ppcVar2,local_40);
  pvVar3 = local_40;
  if ((extraout_x1 & 1) == 0) {
    local_40 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      if ((local_30 != '\0') && ((*(byte *)((long)pvVar3 + 0x10) & 1) != 0)) {
        operator_delete(*(void **)((long)pvVar3 + 0x20));
      }
      operator_delete(pvVar3);
    }
  }
  else {
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

