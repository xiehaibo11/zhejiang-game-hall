
/* bool 
   v8::internal::AllocationSite::DigestTransitionFeedback<(v8::internal::AllocationSiteUpdateMode)0>(v8::internal::Handle<v8::internal::AllocationSite>,
   v8::internal::ElementsKind) */

bool v8::internal::AllocationSite::
     DigestTransitionFeedback<(v8::internal::AllocationSiteUpdateMode)0>
               (ulong *param_1,ulong param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  Isolate *pIVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  ulong local_38;
  
  uVar10 = param_2 & 0xffffffff;
  uVar7 = *(uint *)(*param_1 + 3);
  pIVar8 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar9 = (uint)param_2;
  if (((uVar7 & 1) == 0) ||
     (uVar11 = (ulong)pIVar8 | (ulong)uVar7,
     *(short *)(((ulong)pIVar8 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x423)) {
    uVar3 = uVar7 >> 1 & 0x1f;
    if ((uVar3 < 6) &&
       ((((uVar7 >> 1 & 1) != 0 && ((uVar9 & 0xff) < 7)) &&
        ((0x55U >> (ulong)(uVar9 & 0x1f) & 1) != 0)))) {
      uVar10 = 0x7010501030101 >> ((param_2 & 7) << 3);
    }
    uVar11 = IsMoreGeneralElementsKindTransition(uVar3,uVar10 & 0xffffffff);
    if ((uVar11 & 1) == 0) {
      return false;
    }
    if (FLAG_trace_track_allocation_sites != '\0') {
      uVar11 = *param_1;
      uVar5 = ElementsKindToString(uVar3);
      uVar6 = ElementsKindToString(uVar10 & 0xffffffff);
      PrintF("AllocationSite: JSArray %p site updated %s->%s\n",uVar11,uVar5,uVar6);
    }
    *(uint *)(*param_1 + 3) = *(uint *)(*param_1 + 3) & 0xffffffc0 | ((uint)uVar10 & 0xff) << 1;
LAB_010c955c:
    local_38 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0xb);
    DependentCode::DeoptimizeDependentCodeGroup(&local_38,pIVar8,6);
    return true;
  }
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar11;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar11);
    uVar11 = *puVar4;
  }
  bVar2 = *(byte *)((uVar11 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar11 - 1));
  if (((bVar2 < 0x30) && ((bVar2 >> 3 & 1) != 0)) &&
     (((uVar9 & 0xff) < 7 && ((0x55U >> (ulong)(uVar9 & 0x1f) & 1) != 0)))) {
    uVar10 = 0x7010501030101 >> ((param_2 & 7) << 3);
  }
  uVar11 = IsMoreGeneralElementsKindTransition(bVar2 >> 3,uVar10 & 0xffffffff);
  if ((uVar11 & 1) != 0) {
    uVar7 = *(uint *)(*puVar4 + 0xb);
    if ((uVar7 & 1) == 0) {
      if ((int)uVar7 < 0) goto LAB_010c971c;
      uVar7 = uVar7 >> 1;
    }
    else {
      uVar12 = *puVar4 & 0xffffffff00000000;
      uVar11 = uVar12 | uVar7;
      if (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x42) {
LAB_010c971c:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","boilerplate->length().ToArrayLength(&length)");
      }
      dVar13 = *(double *)(uVar11 + 3);
      dVar14 = dVar13 + 4503599627370496.0;
      if (((ulong)dVar14 >> 0x20 != 0x43300000) || (dVar13 != (double)((ulong)dVar14 & 0xffffffff)))
      goto LAB_010c971c;
      uVar7 = SUB84(dVar14,0);
    }
    if (uVar7 < 0x2001) {
      if (FLAG_trace_track_allocation_sites != '\0') {
        local_38 = *param_1;
        uVar11 = IsNested((AllocationSite *)&local_38);
        uVar12 = *param_1;
        pcVar1 = "(nested)";
        if ((uVar11 & 1) == 0) {
          pcVar1 = " ";
        }
        uVar5 = ElementsKindToString(bVar2 >> 3);
        uVar6 = ElementsKindToString(uVar10 & 0xffffffff);
        PrintF("AllocationSite: JSArray %p boilerplate %supdated %s->%s\n",uVar12,pcVar1,uVar5,uVar6
              );
      }
      JSObject::TransitionElementsKind(puVar4,uVar10 & 0xffffffff);
      goto LAB_010c955c;
    }
  }
  return false;
}

