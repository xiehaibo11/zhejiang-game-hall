
/* v8::internal::Assembler::fmov(v8::internal::VRegister const&, double) */

void __thiscall v8::internal::Assembler::fmov(Assembler *this,VRegister *param_1,double param_2)

{
  uint uVar1;
  ushort uVar2;
  
  uVar2 = (ushort)((ulong)param_2 >> 0x30);
  uVar1 = (uint)((ulong)param_2 >> 0x20);
  if (*(int *)(param_1 + 0xc) == 1) {
    Emit(this,*(uint *)param_1 | (uVar1 >> 0x17 & 0x40 | (uVar1 >> 0x1f) << 7 | uVar2 & 0x3f) << 0xd
              | 0x1e601000);
    return;
  }
  uVar1 = uVar1 >> 0x17 & 0x40 | (uVar1 >> 0x1f) << 7 | uVar2 & 0x3f;
  Emit(this,(uVar1 << 5 | uVar1 << 0xb) & 0x703e0 | *(uint *)param_1 | 0x6f00f400);
  return;
}

