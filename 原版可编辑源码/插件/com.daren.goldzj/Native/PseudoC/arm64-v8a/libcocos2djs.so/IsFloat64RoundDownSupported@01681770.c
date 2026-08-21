
/* v8::internal::compiler::CodeAssembler::IsFloat64RoundDownSupported() const */

bool __thiscall
v8::internal::compiler::CodeAssembler::IsFloat64RoundDownSupported(CodeAssembler *this)

{
  char cVar1;
  
  cVar1 = MachineOperatorBuilder::Float64RoundDown
                    ((MachineOperatorBuilder *)(**(long **)this + 0x20));
  return cVar1 != '\0';
}

