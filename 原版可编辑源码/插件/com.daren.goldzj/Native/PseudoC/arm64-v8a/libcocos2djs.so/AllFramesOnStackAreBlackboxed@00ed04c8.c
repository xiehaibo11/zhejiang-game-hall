
/* v8::debug::AllFramesOnStackAreBlackboxed(v8::Isolate*) */

uint v8::debug::AllFramesOnStackAreBlackboxed(Isolate *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  uVar2 = internal::Debug::AllFramesOnStackAreBlackboxed(*(Debug **)(param_1 + 0xb6c8));
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  return uVar2 & 1;
}

