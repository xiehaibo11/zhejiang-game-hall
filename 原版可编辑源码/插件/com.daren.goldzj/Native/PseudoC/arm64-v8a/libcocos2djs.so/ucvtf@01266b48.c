
/* v8::internal::Assembler::ucvtf(v8::internal::VRegister const&, v8::internal::Register const&,
   int) */

void __thiscall
v8::internal::Assembler::ucvtf(Assembler *this,VRegister *param_1,Register *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)*(ulong *)param_2;
  if (param_3 == 0) {
    uVar1 = iVar2 << 5;
    uVar3 = 0x1e230000;
  }
  else {
    uVar1 = param_3 * -0x400 + 0x10000U | iVar2 << 5;
    uVar3 = 0x1e030000;
  }
  Emit(this,uVar1 | (uint)*(ulong *)param_1 |
            (uint)(*(ulong *)param_2 >> 0x20 == 0x40) << 0x1f |
            (uint)(*(ulong *)param_1 >> 0x20 == 0x40) << 0x16 | uVar3);
  return;
}

