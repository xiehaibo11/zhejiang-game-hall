
/* v8::internal::compiler::CodeAssembler::IsFloat64RoundTiesEvenSupported() const */

bool __thiscall
v8::internal::compiler::CodeAssembler::IsFloat64RoundTiesEvenSupported(CodeAssembler *this)

{
  char cVar1;
  
  cVar1 = MachineOperatorBuilder::Float64RoundTiesEven
                    ((MachineOperatorBuilder *)(**(long **)this + 0x20));
  return cVar1 != '\0';
}

