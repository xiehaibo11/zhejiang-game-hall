
/* v8::internal::Assembler::fcvtzs(v8::internal::Register const&, v8::internal::VRegister const&,
   int) */

void __thiscall
v8::internal::Assembler::fcvtzs(Assembler *this,Register *param_1,VRegister *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (uint)*(ulong *)param_1;
  iVar2 = (int)*(ulong *)param_2;
  if (param_3 == 0) {
    uVar1 = uVar1 | iVar2 << 5;
    uVar3 = 0x1e380000;
  }
  else {
    uVar1 = param_3 * -0x400 + 0x10000U | uVar1 | iVar2 << 5;
    uVar3 = 0x1e180000;
  }
  Emit(this,uVar1 | (uint)(*(ulong *)param_1 >> 0x20 == 0x40) << 0x1f |
                    (uint)(*(ulong *)param_2 >> 0x20 == 0x40) << 0x16 | uVar3);
  return;
}

