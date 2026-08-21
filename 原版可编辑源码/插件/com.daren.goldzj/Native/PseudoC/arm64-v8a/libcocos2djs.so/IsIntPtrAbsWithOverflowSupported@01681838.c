
/* v8::internal::compiler::CodeAssembler::IsIntPtrAbsWithOverflowSupported() const */

bool __thiscall
v8::internal::compiler::CodeAssembler::IsIntPtrAbsWithOverflowSupported(CodeAssembler *this)

{
  MachineOperatorBuilder *this_00;
  char cVar1;
  
  this_00 = (MachineOperatorBuilder *)(**(long **)this + 0x20);
  if (*(char *)(**(long **)this + 0x30) == '\x05') {
    cVar1 = MachineOperatorBuilder::Int64AbsWithOverflow(this_00);
  }
  else {
    cVar1 = MachineOperatorBuilder::Int32AbsWithOverflow(this_00);
  }
  return cVar1 != '\0';
}

