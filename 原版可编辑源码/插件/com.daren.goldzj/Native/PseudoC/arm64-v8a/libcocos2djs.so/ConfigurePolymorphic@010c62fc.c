
/* v8::internal::FeedbackNexus::ConfigurePolymorphic(v8::internal::Handle<v8::internal::Name>,
   std::__ndk1::vector<v8::internal::Handle<v8::internal::Map>,
   std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map> > > const&,
   std::__ndk1::vector<v8::internal::MaybeObjectHandle,
   std::__ndk1::allocator<v8::internal::MaybeObjectHandle> >*) */

void __thiscall
v8::internal::FeedbackNexus::ConfigurePolymorphic
          (FeedbackNexus *this,ulong *param_2,long *param_3,long *param_4)

{
  uint *puVar1;
  long lVar2;
  long *plVar3;
  FeedbackNexus *pFVar4;
  uint uVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  uVar13 = param_3[1] - *param_3;
  iVar7 = (int)(uVar13 >> 2);
  if (param_2 == (ulong *)0x0) {
    puVar6 = (ulong *)EnsureArrayOfSize(this,iVar7);
    pFVar4 = this + 8;
    if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
      pFVar4 = *(FeedbackNexus **)this;
    }
    *(undefined4 *)(*(ulong *)pFVar4 + (long)(*(int *)(this + 0x10) * 4 + 4) + 0x1f) =
         *(undefined4 *)((*(ulong *)pFVar4 & 0xffffffff00000000) + 0xc08);
  }
  else {
    puVar6 = (ulong *)EnsureExtraArrayOfSize(this,iVar7);
    pFVar4 = this + 8;
    if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
      pFVar4 = *(FeedbackNexus **)this;
    }
    uVar12 = *(ulong *)pFVar4;
    uVar8 = *param_2;
    lVar14 = uVar12 + (long)(*(int *)(this + 0x10) << 2);
    *(int *)(lVar14 + 0x1f) = (int)uVar8;
    if (((int)uVar8 != 3) && ((uVar8 & 1) != 0)) {
      uVar11 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
      lVar14 = lVar14 + 0x1f;
      if (((uint)uVar11 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar12,lVar14,uVar8 & 0xfffffffffffffffd);
        uVar11 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar12,lVar14,uVar8 & 0xfffffffffffffffd);
      }
    }
  }
  if (0 < (int)(uVar13 >> 3)) {
    uVar8 = 0;
    iVar7 = 7;
    lVar14 = 8;
    do {
      uVar11 = *puVar6;
      puVar1 = (uint *)(uVar11 + (long)iVar7);
      uVar12 = **(ulong **)(*param_3 + uVar8 * 8);
      uVar5 = (uint)uVar12 | 2;
      *puVar1 = uVar5;
      if (((uVar12 & 1) != 0) && (uVar5 != 3)) {
        uVar10 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar10 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar11,puVar1,uVar12 & 0xfffffffffffffffd);
          uVar10 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar11,puVar1,uVar12 & 0xfffffffffffffffd);
        }
      }
      if ((ulong)(param_4[1] - *param_4 >> 4) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      plVar3 = (long *)(*param_4 + lVar14);
      uVar12 = *puVar6;
      puVar9 = (ulong *)*plVar3;
      if ((int)plVar3[-1] == 0) {
        if (puVar9 == (ulong *)0x0) goto LAB_010c6590;
        uVar11 = *puVar9 | 2;
      }
      else {
        if (puVar9 == (ulong *)0x0) {
LAB_010c6590:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(location_) != nullptr");
        }
        uVar11 = *puVar9;
      }
      lVar2 = uVar12 + (long)(iVar7 + -3);
      *(int *)(lVar2 + 7) = (int)uVar11;
      if (((int)uVar11 != 3) && ((uVar11 & 1) != 0)) {
        uVar10 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
        lVar2 = lVar2 + 7;
        if (((uint)uVar10 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar12,lVar2,uVar11 & 0xfffffffffffffffd);
          uVar10 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar12,lVar2,uVar11 & 0xfffffffffffffffd);
        }
      }
      uVar8 = uVar8 + 1;
      lVar14 = lVar14 + 0x10;
      iVar7 = iVar7 + 8;
    } while ((uVar13 >> 3 & 0xffffffff) != uVar8);
  }
  return;
}

