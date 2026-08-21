
/* v8::internal::FeedbackNexus::ConfigureCloneObject(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Handle<v8::internal::Map>) */

void __thiscall
v8::internal::FeedbackNexus::ConfigureCloneObject(FeedbackNexus *this,ulong *param_2,ulong *param_3)

{
  FeedbackNexus *pFVar1;
  uint *puVar2;
  FeedbackNexus *pFVar3;
  uint uVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  Isolate *pIVar14;
  long lVar15;
  
  pFVar1 = this + 8;
  pFVar3 = pFVar1;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar3 = *(FeedbackNexus **)this;
  }
  uVar4 = *(uint *)(*(ulong *)pFVar3 + (long)(*(int *)(this + 0x10) << 2) + 0x1f);
  pIVar14 = (Isolate *)(*(ulong *)pFVar3 & 0xffffffff00000000);
  if (uVar4 == 3 || (uVar4 & 1) == 0) {
    puVar12 = (ulong *)0x0;
  }
  else {
    uVar10 = (ulong)uVar4 & 0xfffffffffffffffd | (ulong)pIVar14;
    if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar12 = *(ulong **)(pIVar14 + 0x95a0);
      if (puVar12 == *(ulong **)(pIVar14 + 0x95a8)) {
        puVar12 = (ulong *)HandleScope::Extend(pIVar14);
      }
      *(ulong **)(pIVar14 + 0x95a0) = puVar12 + 1;
      *puVar12 = uVar10;
    }
    else {
      puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar10);
    }
  }
  iVar5 = ic_state(this);
  iVar9 = FLAG_max_polymorphic_map_count;
  if (iVar5 == 4) {
    uVar10 = *puVar12;
    piVar8 = (int *)(uVar10 + 3);
    if (*piVar8 < 2) {
      iVar5 = 0;
    }
    else {
      lVar15 = 0;
      iVar5 = 7;
      while (*(uint *)(uVar10 + (long)iVar5) != 3) {
        uVar10 = uVar10 & 0xffffffff00000000 |
                 (ulong)*(uint *)(uVar10 + (long)iVar5) & 0xfffffffffffffffd;
        if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(ulong **)(pIVar14 + 0x95a0);
          if (puVar6 == *(ulong **)(pIVar14 + 0x95a8)) {
            puVar6 = (ulong *)HandleScope::Extend(pIVar14);
          }
          *(ulong **)(pIVar14 + 0x95a0) = puVar6 + 1;
          *puVar6 = uVar10;
        }
        else {
          puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar10);
        }
        if ((puVar6 == param_2) ||
           ((((param_2 != (ulong *)0x0 && (puVar6 != (ulong *)0x0)) && (*puVar6 == *param_2)) ||
            ((*(uint *)(*puVar6 + 0xb) >> 0x18 & 1) != 0)))) break;
        uVar10 = *puVar12;
        lVar15 = lVar15 + 2;
        iVar5 = iVar5 + 8;
        if (*(int *)(uVar10 + 3) >> 1 <= lVar15) break;
      }
      iVar5 = (int)lVar15;
      piVar8 = (int *)(*puVar12 + 3);
    }
    puVar6 = puVar12;
    if (*piVar8 >> 1 <= iVar5) {
      if (iVar5 == iVar9 * 2) {
        pFVar3 = pFVar1;
        if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
          pFVar3 = *(FeedbackNexus **)this;
        }
        *(undefined4 *)(*(long *)pFVar3 + (long)(*(int *)(this + 0x10) << 2) + 0x1f) =
             *(undefined4 *)(pIVar14 + 0xb88);
        goto LAB_010c5c80;
      }
      puVar6 = (ulong *)EnsureArrayOfSize(this,(*piVar8 >> 1) + 2);
      uVar10 = *puVar12;
      if (1 < *(int *)(uVar10 + 3)) {
        iVar9 = 0;
        lVar15 = 0;
        do {
          uVar13 = *puVar6;
          uVar4 = *(uint *)((long)iVar9 + 7 + uVar10);
          puVar2 = (uint *)(uVar13 + (long)iVar9 + 7);
          *puVar2 = uVar4;
          if ((uVar4 != 3) && ((uVar4 & 1) != 0)) {
            uVar7 = uVar10 & 0xffffffff00000000 | (ulong)uVar4 & 0xfffffffffffc0000;
            uVar11 = *(ulong *)(uVar7 + 8);
            uVar10 = uVar10 & 0xffffffff00000000 | (ulong)uVar4 & 0xfffffffffffffffd;
            if (((uint)uVar11 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar13,puVar2,uVar10);
              uVar11 = *(ulong *)(uVar7 | 8);
            }
            if (((uVar11 & 0x18) != 0) &&
               ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar13,puVar2,uVar10);
            }
          }
          uVar10 = *puVar12;
          lVar15 = lVar15 + 1;
          iVar9 = iVar9 + 4;
        } while (lVar15 < *(int *)(uVar10 + 3) >> 1);
      }
    }
    uVar13 = *puVar6;
    uVar10 = *param_2;
    puVar2 = (uint *)(uVar13 + ((long)(iVar5 << 2) | 7U));
    uVar4 = (uint)uVar10 | 2;
    *puVar2 = uVar4;
    if (((uVar10 & 1) != 0) && (uVar4 != 3)) {
      uVar11 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar11 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar13,puVar2,uVar10 & 0xfffffffffffffffd);
        uVar11 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar13,puVar2,uVar10 & 0xfffffffffffffffd);
      }
    }
    uVar10 = *puVar6;
    uVar13 = *param_3;
    lVar15 = uVar10 + (long)(int)(iVar5 << 2 | 4);
    *(int *)(lVar15 + 7) = (int)uVar13;
    if (((int)uVar13 != 3) && ((uVar13 & 1) != 0)) {
      uVar7 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
      lVar15 = lVar15 + 7;
      uVar11 = uVar13 & 0xfffffffffffffffd;
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar10,lVar15,uVar11);
        uVar7 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
      goto LAB_010c5c30;
    }
  }
  else {
    if (iVar5 == 2) {
      if ((((puVar12 != (ulong *)0x0) && (puVar12 != param_2)) &&
          ((param_2 == (ulong *)0x0 || (*puVar12 != *param_2)))) &&
         ((*(uint *)(*puVar12 + 0xb) >> 0x18 & 1) == 0)) {
        puVar6 = (ulong *)EnsureArrayOfSize(this,4);
        uVar10 = *puVar12;
        uVar13 = *puVar6;
        uVar4 = (uint)uVar10 | 2;
        *(uint *)(uVar13 + 7) = uVar4;
        if (((uVar10 & 1) != 0) && (uVar4 != 3)) {
          uVar11 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar11 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar13,uVar13 + 7,uVar10 & 0xfffffffffffffffd);
            uVar11 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar13,uVar13 + 7,uVar10 & 0xfffffffffffffffd);
          }
        }
        uVar10 = *puVar6;
        pFVar3 = pFVar1;
        if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
          pFVar3 = *(FeedbackNexus **)this;
        }
        uVar13 = *(ulong *)pFVar3;
        uVar4 = *(uint *)(uVar13 + (long)(*(int *)(this + 0x10) * 4 + 4) + 0x1f);
        *(uint *)(uVar10 + 0xb) = uVar4;
        if ((uVar4 != 3) && ((uVar4 & 1) != 0)) {
          uVar13 = uVar13 & 0xffffffff00000000;
          uVar7 = uVar13 | (ulong)uVar4 & 0xfffffffffffc0000;
          uVar11 = *(ulong *)(uVar7 + 8);
          uVar13 = uVar13 | (ulong)uVar4 & 0xfffffffffffffffd;
          if (((uint)uVar11 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar10,uVar10 + 0xb,uVar13);
            uVar11 = *(ulong *)(uVar7 | 8);
          }
          if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0xb,uVar13);
          }
        }
        uVar10 = *param_2;
        uVar13 = *puVar6;
        uVar4 = (uint)uVar10 | 2;
        *(uint *)(uVar13 + 0xf) = uVar4;
        if (((uVar10 & 1) != 0) && (uVar4 != 3)) {
          uVar11 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar11 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar13,uVar13 + 0xf,uVar10 & 0xfffffffffffffffd);
            uVar11 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar13,uVar13 + 0xf,uVar10 & 0xfffffffffffffffd);
          }
        }
        uVar10 = *param_3;
        uVar13 = *puVar6;
        *(int *)(uVar13 + 0x13) = (int)uVar10;
        if (((int)uVar10 != 3) && ((uVar10 & 1) != 0)) {
          uVar11 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar11 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar13,uVar13 + 0x13,uVar10 & 0xfffffffffffffffd);
            uVar11 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar13,uVar13 + 0x13,uVar10 & 0xfffffffffffffffd);
          }
        }
