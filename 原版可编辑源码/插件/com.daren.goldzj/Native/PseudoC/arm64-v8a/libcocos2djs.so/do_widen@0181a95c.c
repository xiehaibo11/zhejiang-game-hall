
/* std::__ndk1::ctype<char>::do_widen(char const*, char const*, char*) const */

char * __thiscall
std::__ndk1::ctype<char>::do_widen(ctype<char> *this,char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  pcVar3 = param_1;
  if (param_1 != param_2) {
    uVar4 = (long)param_2 - (long)param_1;
    if ((0x1f < uVar4) && ((param_2 <= param_3 || (param_3 + uVar4 <= param_1)))) {
      uVar5 = uVar4 & 0xffffffffffffffe0;
      pcVar3 = param_1 + 0x10;
      param_1 = param_1 + uVar5;
      pcVar2 = param_3 + 0x10;
      uVar6 = uVar5;
      do {
        pcVar1 = pcVar3 + -8;
        uVar7 = *(undefined8 *)(pcVar3 + -0x10);
        uVar9 = *(undefined8 *)(pcVar3 + 8);
        uVar8 = *(undefined8 *)pcVar3;
        pcVar3 = pcVar3 + 0x20;
        uVar6 = uVar6 - 0x20;
        *(undefined8 *)(pcVar2 + -8) = *(undefined8 *)pcVar1;
        *(undefined8 *)(pcVar2 + -0x10) = uVar7;
        *(undefined8 *)(pcVar2 + 8) = uVar9;
        *(undefined8 *)pcVar2 = uVar8;
        pcVar2 = pcVar2 + 0x20;
      } while (uVar6 != 0);
      param_3 = param_3 + uVar5;
      if (uVar4 == uVar5) {
        return param_2;
      }
    }
    do {
      pcVar2 = param_1 + 1;
      *param_3 = *param_1;
      param_1 = pcVar2;
      pcVar3 = param_2;
      param_3 = param_3 + 1;
    } while (param_2 != pcVar2);
  }
  return pcVar3;
}

