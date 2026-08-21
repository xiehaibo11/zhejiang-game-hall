
/* v8::internal::Assembler::not_(v8::internal::VRegister const&, v8::internal::VRegister const&) */

void __thiscall v8::internal::Assembler::not_(Assembler *this,VRegister *param_1,VRegister *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(ulong *)param_1 >> 0x20 == 0x40) {
    if (iVar1 == 2) {
      uVar2 = 0x800000;
    }
    else if (iVar1 == 8) {
      uVar2 = 0;
    }
    else {
      if (iVar1 != 4) goto LAB_01268f84;
      uVar2 = 0x400000;
    }
  }
  else {
    uVar2 = iVar1 - 2U >> 1 | iVar1 << 0x1f;
    if ((7 < uVar2) || ((0x8bU >> (ulong)(iVar1 - 2U >> 1 & 0x1f) & 1) == 0)) {
LAB_01268f84:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar2 = *(uint *)(&DAT_019f3908 + (long)(int)uVar2 * 4);
  }
  Emit(this,uVar2 | (uint)*(ulong *)param_1 | *(int *)param_2 << 5 | 0x2e205800);
  return;
}

