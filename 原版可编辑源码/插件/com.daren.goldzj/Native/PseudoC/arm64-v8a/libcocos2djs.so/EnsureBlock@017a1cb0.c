
/* v8::internal::compiler::RawMachineAssembler::EnsureBlock(v8::internal::compiler::RawMachineLabel*)
    */

long __thiscall
v8::internal::compiler::RawMachineAssembler::EnsureBlock
          (RawMachineAssembler *this,RawMachineLabel *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)param_1;
  if (lVar1 == 0) {
    lVar1 = Schedule::NewBasicBlock(*(Schedule **)(this + 0x10));
    *(long *)param_1 = lVar1;
  }
  return lVar1;
}

