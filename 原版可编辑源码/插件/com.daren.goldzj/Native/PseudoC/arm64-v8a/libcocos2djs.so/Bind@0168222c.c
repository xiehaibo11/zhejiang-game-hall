
/* v8::internal::compiler::CodeAssembler::Bind(v8::internal::compiler::CodeAssemblerLabel*) */

void __thiscall
v8::internal::compiler::CodeAssembler::Bind(CodeAssembler *this,CodeAssemblerLabel *param_1)

{
  RawMachineAssembler::Bind
            ((RawMachineAssembler *)**(undefined8 **)(param_1 + 0x10),
             *(RawMachineLabel **)(param_1 + 0x18));
  CodeAssemblerLabel::UpdateVariablesAfterBind(param_1);
  return;
}

