
/* std::__ndk1::__word_boundary<char, std::__ndk1::regex_traits<char>
   >::__exec(std::__ndk1::__state<char>&) const */

void __thiscall
std::__ndk1::__word_boundary<char,std::__ndk1::regex_traits<char>>::__exec
          (__word_boundary<char,std::__ndk1::regex_traits<char>> *this,__state *param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  __word_boundary<char,std::__ndk1::regex_traits<char>> _Var4;
  char *pcVar5;
  byte bVar6;
  char *pcVar7;
  char *pcVar8;
  
  pcVar5 = *(char **)(param_1 + 8);
  pcVar8 = *(char **)(param_1 + 0x18);
  if (pcVar5 != pcVar8) {
    pcVar7 = *(char **)(param_1 + 0x10);
    if (pcVar7 == pcVar8) {
      if (((byte)param_1[0x58] >> 3 & 1) == 0) {
        cVar1 = pcVar8[-1];
joined_r0x00eaa058:
        if (((long)cVar1 == 0x5f) ||
           ((-1 < cVar1 &&
            ((*(ulong *)(*(long *)(*(long *)(this + 0x18) + 0x10) + (long)cVar1 * 8) & 0x60) != 0)))
           ) {
          _Var4 = (__word_boundary<char,std::__ndk1::regex_traits<char>>)0x1;
          goto LAB_00eaa098;
        }
      }
    }
    else {
      if ((pcVar7 != pcVar5) || ((*(uint *)(param_1 + 0x58) >> 7 & 1) != 0)) {
        cVar2 = pcVar7[-1];
        cVar1 = *pcVar7;
        if (((long)cVar2 == 0x5f) ||
           ((-1 < cVar2 &&
            ((*(ulong *)(*(long *)(*(long *)(this + 0x18) + 0x10) + (long)cVar2 * 8) & 0x60) != 0)))
           ) {
          bVar6 = 1;
          if (cVar1 != '_') goto LAB_00eaa028;
LAB_00eaa090:
          bVar3 = 1;
        }
        else {
          bVar6 = 0;
          if (cVar1 == '_') goto LAB_00eaa090;
LAB_00eaa028:
          if ((-1 < cVar1) &&
             ((*(ulong *)(*(long *)(*(long *)(this + 0x18) + 0x10) + (long)cVar1 * 8) & 0x60) != 0))
          goto LAB_00eaa090;
          bVar3 = 0;
        }
        _Var4 = (__word_boundary<char,std::__ndk1::regex_traits<char>>)(bVar6 ^ bVar3);
        goto LAB_00eaa098;
      }
      if ((*(uint *)(param_1 + 0x58) >> 2 & 1) == 0) {
        cVar1 = *pcVar5;
        goto joined_r0x00eaa058;
      }
    }
  }
  _Var4 = (__word_boundary<char,std::__ndk1::regex_traits<char>>)0x0;
LAB_00eaa098:
  if (_Var4 == this[0x28]) {
    *(undefined4 *)param_1 = 0xfffffc1f;
    *(undefined8 *)(param_1 + 0x50) = 0;
    return;
  }
  *(undefined4 *)param_1 = 0xfffffc1e;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 8);
  return;
}

