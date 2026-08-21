
/* v8::internal::FeedbackNexus::GetTypeProfile() const */

undefined8 __thiscall v8::internal::FeedbackNexus::GetTypeProfile(FeedbackNexus *this)

{
  Isolate *pIVar1;
  FeedbackNexus *pFVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  Isolate *pIVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  
  pFVar2 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar2 = *(FeedbackNexus **)this;
  }
  pIVar10 = (Isolate *)(*(ulong *)pFVar2 & 0xffffffff00000000);
  uVar3 = *(uint *)(*(ulong *)pFVar2 + (long)(*(int *)(this + 0x10) << 2) + 0x1f);
  if (uVar3 == *(uint *)(pIVar10 + 0xc08)) {
    uVar9 = *(ulong *)(pIVar10 + 0x2bc8) & 0xffffffff00000000;
    uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(pIVar10 + 0x2bc8) - 1
                                                                   )) + 0x13)) + 499);
    if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar10 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar10 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar10);
      }
      *(ulong **)(pIVar10 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar9;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar9);
    }
    puVar5 = (undefined8 *)Factory::NewJSObject((Factory *)pIVar10,puVar4,0);
  }
  else {
    pIVar1 = pIVar10 + 0x95b8;
    uVar9 = (ulong)pIVar10 | (ulong)uVar3;
    if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar10 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar10 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar10);
      }
      *(ulong **)(pIVar10 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar9;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar9);
    }
    uVar9 = *(ulong *)(pIVar10 + 0x2bc8) & 0xffffffff00000000;
    uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)((uVar9 | *(uint *)(*(ulong *)(pIVar10 + 0x2bc8) - 1
                                                                   )) + 0x13)) + 499);
    if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar10 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar10 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar10);
      }
      *(ulong **)(pIVar10 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar9;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar9);
    }
    puVar5 = (undefined8 *)Factory::NewJSObject((Factory *)pIVar10,puVar6,0);
    uVar9 = *puVar4;
    if (7 < *(int *)(uVar9 + 3)) {
      iVar11 = 0x10;
      lVar12 = 0xc00000000;
      lVar13 = 3;
      do {
        uVar3 = *(uint *)((lVar12 >> 0x20) + uVar9 + 7);
        if ((uVar3 & 1) == 0) {
          uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 7 + (long)iVar11);
          if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
            puVar6 = *(ulong **)(pIVar10 + 0x95a0);
            if (puVar6 == *(ulong **)(pIVar10 + 0x95a8)) {
              puVar6 = (ulong *)HandleScope::Extend(pIVar10);
            }
            *(ulong **)(pIVar10 + 0x95a0) = puVar6 + 1;
            *puVar6 = uVar9;
          }
          else {
            puVar6 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar9);
          }
          plVar7 = (long *)ArrayList::Elements(pIVar10,puVar6);
          uVar8 = Factory::NewJSArrayWithElements(pIVar10,plVar7,3,*(int *)(*plVar7 + 3) >> 1,0);
          JSObject::AddDataElement(puVar5,(int)uVar3 >> 1,uVar8,0);
          uVar9 = *puVar4;
        }
        lVar13 = lVar13 + 2;
        iVar11 = iVar11 + 8;
        lVar12 = lVar12 + 0x800000000;
      } while (lVar13 < *(int *)(uVar9 + 3) >> 1);
    }
  }
  return *puVar5;
}

