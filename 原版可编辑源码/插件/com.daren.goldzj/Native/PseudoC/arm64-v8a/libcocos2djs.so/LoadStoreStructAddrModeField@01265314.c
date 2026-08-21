
/* v8::internal::Assembler::LoadStoreStructAddrModeField(v8::internal::MemOperand const&) */

uint __thiscall
v8::internal::Assembler::LoadStoreStructAddrModeField(Assembler *this,MemOperand *param_1)

{
  uint uVar1;
  
  uVar1 = (*(uint *)param_1 & 0x1f) << 5;
  if (*(int *)(param_1 + 0x20) == 2) {
    if (*(long *)(param_1 + 0x18) == 0) {
      return uVar1 | *(int *)(param_1 + 0xc) << 0x10 | 0x800000;
    }
    uVar1 = uVar1 | 0x9f0000;
  }
  return uVar1;
}

