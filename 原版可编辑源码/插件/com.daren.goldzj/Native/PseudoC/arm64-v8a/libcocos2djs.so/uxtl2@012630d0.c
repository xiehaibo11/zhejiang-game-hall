
/* v8::internal::Assembler::uxtl2(v8::internal::VRegister const&, v8::internal::VRegister const&) */

void __thiscall
v8::internal::Assembler::uxtl2(Assembler *this,VRegister *param_1,VRegister *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar3 = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar3 = (iVar1 >> 3) / *(int *)(param_2 + 0xc);
  }
  uVar4 = 0;
  if (*(int *)(param_2 + 8) != 1 || iVar2 != 0x40) {
    uVar4 = 0x40000000;
  }
  Emit(this,uVar4 | iVar3 << 0x13 | *(int *)param_2 << 5 | *(uint *)param_1 | 0x2f00a400);
  return;
}

