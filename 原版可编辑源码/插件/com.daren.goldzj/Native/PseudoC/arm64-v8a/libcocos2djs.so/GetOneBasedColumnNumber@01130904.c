
/* v8::internal::StackTraceFrame::GetOneBasedColumnNumber(v8::internal::Handle<v8::internal::StackTraceFrame>)
    */

int v8::internal::StackTraceFrame::GetOneBasedColumnNumber(ulong *param_1)

{
  int iVar1;
  int iVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  
  pIVar3 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar5 = *(uint *)(*param_1 + 0xb);
  if (uVar5 == *(uint *)(pIVar3 + 0xa0)) {
    InitializeFrameInfo(param_1);
    uVar5 = *(uint *)(*param_1 + 0xb);
    pIVar3 = (Isolate *)(*param_1 & 0xffffffff00000000);
  }
  uVar6 = (ulong)pIVar3 | (ulong)uVar5;
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar6;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar6);
    uVar6 = *puVar4;
  }
  pIVar3 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar5 = *(uint *)(*param_1 + 0xb);
  iVar1 = *(int *)(uVar6 + 7) >> 1;
  iVar2 = 0;
  if (iVar1 != -1) {
    iVar2 = iVar1;
  }
  if (uVar5 == *(uint *)(pIVar3 + 0xa0)) {
    InitializeFrameInfo(param_1);
    uVar5 = *(uint *)(*param_1 + 0xb);
    pIVar3 = (Isolate *)(*param_1 & 0xffffffff00000000);
  }
  uVar6 = (ulong)pIVar3 | (ulong)uVar5;
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar6;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar6);
    uVar6 = *puVar4;
  }
  return iVar2 + ((uint)(-1 < iVar2) & (*(byte *)(uVar6 + 0x37) & 8) >> 3);
}

