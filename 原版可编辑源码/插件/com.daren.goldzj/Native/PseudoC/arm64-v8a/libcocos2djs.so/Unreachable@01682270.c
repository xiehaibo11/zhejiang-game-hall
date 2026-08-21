
/* v8::internal::compiler::CodeAssembler::Unreachable() */

void __thiscall v8::internal::compiler::CodeAssembler::Unreachable(CodeAssembler *this)

{
  RawMachineAssembler::DebugBreak((RawMachineAssembler *)**(undefined8 **)this);
  RawMachineAssembler::Unreachable((RawMachineAssembler *)**(undefined8 **)this);
  return;
}

