
/* v8::internal::Deoptimizer::ComputeIncomingArgumentSize(v8::internal::SharedFunctionInfo) */

int v8::internal::Deoptimizer::ComputeIncomingArgumentSize(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x15) + 1 & 0xffff;
  uVar2 = ShouldPadArguments(uVar1);
  return ((uVar2 & 1) + uVar1) * 8;
}

