
/* v8::internal::FeedbackVector::SetOptimizedCode(v8::internal::Handle<v8::internal::FeedbackVector>,
   v8::internal::Handle<v8::internal::Code>) */

void v8::internal::FeedbackVector::SetOptimizedCode(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_2;
  uVar2 = *param_1;
  uVar1 = (uint)uVar3 | 2;
  *(uint *)(uVar2 + 7) = uVar1;
  if (((uVar3 & 1) != 0) && (uVar1 != 3)) {
    if ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar2,uVar2 + 7,uVar3 & 0xfffffffffffffffd);
    }
    if (((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
       ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar2,uVar2 + 7,uVar3 & 0xfffffffffffffffd);
      return;
    }
  }
  return;
}

