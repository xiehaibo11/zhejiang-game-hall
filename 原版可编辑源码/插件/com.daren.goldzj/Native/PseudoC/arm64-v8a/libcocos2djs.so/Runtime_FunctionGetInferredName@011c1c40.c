
/* v8::internal::Runtime_FunctionGetInferredName(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_FunctionGetInferredName(int param_1,ulong *param_2,Isolate *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_8;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar2 = FUN_011c1d38(param_1);
    return uVar2;
  }
  uVar2 = *param_2;
  if ((uVar2 & 1) != 0) {
    uVar3 = uVar2 & 0xffffffff00000000;
    uVar1 = uVar3 | 7;
    if (*(short *)(uVar1 + *(uint *)(uVar2 - 1)) == 0x439) {
      uVar2 = uVar3 | *(uint *)(uVar2 + 0xb);
      if (((*(uint *)(uVar2 + 7) & 1) == 0) ||
         (local_8 = uVar3 | *(uint *)(uVar2 + 7), *(short *)(uVar1 + *(uint *)(local_8 - 1)) != 0x83
         )) {
        if (((*(uint *)(uVar2 + 3) & 1) != 0) &&
           (*(ushort *)(uVar1 + *(uint *)((uVar3 | *(uint *)(uVar2 + 3)) - 1)) - 0x95 < 2)) {
          return uVar3 | *(uint *)((uVar3 | *(uint *)(uVar2 + 3)) + 3);
        }
      }
      else {
        uVar2 = ScopeInfo::HasInferredFunctionName((ScopeInfo *)&local_8);
        if ((((uVar2 & 1) != 0) &&
            (uVar2 = ScopeInfo::InferredFunctionName((ScopeInfo *)&local_8), (uVar2 & 1) != 0)) &&
           (*(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) < 0x40)) {
          return uVar2;
        }
      }
      return *(ulong *)(uVar3 + 200);
    }
  }
  return *(ulong *)(param_3 + 200);
}

