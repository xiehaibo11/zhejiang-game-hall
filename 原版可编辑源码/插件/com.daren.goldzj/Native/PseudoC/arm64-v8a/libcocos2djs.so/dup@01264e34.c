
/* v8::internal::Assembler::dup(v8::internal::VRegister const&, v8::internal::Register const&) */

void __thiscall v8::internal::Assembler::dup(Assembler *this,VRegister *param_1,Register *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 0xc);
  uVar1 = 0xe000c00;
  if (*(int *)(param_1 + 4) != 0x40 || *(int *)(param_1 + 8) != 1) {
    uVar1 = 0x4e000c00;
  }
  if (*(int *)(param_1 + 4) == 0x40) {
    if (iVar2 == 2) {
      uVar4 = 0x800000;
    }
    else if (iVar2 == 8) {
      uVar4 = 0;
    }
    else {
      if (iVar2 != 4) goto LAB_01264f0c;
      uVar4 = 0x400000;
    }
  }
  else {
    uVar3 = iVar2 - 2U >> 1 | iVar2 << 0x1f;
    if ((7 < uVar3) || ((0x8bU >> (ulong)(iVar2 - 2U >> 1 & 0x1f) & 1) == 0)) {
LAB_01264f0c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar4 = *(undefined4 *)(&DAT_019f3908 + (long)(int)uVar3 * 4);
  }
  uVar3 = LaneSizeInBytesLog2FromFormat(uVar4);
  Emit(this,0x10000 << (ulong)(uVar3 & 0x1f) | uVar1 | *(int *)param_2 << 5 | *(uint *)param_1);
  return;
}

