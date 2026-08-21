
/* bool 
   v8::internal::AllocationSite::DigestTransitionFeedback<(v8::internal::AllocationSiteUpdateMode)1>(v8::internal::Handle<v8::internal::AllocationSite>,
   v8::internal::ElementsKind) */

bool v8::internal::AllocationSite::
     DigestTransitionFeedback<(v8::internal::AllocationSiteUpdateMode)1>
               (ulong *param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  
  uVar7 = param_2 & 0xffffffff;
  uVar1 = *(uint *)(*param_1 + 3);
  uVar6 = (uint)param_2;
  if ((uVar1 & 1) != 0) {
    pIVar4 = (Isolate *)(*param_1 & 0xffffffff00000000);
    uVar8 = (ulong)pIVar4 | (ulong)uVar1;
    if (*(short *)(((ulong)pIVar4 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x423) {
      if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)(pIVar4 + 0x95a0);
        if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(pIVar4);
        }
        *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
        *puVar5 = uVar8;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar8);
        uVar8 = *puVar5;
      }
      bVar2 = *(byte *)((uVar8 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar8 - 1));
      if ((((bVar2 < 0x30) && ((bVar2 >> 3 & 1) != 0)) && ((uVar6 & 0xff) < 7)) &&
         ((0x55U >> (ulong)(uVar6 & 0x1f) & 1) != 0)) {
        uVar7 = 0x7010501030101 >> ((param_2 & 7) << 3);
      }
      uVar7 = IsMoreGeneralElementsKindTransition(bVar2 >> 3,uVar7 & 0xffffffff);
      if ((uVar7 & 1) != 0) {
        uVar1 = *(uint *)(*puVar5 + 0xb);
        if ((uVar1 & 1) == 0) {
          if (-1 < (int)uVar1) {
            if (uVar1 >> 1 < 0x2001) {
              return true;
            }
            return false;
          }
        }
        else {
          uVar8 = *puVar5 & 0xffffffff00000000;
          uVar7 = uVar8 | uVar1;
          if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x42) {
            dVar9 = *(double *)(uVar7 + 3);
            dVar10 = dVar9 + 4503599627370496.0;
            if (((ulong)dVar10 >> 0x20 == 0x43300000) &&
               (dVar9 == (double)((ulong)dVar10 & 0xffffffff))) {
              if (0x2000 < SUB84(dVar10,0)) {
                return false;
              }
              return true;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","boilerplate->length().ToArrayLength(&length)");
      }
      return false;
    }
  }
  uVar3 = uVar1 >> 1 & 0x1f;
  if (((uVar3 < 6) && ((uVar1 >> 1 & 1) != 0)) &&
     (((uVar6 & 0xff) < 7 && ((0x55U >> (ulong)(uVar6 & 0x1f) & 1) != 0)))) {
    uVar7 = 0x7010501030101 >> ((param_2 & 7) << 3);
  }
  uVar7 = IsMoreGeneralElementsKindTransition(uVar3,uVar7 & 0xffffffff);
  if ((uVar7 & 1) != 0) {
    return true;
  }
  return false;
}

