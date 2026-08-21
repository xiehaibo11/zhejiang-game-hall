
undefined8
FUN_01591228(Isolate *param_1,ulong *param_2,ulong *param_3,undefined8 param_4,uint param_5,
            uint param_6,uint param_7,undefined4 param_8,undefined8 *param_9,undefined4 param_10)

{
  uint *puVar1;
  Isolate *pIVar2;
  long lVar3;
  uint uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  uint local_d0;
  int local_cc;
  undefined8 local_c4;
  long local_b8;
  ulong *local_b0;
  undefined8 uStack_a8;
  ulong *local_a0;
  undefined8 uStack_98;
  ulong *local_90;
  long local_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  byte local_70;
  undefined8 local_68;
  
  uVar9 = *param_2 & 0xffffffff00000000;
  uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)(*param_2 + 0xb)) + 0x273);
  pIVar2 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar2;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar5 + 1;
    *puVar5 = uVar9;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
    uVar9 = *puVar5;
  }
  uVar9 = v8::internal::ScriptContextTable::Lookup(param_1,uVar9,*param_3,auStack_78);
  if (((uVar9 & 1) != 0) && (local_70 < 2)) {
    lVar8 = *(long *)pIVar2;
    lVar3 = *(long *)(param_1 + 0x95a8);
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
    puVar6 = (undefined8 *)
             v8::internal::Factory::NewSyntaxError((Factory *)param_1,0xb0,param_3,0,0);
    uVar7 = v8::internal::Isolate::Throw(param_1,*puVar6,0);
    *(long *)pIVar2 = lVar8;
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
    if (*(long *)(param_1 + 0x95a8) == lVar3) {
      return uVar7;
    }
    *(long *)(param_1 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_1);
    return uVar7;
  }
  local_b8 = (ulong)*(uint *)((long)param_2 + 4) << 0x20;
  local_d0 = param_7;
  if (*(short *)(((ulong)*(uint *)((long)param_2 + 4) << 0x20 | 7) + (ulong)*(uint *)(*param_3 - 1))
      == 0x40) {
    local_d0 = (*(byte *)(*param_3 + 7) & 1) == 0 & param_7;
  }
  local_d0 = local_d0 & 1;
  local_c4 = 0xc000000000;
  local_b0 = param_3;
  if ((*(ushort *)((*param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_3 - 1)) & 0xffe0)
      == 0x20) {
    local_b0 = (ulong *)v8::internal::StringTable::LookupString(local_b8,param_3);
  }
  uStack_a8 = 0;
  uStack_98 = 0;
  local_80 = 0xffffffffffffffff;
  local_88 = -1;
  local_a0 = param_2;
  local_90 = param_2;
  v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_d0);
  uVar9 = v8::internal::JSReceiver::GetPropertyAttributes((LookupIterator *)&local_d0);
  if ((uVar9 & 0xff) == 0) {
LAB_015914dc:
    uVar7 = *(undefined8 *)(param_1 + 0x180);
  }
  else {
    if (local_cc == 4) {
LAB_0159140c:
      uVar11 = (ulong)param_5;
LAB_01591410:
      if ((param_7 & 1) != 0) {
        if (local_88 == -1) {
          v8::internal::LookupIterator::RestartInternal<false>((LookupIterator *)&local_d0,0);
        }
        else {
          v8::internal::LookupIterator::RestartInternal<true>((LookupIterator *)&local_d0,0);
        }
      }
      lVar8 = v8::internal::JSObject::DefineOwnPropertyIgnoreAttributes(&local_d0,param_4,uVar11,1);
      if (lVar8 == 0) goto LAB_015914dc;
      if ((param_9 != (undefined8 *)0x0) && (local_cc != 2)) {
        uVar11 = *param_2;
        uVar9 = uVar11 & 0xffffffff00000000;
        if ((*(byte *)((uVar9 | 9) + (ulong)*(uint *)(uVar11 - 1)) >> 2 & 1) != 0) {
          uVar4 = *(uint *)((uVar9 | 0x13) + (ulong)*(uint *)(uVar11 - 1));
          uVar11 = uVar9 | uVar4;
          if ((uVar4 & 1) != 0) {
            do {
              if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0xa2) {
                if (((uVar11 & 1) != 0) &&
                   (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x439)) {
                  uVar11 = uVar11 & 0xffffffff00000000 |
                           (ulong)*(uint *)((uVar11 & 0xffffffff00000000 |
                                            (ulong)*(uint *)(uVar11 + 0xb)) + 3);
                }
                break;
              }
              puVar1 = (uint *)(uVar11 + 0x13);
              uVar11 = uVar9 | *puVar1;
            } while ((*puVar1 & 1) != 0);
          }
          uVar10 = *(ulong *)(uVar9 + 0xa0);
          if (*(uint *)(uVar11 + 0x23) != (uint)uVar10) {
            uVar10 = uVar9 | *(uint *)((uVar9 | *(uint *)(uVar11 + 0x23)) + 0xf);
          }
          if ((*(byte *)(uVar10 + 0x23) >> 3 & 1) == 0) goto LAB_01591594;
        }
        local_e8 = param_9;
        uStack_e0 = 0;
        local_d8 = param_10;
        local_68 = *param_9;
        local_d4 = v8::internal::FeedbackVector::GetKind((FeedbackVector *)&local_68,param_10);
        uVar7 = v8::internal::LookupIterator::GetPropertyCell((LookupIterator *)&local_d0);
        v8::internal::FeedbackNexus::ConfigurePropertyCellMode((FeedbackNexus *)&local_e8,uVar7);
      }
    }
    else if ((param_6 & 1) == 0) {
      uVar11 = uVar9 >> 0x20;
      if (((uint)(uVar9 >> 0x22) & 1) == 0) {
        if (local_cc == 5) {
          v8::internal::LookupIterator::Delete((LookupIterator *)&local_d0);
        }
        goto LAB_0159140c;
      }
      if (((uVar9 & 0x300000000) != 0) || (local_cc == 5)) {
        uVar7 = FUN_015915bc(param_1,param_3,param_8);
        return uVar7;
      }
      goto LAB_01591410;
    }
LAB_01591594:
    uVar7 = *(undefined8 *)(param_1 + 0xa0);
  }
  return uVar7;
}

