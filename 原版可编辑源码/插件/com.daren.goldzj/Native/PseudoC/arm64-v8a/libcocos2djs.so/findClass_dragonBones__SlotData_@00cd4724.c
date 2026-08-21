
/* se::Class* JSBClassType::findClass<dragonBones::SlotData>(dragonBones::SlotData const*) */

Class * JSBClassType::findClass<dragonBones::SlotData>(SlotData *param_1)

{
  long lVar1;
  size_t sVar2;
  long lVar3;
  Class *pCVar4;
  char *__s;
  void *__dest;
  ulong uVar5;
  ulong local_60;
  size_t local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 == (SlotData *)0x0) {
    __cxa_bad_typeid();
LAB_00cd4868:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __s = *(char **)(*(long *)(*(long *)param_1 + -8) + 8);
  local_60 = 0;
  local_58 = 0;
  local_50 = (void *)0x0;
  sVar2 = strlen(__s);
  if (0xffffffffffffffef < sVar2) goto LAB_00cd4868;
  if (sVar2 < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)sVar2 << 1));
    if (sVar2 != 0) goto LAB_00cd47b4;
  }
  else {
    uVar5 = sVar2 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    local_60 = uVar5 | 1;
    local_58 = sVar2;
    local_50 = __dest;
LAB_00cd47b4:
    memcpy(__dest,__s,sVar2);
  }
  *(undefined1 *)((long)__dest + sVar2) = 0;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    (__jsbClassTypeMap,(basic_string *)&local_60);
  if (lVar3 == 0) {
    sVar2 = strlen("N11dragonBones8SlotDataE");
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_60,"N11dragonBones8SlotDataE",sVar2);
    lVar3 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      (__jsbClassTypeMap,(basic_string *)&local_60);
    if (lVar3 == 0) {
      pCVar4 = (Class *)0x0;
      goto joined_r0x00cd481c;
    }
  }
  pCVar4 = *(Class **)(lVar3 + 0x28);
joined_r0x00cd481c:
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pCVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

