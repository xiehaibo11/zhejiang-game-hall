
/* v8::internal::interpreter::BytecodeGenerator::ControlScopeForTopLevel::Execute(v8::internal::interpreter::BytecodeGenerator::ControlScope::Command,
   v8::internal::Statement*, int) */

undefined8 __thiscall
v8::internal::interpreter::BytecodeGenerator::ControlScopeForTopLevel::Execute
          (ControlScopeForTopLevel *this,undefined4 param_2,undefined8 param_3,int param_4)

{
  switch(param_2) {
  case 0:
  case 1:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 2:
    BuildReturn(*(BytecodeGenerator **)(this + 8),param_4);
    break;
  case 3:
    BuildAsyncReturn(*(BytecodeGenerator **)(this + 8),param_4);
    break;
  case 4:
    BytecodeArrayBuilder::ReThrow((BytecodeArrayBuilder *)(*(long *)(this + 8) + 0x18));
    break;
  default:
    return 0;
  }
  return 1;
}

