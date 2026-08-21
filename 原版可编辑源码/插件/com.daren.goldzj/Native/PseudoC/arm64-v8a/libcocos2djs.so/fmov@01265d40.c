
/* v8::internal::Assembler::fmov(v8::internal::VRegister const&, float) */

void __thiscall v8::internal::Assembler::fmov(Assembler *this,VRegister *param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar3 = (ushort)((ulong)(double)param_2 >> 0x30);
  uVar1 = (uint)((ulong)(double)param_2 >> 0x20);
  if (*(int *)(param_1 + 0xc) == 1) {
    Emit(this,*(uint *)param_1 | (uVar1 >> 0x17 & 0x40 | (uVar1 >> 0x1f) << 7 | uVar3 & 0x3f) << 0xd
              | 0x1e201000);
    return;
  }
  uVar2 = uVar1 >> 0x17 & 0x40 | (uVar1 >> 0x1f) << 7 | uVar3 & 0x3f;
  uVar1 = 0x4f000400;
  if (*(int *)(param_1 + 4) != 0x80 || *(int *)(param_1 + 0xc) != 4) {
    uVar1 = 0xf000400;
  }
  Emit(this,(uVar2 << 5 | uVar2 << 0xb) & 0x703e0 | *(uint *)param_1 | uVar1 | 0xf000);
  return;
}

