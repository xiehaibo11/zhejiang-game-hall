
ulong * FUN_00eda908(Isolate *param_1,StackFrameIterator *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  JavaScriptFrame *pJVar11;
  TranslatedValue *this;
  ulong uVar12;
  Factory *pFVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  int local_104;
  long *local_100;
  TranslatedValue *local_f8;
  int local_f0;
  TranslatedState aTStack_e8 [120];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  pJVar11 = *(JavaScriptFrame **)(param_2 + 0x588);
  if (param_3 < 1) {
    if (*(long *)(**(long **)(pJVar11 + 0x20) + -8) == 0x26) {
      v8::internal::StackFrameIterator::Advance(param_2);
      pJVar11 = *(JavaScriptFrame **)(param_2 + 0x588);
    }
    uVar3 = (**(code **)(*(long *)pJVar11 + 0x78))(pJVar11);
    uVar12 = (ulong)uVar3;
    uVar5 = (**(code **)(*(long *)pJVar11 + 0x98))(pJVar11);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(param_1 + 0x95a0);
      if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
        puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar5;
    }
    else {
      puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    }
    puVar7 = (ulong *)v8::internal::Factory::NewArgumentsObject((Factory *)param_1,puVar7,uVar12);
    puVar8 = (ulong *)v8::internal::Factory::NewFixedArray((Factory *)param_1,uVar12,0);
    if (0 < (int)uVar3) {
      iVar16 = 0;
      uVar5 = 0;
      do {
        uVar14 = (**(code **)(*(long *)pJVar11 + 0x70))(pJVar11,uVar5 & 0xffffffff);
        if ((uVar14 & 1) == 0) {
          uVar10 = 0;
        }
        else if ((int)uVar14 == *(int *)(param_1 + 0xa8)) {
          uVar14 = *(ulong *)(param_1 + 0xa0);
          uVar10 = uVar14 & 1;
        }
        else {
          uVar10 = 1;
        }
        uVar15 = *puVar8;
        *(int *)(uVar15 + (long)iVar16 + 7) = (int)uVar14;
        if (uVar10 != 0) {
          uVar10 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
          lVar4 = uVar15 + (long)iVar16 + 7;
          if (((uint)uVar10 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar15,lVar4,uVar14);
            uVar10 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar15,lVar4,uVar14);
          }
        }
        uVar5 = uVar5 + 1;
        iVar16 = iVar16 + 4;
      } while (uVar12 != uVar5);
    }
    uVar5 = *puVar8;
    uVar12 = *puVar7;
    *(int *)(uVar12 + 7) = (int)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar14 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar14 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar12,uVar12 + 7,uVar5);
        uVar14 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar12,uVar12 + 7,uVar5);
      }
    }
  }
  else {
    pFVar13 = *(Factory **)(pJVar11 + 0x10);
    v8::internal::TranslatedState::TranslatedState(aTStack_e8,pJVar11);
    v8::internal::TranslatedState::Prepare(aTStack_e8,*(ulong *)(pJVar11 + 0x20));
    local_104 = 0;
    lVar4 = v8::internal::TranslatedState::GetArgumentsInfoFromJSFrameIndex
                      (aTStack_e8,param_3,&local_104);
    local_100 = (long *)(*(long *)(lVar4 + 0x30) +
                        (*(ulong *)(lVar4 + 0x48) >> 4 & 0xffffffffffffff8));
    if (*(long *)(lVar4 + 0x38) == *(long *)(lVar4 + 0x30)) {
      this = (TranslatedValue *)0x0;
    }
    else {
      this = (TranslatedValue *)(*local_100 + (*(ulong *)(lVar4 + 0x48) & 0x7f) * 0x20);
    }
    local_f8 = this;
    uVar5 = v8::internal::TranslatedValue::IsMaterializedObject(this);
    uVar12 = uVar5 & 0xffffffff;
    uVar6 = v8::internal::TranslatedValue::GetValue(this);
    local_f0 = 1;
    v8::internal::TranslatedFrame::AdvanceIterator((__deque_iterator *)&local_100);
    local_f0 = local_f0 + 1;
    v8::internal::TranslatedFrame::AdvanceIterator((__deque_iterator *)&local_100);
    local_104 = local_104 + -1;
    puVar7 = (ulong *)v8::internal::Factory::NewArgumentsObject(pFVar13,uVar6);
    puVar8 = (ulong *)v8::internal::Factory::NewFixedArray(pFVar13,local_104,0);
    if (0 < local_104) {
      iVar16 = 0;
      lVar4 = 0;
      if ((uVar5 & 1) == 0) goto LAB_00edaadc;
      do {
        uVar12 = 1;
        while( true ) {
          puVar9 = (ulong *)v8::internal::TranslatedValue::GetValue(local_f8);
          uVar14 = *puVar8;
          uVar5 = *puVar9;
          *(int *)(uVar14 + (long)iVar16 + 7) = (int)uVar5;
          if ((uVar5 & 1) != 0) {
            uVar10 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
            lVar1 = uVar14 + (long)iVar16 + 7;
            if (((uint)uVar10 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar14,lVar1,uVar5);
              uVar10 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar10 & 0x18) != 0) &&
               ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar14,lVar1,uVar5);
            }
          }
          local_f0 = local_f0 + 1;
          v8::internal::TranslatedFrame::AdvanceIterator((__deque_iterator *)&local_100);
          lVar4 = lVar4 + 1;
          iVar16 = iVar16 + 4;
          if (local_104 <= lVar4) goto LAB_00edab58;
          if ((uVar12 & 1) != 0) break;
LAB_00edaadc:
          uVar12 = v8::internal::TranslatedValue::IsMaterializedObject(local_f8);
          uVar12 = uVar12 & 0xffffffff;
        }
      } while( true );
    }
LAB_00edab58:
    uVar14 = *puVar7;
    uVar5 = *puVar8;
    *(int *)(uVar14 + 7) = (int)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar10 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar10 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar14,uVar14 + 7,uVar5);
        uVar10 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar14,uVar14 + 7,uVar5);
      }
    }
    if ((uVar12 & 1) != 0) {
      v8::internal::TranslatedState::StoreMaterializedValuesAndDeopt(aTStack_e8,pJVar11);
    }
    v8::internal::TranslatedState::~TranslatedState(aTStack_e8);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}

