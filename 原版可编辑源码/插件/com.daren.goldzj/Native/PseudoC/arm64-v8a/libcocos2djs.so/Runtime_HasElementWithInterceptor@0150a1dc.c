
/* v8::internal::Runtime_HasElementWithInterceptor(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_HasElementWithInterceptor(int param_1,ulong *param_2,Isolate *param_3)

{
  uint *puVar1;
  Isolate *pIVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  Isolate *pIVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  Logger *this;
  RuntimeCallStats *local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  Isolate *local_f8;
  ulong *local_f0;
  undefined8 local_e8;
  ulong *puStack_e0;
  undefined8 local_d8;
  ulong *puStack_d0;
  ulong local_c8;
  undefined8 uStack_c0;
  int local_b4;
  undefined **local_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  long local_88;
  undefined8 local_78;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar12 = FUN_0150a5e8(param_1,param_2,param_3);
    return uVar12;
  }
  pIVar2 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar2;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar14 = *param_2 & 0xffffffff00000000;
  uVar7 = *(uint *)((uVar14 | 0x13) + (ulong)*(uint *)(*param_2 - 1));
  uVar15 = uVar14 | uVar7;
  if ((uVar7 & 1) != 0) {
    do {
      if (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar15 - 1)) != 0xa2) {
        if (((uVar15 & 1) != 0) &&
           (*(short *)((uVar14 | 7) + (ulong)*(uint *)(uVar15 - 1)) == 0x439)) {
          uVar15 = uVar15 & 0xffffffff00000000 |
                   (ulong)*(uint *)((uVar15 & 0xffffffff00000000 | (ulong)*(uint *)(uVar15 + 0xb)) +
                                   3);
        }
        break;
      }
      puVar1 = (uint *)(uVar15 + 0x13);
      uVar15 = uVar14 | *puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  uVar16 = *(ulong *)(uVar14 + 0xa0);
  if (*(uint *)(uVar15 + 0x23) != (uint)uVar16) {
    uVar16 = uVar14 | *(uint *)((uVar14 | *(uint *)(uVar15 + 0x23)) + 0x13);
  }
  uVar7 = (int)param_2[-1] >> 1;
  uVar14 = (ulong)uVar7;
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)pIVar2;
    if (puVar9 == *(ulong **)(param_3 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar2 = puVar9 + 1;
    *puVar9 = uVar16;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar16);
    uVar16 = *puVar9;
  }
  PropertyCallbackArguments::PropertyCallbackArguments
            ((PropertyCallbackArguments *)&local_b0,param_3,
             uVar16 & 0xffffffff00000000 | (ulong)*(uint *)(uVar16 + 0x1f),*param_2,*param_2,
             0x100000001);
  uVar5 = *(uint *)(*puVar9 + 0xb);
  if (((uVar5 & 1) == 0) || (uVar5 != *(uint *)(param_3 + 0xa0))) {
    puVar10 = (undefined8 *)
              PropertyCallbackArguments::CallIndexedQuery
                        ((PropertyCallbackArguments *)&local_b0,puVar9,uVar14);
    if (puVar10 != (undefined8 *)0x0) {
      local_110 = (RuntimeCallStats *)*puVar10;
      uVar14 = Object::ToInt32((Object *)&local_110,&local_b4);
      if ((uVar14 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","result->ToInt32(&value)");
      }
      lVar11 = 0xc0;
      if (local_b4 != 0x40) {
        lVar11 = 0xb8;
      }
      uVar12 = *(undefined8 *)(param_3 + lVar11);
      goto LAB_0150a558;
    }
  }
  else {
    uVar6 = *(uint *)(*puVar9 + 3);
    if ((uVar6 != uVar5) || ((uVar6 & 1) == 0)) {
      local_f0 = (ulong *)0x0;
      uStack_108 = 0;
      uStack_104 = 0;
      local_110 = (RuntimeCallStats *)0x0;
      local_f8 = (Isolate *)0x0;
      uStack_100 = 0;
      uStack_fc = 0;
      if (TracingFlags::runtime_stats != 0) {
        local_110 = (RuntimeCallStats *)(*(long *)(local_88 + 0x9520) + 0x58a0);
        RuntimeCallStats::Enter(local_110,(ulong)&local_110 | 8,0xa0);
      }
      this = *(Logger **)(local_88 + 0x9558);
      uVar15 = Logger::is_logging(this);
      if ((uVar15 & 1) != 0) {
        Logger::ApiIndexedPropertyAccess(this,"interceptor-indexed-getter",local_90,uVar14);
      }
      uVar5 = *(uint *)(*puVar9 + 3);
      if (uVar5 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)((*puVar9 & 0xffffffff00000000 | (ulong)uVar5) + 3);
      }
      lVar11 = PropertyCallbackArguments::BasicCallIndexedGetterCallback
                         ((PropertyCallbackArguments *)&local_b0,uVar12,uVar14,puVar9);
      if (local_110 != (RuntimeCallStats *)0x0) {
        RuntimeCallStats::Leave(local_110,(RuntimeCallTimer *)((ulong)&local_110 | 8));
      }
      if (lVar11 != 0) {
        uVar12 = *(undefined8 *)(param_3 + 0xb8);
        goto LAB_0150a558;
      }
    }
  }
  local_110 = (RuntimeCallStats *)CONCAT44(local_110._4_4_,3);
  local_f0 = (ulong *)0x0;
  local_e8 = 0;
  local_d8 = 0;
  uStack_104 = 0;
  uStack_100 = 0xc0;
  uStack_c0 = 0xffffffffffffffff;
  local_f8 = param_3;
  puVar9 = local_f0;
  puStack_e0 = param_2;
  puStack_d0 = param_2;
  local_c8 = uVar14;
  if (((uVar7 == 0xffffffff) &&
      (*(short *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) != 0x41b))
     && (puVar9 = (ulong *)Factory::SizeToString((Factory *)param_3,0xffffffff,true),
        (*(ushort *)((*puVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar9 - 1)) & 0xffe0)
        == 0x20)) {
    puVar9 = (ulong *)StringTable::LookupString(param_3);
  }
  local_f0 = puVar9;
  LookupIterator::Start<true>((LookupIterator *)&local_110);
  LookupIterator::Next((LookupIterator *)&local_110);
  uVar8 = JSReceiver::HasProperty((LookupIterator *)&local_110);
  if ((uVar8 & 0xff) == 0) {
    pIVar13 = param_3 + 0x180;
  }
  else if (uVar8 < 0x100) {
    pIVar13 = param_3 + 0xc0;
  }
  else {
    pIVar13 = param_3 + 0xb8;
  }
  uVar12 = *(undefined8 *)pIVar13;
LAB_0150a558:
  local_b0 = &PTR__Relocatable_01cacc40;
  local_78 = 0x1baddead0baddeaf;
  *(undefined8 *)(local_a8 + 0xb790) = uStack_a0;
  *(long *)pIVar2 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar12;
}

