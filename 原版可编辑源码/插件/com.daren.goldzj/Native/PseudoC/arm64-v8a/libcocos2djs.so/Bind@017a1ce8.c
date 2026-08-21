
/* v8::internal::compiler::RawMachineAssembler::Bind(v8::internal::compiler::RawMachineLabel*) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::Bind
          (RawMachineAssembler *this,RawMachineLabel *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)param_1;
  param_1[9] = (RawMachineLabel)0x1;
  if (lVar1 == 0) {
    lVar1 = Schedule::NewBasicBlock(*(Schedule **)(this + 0x10));
    *(long *)param_1 = lVar1;
  }
  *(long *)(this + 0x98) = lVar1;
  *(RawMachineLabel *)(lVar1 + 8) = param_1[10];
  return;
}

