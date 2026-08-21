
/* std::__ndk1::__get_classname(char const*, bool) */

ushort std::__ndk1::__get_classname(char *param_1,bool param_2)

{
  pointer_____offset_0x10___ *ppuVar1;
  ushort uVar2;
  int iVar3;
  pointer_____offset_0x10___ *ppuVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = 0xf;
  ppuVar4 = &PTR_s_alnum_01731060;
  do {
    uVar6 = uVar5 >> 1;
    iVar3 = strcmp(ppuVar4[uVar6 * 2],param_1);
    ppuVar1 = ppuVar4 + uVar6 * 2 + 2;
    uVar5 = uVar5 + ~uVar6;
    if (-1 < iVar3) {
      ppuVar1 = ppuVar4;
      uVar5 = uVar6;
    }
    ppuVar4 = ppuVar1;
  } while (uVar5 != 0);
  if ((ppuVar1 == &regex_error::typeinfo) || (iVar3 = strcmp(param_1,*ppuVar1), iVar3 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(ushort *)(ppuVar1 + 1);
    if (uVar2 == 0x8000) {
      uVar2 = 0x8078;
    }
    else if ((uVar2 & 0x18) != 0 && ((param_2 ^ 0xffU) & 1) == 0) {
      uVar2 = uVar2 | 0x20;
    }
  }
  return uVar2;
}

