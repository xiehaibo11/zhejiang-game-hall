
/* v8::internal::wasm::JumpTableAssembler::~JumpTableAssembler() */

void __thiscall
v8::internal::wasm::JumpTableAssembler::~JumpTableAssembler(JumpTableAssembler *this)

{
  void *extraout_x1;
  
  Assembler::~Assembler((Assembler *)this);
  Malloced::operator_delete((Malloced *)this,extraout_x1);
  return;
}

