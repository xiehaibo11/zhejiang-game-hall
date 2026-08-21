
/* v8::internal::compiler::CodeAssembler::IsInt64AbsWithOverflowSupported() const */

bool __thiscall
v8::internal::compiler::CodeAssembler::IsInt64AbsWithOverflowSupported(CodeAssembler *this)

{
  char cVar1;
  
  cVar1 = MachineOperatorBuilder::Int64AbsWithOverflow
                    ((MachineOperatorBuilder *)(**(long **)this + 0x20));
  return cVar1 != '\0';
}

