
/* v8::internal::StackTraceFrame::InitializeFrameInfo(v8::internal::Handle<v8::internal::StackTraceFrame>)
    */

void v8::internal::StackTraceFrame::InitializeFrameInfo(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  Isolate *pIVar3;
  ulong uVar4;
  ulong uVar5;
  
  pIVar3 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar4 = (ulong)pIVar3 | (ulong)*(uint *)(*param_1 + 3);
  if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar4;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),uVar4);
  }
  puVar1 = (ulong *)Factory::NewStackFrameInfo((Factory *)pIVar3,puVar1,*(int *)(*param_1 + 7) >> 1)
  ;
  uVar5 = *param_1;
  uVar4 = *puVar1;
  *(int *)(uVar5 + 0xb) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 0xb,uVar4);
      uVar2 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0xb,uVar4);
    }
  }
  uVar5 = *param_1;
  uVar4 = *(ulong *)(pIVar3 + 0xa0);
  *(int *)(uVar5 + 3) = (int)uVar4;
  if ((uVar4 & 1) != 0) {
    uVar2 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,uVar5 + 3,uVar4);
      uVar2 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,uVar5 + 3,uVar4);
    }
  }
  *(undefined4 *)(*param_1 + 7) = 0xfffffffe;
  return;
}

