
/* v8::internal::compiler::CodeAssembler::GetJSContextParameter() */

void __thiscall v8::internal::compiler::CodeAssembler::GetJSContextParameter(CodeAssembler *this)

{
  int iVar1;
  RawMachineAssembler *this_00;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  iVar1 = *(int *)(*(long *)(this_00 + 0x68) + 0x18) + 2;
  if (iVar1 != -1) {
    RawMachineAssembler::Parameter(this_00,(long)iVar1);
    return;
  }
  RawMachineAssembler::TargetParameter(this_00);
  return;
}

