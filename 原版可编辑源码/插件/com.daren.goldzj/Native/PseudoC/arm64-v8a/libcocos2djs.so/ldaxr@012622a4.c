
/* v8::internal::Assembler::ldaxr(v8::internal::Register const&, v8::internal::Register const&) */

void __thiscall v8::internal::Assembler::ldaxr(Assembler *this,Register *param_1,Register *param_2)

{
  uint uVar1;
  
  uVar1 = 0x885ffc00;
  if (*(int *)(param_1 + 4) != 0x20) {
    uVar1 = 0xc85ffc00;
  }
  Emit(this,uVar1 | *(uint *)param_1 | (*(uint *)param_2 & 0x1f) << 5);
  return;
}

