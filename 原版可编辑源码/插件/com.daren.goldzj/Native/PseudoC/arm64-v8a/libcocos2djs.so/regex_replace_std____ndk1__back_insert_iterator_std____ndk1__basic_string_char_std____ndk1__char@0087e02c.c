
/* std::__ndk1::back_insert_iterator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >
   std::__ndk1::regex_replace<std::__ndk1::back_insert_iterator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__wrap_iter<char
   const*>, std::__ndk1::regex_traits<char>,
   char>(std::__ndk1::back_insert_iterator<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__wrap_iter<char
   const*>, std::__ndk1::__wrap_iter<char const*>, std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> > const&, char const*,
   std::__ndk1::regex_constants::match_flag_type) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
std::__ndk1::
regex_replace<std::__ndk1::back_insert_iterator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::regex_traits<char>,char>
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          char *param_2,char *param_3,basic_regex<char,std::__ndk1::regex_traits<char>> *param_4,
          char *param_5,uint param_6)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  size_t sVar4;
  char *local_170;
  char *pcStack_168;
  basic_regex<char,std::__ndk1::regex_traits<char>> *local_160;
  uint local_158;
  void *local_150;
  void *local_148;
  undefined8 uStack_140;
  undefined1 local_128;
  char *local_120;
  char *pcStack_118;
  undefined1 local_110;
  char *local_108;
  char *pcStack_100;
  undefined1 local_f8;
  undefined1 local_f0;
  void *local_e0;
  void *pvStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 local_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined8 local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_148 = (void *)0x0;
  uStack_140 = 0;
  local_150 = (void *)0x0;
  local_128 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_bf = 0;
  uStack_c0 = 0;
  pvStack_d8 = (void *)0x0;
  local_e0 = (void *)0x0;
  uStack_c8 = 0;
  local_c7 = 0;
  uStack_d0 = 0;
  local_170 = param_2;
  pcStack_168 = param_3;
  local_160 = param_4;
  local_158 = param_6;
  basic_regex<char,std::__ndk1::regex_traits<char>>::
  __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
            (param_4,param_2,param_3,&local_e0,param_6);
  match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
  ::__assign<char_const*,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
            ((match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
              *)&local_150,param_2,param_3,&local_e0,param_6 >> 0xb & 1);
  if (local_e0 != (void *)0x0) {
    pvStack_d8 = local_e0;
    operator_delete(local_e0);
  }
  if (local_148 == local_150) {
    if ((param_2 != param_3) && ((param_6 >> 9 & 1) == 0)) {
      do {
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                  (param_1,*param_2);
        param_2 = param_2 + 1;
      } while (param_3 != param_2);
    }
  }
  else {
    sVar4 = strlen(param_5);
    do {
      pcVar3 = pcStack_118;
      pcVar1 = local_120;
      if ((param_6 >> 9 & 1) == 0) {
        for (; pcVar1 != pcVar3; pcVar1 = pcVar1 + 1) {
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (param_1,*pcVar1);
        }
      }
      param_1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
                ::
                format<std::__ndk1::back_insert_iterator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                          ((match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
                            *)&local_150,param_1,param_5,param_5 + sVar4,param_6);
      pcVar3 = pcStack_100;
      pcVar1 = local_108;
    } while (((param_6 >> 10 & 1) == 0) &&
            (regex_iterator<std::__ndk1::__wrap_iter<char_const*>,char,std::__ndk1::regex_traits<char>>
             ::operator++((regex_iterator<std::__ndk1::__wrap_iter<char_const*>,char,std::__ndk1::regex_traits<char>>
                           *)&local_170), local_148 != local_150));
    if ((param_6 >> 9 & 1) == 0) {
      for (; pcVar1 != pcVar3; pcVar1 = pcVar1 + 1) {
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                  (param_1,*pcVar1);
      }
    }
  }
  if (local_150 != (void *)0x0) {
    local_148 = local_150;
    operator_delete(local_150);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

