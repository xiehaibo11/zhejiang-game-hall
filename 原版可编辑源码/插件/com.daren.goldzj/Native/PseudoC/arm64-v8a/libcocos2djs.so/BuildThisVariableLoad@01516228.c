
/* v8::internal::interpreter::BytecodeGenerator::BuildThisVariableLoad() */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildThisVariableLoad(BytecodeGenerator *this)

{
  long lVar1;
  
  lVar1 = Scope::GetReceiverScope(*(Scope **)(this + 0x1e0));
  BuildVariableLoad(this,*(undefined8 *)(lVar1 + 0xb0),1 < *(byte *)(lVar1 + 0x85) - 5,1);
  return;
}

