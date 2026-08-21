
/* v8::internal::interpreter::BytecodeGenerator::VisitVariableProxy(v8::internal::VariableProxy*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitVariableProxy
          (BytecodeGenerator *this,VariableProxy *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1;
  if ((iVar1 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
    this[0x1c0] = (BytecodeGenerator)0x1;
    *(int *)(this + 0x1c4) = iVar1;
  }
  BuildVariableLoad(this,*(undefined8 *)(param_1 + 8),*(uint *)(param_1 + 4) >> 0xb & 1,1);
  return;
}

