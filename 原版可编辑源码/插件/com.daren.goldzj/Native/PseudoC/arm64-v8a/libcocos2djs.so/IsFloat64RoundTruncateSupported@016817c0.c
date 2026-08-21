
/* v8::internal::compiler::CodeAssembler::IsFloat64RoundTruncateSupported() const */

bool __thiscall
v8::internal::compiler::CodeAssembler::IsFloat64RoundTruncateSupported(CodeAssembler *this)

{
  char cVar1;
  
  cVar1 = MachineOperatorBuilder::Float64RoundTruncate
                    ((MachineOperatorBuilder *)(**(long **)this + 0x20));
  return cVar1 != '\0';
}

