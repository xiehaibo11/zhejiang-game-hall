
/* std::__ndk1::__back_ref_collate<char, std::__ndk1::regex_traits<char>
   >::__exec(std::__ndk1::__state<char>&) const */

void __thiscall
std::__ndk1::__back_ref_collate<char,std::__ndk1::regex_traits<char>>::__exec
          (__back_ref_collate<char,std::__ndk1::regex_traits<char>> *this,__state *param_1)

{
  char *pcVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  
  if (*(char *)(*(long *)(param_1 + 0x20) + (ulong)(*(int *)(this + 0x28) - 1) * 0x18 + 0x10) !=
      '\0') {
    plVar2 = (long *)(*(long *)(param_1 + 0x20) + (ulong)(*(int *)(this + 0x28) - 1) * 0x18);
    pcVar3 = (char *)*plVar2;
    pcVar1 = *(char **)(param_1 + 0x10);
    lVar4 = plVar2[1] - (long)pcVar3;
    if (lVar4 <= *(long *)(param_1 + 0x18) - (long)pcVar1) {
      pcVar5 = pcVar1;
      lVar6 = lVar4;
      if (0 < lVar4) {
        do {
          if (*pcVar3 != *pcVar5) goto LAB_00eac1c8;
          lVar6 = lVar6 + -1;
          pcVar3 = pcVar3 + 1;
          pcVar5 = pcVar5 + 1;
        } while (lVar6 != 0);
      }
      *(undefined4 *)param_1 = 0xfffffc1e;
      *(char **)(param_1 + 0x10) = pcVar1 + lVar4;
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 8);
      return;
    }
  }
LAB_00eac1c8:
  *(undefined4 *)param_1 = 0xfffffc1f;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}

