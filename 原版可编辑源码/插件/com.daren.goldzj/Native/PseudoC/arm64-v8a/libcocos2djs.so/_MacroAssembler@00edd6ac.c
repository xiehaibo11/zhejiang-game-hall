
/* v8::internal::MacroAssembler::~MacroAssembler() */

void __thiscall v8::internal::MacroAssembler::~MacroAssembler(MacroAssembler *this)

{
  void *extraout_x1;
  
  Assembler::~Assembler((Assembler *)this);
  Malloced::operator_delete((Malloced *)this,extraout_x1);
  return;
}

