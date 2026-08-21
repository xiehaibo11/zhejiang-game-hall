
/* v8::internal::interpreter::BytecodeGenerator::ControlScope::PerformCommand(v8::internal::interpreter::BytecodeGenerator::ControlScope::Command,
   v8::internal::Statement*, int) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::ControlScope::PerformCommand
          (ControlScope *this,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  
  do {
    uVar1 = (**(code **)(*(long *)this + 0x10))(this,param_2,param_3,param_4);
    if ((uVar1 & 1) != 0) {
      return;
    }
    this = *(ControlScope **)(this + 0x10);
  } while (this != (ControlScope *)0x0);
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

