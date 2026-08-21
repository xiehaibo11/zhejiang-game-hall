
/* std::__ndk1::__get_collation_name(char const*) */

void __thiscall std::__ndk1::__get_collation_name(__ndk1 *this,char *param_1)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *in_x8;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = 0x6f;
  ppuVar4 = &PTR_s_A_018bba3f_0x25_01cddfb0;
  do {
    uVar6 = uVar5 >> 1;
    iVar3 = strcmp(ppuVar4[uVar6 * 2],(char *)this);
    ppuVar1 = ppuVar4 + uVar6 * 2 + 2;
    uVar5 = uVar5 + ~uVar6;
    if (-1 < iVar3) {
      ppuVar1 = ppuVar4;
      uVar5 = uVar6;
    }
    ppuVar4 = ppuVar1;
  } while (uVar5 != 0);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if ((ppuVar1 != &PTR_s_alnum_01cde6a0) && (iVar3 = strcmp((char *)this,*ppuVar1), iVar3 == 0)) {
    uVar2 = *(undefined1 *)(ppuVar1 + 1);
    *(undefined1 *)in_x8 = 2;
    *(undefined1 *)((long)in_x8 + 2) = 0;
    *(undefined1 *)((long)in_x8 + 1) = uVar2;
  }
  return;
}

