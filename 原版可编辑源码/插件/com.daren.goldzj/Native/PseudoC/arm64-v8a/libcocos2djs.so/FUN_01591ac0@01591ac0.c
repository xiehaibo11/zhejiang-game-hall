
void FUN_01591ac0(undefined8 *param_1,Isolate *param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  void *pvVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  JavaScriptFrame *pJVar10;
  ulong uVar11;
  int local_6b4;
  void *local_6b0;
  void *local_6a8;
  undefined8 uStack_6a0;
  long *local_698;
  TranslatedValue *local_690;
  int local_688;
  TranslatedState aTStack_680 [120];
  StackFrameIterator aSStack_608 [1416];
  JavaScriptFrame *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  v8::internal::StackFrameIterator::StackFrameIterator(aSStack_608,param_2);
  if (local_80 != (JavaScriptFrame *)0x0) {
    v8::internal::JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)aSStack_608);
  }
  pJVar10 = local_80;
  local_6a8 = (void *)0x0;
  uStack_6a0 = 0;
  local_6b0 = (void *)0x0;
  (**(code **)(*(long *)local_80 + 0xa0))(local_80,&local_6b0);
  uVar9 = (long)local_6a8 - (long)local_6b0;
  if ((ulong)((long)uVar9 >> 3) < 2) {
    pJVar10 = local_80;
    if (*(long *)(**(long **)(local_80 + 0x20) + -8) == 0x26) {
      v8::internal::StackFrameIterator::Advance(aSStack_608);
      pJVar10 = local_80;
    }
    uVar11 = (**(code **)(*(long *)pJVar10 + 0x78))(pJVar10);
    iVar2 = (int)uVar11;
    *param_3 = iVar2;
    uVar9 = -(uVar11 >> 0x1f & 1) & 0xfffffff800000000 | (uVar11 & 0xffffffff) << 3;
    if ((ulong)(long)iVar2 >> 0x3d != 0) {
      uVar9 = 0xffffffffffffffff;
    }
    pvVar6 = operator_new__(uVar9,(nothrow_t *)&std::nothrow);
    if (pvVar6 == (void *)0x0) {
      plVar7 = (long *)v8::internal::V8::GetCurrentPlatform();
      (**(code **)(*plVar7 + 0x18))();
      pvVar6 = operator_new__(uVar9,(nothrow_t *)&std::nothrow);
      if (pvVar6 == (void *)0x0) goto LAB_01591e2c;
    }
    if (iVar2 == 0) {
      *param_1 = pvVar6;
    }
    else {
      memset(pvVar6,0,(long)iVar2 << 3);
      *param_1 = pvVar6;
      if (0 < iVar2) {
        uVar9 = 0;
        do {
          uVar4 = (**(code **)(*(long *)pJVar10 + 0x70))(pJVar10,uVar9 & 0xffffffff);
          if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar5 = *(ulong **)(param_2 + 0x95a0);
            if (puVar5 == *(ulong **)(param_2 + 0x95a8)) {
              puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_2);
            }
            *(ulong **)(param_2 + 0x95a0) = puVar5 + 1;
            *puVar5 = uVar4;
          }
          else {
            puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar4);
          }
          *(ulong **)((long)pvVar6 + uVar9 * 8) = puVar5;
          uVar9 = uVar9 + 1;
        } while ((uVar11 & 0xffffffff) != uVar9);
      }
    }
  }
  else {
    v8::internal::TranslatedState::TranslatedState(aTStack_680,pJVar10);
    v8::internal::TranslatedState::Prepare(aTStack_680,*(ulong *)(pJVar10 + 0x20));
    local_6b4 = 0;
    lVar3 = v8::internal::TranslatedState::GetArgumentsInfoFromJSFrameIndex
                      (aTStack_680,(int)(uVar9 >> 3) + -1,&local_6b4);
    local_698 = (long *)(*(long *)(lVar3 + 0x30) +
                        (*(ulong *)(lVar3 + 0x48) >> 4 & 0xffffffffffffff8));
    if (*(long *)(lVar3 + 0x38) == *(long *)(lVar3 + 0x30)) {
      local_690 = (TranslatedValue *)0x0;
    }
    else {
      local_690 = (TranslatedValue *)(*local_698 + (*(ulong *)(lVar3 + 0x48) & 0x7f) * 0x20);
    }
    local_688 = 1;
    v8::internal::TranslatedFrame::AdvanceIterator((__deque_iterator *)&local_698);
    local_688 = local_688 + 1;
    v8::internal::TranslatedFrame::AdvanceIterator((__deque_iterator *)&local_698);
    uVar11 = (long)local_6b4 - 1;
    iVar2 = (int)uVar11;
    *param_3 = iVar2;
    uVar9 = uVar11 * 8;
    if (uVar11 >> 0x3d != 0) {
      uVar9 = 0xffffffffffffffff;
    }
    local_6b4 = iVar2;
    pvVar6 = operator_new__(uVar9,(nothrow_t *)&std::nothrow);
    if (pvVar6 == (void *)0x0) {
      plVar7 = (long *)v8::internal::V8::GetCurrentPlatform();
      (**(code **)(*plVar7 + 0x18))();
      pvVar6 = operator_new__(uVar9,(nothrow_t *)&std::nothrow);
      if (pvVar6 == (void *)0x0) {
LAB_01591e2c:
                    /* WARNING: Subroutine does not return */
        v8::internal::FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
      }
    }
    if (iVar2 != 0) {
      memset(pvVar6,0,uVar11 * 8);
    }
    *param_1 = pvVar6;
    if (0 < local_6b4) {
      lVar3 = 0;
      do {
        uVar9 = v8::internal::TranslatedValue::IsMaterializedObject(local_690);
        uVar9 = uVar9 & 0xffffffff;
        while( true ) {
          uVar8 = v8::internal::TranslatedValue::GetValue(local_690);
          *(undefined8 *)((long)pvVar6 + lVar3 * 8) = uVar8;
          local_688 = local_688 + 1;
          v8::internal::TranslatedFrame::AdvanceIterator((__deque_iterator *)&local_698);
          lVar3 = lVar3 + 1;
          if (local_6b4 <= lVar3) {
            if ((uVar9 & 1) != 0) {
              v8::internal::TranslatedState::StoreMaterializedValuesAndDeopt(aTStack_680,pJVar10);
            }
            goto LAB_01591dd0;
          }
          if ((uVar9 & 1) == 0) break;
          uVar9 = 1;
        }
      } while( true );
    }
LAB_01591dd0:
    v8::internal::TranslatedState::~TranslatedState(aTStack_680);
  }
  if (local_6b0 != (void *)0x0) {
    local_6a8 = local_6b0;
    operator_delete(local_6b0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

