
/* v8::debug::SetBreakPointsActive(v8::Isolate*, bool) */

void v8::debug::SetBreakPointsActive(Isolate *param_1,bool param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(bool *)(*(long *)(param_1 + 0xb6c8) + 0xd) = param_2;
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  return;
}

