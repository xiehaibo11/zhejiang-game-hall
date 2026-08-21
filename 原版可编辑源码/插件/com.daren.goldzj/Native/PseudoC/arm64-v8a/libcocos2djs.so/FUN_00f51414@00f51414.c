
undefined8 FUN_00f51414(Isolate *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 local_c8;
  undefined8 local_bc;
  ulong local_b0;
  Isolate *local_a8;
  undefined8 uStack_a0;
  ulong *local_98;
  undefined8 uStack_90;
  ulong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  if ((*(byte *)(*param_2 + 0xf) >> 4 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 3000);
    local_b0 = *param_2 & 0xffffffff00000000;
    local_a8 = param_1 + 3000;
    uVar11 = 2;
    if (*(short *)((local_b0 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x40) {
      uVar11 = (*(int *)(uVar9 + 7) << 1 ^ 0xffffffffU) & 2;
    }
    local_bc = 0xc000000000;
    local_c8._0_4_ = uVar11;
    if ((*(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) & 0xffe0) ==
        0x20) {
      local_a8 = (Isolate *)v8::internal::StringTable::LookupString();
    }
    uStack_a0 = 0;
    uStack_90 = 0;
    local_78 = 0xffffffffffffffff;
    local_80 = 0xffffffffffffffff;
    local_98 = param_2;
    local_88 = param_2;
    v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_c8);
    if (local_c8._4_4_ == 4) {
      uVar9 = *(ulong *)(local_b0 + 0xa0);
    }
    else {
      puVar5 = (ulong *)v8::internal::JSReceiver::GetDataProperty((LookupIterator *)&local_c8);
      uVar9 = *puVar5;
    }
    if ((((uVar9 & 1) == 0) ||
        (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x42d)) ||
       (uVar9 = FUN_00f51414(param_1), (uVar9 & 1) == 0)) {
      local_c8 = *param_2;
      iVar4 = v8::internal::JSPromise::status((JSPromise *)&local_c8);
      if (iVar4 == 0) {
        pIVar2 = param_1 + 0x95a0;
        uVar11 = *(uint *)(*param_2 + 0xb);
        uVar9 = *param_2 & 0xffffffff00000000 | (ulong)uVar11;
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)pIVar2;
          if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
            puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar2 = puVar5 + 1;
          *puVar5 = uVar9;
          if ((uVar11 & 1) == 0) {
            return 0;
          }
        }
        else {
          puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
          uVar9 = *puVar5;
          if ((uVar9 & 1) == 0) {
            return 0;
          }
        }
        pIVar1 = param_1 + 0xbb0;
        do {
          while( true ) {
            uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 0xf);
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar6 = *(ulong **)pIVar2;
              if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
                puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_1);
              }
              *(ulong **)pIVar2 = puVar6 + 1;
              *puVar6 = uVar9;
            }
            else {
              puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
              uVar9 = *puVar6;
            }
            uVar11 = *(uint *)(param_1 + 0xa0);
            if ((uint)uVar9 != uVar11) {
              if (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) !=
                  0x42d) {
                uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 3);
                if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                  puVar6 = *(ulong **)pIVar2;
                  if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
                    puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_1);
                  }
                  *(ulong **)pIVar2 = puVar6 + 1;
                  *puVar6 = uVar9;
                }
                else {
                  puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                              (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
                }
                uVar11 = *(uint *)(param_1 + 0xa0);
              }
              uVar3 = *(uint *)(*puVar5 + 7);
              if (uVar3 != uVar11) {
                uVar9 = *puVar5 & 0xffffffff00000000 | (ulong)uVar3;
                if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                  puVar7 = *(ulong **)pIVar2;
                  if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
                    puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_1);
                  }
                  *(ulong **)pIVar2 = puVar7 + 1;
                  *puVar7 = uVar9;
                }
                else {
                  puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                              (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
                  uVar9 = *puVar7;
                }
                uVar10 = *(ulong *)pIVar1;
                local_b0 = uVar9 & 0xffffffff00000000;
                if (*(short *)((local_b0 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x40) {
                  uVar11 = (*(int *)(uVar10 + 7) << 1 ^ 0xffffffffU) & 2;
                }
                else {
                  uVar11 = 2;
                }
                local_c8 = CONCAT44(local_c8._4_4_,uVar11);
                local_bc = 0xc000000000;
                pIVar8 = pIVar1;
                if ((*(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) &
                    0xffe0) == 0x20) {
                  pIVar8 = (Isolate *)v8::internal::StringTable::LookupString(local_b0,pIVar1);
                }
                uStack_a0 = 0;
                uStack_90 = 0;
                local_80 = 0xffffffffffffffff;
                local_78 = 0xffffffffffffffff;
                local_a8 = pIVar8;
                local_98 = puVar7;
                local_88 = puVar7;
                v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_c8);
                if (local_c8._4_4_ == 4) {
                  uVar9 = *(ulong *)(local_b0 + 0xa0);
                  iVar4 = (int)uVar9;
                }
                else {
                  puVar7 = (ulong *)v8::internal::JSReceiver::GetDataProperty
                                              ((LookupIterator *)&local_c8);
                  uVar9 = *puVar7;
                  iVar4 = (int)uVar9;
                }
                if (((uVar9 & 1) != 0) && (iVar4 == *(int *)(param_1 + 0xa0))) {
                  return 1;
                }
                if (*(short *)((*puVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar6 - 1))
                    != 0x42d) {
                  return 1;
                }
              }
              uVar9 = FUN_00f51414(param_1,puVar6);
              if ((uVar9 & 1) != 0) {
                return 1;
              }
            }
            uVar11 = *(uint *)(*puVar5 + 3);
            uVar9 = *puVar5 & 0xffffffff00000000 | (ulong)uVar11;
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) break;
            puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
            uVar9 = *puVar5;
            if ((uVar9 & 1) == 0) {
              return 0;
            }
          }
          puVar5 = *(ulong **)pIVar2;
          if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
            puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar2 = puVar5 + 1;
          *puVar5 = uVar9;
        } while ((uVar11 & 1) != 0);
      }
      return 0;
    }
  }
  return 1;
}

