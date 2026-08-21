
/* v8::internal::Assembler::mov(v8::internal::VRegister const&, int, v8::internal::Register const&)
    */

void __thiscall
v8::internal::Assembler::mov(Assembler *this,VRegister *param_1,int param_2,Register *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar2 = (iVar1 >> 3) / *(int *)(param_1 + 0xc);
  }
  if (iVar2 - 1U < 4) {
    uVar4 = *(undefined4 *)(&DAT_019f35b0 + (long)(int)(iVar2 - 1U) * 4);
  }
  else {
    uVar4 = 0x40c00000;
  }
  uVar3 = LaneSizeInBytesLog2FromFormat(uVar4);
  Emit(this,*(uint *)param_1 | *(int *)param_3 << 5 |
            (param_2 << (ulong)(uVar3 + 1 & 0x1f) | 1 << (ulong)(uVar3 & 0x1f)) << 0x10 | 0x4e001c00
      );
  return;
}

