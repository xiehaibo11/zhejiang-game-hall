
/* v8::internal::FeedbackNexus::ConfigureHandlerMode(v8::internal::MaybeObjectHandle const&) */

void __thiscall
v8::internal::FeedbackNexus::ConfigureHandlerMode(FeedbackNexus *this,MaybeObjectHandle *param_1)

{
  long lVar1;
  FeedbackNexus *pFVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  pFVar2 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar2 = *(FeedbackNexus **)this;
  }
  *(undefined4 *)(*(long *)pFVar2 + (long)(*(int *)(this + 0x10) << 2) + 0x1f) = 3;
  puVar3 = *(ulong **)(param_1 + 8);
  if (*(int *)param_1 == 0) {
    if (puVar3 == (ulong *)0x0) goto LAB_010c561c;
    uVar5 = *puVar3 | 2;
  }
  else {
    if (puVar3 == (ulong *)0x0) {
LAB_010c561c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar5 = *puVar3;
  }
  pFVar2 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar2 = *(FeedbackNexus **)this;
  }
  uVar4 = *(ulong *)pFVar2;
  lVar1 = uVar4 + (long)(*(int *)(this + 0x10) * 4 + 4);
  *(int *)(lVar1 + 0x1f) = (int)uVar5;
  if (((int)uVar5 != 3) && ((uVar5 & 1) != 0)) {
    lVar1 = lVar1 + 0x1f;
    if ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,lVar1,uVar5 & 0xfffffffffffffffd);
    }
    if (((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
       ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,lVar1,uVar5 & 0xfffffffffffffffd);
      return;
    }
  }
  return;
}

