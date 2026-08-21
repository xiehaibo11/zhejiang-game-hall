
/* v8::internal::StackTraceFrame::GetFrameInfo(v8::internal::Handle<v8::internal::StackTraceFrame>)
    */

ulong * v8::internal::StackTraceFrame::GetFrameInfo(ulong *param_1)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  uint *puVar4;
  
  pIVar2 = (Isolate *)(*param_1 & 0xffffffff00000000);
  puVar4 = (uint *)(*param_1 + 0xb);
  if (*puVar4 == *(uint *)(pIVar2 + 0xa0)) {
    InitializeFrameInfo(param_1);
    pIVar2 = (Isolate *)(*param_1 & 0xffffffff00000000);
    puVar4 = (uint *)(*param_1 + 0xb);
  }
  uVar1 = *puVar4;
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = (ulong)pIVar2 | (ulong)uVar1;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),
                                 (ulong)pIVar2 | (ulong)uVar1);
  }
  return puVar3;
}

