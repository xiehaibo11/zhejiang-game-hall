
/* v8::internal::TranslatedState::StoreMaterializedValuesAndDeopt(v8::internal::JavaScriptFrame*) */

void __thiscall
v8::internal::TranslatedState::StoreMaterializedValuesAndDeopt
          (TranslatedState *this,JavaScriptFrame *param_1)

{
  long lVar1;
  Factory *pFVar2;
  int *piVar3;
  TranslatedValue *this_00;
  byte bVar4;
  int iVar5;
  int iVar6;
  MaterializedObjectStore *this_01;
  ulong *puVar7;
  ulong uVar8;
  Factory *pFVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  Isolate *pIVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  ulong uVar18;
  
  this_01 = *(MaterializedObjectStore **)(*(long *)(this + 0x18) + 0x9580);
  puVar7 = (ulong *)MaterializedObjectStore::Get(this_01,*(ulong *)(this + 0x20));
  uVar15 = *(ulong *)(this + 0x58);
  pFVar2 = *(Factory **)(this + 0x18) + 0x178;
  iVar5 = (int)uVar15;
  if (puVar7 == (ulong *)0x0) {
    puVar7 = (ulong *)Factory::NewFixedArray(*(Factory **)(this + 0x18),uVar15 & 0xffffffff,1);
    if (0 < iVar5) {
      lVar14 = 0;
      do {
        uVar8 = *puVar7;
        uVar16 = *(ulong *)pFVar2;
        lVar1 = uVar8 + (long)(int)lVar14;
        *(int *)(lVar1 + 7) = (int)uVar16;
        if ((uVar16 & 1) != 0) {
          uVar18 = *(ulong *)((uVar16 & 0xfffffffffffc0000) + 8);
          lVar1 = lVar1 + 7;
          if (((uint)uVar18 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar8,lVar1,uVar16);
            uVar18 = *(ulong *)(uVar16 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar18 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar8,lVar1,uVar16);
          }
        }
        lVar14 = lVar14 + 4;
      } while ((uVar15 & 0xffffffff) * 4 - lVar14 != 0);
    }
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  if (iVar5 != *(int *)(*puVar7 + 3) >> 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","length == previously_materialized_objects->length()");
  }
  if (0 < iVar5) {
    iVar5 = 0;
    uVar16 = 0;
    bVar17 = 0;
    do {
      piVar3 = (int *)(*(long *)(*(long *)(this + 0x38) +
                                (uVar16 + *(long *)(this + 0x50) >> 6 & 0x3fffffffffffff8)) +
                      (uVar16 + *(long *)(this + 0x50) & 0x1ff) * 8);
      lVar14 = *(long *)this + (long)*piVar3 * 0x58;
      uVar8 = *(long *)(lVar14 + 0x48) + (long)piVar3[1];
      this_00 = (TranslatedValue *)
                (*(long *)(*(long *)(lVar14 + 0x30) + (uVar8 >> 4 & 0xffffffffffffff8)) +
                (uVar8 & 0x7f) * 0x20);
      if (((byte)*this_00 & 0xfe) != 8) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","value_info->IsMaterializedObject()");
      }
      if (uVar16 == *(uint *)(this_00 + 0x18)) {
        uVar8 = TranslatedValue::GetRawValue(this_00);
        pIVar12 = *(Isolate **)(this + 0x18);
        if (*(CanonicalHandleScope **)(pIVar12 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          pFVar9 = *(Factory **)(pIVar12 + 0x95a0);
          if (pFVar9 == *(Factory **)(pIVar12 + 0x95a8)) {
            pFVar9 = (Factory *)HandleScope::Extend(pIVar12);
          }
          *(Factory **)(pIVar12 + 0x95a0) = pFVar9 + 8;
          *(ulong *)pFVar9 = uVar8;
        }
        else {
          pFVar9 = (Factory *)
                   CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar12 + 0x95b8),uVar8);
        }
        if (pFVar9 != pFVar2) {
          if (pFVar9 == (Factory *)0x0) {
            lVar14 = *(long *)pFVar2;
          }
          else {
            lVar14 = *(long *)pFVar2;
            if (*(long *)pFVar9 == lVar14) goto LAB_00f24ad4;
          }
          uVar8 = *puVar7;
          piVar3 = (int *)(uVar8 + (long)iVar5 + 7);
          if (*(int *)(uVar8 + (long)iVar5 + 7) == (int)lVar14) {
            uVar18 = *(ulong *)pFVar9;
            *piVar3 = (int)uVar18;
            if ((uVar18 & 1) != 0) {
              uVar13 = *(ulong *)((uVar18 & 0xfffffffffffc0000) + 8);
              if (((uint)uVar13 >> 0x12 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar8,piVar3,uVar18);
                uVar13 = *(ulong *)(uVar18 & 0xfffffffffffc0000 | 8);
              }
              if (((uVar13 & 0x18) != 0) &&
                 ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar8,piVar3,uVar18);
              }
            }
            bVar17 = 1;
          }
          else if (*piVar3 != *(int *)pFVar9) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","previously_materialized_objects->get(i) == *value");
          }
        }
      }
LAB_00f24ad4:
      uVar16 = uVar16 + 1;
      iVar5 = iVar5 + 4;
    } while ((uVar15 & 0xffffffff) != uVar16);
    if (!(bool)(bVar4 | bVar17 ^ 1)) {
      MaterializedObjectStore::Set(this_01,*(undefined8 *)(this + 0x20),puVar7);
      if (**(int **)this != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","frames_[0].kind() == TranslatedFrame::kInterpretedFunction");
      }
      iVar5 = (**(code **)(*(long *)param_1 + 0x98))(param_1);
      uVar15 = *(ulong *)(*(long *)this + 0x48);
      iVar6 = TranslatedValue::GetRawValue
                        ((TranslatedValue *)
                         (*(long *)(*(long *)(*(long *)this + 0x30) +
                                   (uVar15 >> 4 & 0xffffffffffffff8)) + (uVar15 & 0x7f) * 0x20));
      if (iVar5 == iVar6) {
        uVar10 = (**(code **)(*(long *)param_1 + 0x98))(param_1);
        uVar11 = StackFrame::LookupCode((StackFrame *)param_1);
        Deoptimizer::DeoptimizeFunction(uVar10,uVar11);
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","frame->function() == frames_[0].front().GetRawValue()");
    }
  }
  return;
}

