
/* v8::internal::interpreter::BytecodeGenerator::VisitDoExpression(v8::internal::DoExpression*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitDoExpression
          (BytecodeGenerator *this,DoExpression *param_1)

{
  int iVar1;
  int *piVar2;
  
  VisitBlock(this,*(Block **)(param_1 + 8));
  piVar2 = *(int **)(param_1 + 0x10);
  iVar1 = *piVar2;
  if ((iVar1 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
    this[0x1c0] = (BytecodeGenerator)0x1;
    *(int *)(this + 0x1c4) = iVar1;
  }
  BuildVariableLoad(this,*(undefined8 *)(piVar2 + 2),(uint)piVar2[1] >> 0xb & 1,1);
  return;
}

