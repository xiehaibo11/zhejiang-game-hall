
/* v8::internal::compiler::CodeAssembler::IsFloat64RoundUpSupported() const */

bool __thiscall
v8::internal::compiler::CodeAssembler::IsFloat64RoundUpSupported(CodeAssembler *this)

{
  char cVar1;
  
  cVar1 = MachineOperatorBuilder::Float64RoundUp((MachineOperatorBuilder *)(**(long **)this + 0x20))
  ;
  return cVar1 != '\0';
}

