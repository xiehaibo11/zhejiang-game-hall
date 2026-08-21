
/* v8::internal::JSReceiver::GetConstructor(v8::internal::Handle<v8::internal::JSReceiver>) */

ulong * v8::internal::JSReceiver::GetConstructor(ulong *param_1)

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
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_cc;
  Isolate *pIStack_c0;
  Isolate *pIStack_b8;
  undefined8 uStack_b0;
  ulong *puStack_a8;
  undefined8 uStack_a0;
  ulong *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  Isolate *pIStack_80;
  undefined8 uStack_78;
  ulong *puStack_70;
  undefined4 uStack_68;
  char cStack_64;
  undefined4 uStack_60;
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  uVar7 = *param_1;
  pIVar9 = (Isolate *)(uVar7 & 0xffffffff00000000);
  uVar5 = (ulong)pIVar9 | 7;
  pIVar2 = pIVar9;
  if (((*(short *)(uVar5 + *(uint *)(uVar7 - 1)) == 0xa9) ||
      ((*(byte *)(((ulong)pIVar9 | (ulong)*(uint *)(uVar7 - 1)) + 10) & 1) == 0)) ||
     ((*(uint *)(((ulong)pIVar9 | (ulong)*(uint *)(uVar7 - 1)) + 0xb) >> 0x14 & 1) != 0)) {
LAB_010cad28:
    uVar7 = *(ulong *)(pIVar9 + 0xc78);
    pIStack_b8 = pIVar9 + 0xc78;
    uVar4 = 2;
    if (*(short *)(uVar5 + *(uint *)(uVar7 - 1)) == 0x40) {
      uVar4 = (*(int *)(uVar7 + 7) << 1 ^ 0xffffffffU) & 2;
    }
    uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar4);
    uStack_cc = 0xc000000000;
    pIStack_c0 = pIVar2;
    if ((*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) & 0xffe0) ==
        0x20) {
      pIStack_b8 = (Isolate *)StringTable::LookupString();
    }
    uStack_b0 = 0;
    uStack_a0 = 0;
    uStack_88 = 0xffffffffffffffff;
    uStack_90 = 0xffffffffffffffff;
    puStack_a8 = param_1;
    puStack_98 = param_1;
    LookupIterator::Start<false>((LookupIterator *)&uStack_d8);
    if (uStack_d8._4_4_ == 4) {
      uVar5 = *(ulong *)(pIStack_c0 + 0xa0);
      if ((uVar5 & 1) == 0) goto LAB_010cadec;
LAB_010cadd4:
      if (0x3f < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)))
      goto LAB_010cadec;
    }
    else {
      puVar3 = (ulong *)GetDataProperty((LookupIterator *)&uStack_d8);
      uVar5 = *puVar3;
      if ((uVar5 & 1) != 0) goto LAB_010cadd4;
LAB_010cadec:
      uStack_78 = 0;
      uStack_68 = 0;
      cStack_64 = '\0';
      uStack_60 = 0;
      pIStack_80 = pIVar9;
      puStack_70 = param_1;
      if (param_1 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!handle_.is_null()");
      }
      PrototypeIterator::Advance((PrototypeIterator *)&pIStack_80);
      puVar3 = puStack_70;
      if (cStack_64 == '\0') {
        uVar5 = *(ulong *)(pIVar9 + 0x5d0);
        pIVar2 = pIVar9 + 0x5d0;
        pIStack_c0 = (Isolate *)((ulong)*(uint *)((long)puStack_70 + 4) << 0x20);
        uVar4 = 2;
        if (*(short *)(((ulong)*(uint *)((long)puStack_70 + 4) << 0x20 | 7) +
                      (ulong)*(uint *)(uVar5 - 1)) == 0x40) {
          uVar4 = (*(int *)(uVar5 + 7) << 1 ^ 0xffffffffU) & 2;
        }
        uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar4);
        uStack_cc = 0xc000000000;
        if ((*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) & 0xffe0)
            == 0x20) {
          pIVar2 = (Isolate *)StringTable::LookupString();
        }
        uStack_b0 = 0;
        uStack_a0 = 0;
        uStack_88 = 0xffffffffffffffff;
        puStack_98 = puVar3;
        uStack_90 = 0xffffffffffffffff;
        pIStack_b8 = pIVar2;
        puStack_a8 = param_1;
        LookupIterator::Start<false>((LookupIterator *)&uStack_d8);
        puVar3 = (ulong *)GetDataProperty((LookupIterator *)&uStack_d8);
        uVar5 = *puVar3;
        if (((uVar5 & 1) != 0) &&
           (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x439)) {
          uStack_e8 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb);
          uStack_e0 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&uStack_e8);
          if (((*(int *)(uStack_e0 + 7) != 0) &&
              (uVar7 = *(ulong *)(pIVar9 + 0x8a0), (int)uVar7 != (int)uStack_e0)) &&
             (((*(ushort *)((uStack_e0 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uStack_e0 - 1))
                < 0x20 &&
               (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0x20))
              || (uVar7 = String::SlowEquals((String *)&uStack_e0), (uVar7 & 1) == 0)))) {
            pCVar6 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
            if (pCVar6 == (CanonicalHandleScope *)0x0) {
              puVar10 = *(ulong **)(pIVar9 + 0x95a0);
              if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
                puVar10 = (ulong *)HandleScope::Extend(pIVar9);
              }
              *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
              *puVar10 = uVar5;
            }
            else {
              puVar10 = (ulong *)CanonicalHandleScope::Lookup(pCVar6,uVar5);
            }
            pCVar6 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
            uVar7 = uStack_e0;
            goto joined_r0x010cb118;
          }
        }
        uStack_e0 = *param_1;
        this = (JSReceiver *)&uStack_e0;
      }
      else {
        uStack_d8 = *param_1;
        this = (JSReceiver *)&uStack_d8;
      }
      uVar7 = class_name(this);
      pCVar6 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
      if (pCVar6 == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(pIVar9 + 0x95a0);
        if (puVar3 == *(ulong **)(pIVar9 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(pIVar9);
        }
        *(ulong **)(pIVar9 + 0x95a0) = puVar3 + 1;
        *puVar3 = uVar7;
      }
      else {
LAB_010caf60:
        CanonicalHandleScope::Lookup(pCVar6,uVar7);
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
      pIStack_80 = (Isolate *)((ulong)pIVar9 | (ulong)*(uint *)(uVar7 + 0xb));
      uStack_d8 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&pIStack_80);
      if (((*(int *)(uStack_d8 + 7) == 0) ||
          (uVar5 = *(ulong *)(pIVar9 + 0x8a0), (int)uVar5 == (int)uStack_d8)) ||
         (((0x1f < *(ushort *)
                    ((uStack_d8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uStack_d8 - 1)) ||
           (0x1f < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)))) &&
          (uVar5 = String::SlowEquals((String *)&uStack_d8), (uVar5 & 1) != 0)))) {
        uVar5 = (ulong)*(uint *)((long)param_1 + 4) << 0x20 | 7;
        pIVar2 = (Isolate *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
        goto LAB_010cad28;
      }
      pCVar6 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
      if (pCVar6 == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)(pIVar9 + 0x95a0);
        if (puVar10 == *(ulong **)(pIVar9 + 0x95a8)) {
          puVar10 = (ulong *)HandleScope::Extend(pIVar9);
        }
        *(ulong **)(pIVar9 + 0x95a0) = puVar10 + 1;
        *puVar10 = uVar7;
      }
      else {
        puVar10 = (ulong *)CanonicalHandleScope::Lookup(pCVar6,uVar7);
      }
      pCVar6 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
      uVar7 = uStack_d8;
joined_r0x010cb118:
      if (pCVar6 != (CanonicalHandleScope *)0x0) {
        CanonicalHandleScope::Lookup(pCVar6,uVar7);
        goto LAB_010caf9c;
      }
      puVar3 = *(ulong **)(pIVar9 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar9 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar9);
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
        puVar3 = (ulong *)HandleScope::Extend(pIVar9);
      }
      puVar10 = (ulong *)0x0;
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar7;
  }
LAB_010caf9c:
  if (*(long *)(lVar1 + 0x28) != lStack_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar10;
}

