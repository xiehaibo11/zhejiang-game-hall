
/* v8::internal::Assembler::NEONAcrossLanes(v8::internal::VRegister const&, v8::internal::VRegister
   const&, v8::internal::NEONAcrossLanesOp) */

void __thiscall
v8::internal::Assembler::NEONAcrossLanes(Assembler *this,uint *param_1,ulong *param_2,uint param_4)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *param_2;
  iVar4 = (int)(param_2[1] >> 0x20);
  if ((param_4 & 0x9f3ecc00) == 0xe30c800) {
    iVar2 = (int)(uVar1 >> 0x20);
    if (iVar4 == 2) {
      uVar3 = 0x40400000;
      if (iVar2 != 0x80) {
        uVar3 = 0;
      }
    }
    else if (iVar4 == 1) {
      uVar3 = (uint)(iVar2 == 0x40) << 0x16;
    }
    else {
      uVar3 = 0x40000000;
    }
  }
  else if (uVar1 >> 0x20 == 0x40) {
    if (iVar4 == 2) {
      uVar3 = 0x800000;
    }
    else if (iVar4 == 8) {
      uVar3 = 0;
    }
    else {
      if (iVar4 != 4) goto LAB_012649f8;
      uVar3 = 0x400000;
    }
  }
  else {
    uVar3 = iVar4 - 2U >> 1 | iVar4 << 0x1f;
    if ((7 < uVar3) || ((0x8bU >> (ulong)(iVar4 - 2U >> 1 & 0x1f) & 1) == 0)) {
LAB_012649f8:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar3 = *(uint *)(&DAT_019f3908 + (long)(int)uVar3 * 4);
  }
  Emit(this,param_4 | (int)uVar1 << 5 | uVar3 | *param_1);
  return;
}

