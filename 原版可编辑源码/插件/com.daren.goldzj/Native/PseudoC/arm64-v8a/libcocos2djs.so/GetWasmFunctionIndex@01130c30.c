
/* v8::internal::StackTraceFrame::GetWasmFunctionIndex(v8::internal::Handle<v8::internal::StackTraceFrame>)
    */

int v8::internal::StackTraceFrame::GetWasmFunctionIndex(ulong *param_1)

{
  Isolate *pIVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  
  pIVar1 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar3 = *(uint *)(*param_1 + 0xb);
  if (uVar3 == *(uint *)(pIVar1 + 0xa0)) {
    InitializeFrameInfo(param_1);
    uVar3 = *(uint *)(*param_1 + 0xb);
    pIVar1 = (Isolate *)(*param_1 & 0xffffffff00000000);
  }
  uVar4 = (ulong)pIVar1 | (ulong)uVar3;
  if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar4;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar4);
    uVar4 = *puVar2;
  }
  return *(int *)(uVar4 + 0x13) >> 1;
}

