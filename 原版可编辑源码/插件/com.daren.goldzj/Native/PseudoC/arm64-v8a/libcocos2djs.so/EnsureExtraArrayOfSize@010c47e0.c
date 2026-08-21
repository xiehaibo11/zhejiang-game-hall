
/* v8::internal::FeedbackNexus::EnsureExtraArrayOfSize(int) */

ulong * __thiscall
v8::internal::FeedbackNexus::EnsureExtraArrayOfSize(FeedbackNexus *this,int param_1)

{
  long lVar1;
  FeedbackNexus *pFVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  pFVar2 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar2 = *(FeedbackNexus **)this;
  }
  uVar5 = (ulong)*(uint *)(*(ulong *)pFVar2 + (long)(*(int *)(this + 0x10) * 4 + 4) + 0x1f);
  pIVar3 = (Isolate *)(*(ulong *)pFVar2 & 0xffffffff00000000);
  if ((((uVar5 & 3) == 1) &&
      (uVar5 = (ulong)pIVar3 | uVar5,
      *(ushort *)(((ulong)pIVar3 | 7) + (ulong)*(uint *)(uVar5 - 1)) - 0x97 < 2)) &&
     (param_1 == *(int *)(uVar5 + 3) >> 1)) {
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) != (CanonicalHandleScope *)0x0) {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar5);
      return puVar4;
    }
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar5;
    return puVar4;
  }
  puVar4 = (ulong *)Factory::NewWeakFixedArray(pIVar3,param_1,0);
  pFVar2 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar2 = *(FeedbackNexus **)this;
  }
  uVar5 = *(ulong *)pFVar2;
  uVar6 = *puVar4;
  lVar1 = uVar5 + (long)(*(int *)(this + 0x10) * 4 + 4);
  *(int *)(lVar1 + 0x1f) = (int)uVar6;
  if (((int)uVar6 != 3) && ((uVar6 & 1) != 0)) {
    lVar1 = lVar1 + 0x1f;
    if ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar5,lVar1,uVar6 & 0xfffffffffffffffd);
    }
    if (((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
       ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar5,lVar1,uVar6 & 0xfffffffffffffffd);
    }
  }
  return puVar4;
}

