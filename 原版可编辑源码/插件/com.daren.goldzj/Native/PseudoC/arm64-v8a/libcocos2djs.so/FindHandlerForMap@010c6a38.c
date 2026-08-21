
/* WARNING: Removing unreachable block (ram,0x010c6b1c) */
/* v8::internal::FeedbackNexus::FindHandlerForMap(v8::internal::Handle<v8::internal::Map>) const */

undefined1  [16] __thiscall
v8::internal::FeedbackNexus::FindHandlerForMap(FeedbackNexus *this,uint *param_2)

{
  FeedbackNexus *pFVar1;
  bool bVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  undefined1 auVar12 [16];
  
  pFVar1 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar1 = *(FeedbackNexus **)this;
  }
  iVar11 = *(int *)(this + 0x10) * 4;
  lVar9 = *(ulong *)pFVar1 + 0x1f;
  uVar10 = *(uint *)(lVar9 + iVar11);
  pIVar3 = (Isolate *)(*(ulong *)pFVar1 & 0xffffffff00000000);
  uVar6 = (ulong)uVar10 & 3;
  if (uVar6 == 1) {
    uVar7 = (ulong)pIVar3 | (ulong)uVar10;
    uVar6 = (ulong)pIVar3 | 7;
    if (*(ushort *)(uVar6 + *(uint *)(uVar7 - 1)) < 0x40) {
      bVar2 = true;
LAB_010c6b48:
      if (bVar2) {
        uVar7 = (ulong)pIVar3 | (ulong)*(uint *)(lVar9 + (iVar11 + 4));
      }
      if (1 < (int)*(uint *)(uVar7 + 3)) {
        lVar8 = 0;
        lVar9 = 0;
        iVar11 = 4;
        uVar5 = 1;
        do {
          uVar10 = *(uint *)(uVar7 + (lVar8 >> 0x20 | 7U));
          if ((((uVar10 != 3) && ((uVar10 & 3) == 3)) && ((uVar10 & 0xfffffffd) == *param_2)) &&
             (*(int *)(uVar7 + 7 + (long)iVar11) != 3)) {
            uVar10 = *(uint *)((long)iVar11 + uVar7 + 7);
            uVar6 = (ulong)uVar10;
            uVar7 = uVar7 & 0xffffffff00000000 | uVar6;
            goto joined_r0x010c6aec;
          }
          lVar9 = lVar9 + 2;
          iVar11 = iVar11 + 8;
          lVar8 = lVar8 + 0x800000000;
        } while (lVar9 < (long)((ulong)*(uint *)(uVar7 + 3) << 0x20) >> 0x21);
        puVar4 = (ulong *)0x0;
        goto LAB_010c6c28;
      }
    }
    else {
      if ((*(short *)(uVar6 + *(uint *)(uVar7 - 1)) == 0x40) &&
         (uVar10 != *(uint *)(pIVar3 + 0xc08))) {
        bVar2 = uVar10 != *(uint *)(pIVar3 + 0xb88);
        uVar10 = *(uint *)(uVar7 - 1);
        if (bVar2) goto LAB_010c6b48;
      }
      else {
        bVar2 = false;
        uVar10 = *(uint *)(uVar7 - 1);
      }
      if ((ushort)(*(short *)(uVar6 + uVar10) - 0x97U) < 2) goto LAB_010c6b48;
    }
LAB_010c6c20:
    puVar4 = (ulong *)0x0;
  }
  else {
    puVar4 = (ulong *)0x0;
    uVar5 = 1;
    if ((uVar10 == 3) || (uVar6 != 3)) goto LAB_010c6c28;
    if (((uVar10 & 0xfffffffd) != *param_2) || (*(int *)(lVar9 + (iVar11 + 4)) == 3))
    goto LAB_010c6c20;
    uVar10 = *(uint *)((iVar11 + 4) + lVar9);
    uVar6 = (ulong)uVar10;
    uVar7 = (ulong)pIVar3 | uVar6;
joined_r0x010c6aec:
    if ((uVar10 != 3) && ((uVar6 & 3) == 3)) {
      if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(pIVar3 + 0x95a0);
        if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(pIVar3);
        }
        uVar5 = 0;
        *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar7 & 0xfffffffffffffffd;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),
                                     uVar7 & 0xfffffffffffffffd);
        uVar5 = 0;
      }
      goto LAB_010c6c28;
    }
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar7;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar7);
    }
  }
  uVar5 = 1;
LAB_010c6c28:
  auVar12._8_8_ = puVar4;
  auVar12._0_8_ = uVar5;
  return auVar12;
}

