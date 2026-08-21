
/* v8::debug::BreakRightNow(v8::Isolate*) */

void v8::debug::BreakRightNow(Isolate *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  internal::Debug::HandleDebugBreak(*(Debug **)(param_1 + 0xb6c8),0);
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  return;
}

