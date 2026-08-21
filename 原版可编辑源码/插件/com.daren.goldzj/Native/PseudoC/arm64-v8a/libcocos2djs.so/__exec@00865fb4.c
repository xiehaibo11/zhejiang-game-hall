
/* std::__ndk1::__back_ref_icase<char, std::__ndk1::regex_traits<char>
   >::__exec(std::__ndk1::__state<char>&) const */

void __thiscall
std::__ndk1::__back_ref_icase<char,std::__ndk1::regex_traits<char>>::__exec
          (__back_ref_icase<char,std::__ndk1::regex_traits<char>> *this,__state *param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = (long *)(*(long *)(param_1 + 0x20) + (ulong)(*(int *)(this + 0x28) - 1) * 0x18);
  if ((char)plVar4[2] != '\0') {
    lVar3 = *plVar4;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar5 = *(long *)(*(long *)(param_1 + 0x20) + (ulong)(*(int *)(this + 0x28) - 1) * 0x18 + 8) -
            lVar3;
    if (lVar5 <= *(long *)(param_1 + 0x18) - lVar6) {
      if (lVar5 < 1) {
LAB_00866070:
        *(undefined4 *)param_1 = 0xfffffc1e;
        *(long *)(param_1 + 0x10) = lVar6 + lVar5;
        *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 8);
        return;
      }
      lVar6 = 0;
      while( true ) {
        cVar1 = (**(code **)(**(long **)(this + 0x18) + 0x28))
                          (*(long **)(this + 0x18),*(undefined1 *)(lVar3 + lVar6));
        cVar2 = (**(code **)(**(long **)(this + 0x18) + 0x28))
                          (*(long **)(this + 0x18),
                           *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar6));
        if (cVar1 != cVar2) break;
        lVar6 = lVar6 + 1;
        if (lVar5 <= lVar6) {
          lVar6 = *(long *)(param_1 + 0x10);
          goto LAB_00866070;
        }
        lVar3 = *plVar4;
      }
    }
  }
  *(undefined4 *)param_1 = 0xfffffc1f;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}

