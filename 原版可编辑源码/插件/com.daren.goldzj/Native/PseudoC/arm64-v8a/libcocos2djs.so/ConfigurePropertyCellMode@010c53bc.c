
/* v8::internal::FeedbackNexus::ConfigurePropertyCellMode(v8::internal::Handle<v8::internal::PropertyCell>)
    */

void __thiscall
v8::internal::FeedbackNexus::ConfigurePropertyCellMode(FeedbackNexus *this,ulong *param_2)

{
  long lVar1;
  FeedbackNexus *pFVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *param_2;
  pFVar2 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar2 = *(FeedbackNexus **)this;
  }
  uVar4 = *(ulong *)pFVar2;
  uVar3 = (uint)uVar5 | 2;
  lVar1 = uVar4 + (long)(*(int *)(this + 0x10) << 2);
  *(uint *)(lVar1 + 0x1f) = uVar3;
  if (((uVar5 & 1) != 0) && (uVar3 != 3)) {
    lVar1 = lVar1 + 0x1f;
    if ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,lVar1,uVar5 & 0xfffffffffffffffd);
    }
    if (((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
       ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,lVar1,uVar5 & 0xfffffffffffffffd);
    }
  }
  pFVar2 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar2 = *(FeedbackNexus **)this;
  }
  *(undefined4 *)(*(long *)pFVar2 + (long)(*(int *)(this + 0x10) * 4 + 4) + 0x1f) =
       *(undefined4 *)((uVar4 & 0xffffffff00000000) + 0xc08);
  return;
}

