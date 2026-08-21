
/* v8::internal::wasm::JumpTableAssembler::NopBytes(int) */

void __thiscall
v8::internal::wasm::JumpTableAssembler::NopBytes(JumpTableAssembler *this,int param_1)

{
  for (; 0 < param_1; param_1 = param_1 + -4) {
    Assembler::hint((Assembler *)this,0);
  }
  return;
}

