
/* v8::internal::MathRandom::ResetContext(v8::internal::Context) */

void v8::internal::MathRandom::ResetContext(ulong param_1)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 0x1db) = 0;
  uVar1 = param_1 & 0xffffffff00000000 | (ulong)*(uint *)(param_1 + 0x1df);
  *(undefined8 *)(uVar1 + 0xf) = 0;
  *(undefined8 *)(uVar1 + 7) = 0;
  return;
}

