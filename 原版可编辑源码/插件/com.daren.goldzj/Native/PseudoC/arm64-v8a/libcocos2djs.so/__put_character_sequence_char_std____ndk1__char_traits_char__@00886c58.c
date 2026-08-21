
/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&
   std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char>
   >(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&, char const*, unsigned long)
    */

basic_ostream *
std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
          (basic_ostream *param_1,char *param_2,ulong param_3)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  sentry local_70 [8];
  basic_ostream *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_70[0] = (sentry)0x0;
  plVar7 = (long *)(*(long *)param_1 + -0x18);
  local_68 = param_1;
  if (*(int *)(param_1 + *plVar7 + 0x20) == 0) {
    if (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(param_1 + *plVar7 + 0x88) !=
        (basic_ostream<char,std::__ndk1::char_traits<char>> *)0x0) {
      basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)(param_1 + *plVar7 + 0x88))
      ;
      plVar7 = (long *)(*(long *)param_1 + -0x18);
    }
    local_70[0] = (sentry)0x1;
    pbVar1 = param_1 + *plVar7;
    uVar8 = *(undefined8 *)(pbVar1 + 0x28);
    uVar3 = *(uint *)(pbVar1 + 8);
    if (*(int *)(pbVar1 + 0x90) == -1) {
      ios_base::getloc();
      plVar7 = (long *)locale::use_facet(alStack_60,(id *)&ctype<char>::id);
      cVar5 = (**(code **)(*plVar7 + 0x38))(plVar7,0x20);
      locale::~locale(alStack_60);
      *(int *)(pbVar1 + 0x90) = (int)cVar5;
    }
    pcVar2 = param_2 + param_3;
    if ((uVar3 & 0xb0) != 0x20) {
      pcVar2 = param_2;
    }
    lVar6 = FUN_00886dfc(uVar8,param_2,pcVar2,param_2 + param_3,pbVar1);
    if (lVar6 == 0) {
      ios_base::clear((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)),
                      *(uint *)((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + 0x20)
                      | 5);
    }
  }
  basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(local_70);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

