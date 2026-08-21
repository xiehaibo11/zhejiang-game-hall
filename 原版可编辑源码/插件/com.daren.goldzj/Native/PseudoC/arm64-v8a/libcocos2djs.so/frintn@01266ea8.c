
/* v8::internal::Assembler::frintn(v8::internal::VRegister const&, v8::internal::VRegister const&)
    */

void __thiscall
v8::internal::Assembler::frintn(Assembler *this,VRegister *param_1,VRegister *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0xc);
  uVar1 = 0x1e244000;
  if (iVar2 != 1) {
    uVar1 = 0xe218800;
  }
  iVar4 = (int)((ulong)*(undefined8 *)param_1 >> 0x20);
  if (iVar2 == 2) {
    uVar3 = 0x40400000;
    if (iVar4 != 0x80) {
      uVar3 = 0;
    }
  }
  else if (iVar2 == 1) {
    uVar3 = (uint)(iVar4 == 0x40) << 0x16;
  }
  else {
    uVar3 = 0x40000000;
  }
  Emit(this,uVar1 | (uint)*(undefined8 *)param_1 | uVar3 | *(int *)param_2 << 5);
  return;
}

