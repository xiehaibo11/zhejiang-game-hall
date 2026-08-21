
/* std::__ndk1::__back_ref_collate<char, std::__ndk1::regex_traits<char>
   >::__exec(std::__ndk1::__state<char>&) const */

void __thiscall
std::__ndk1::__back_ref_collate<char,std::__ndk1::regex_traits<char>>::__exec
          (__back_ref_collate<char,std::__ndk1::regex_traits<char>> *this,__state *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (*(char *)(*(long *)(param_1 + 0x20) + (ulong)(*(int *)(this + 0x28) - 1) * 0x18 + 0x10) !=
      '\0') {
    plVar3 = (long *)(*(long *)(param_1 + 0x20) + (ulong)(*(int *)(this + 0x28) - 1) * 0x18);
    lVar1 = *plVar3;
    lVar2 = *(long *)(param_1 + 0x10);
    lVar4 = plVar3[1] - lVar1;
    if (lVar4 <= *(long *)(param_1 + 0x18) - lVar2) {
      if (0 < lVar4) {
        lVar5 = 0;
        do {
          if (*(char *)(lVar1 + lVar5) != *(char *)(lVar2 + lVar5)) goto LAB_008661e0;
          lVar5 = lVar5 + 1;
        } while (lVar5 < lVar4);
      }
      *(undefined4 *)param_1 = 0xfffffc1e;
      *(long *)(param_1 + 0x10) = lVar2 + lVar4;
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 8);
      return;
    }
  }
LAB_008661e0:
  *(undefined4 *)param_1 = 0xfffffc1f;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}

