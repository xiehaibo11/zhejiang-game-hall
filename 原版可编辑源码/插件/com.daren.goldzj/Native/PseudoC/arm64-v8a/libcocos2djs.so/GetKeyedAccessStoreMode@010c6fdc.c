
/* v8::internal::FeedbackNexus::GetKeyedAccessStoreMode() const */

int __thiscall v8::internal::FeedbackNexus::GetKeyedAccessStoreMode(FeedbackNexus *this)

{
  FeedbackNexus *pFVar1;
  long lVar2;
  FeedbackNexus *pFVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  CanonicalHandleScope *pCVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong *puVar10;
  Isolate *pIVar11;
  uint uVar12;
  ulong uVar13;
  int *local_80;
  int *local_78;
  undefined8 local_70;
  void *local_68;
  void *local_60;
  undefined8 uStack_58;
  
  local_60 = (void *)0x0;
  uStack_58 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_80 = (int *)0x0;
  local_78 = (int *)0x0;
  pFVar1 = this + 8;
  pFVar3 = pFVar1;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar3 = *(FeedbackNexus **)this;
  }
  iVar6 = *(int *)(this + 0x10) * 4;
  uVar9 = *(ulong *)pFVar3 & 0xffffffff00000000;
  lVar2 = *(ulong *)pFVar3 + 0x1f;
  uVar12 = *(uint *)(lVar2 + iVar6);
  if (uVar12 == *(uint *)(uVar9 + 0xb88)) {
    if (*(int *)(lVar2 + (iVar6 + 4)) >> 1 == 1) goto LAB_010c7270;
  }
  else {
    if (*(int *)(this + 0x14) == 0x11) {
      uVar12 = *(uint *)(lVar2 + (iVar6 + 4));
    }
    if (((ulong)uVar12 & 3) == 1) {
      uVar13 = uVar9 | uVar12;
      if ((*(ushort *)((uVar9 | 7) + (ulong)*(uint *)(uVar13 - 1)) < 0x40) ||
         (((*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0x40 &&
           (uVar12 != *(uint *)(uVar9 + 0xc08))) && (uVar12 != *(uint *)(uVar9 + 0xb88)))))
      goto LAB_010c7270;
    }
  }
  ExtractMapsAndHandlers(this,(vector *)&local_68,(vector *)&local_80);
  piVar5 = local_78;
  if (local_80 != local_78) {
    puVar10 = *(ulong **)(local_80 + 2);
    piVar4 = local_80;
    while (puVar10 != (ulong *)0x0) {
      uVar9 = *puVar10;
      if ((uVar9 & 1) == 0) {
        pFVar3 = pFVar1;
        if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
          pFVar3 = *(FeedbackNexus **)this;
        }
        pCVar7 = *(CanonicalHandleScope **)((ulong)*(uint *)(pFVar3 + 4) << 0x20 | 0x95b8);
        if (pCVar7 == (CanonicalHandleScope *)0x0) {
          pIVar11 = (Isolate *)((ulong)*(uint *)(pFVar3 + 4) << 0x20);
          puVar8 = *(undefined8 **)(pIVar11 + 0x95a0);
          if (puVar8 == *(undefined8 **)(pIVar11 + 0x95a8)) {
            puVar8 = (undefined8 *)HandleScope::Extend(pIVar11);
          }
          *(undefined8 **)(pIVar11 + 0x95a0) = puVar8 + 1;
          *puVar8 = 0x16;
          if ((int)uVar9 != 0x16) goto LAB_010c71d4;
        }
        else {
          puVar8 = (undefined8 *)CanonicalHandleScope::Lookup(pCVar7,0x16);
          if ((int)uVar9 != (int)*puVar8) {
LAB_010c71d4:
            puVar10 = *(ulong **)(piVar4 + 2);
            if (*piVar4 == 0) {
              if (puVar10 == (ulong *)0x0) break;
              iVar6 = StoreHandler::GetKeyedAccessStoreMode(*puVar10 | 2);
            }
            else {
              if (puVar10 == (ulong *)0x0) break;
              iVar6 = StoreHandler::GetKeyedAccessStoreMode(*puVar10);
            }
            if (iVar6 != 0) goto joined_r0x010c7268;
          }
        }
      }
      else {
        if (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x4d) {
          uVar13 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 3);
          if ((*(uint *)(uVar9 + 3) & 1) == 0) {
            iVar6 = StoreHandler::GetKeyedAccessStoreMode(uVar13);
            if (iVar6 == 0) goto LAB_010c70fc;
            goto joined_r0x010c7268;
          }
          pFVar3 = pFVar1;
          if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
            pFVar3 = *(FeedbackNexus **)this;
          }
          pCVar7 = *(CanonicalHandleScope **)((ulong)*(uint *)(pFVar3 + 4) << 0x20 | 0x95b8);
          if (pCVar7 == (CanonicalHandleScope *)0x0) {
            pIVar11 = (Isolate *)((ulong)*(uint *)(pFVar3 + 4) << 0x20);
            puVar10 = *(ulong **)(pIVar11 + 0x95a0);
            if (puVar10 == *(ulong **)(pIVar11 + 0x95a8)) {
              puVar10 = (ulong *)HandleScope::Extend(pIVar11);
            }
            *(ulong **)(pIVar11 + 0x95a0) = puVar10 + 1;
            *puVar10 = uVar13;
          }
          else {
            puVar10 = (ulong *)CanonicalHandleScope::Lookup(pCVar7,uVar13);
          }
          uVar9 = *puVar10;
        }
        if ((*(int *)(uVar9 + 0x27) != -1) && (uVar12 = *(int *)(uVar9 + 0x27) - 0x7e, uVar12 < 0xc)
           ) {
          if (0xb < uVar12) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          iVar6 = *(int *)(&DAT_019d69f0 + (long)(int)uVar12 * 4);
          goto joined_r0x010c7268;
        }
      }
LAB_010c70fc:
      if (piVar5 == piVar4 + 4) goto LAB_010c7270;
      puVar10 = *(ulong **)(piVar4 + 6);
      piVar4 = piVar4 + 4;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
LAB_010c7270:
  iVar6 = 0;
joined_r0x010c7268:
  if (local_80 != (int *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
  if (local_68 != (void *)0x0) {
    local_60 = local_68;
    operator_delete(local_68);
  }
  return iVar6;
}

