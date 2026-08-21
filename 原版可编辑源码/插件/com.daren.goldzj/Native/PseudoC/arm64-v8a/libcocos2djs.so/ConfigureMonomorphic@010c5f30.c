
/* v8::internal::FeedbackNexus::ConfigureMonomorphic(v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Map>, v8::internal::MaybeObjectHandle const&) */

void __thiscall
v8::internal::FeedbackNexus::ConfigureMonomorphic
          (FeedbackNexus *this,ulong *param_2,ulong *param_3,int *param_4)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  FeedbackNexus *pFVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (*(int *)(this + 0x14) == 0x11) {
    uVar9 = *param_3;
    pFVar4 = this + 8;
    if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
      pFVar4 = *(FeedbackNexus **)this;
    }
    uVar7 = *(ulong *)pFVar4;
    uVar1 = (uint)uVar9 | 2;
    lVar3 = uVar7 + (long)(*(int *)(this + 0x10) << 2);
    *(uint *)(lVar3 + 0x1f) = uVar1;
    if (((uVar9 & 1) != 0) && (uVar1 != 3)) {
      lVar3 = lVar3 + 0x1f;
      if ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar7,lVar3,uVar9 & 0xfffffffffffffffd);
      }
      if (((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
         ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar7,lVar3,uVar9 & 0xfffffffffffffffd);
      }
    }
    iVar5 = *(int *)(this + 0x10);
    uVar8 = *param_2;
    pFVar4 = this + 8;
    if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
      pFVar4 = *(FeedbackNexus **)this;
    }
  }
  else {
    if (param_2 != (ulong *)0x0) {
      puVar2 = (ulong *)EnsureExtraArrayOfSize(this,2);
      pFVar4 = this + 8;
      if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
        pFVar4 = *(FeedbackNexus **)this;
      }
      uVar7 = *(ulong *)pFVar4;
      uVar9 = *param_2;
      lVar3 = uVar7 + (long)(*(int *)(this + 0x10) << 2);
      *(int *)(lVar3 + 0x1f) = (int)uVar9;
      if (((int)uVar9 != 3) && ((uVar9 & 1) != 0)) {
        uVar8 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
        lVar3 = lVar3 + 0x1f;
        if (((uint)uVar8 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar7,lVar3,uVar9 & 0xfffffffffffffffd);
          uVar8 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar7,lVar3,uVar9 & 0xfffffffffffffffd);
        }
      }
      uVar9 = *param_3;
      uVar7 = *puVar2;
      uVar1 = (uint)uVar9 | 2;
      *(uint *)(uVar7 + 7) = uVar1;
      if (((uVar9 & 1) != 0) && (uVar1 != 3)) {
        uVar8 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar8 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar7,uVar7 + 7,uVar9 & 0xfffffffffffffffd);
          uVar8 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar7,uVar7 + 7,uVar9 & 0xfffffffffffffffd);
        }
      }
      uVar9 = *puVar2;
      puVar2 = *(ulong **)(param_4 + 2);
      if (*param_4 == 0) {
        if (puVar2 == (ulong *)0x0) goto LAB_010c62e8;
        uVar7 = *puVar2 | 2;
      }
      else {
        if (puVar2 == (ulong *)0x0) goto LAB_010c62e8;
        uVar7 = *puVar2;
      }
      *(int *)(uVar9 + 0xb) = (int)uVar7;
      if ((int)uVar7 == 3) {
        return;
      }
      if ((uVar7 & 1) == 0) {
        return;
      }
      uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      lVar3 = uVar9 + 0xb;
      uVar8 = uVar7 & 0xfffffffffffffffd;
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar9,lVar3,uVar8);
        uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if ((uVar6 & 0x18) == 0) {
        return;
      }
      if ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
        return;
      }
      goto LAB_010c62d0;
    }
    uVar9 = *param_3;
    pFVar4 = this + 8;
    if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
      pFVar4 = *(FeedbackNexus **)this;
    }
    uVar7 = *(ulong *)pFVar4;
    uVar1 = (uint)uVar9 | 2;
    lVar3 = uVar7 + (long)(*(int *)(this + 0x10) << 2);
    *(uint *)(lVar3 + 0x1f) = uVar1;
    if (((uVar9 & 1) != 0) && (uVar1 != 3)) {
      lVar3 = lVar3 + 0x1f;
      if ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar7,lVar3,uVar9 & 0xfffffffffffffffd);
      }
      if (((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
         ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar7,lVar3,uVar9 & 0xfffffffffffffffd);
      }
    }
    puVar2 = *(ulong **)(param_4 + 2);
    if (*param_4 == 0) {
      if (puVar2 == (ulong *)0x0) goto LAB_010c62e8;
      uVar8 = *puVar2 | 2;
    }
    else {
      if (puVar2 == (ulong *)0x0) {
LAB_010c62e8:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      uVar8 = *puVar2;
    }
    iVar5 = *(int *)(this + 0x10);
    pFVar4 = this + 8;
    if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
      pFVar4 = *(FeedbackNexus **)this;
    }
  }
  uVar9 = *(ulong *)pFVar4;
  lVar3 = uVar9 + (long)(iVar5 * 4 + 4);
  *(int *)(lVar3 + 0x1f) = (int)uVar8;
  if (((int)uVar8 != 3) && ((uVar8 & 1) != 0)) {
    lVar3 = lVar3 + 0x1f;
    if ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,lVar3,uVar8 & 0xfffffffffffffffd);
    }
    if (((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
       ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      uVar8 = uVar8 & 0xfffffffffffffffd;
LAB_010c62d0:
      Heap_GenerationalBarrierSlow(uVar9,lVar3,uVar8);
      return;
    }
  }
  return;
}

