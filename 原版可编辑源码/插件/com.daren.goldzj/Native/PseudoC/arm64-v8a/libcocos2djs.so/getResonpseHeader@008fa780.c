
/* XMLHttpRequest::getResonpseHeader(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void XMLHttpRequest::getResonpseHeader(basic_string *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong *in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  char *pcVar4;
  ulong uVar5;
  char *pcVar6;
  void *__src;
  char *pcVar7;
  ulong uVar8;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  uStack_68 = 0;
  local_60 = (char *)0x0;
  local_70 = 0;
  if ((*in_x1 & 1) == 0) {
    local_60 = (char *)in_x1[2];
    uStack_68 = in_x1[1];
    local_70 = *in_x1;
    if ((local_70 & 1) == 0) goto LAB_008fa7e0;
LAB_008fa864:
    pcVar7 = local_60 + uStack_68;
    pcVar4 = local_60;
    if (local_60 == pcVar7) goto LAB_008fa888;
  }
  else {
    uVar5 = in_x1[1];
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    __src = (void *)in_x1[2];
    if (uVar5 < 0x17) {
      pcVar7 = (char *)((ulong)&local_70 | 1);
      local_70 = (ulong)(byte)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_008fa848;
    }
    else {
      uVar8 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pcVar7 = operator_new(uVar8);
      local_70 = uVar8 | 1;
      uStack_68 = uVar5;
      local_60 = pcVar7;
LAB_008fa848:
      memcpy(pcVar7,__src,uVar5);
    }
    pcVar7[uVar5] = '\0';
    if ((local_70 & 1) != 0) goto LAB_008fa864;
LAB_008fa7e0:
    pcVar4 = (char *)((ulong)&local_70 | 1);
    pcVar7 = pcVar4 + ((byte)local_70._0_1_ >> 1);
    if (pcVar4 == pcVar7) goto LAB_008fa888;
  }
  do {
    iVar2 = tolower((int)*pcVar4);
    pcVar6 = pcVar4 + 1;
    *pcVar4 = (char)iVar2;
    pcVar4 = pcVar6;
  } while (pcVar7 != pcVar6);
LAB_008fa888:
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                      *)(param_1 + 0x160),(basic_string *)&local_70);
  if ((lVar3 != 0) &&
     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (lVar3 + 0x28) != in_x8)) {
    uVar5 = *(ulong *)(lVar3 + 0x30);
    pcVar7 = *(char **)(lVar3 + 0x38);
    if ((*(byte *)(lVar3 + 0x28) & 1) == 0) {
      pcVar7 = (char *)(lVar3 + 0x29);
      uVar5 = (ulong)(*(byte *)(lVar3 + 0x28) >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(in_x8,pcVar7,uVar5);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

