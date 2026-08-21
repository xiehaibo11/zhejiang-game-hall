
/* v8::internal::Assembler::ushr(v8::internal::VRegister const&, v8::internal::VRegister const&,
   int) */

void __thiscall
v8::internal::Assembler::ushr(Assembler *this,VRegister *param_1,VRegister *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_2 + 4);
  iVar3 = *(int *)(param_2 + 0xc);
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = (iVar1 >> 3) / iVar3;
  }
  if (iVar3 == 1) {
    uVar5 = 0x40000000;
    uVar4 = 0x10000000;
  }
  else if (*(int *)(param_1 + 8) == 1) {
    uVar4 = 0;
    uVar5 = (uint)(*(int *)(param_1 + 4) != 0x40) << 0x1e;
  }
  else {
    uVar4 = 0;
    uVar5 = 0x40000000;
  }
  Emit(this,(iVar2 * 0x10 - param_3) * 0x10000 | uVar4 | uVar5 | *(int *)param_2 << 5 |
            *(uint *)param_1 | 0x2f000400);
  return;
}

