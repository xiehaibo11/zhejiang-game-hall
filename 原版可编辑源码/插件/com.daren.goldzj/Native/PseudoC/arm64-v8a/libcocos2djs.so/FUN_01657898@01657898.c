
void FUN_01657898(basic_ostream *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  size_t sVar6;
  int iVar7;
  char local_8c [4];
  char local_88 [32];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"     ",5);
  plVar2 = (long *)param_2[1];
  for (param_2 = (long *)*param_2; param_2 != plVar2; param_2 = param_2 + 1) {
    uVar3 = (*(int *)(*param_2 + 0x74) - *(int *)(*param_2 + 0x70)) * 4;
    uVar1 = uVar3;
    if (0x1f < (int)uVar3) {
      uVar1 = 0x20;
    }
    uVar5 = FUN_01657698(local_88);
    sVar6 = strlen(local_88);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,local_88,sVar6);
    if ((int)uVar5 <= (int)uVar1) {
      uVar1 = uVar5;
    }
    if (0 < (int)(uVar3 + ~uVar1)) {
      iVar7 = 0;
      do {
        local_8c[0] = '-';
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,local_8c,1);
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)(uVar3 + ~uVar1));
    }
    local_8c[0] = ']';
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,local_8c,1);
  }
  local_88[0] = '\n';
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,local_88,1);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

