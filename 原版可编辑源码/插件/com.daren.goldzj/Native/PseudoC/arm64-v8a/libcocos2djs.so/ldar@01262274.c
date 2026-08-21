
/* v8::internal::Assembler::ldar(v8::internal::Register const&, v8::internal::Register const&) */

void __thiscall v8::internal::Assembler::ldar(Assembler *this,Register *param_1,Register *param_2)

{
  uint uVar1;
  
  uVar1 = 0x88dffc00;
  if (*(int *)(param_1 + 4) != 0x20) {
    uVar1 = 0xc8dffc00;
  }
  Emit(this,uVar1 | *(uint *)param_1 | (*(uint *)param_2 & 0x1f) << 5);
  return;
}

