
/* v8::internal::interpreter::BytecodeArrayBuilder::GetInputRegisterListOperand(v8::internal::interpreter::RegisterList)
    */

int __thiscall
v8::internal::interpreter::BytecodeArrayBuilder::GetInputRegisterListOperand
          (BytecodeArrayBuilder *this,ulong param_2)

{
  int iVar1;
  
  if (*(long *)(this + 0x1a0) != 0) {
    param_2 = BytecodeRegisterOptimizer::GetInputRegisterList();
  }
  iVar1 = 0;
  if (param_2 >> 0x20 != 0) {
    iVar1 = (int)param_2;
  }
  return -5 - iVar1;
}

