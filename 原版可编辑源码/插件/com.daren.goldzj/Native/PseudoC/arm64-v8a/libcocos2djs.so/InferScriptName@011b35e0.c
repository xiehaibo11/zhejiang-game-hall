
/* v8::internal::ProfilerListener::InferScriptName(v8::internal::Name,
   v8::internal::SharedFunctionInfo) */

ulong __thiscall
v8::internal::ProfilerListener::InferScriptName(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((0x3f < *(ushort *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1))) ||
     (*(int *)(param_2 + 7) == 0)) {
    uVar2 = param_3 & 0xffffffff00000000;
    uVar1 = uVar2 | *(uint *)(param_3 + 0xf);
    uVar3 = uVar1;
    if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x5b) {
      uVar3 = uVar2 | *(uint *)(uVar1 + 0xb);
    }
    if (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x65) {
      if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x5b) {
        uVar1 = uVar2 | *(uint *)(uVar1 + 0xb);
      }
      if (((*(uint *)(uVar1 + 0x33) & 1) != 0) &&
         (uVar3 = uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0x33),
         *(ushort *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0x41)) {
        return uVar3;
      }
    }
  }
  return param_2;
}