LAB_010c5c80:
        if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
          pFVar1 = *(FeedbackNexus **)this;
        }
        *(undefined4 *)(*(long *)pFVar1 + (long)(*(int *)(this + 0x10) * 4 + 4) + 0x1f) = 3;
        return;
      }
    }
    else if (iVar5 != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar10 = *param_2;
    pFVar3 = pFVar1;
    if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
      pFVar3 = *(FeedbackNexus **)this;
    }
    uVar13 = *(ulong *)pFVar3;
    uVar4 = (uint)uVar10 | 2;
    lVar15 = uVar13 + (long)(*(int *)(this + 0x10) << 2);
    *(uint *)(lVar15 + 0x1f) = uVar4;
    if (((uVar10 & 1) != 0) && (uVar4 != 3)) {
      lVar15 = lVar15 + 0x1f;
      if ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar13,lVar15,uVar10 & 0xfffffffffffffffd);
      }
      if (((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
         ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar13,lVar15,uVar10 & 0xfffffffffffffffd);
      }
    }
    uVar11 = *param_3;
    if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
      pFVar1 = *(FeedbackNexus **)this;
    }
    uVar10 = *(ulong *)pFVar1;
    lVar15 = uVar10 + (long)(*(int *)(this + 0x10) * 4 + 4);
    *(int *)(lVar15 + 0x1f) = (int)uVar11;
    if (((int)uVar11 != 3) && ((uVar11 & 1) != 0)) {
      lVar15 = lVar15 + 0x1f;
      if ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar10,lVar15,uVar11 & 0xfffffffffffffffd);
      }
      if (((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
         ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        uVar11 = uVar11 & 0xfffffffffffffffd;
LAB_010c5c30:
        Heap_GenerationalBarrierSlow(uVar10,lVar15,uVar11);
        return;
      }
    }
  }
  return;
}

