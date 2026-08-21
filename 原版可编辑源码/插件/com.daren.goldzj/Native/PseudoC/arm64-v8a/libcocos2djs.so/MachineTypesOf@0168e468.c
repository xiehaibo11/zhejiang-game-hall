
/* v8::internal::compiler::MachineTypesOf(v8::internal::compiler::Operator const*) */

undefined8 v8::internal::compiler::MachineTypesOf(Operator *param_1)

{
  Operator *pOVar1;
  
  pOVar1 = param_1 + 0x30;
  if (*(short *)(param_1 + 0x10) != 0x2b) {
    pOVar1 = param_1 + 0x38;
  }
  return *(undefined8 *)pOVar1;
}

