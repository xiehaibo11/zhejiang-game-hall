
void FUN_014b8ac8(Isolate *param_1,BuiltinArguments *param_2,code *param_3,ulong param_4)

{
  Isolate *pIVar1;
  long *plVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  int iVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ConsoleCallArguments aCStack_f0 [24];
  undefined8 local_d8;
  int local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  ulong local_c0;
  Isolate *local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  iVar6 = (int)*(ulong *)(param_1 + 0x2bd8);
  if (((*(ulong *)(param_1 + 0x2bd8) & 1) == 0) || (iVar6 != *(int *)(param_1 + 0xa8))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!isolate->has_pending_exception()");
  }
  if (*(int *)(param_1 + 0x2c20) != iVar6) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!isolate->has_scheduled_exception()");
  }
  pIVar1 = param_1 + 0x95a0;
  if (*(long *)(param_1 + 0xc708) != 0) {
    puVar3 = *(ulong **)pIVar1;
    puVar4 = *(ulong **)(param_1 + 0x95a8);
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
    uVar12 = *(ulong *)(param_1 + 0x2bc8);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = puVar3;
      if (puVar4 == puVar3) {
        puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar7 + 1;
      *puVar7 = uVar12;
    }
    else {
      puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
    }
    if (4 < *(int *)param_2) {
      uVar12 = 0;
      lVar10 = 0;
      do {
        puVar13 = (ulong *)(*(long *)(param_2 + 8) - (uVar12 & 0xfffffff8));
        uVar14 = *puVar13;
        if (((uVar14 & 1) != 0) &&
           (uVar11 = uVar14 & 0xffffffff00000000,
           0xa9 < *(ushort *)((uVar11 | 7) + (ulong)*(uint *)(uVar14 - 1)))) {
          if (*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(uVar14 - 1)) == 0xab) {
            local_d8 = *(undefined8 *)(uVar11 + 0x2bc8);
            iVar6 = v8::internal::Context::global_object((Context *)&local_d8);
            local_d0 = (int)uVar14;
            uStack_cc = (undefined4)(uVar14 >> 0x20);
            local_c8 = 0;
            uStack_c4 = 0;
            local_c0 = local_c0 & 0xffffff0000000000;
            local_b8 = (Isolate *)((ulong)local_b8 & 0xffffffff00000000);
            local_d8 = uVar11;
            v8::internal::PrototypeIterator::Advance((PrototypeIterator *)&local_d8);
            if (local_d0 != iVar6) {
LAB_014b8bb0:
              uVar14 = v8::internal::Isolate::MayAccess(param_1,puVar7,puVar13);
              if ((uVar14 & 1) == 0) {
                v8::internal::Isolate::ReportFailedAccessCheck(param_1,puVar13);
                if (param_1 == (Isolate *)0x0) goto LAB_014b8e84;
                goto LAB_014b8e58;
              }
            }
          }
          else if ((*(byte *)(((ulong)param_1 | 9) + (ulong)*(uint *)(uVar14 - 1)) >> 5 & 1) != 0)
          goto LAB_014b8bb0;
        }
        lVar10 = lVar10 + 1;
        uVar12 = uVar12 + 8;
      } while (lVar10 < *(int *)param_2 + -4);
    }
    v8::debug::ConsoleCallArguments::ConsoleCallArguments(aCStack_f0,param_2);
    pIVar8 = param_1 + 0xb20;
    uVar12 = *(ulong *)(param_1 + 0xb20);
    local_a8 = *(long *)(param_2 + 8) - (long)(*(int *)param_2 * 8 + -0x10);
    local_c0 = (ulong)*(uint *)(local_a8 + 4) << 0x20;
    uVar9 = 2;
    if (*(short *)(((ulong)*(uint *)(local_a8 + 4) << 0x20 | 7) + (ulong)*(uint *)(uVar12 - 1)) ==
        0x40) {
      uVar9 = (*(int *)(uVar12 + 7) << 1 ^ 0xffffffffU) & 2;
    }
    uStack_cc = 0;
    local_c8 = 0xc0;
    local_d8._0_4_ = uVar9;
    if ((*(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) & 0xffe0) ==
        0x20) {
      pIVar8 = (Isolate *)v8::internal::StringTable::LookupString();
    }
    uStack_b0 = 0;
    uStack_a0 = 0;
    local_88 = 0xffffffffffffffff;
    uStack_90 = 0xffffffffffffffff;
    local_b8 = pIVar8;
    local_98 = local_a8;
    v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_d8);
    if (local_d8._4_4_ == 4) {
      puVar7 = (ulong *)(local_c0 + 0xa0);
    }
    else {
      puVar7 = (ulong *)v8::internal::JSReceiver::GetDataProperty((LookupIterator *)&local_d8);
    }
    pIVar8 = param_1 + 0xb28;
    uVar12 = *(ulong *)(param_1 + 0xb28);
    lVar10 = *(long *)(param_2 + 8) - (long)(*(int *)param_2 * 8 + -0x10);
    iVar6 = (int)*puVar7 >> 1;
    if ((*puVar7 & 1) != 0) {
      iVar6 = 0;
    }
    local_c0 = (ulong)*(uint *)(lVar10 + 4) << 0x20;
    local_d8._0_4_ = 2;
    if (*(short *)(((ulong)*(uint *)(lVar10 + 4) << 0x20 | 7) + (ulong)*(uint *)(uVar12 - 1)) ==
        0x40) {
      local_d8._0_4_ = (*(int *)(uVar12 + 7) << 1 ^ 0xffffffffU) & 2;
    }
    uStack_cc = 0;
    local_c8 = 0xc0;
    if ((*(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) & 0xffe0) ==
        0x20) {
      pIVar8 = (Isolate *)v8::internal::StringTable::LookupString();
    }
    uStack_b0 = 0;
    uStack_a0 = 0;
    local_88 = 0xffffffffffffffff;
    uStack_90 = 0xffffffffffffffff;
    local_b8 = pIVar8;
    local_a8 = lVar10;
    local_98 = lVar10;
    v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_d8);
    if (local_d8._4_4_ == 4) {
      pIVar8 = (Isolate *)(local_c0 + 0xa0);
    }
    else {
      pIVar8 = (Isolate *)v8::internal::JSReceiver::GetDataProperty((LookupIterator *)&local_d8);
    }
    uVar12 = *(ulong *)pIVar8;
    if (((uVar12 & 1) == 0) ||
       (0x3f < *(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)))) {
      pIVar8 = param_1 + 0x4b0;
    }
    plVar2 = (long *)(*(long *)(param_1 + 0xc708) + ((long)param_4 >> 1));
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *plVar2);
    }
    local_d0 = (int)pIVar8;
    uStack_cc = (undefined4)((ulong)pIVar8 >> 0x20);
    local_d8 = CONCAT44(local_d8._4_4_,iVar6);
    (*param_3)(plVar2,aCStack_f0,&local_d8);
LAB_014b8e58:
    *(ulong **)pIVar1 = puVar3;
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
    if (*(ulong **)(param_1 + 0x95a8) != puVar4) {
      *(ulong **)(param_1 + 0x95a8) = puVar4;
      v8::internal::HandleScope::DeleteExtensions(param_1);
    }
  }
LAB_014b8e84:
  if (*(long *)(lVar5 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

