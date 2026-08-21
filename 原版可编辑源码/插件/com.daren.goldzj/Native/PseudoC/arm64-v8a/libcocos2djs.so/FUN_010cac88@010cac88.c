
ulong * FUN_010cac88(ulong *param_1)

{
  long lVar1;
  Isolate *pIVar2;
  JSReceiver *this;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  CanonicalHandleScope *pCVar6;
  ulong uVar7;
  ulong uVar8;
  Isolate *pIVar9;
  ulong *puVar10;
  ulong local_e8;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 local_cc;
  Isolate *local_c0;
  Isolate *local_b8;
  undefined8 uStack_b0;
  ulong *local_a8;
  undefined8 uStack_a0;
  ulong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  Isolate *local_80;
  undefined8 uStack_78;
  ulong *local_70;
  undefined4 local_68;
  char local_64;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar7 = *param_1;
  pIVar9 = (Isolate *)(uVar7 & 0xffffffff00000000);
  uVar5 = (ulong)pIVar9 | 7;
  pIVar2 = pIVar9;
  if (((*(short *)(uVar5 + *(uint *)(uVar7 - 1)) == 0xa9) ||
      ((*(byte *)(((ulong)pIVar9 | (ulong)*(uint *)(uVar7 - 1)) + 10) & 1) == 0)) ||
     ((*(uint *)(((ulong)pIVar9 | (ulong)*(uint *)(uVar7 - 1)) + 0xb) >> 0x14 & 1) != 0)) {
LAB_010cad28:
    uVar7 = *(ulong *)(pIVar9 + 0xc78);
    local_b8 = pIVar9 + 0xc78;
    uVar4 = 2;
    if (*(short *)(uVar5 + *(uint *)(uVar7 - 1)) == 0x40) {
      uVar4 = (*(int *)(uVar7 + 7) << 1 ^ 0xffffffffU) & 2;
    }
    local_d8 = CONCAT44(local_d8._4_4_,uVar4);
    local_cc = 0xc000000000;
    local_c0 = pIVar2;
    if ((*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) & 0xffe0) ==
        0x20) {
      local_b8 = (Isolate *)v8::internal::StringTable::LookupString();
    }
    uStack_b0 = 0;
    uStack_a0 = 0;
    local_88 = 0xffffffffffffffff;
    uStack_90 = 0xffffffffffffffff;
    local_a8 = param_1;
    local_98 = param_1;
    v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_d8);
    if (local_d8._4_4_ == 4) {
      uVar5 = *(ulong *)(local_c0 + 0xa0);
      if ((uVar5 & 1) == 0) goto LAB_010cadec;
LAB_010cadd4:
      if (0x3f < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)))
      goto LAB_010cadec;
    }
    else {
      puVar3 = (ulong *)v8::internal::JSReceiver::GetDataProperty((LookupIterator *)&local_d8);
      uVar5 = *puVar3;
      if ((uVar5 & 1) != 0) goto LAB_010cadd4;
LAB_010cadec:
      uStack_78 = 0;
      local_68 = 0;
      local_64 = '\0';
      local_60 = 0;
      local_80 = pIVar9;
      local_70 = param_1;
      if (param_1 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!handle_.is_null()");
      }
      v8::internal::PrototypeIterator::Advance((PrototypeIterator *)&local_80);
      puVar3 = local_70;
      if (local_64 == '\0') {
        uVar5 = *(ulong *)(pIVar9 + 0x5d0);
        pIVar2 = pIVar9 + 0x5d0;
        local_c0 = (Isolate *)((ulong)*(uint *)((long)local_70 + 4) << 0x20);
        uVar4 = 2;
        if (*(short *)(((ulong)*(uint *)((long)local_70 + 4) << 0x20 | 7) +
                      (ulong)*(uint *)(uVar5 - 1)) == 0x40) {
          uVar4 = (*(int *)(uVar5 + 7) << 1 ^ 0xffffffffU) & 2;
        }
        local_d8 = CONCAT44(local_d8._4_4_,uVar4);
        local_cc = 0xc000000000;
        if ((*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) & 0xffe0)
            == 0x20) {
          pIVar2 = (Isolate *)v8::internal::StringTable::LookupString();
        }
        uStack_b0 = 0;
        uStack_a0 = 0;
        local_88 = 0xffffffffffffffff;
        local_98 = puVar3;
        uStack_90 = 0xffffffffffffffff;
        local_b8 = pIVar2;
        local_a8 = param_1;
        v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_d8);
        puVar3 = (ulong *)v8::internal::JSReceiver::GetDataProperty((LookupIterator *)&local_d8);
        uVar5 = *puVar3;
        if (((uVar5 & 1) != 0) &&
           (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x439)) {
          local_e8 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb);
          local_e0 = v8::internal::SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_e8);
          if (((*(int *)(local_e0 + 7) != 0) &&
              (uVar7 = *(ulong *)(pIVar9 + 0x8a0), (int)uVar7 != (int)local_e0)) &&
             (((*(ushort *)((local_e0 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_e0 - 1)) <
                0x20 && (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1))
                         < 0x20)) ||
              (uVar7 = v8::internal::String::SlowEquals((String *)&local_e0), (uVar7 & 1) == 0)))) {
            pCVar6 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
            if (pCVar6 == (CanonicalHandleScope *)0x0) {
              puVar10 = *(ulong **)(pIVar9 + 0x95a0);
              if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
                puVar10 = (ulong *)v8::internal::HandleScope::Extend(pIVar9);
              }
              *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
              *puVar10 = uVar5;
            }
            else {
              puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(pCVar6,uVar5);
            }
            pCVar6 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
            uVar7 = local_e0;
            goto joined_r0x010cb118;
          }
        }
        local_e0 = *param_1;
        this = (JSReceiver *)&local_e0;
      }
      else {
        local_d8 = *param_1;
        this = (JSReceiver *)&local_d8;
      }
      uVar7 = v8::internal::JSReceiver::class_name(this);
      pCVar6 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
      if (pCVar6 == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(pIVar9 + 0x95a0);
        if (puVar3 == *(ulong **)(pIVar9 + 0x95a8)) {
          puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar9);
        }
        *(ulong **)(pIVar9 + 0x95a0) = puVar3 + 1;
        *puVar3 = uVar7;
      }
      else {
LAB_010caf60:
        v8::internal::CanonicalHandleScope::Lookup(pCVar6,uVar7);
      }
    }
    puVar10 = (ulong *)0x0;
  }
  else {
    uVar4 = *(uint *)(((ulong)pIVar9 | (ulong)*(uint *)(uVar7 - 1)) + 0x13);
    while ((uVar7 = (ulong)pIVar9 | (ulong)uVar4, (uVar4 & 1) != 0 &&
           (*(short *)(uVar5 + *(uint *)(uVar7 - 1)) == 0xa2))) {
      uVar4 = *(uint *)(uVar7 + 0x13);
    }
    if ((uVar4 & 1) == 0) goto LAB_010cad28;
    uVar8 = (ulong)pIVar9 | 7;
    if (*(short *)(uVar8 + *(uint *)(uVar7 - 1)) == 0x439) {
      local_80 = (Isolate *)((ulong)pIVar9 | (ulong)*(uint *)(uVar7 + 0xb));
      local_d8 = v8::internal::SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_80);
      if (((*(int *)(local_d8 + 7) == 0) ||
          (uVar5 = *(ulong *)(pIVar9 + 0x8a0), (int)uVar5 == (int)local_d8)) ||
         (((0x1f < *(ushort *)((local_d8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_d8 - 1))
           || (0x1f < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1))))
          && (uVar5 = v8::internal::String::SlowEquals((String *)&local_d8), (uVar5 & 1) != 0)))) {
        uVar5 = (ulong)*(uint *)((long)param_1 + 4) << 0x20 | 7;
        pIVar2 = (Isolate *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
        goto LAB_010cad28;
      }
      pCVar6 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
      if (pCVar6 == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)(pIVar9 + 0x95a0);
        if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
          puVar10 = (ulong *)v8::internal::HandleScope::Extend(pIVar9);
        }
        *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
        *puVar10 = uVar7;
      }
      else {
        puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(pCVar6,uVar7);
      }
      pCVar6 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
      uVar7 = local_d8;
joined_r0x010cb118:
      if (pCVar6 != (CanonicalHandleScope *)0x0) {
        v8::internal::CanonicalHandleScope::Lookup(pCVar6,uVar7);
        goto LAB_010caf9c;
      }
      puVar3 = *(ulong **)(pIVar9 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar9 + 0x95a8)) {
        puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar9);
      }
    }
    else {
      if (((*(short *)(uVar8 + *(uint *)(uVar7 - 1)) != 0x4e) ||
          ((*(uint *)(uVar7 + 0x1b) & 1) == 0)) ||
         (uVar7 = (ulong)pIVar9 | (ulong)*(uint *)(uVar7 + 0x1b),
         0x3f < *(ushort *)(uVar8 + *(uint *)(uVar7 - 1)))) goto LAB_010cad28;
      pCVar6 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
      if (pCVar6 != (CanonicalHandleScope *)0x0) goto LAB_010caf60;
      puVar3 = *(ulong **)(pIVar9 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar9 + 0x95a8)) {
        puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar9);
      }
      puVar10 = (ulong *)0x0;
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar7;
  }
LAB_010caf9c:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar10;
}

