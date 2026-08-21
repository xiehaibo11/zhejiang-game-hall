
/* v8::internal::Deoptimizer::ComputeSourcePositionFromBytecodeArray(v8::internal::SharedFunctionInfo,
   v8::internal::BailoutId) */

void v8::internal::Deoptimizer::ComputeSourcePositionFromBytecodeArray(ulong param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_18;
  
  local_18 = param_1 & 0xffffffff00000000;
  uVar3 = local_18 | *(uint *)(param_1 + 0xf);
  uVar2 = local_18 | 7;
  if ((*(short *)(uVar2 + *(uint *)(uVar3 - 1)) == 0x5b) &&
     (*(short *)(uVar2 + *(uint *)((local_18 | *(uint *)(uVar3 + 0x13)) - 1)) == 0x86)) {
    uVar1 = *(uint *)(uVar3 + 0xf);
  }
  else {
    uVar1 = *(uint *)(param_1 + 3);
    if (((uVar1 & 1) == 0) || (*(short *)(uVar2 + *(uint *)((local_18 | uVar1) - 1)) != 0x86)) {
      uVar1 = *(uint *)((local_18 | *(uint *)(param_1 + 3)) + 3);
    }
    else {
      uVar1 = *(uint *)(param_1 + 3);
    }
  }
  local_18 = local_18 | uVar1;
  AbstractCode::SourcePosition((AbstractCode *)&local_18,param_2);
  return;
}

