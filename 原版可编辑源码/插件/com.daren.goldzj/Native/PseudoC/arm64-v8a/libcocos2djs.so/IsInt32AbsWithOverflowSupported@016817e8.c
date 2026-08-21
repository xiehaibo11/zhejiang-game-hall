
/* v8::internal::compiler::CodeAssembler::IsInt32AbsWithOverflowSupported() const */

bool __thiscall
v8::internal::compiler::CodeAssembler::IsInt32AbsWithOverflowSupported(CodeAssembler *this)

{
  char cVar1;
  
  cVar1 = MachineOperatorBuilder::Int32AbsWithOverflow
                    ((MachineOperatorBuilder *)(**(long **)this + 0x20));
  return cVar1 != '\0';
}

