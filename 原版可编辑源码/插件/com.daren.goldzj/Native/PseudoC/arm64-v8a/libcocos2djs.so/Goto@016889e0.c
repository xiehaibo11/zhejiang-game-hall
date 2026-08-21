
/* v8::internal::compiler::CodeAssembler::Goto(v8::internal::compiler::CodeAssemblerLabel*) */

void __thiscall
v8::internal::compiler::CodeAssembler::Goto(CodeAssembler *this,CodeAssemblerLabel *param_1)

{
  CodeAssemblerLabel::MergeVariables(param_1);
  RawMachineAssembler::Goto
            ((RawMachineAssembler *)**(undefined8 **)this,*(RawMachineLabel **)(param_1 + 0x18));
  return;
}

