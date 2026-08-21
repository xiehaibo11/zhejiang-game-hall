
/* v8::internal::Assembler::shll(v8::internal::VRegister const&, v8::internal::VRegister const&,
   int) */

void v8::internal::Assembler::shll(VRegister *param_1,VRegister *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = *(ulong *)(ulong)(uint)param_3;
  iVar1 = *(int *)((long)(ulong)(uint)param_3 + 0xc);
  if (uVar2 >> 0x20 == 0x40) {
    if (iVar1 == 2) {
      uVar3 = 0x800000;
    }
    else if (iVar1 == 8) {
      uVar3 = 0;
    }
    else {
      if (iVar1 != 4) goto LAB_0126730c;
      uVar3 = 0x400000;
    }
  }
  else {
    uVar3 = iVar1 - 2U >> 1 | iVar1 << 0x1f;
    if ((7 < uVar3) || ((0x8bU >> (ulong)(iVar1 - 2U >> 1 & 0x1f) & 1) == 0)) {
LAB_0126730c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar3 = *(uint *)(&DAT_019f3908 + (long)(int)uVar3 * 4);
  }
  Emit((Assembler *)param_1,uVar3 | (int)uVar2 << 5 | *(uint *)param_2 | 0x2e213800);
  return;
}

