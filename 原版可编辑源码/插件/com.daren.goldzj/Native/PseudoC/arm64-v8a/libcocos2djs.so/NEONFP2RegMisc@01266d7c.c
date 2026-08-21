
/* v8::internal::Assembler::NEONFP2RegMisc(v8::internal::VRegister const&, v8::internal::VRegister
   const&, unsigned int) */

void __thiscall
v8::internal::Assembler::NEONFP2RegMisc
          (Assembler *this,VRegister *param_1,VRegister *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)((ulong)*(undefined8 *)param_1 >> 0x20);
  if (*(int *)(param_1 + 0xc) == 2) {
    uVar2 = 0x40400000;
    if (iVar1 != 0x80) {
      uVar2 = 0;
    }
  }
  else if (*(int *)(param_1 + 0xc) == 1) {
    uVar2 = (uint)(iVar1 == 0x40) << 0x16;
  }
  else {
    uVar2 = 0x40000000;
  }
  Emit(this,(uint)*(undefined8 *)param_1 | param_3 | uVar2 | *(int *)param_2 << 5);
  return;
}

