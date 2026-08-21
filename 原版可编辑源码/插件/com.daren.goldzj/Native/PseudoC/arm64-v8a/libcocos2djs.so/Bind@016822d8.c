
/* v8::internal::compiler::CodeAssemblerLabel::Bind() */

void __thiscall v8::internal::compiler::CodeAssemblerLabel::Bind(CodeAssemblerLabel *this)

{
  RawMachineAssembler::Bind
            ((RawMachineAssembler *)**(undefined8 **)(this + 0x10),
             *(RawMachineLabel **)(this + 0x18));
  UpdateVariablesAfterBind(this);
  return;
}

