
/* v8::internal::compiler::CodeAssembler::Parameter(int) */

void __thiscall v8::internal::compiler::CodeAssembler::Parameter(CodeAssembler *this,int param_1)

{
  if (param_1 != -1) {
    RawMachineAssembler::Parameter((RawMachineAssembler *)**(undefined8 **)this,(long)param_1);
    return;
  }
  RawMachineAssembler::TargetParameter((RawMachineAssembler *)**(undefined8 **)this);
  return;
}

