
/* v8::internal::interpreter::BytecodeGenerator::VisitDebuggerStatement(v8::internal::DebuggerStatement*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitDebuggerStatement
          (BytecodeGenerator *this,DebuggerStatement *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1;
  if (iVar1 != -1) {
    this[0x1c0] = (BytecodeGenerator)0x2;
    *(int *)(this + 0x1c4) = iVar1;
  }
  BytecodeArrayBuilder::Debugger((BytecodeArrayBuilder *)(this + 0x18));
  return;
}

