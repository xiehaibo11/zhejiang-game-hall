
/* v8::internal::compiler::RawMachineAssembler::Use(v8::internal::compiler::RawMachineLabel*) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::Use(RawMachineAssembler *this,RawMachineLabel *param_1)

{
  undefined8 uVar1;
  
  param_1[8] = (RawMachineLabel)0x1;
  if (*(long *)param_1 == 0) {
    uVar1 = Schedule::NewBasicBlock(*(Schedule **)(this + 0x10));
    *(undefined8 *)param_1 = uVar1;
  }
  return;
}

