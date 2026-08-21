
/* v8::debug::PrepareStep(v8::Isolate*, v8::debug::StepAction) */

void v8::debug::PrepareStep(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  Debug *this;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  this = *(Debug **)(param_1 + 0xb6c8);
  if (this[8] != (Debug)0x0) {
    internal::Debug::ClearStepping(this);
    internal::Debug::PrepareStep(*(Debug **)(param_1 + 0xb6c8),param_2);
    *(undefined4 *)(param_1 + 0x2c60) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","isolate->debug()->CheckExecutionState()");
}

