
/* v8::internal::Assembler::NEON3DifferentW(v8::internal::VRegister const&, v8::internal::VRegister
   const&, v8::internal::VRegister const&, v8::internal::NEON3DifferentOp) */

void __thiscall
v8::internal::Assembler::NEON3DifferentW
          (Assembler *this,uint *param_1,int *param_2,ulong *param_3,uint param_5)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((long)param_3 + 0xc);
  if (*param_3 >> 0x20 == 0x40) {
    if (iVar1 == 2) {
      uVar2 = 0x800000;
    }
    else if (iVar1 == 8) {
      uVar2 = 0;
    }
    else {
      if (iVar1 != 4) goto LAB_012625f8;
      uVar2 = 0x400000;
    }
  }
  else {
    uVar2 = iVar1 - 2U >> 1 | iVar1 << 0x1f;
    if ((7 < uVar2) || ((0x8bU >> (ulong)(iVar1 - 2U >> 1 & 0x1f) & 1) == 0)) {
LAB_012625f8:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar2 = *(uint *)(&DAT_019f3908 + (long)(int)uVar2 * 4);
  }
  Emit(this,param_5 | (int)*param_3 << 0x10 | uVar2 | *param_2 << 5 | *param_1);
  return;
}

