
/* v8::internal::Runtime_LoadElementWithInterceptor(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_LoadElementWithInterceptor(int param_1,ulong *param_2,Isolate *param_3)

{
  uint *puVar1;
  Isolate *pIVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
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
  undefined **local_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  long local_88;
  undefined8 local_78;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar9 = FUN_015098c8(param_1,param_2,param_3);
    return uVar9;
  }
  pIVar2 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar2;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar12 = param_2[-1];
  uVar10 = *param_2 & 0xffffffff00000000;
  uVar6 = *(uint *)((uVar10 | 0x13) + (ulong)*(uint *)(*param_2 - 1));
  uVar11 = uVar10 | uVar6;
  if ((uVar6 & 1) != 0) {
    do {
      if (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0xa2) {
        if (((uVar11 & 1) != 0) &&
           (*(short *)((uVar10 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x439)) {
          uVar11 = uVar11 & 0xffffffff00000000 |
                   (ulong)*(uint *)((uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 0xb)) +
                                   3);
        }
        break;
      }
      puVar1 = (uint *)(uVar11 + 0x13);
      uVar11 = uVar10 | *puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  uVar13 = *(ulong *)(uVar10 + 0xa0);
  if (*(uint *)(uVar11 + 0x23) != (uint)uVar13) {
    uVar13 = uVar10 | *(uint *)((uVar10 | *(uint *)(uVar11 + 0x23)) + 0x13);
  }
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar2;
    if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar2 = puVar7 + 1;
    *puVar7 = uVar13;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar13);
    uVar13 = *puVar7;
  }
  uVar6 = (int)uVar12 >> 1;
  uVar12 = (ulong)uVar6;
  PropertyCallbackArguments::PropertyCallbackArguments
            ((PropertyCallbackArguments *)&local_b0,param_3,
             uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + 0x1f),*param_2,*param_2,
             0x100000001);
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
  uVar10 = Logger::is_logging(this);
  if ((uVar10 & 1) != 0) {
    Logger::ApiIndexedPropertyAccess(this,"interceptor-indexed-getter",local_90,uVar12);
  }
  uVar5 = *(uint *)(*puVar7 + 3);
  if (uVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)((*puVar7 & 0xffffffff00000000 | (ulong)uVar5) + 3);
  }
  puVar8 = (undefined8 *)
           PropertyCallbackArguments::BasicCallIndexedGetterCallback
                     ((PropertyCallbackArguments *)&local_b0,uVar9,uVar12,puVar7);
  if (local_110 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_110,(RuntimeCallTimer *)((ulong)&local_110 | 8));
  }
  if (*(int *)(param_3 + 0x2c20) == *(int *)(param_3 + 0xa8)) {
    if (puVar8 == (undefined8 *)0x0) {
      local_110 = (RuntimeCallStats *)CONCAT44(local_110._4_4_,3);
      local_f0 = (ulong *)0x0;
      local_e8 = 0;
      local_d8 = 0;
      uStack_104 = 0;
      uStack_100 = 0xc0;
      uStack_c0 = 0xffffffffffffffff;
      local_f8 = param_3;
      puVar7 = local_f0;
      puStack_e0 = param_2;
      puStack_d0 = param_2;
      local_c8 = uVar12;
      if (((uVar6 == 0xffffffff) &&
          (*(short *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) != 0x41b
          )) && (puVar7 = (ulong *)Factory::SizeToString((Factory *)param_3,0xffffffff,true),
                (*(ushort *)((*puVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar7 - 1)) &
                0xffe0) == 0x20)) {
        puVar7 = (ulong *)StringTable::LookupString(param_3);
      }
      local_f0 = puVar7;
      LookupIterator::Start<true>((LookupIterator *)&local_110);
      LookupIterator::Next((LookupIterator *)&local_110);
      puVar8 = (undefined8 *)Object::GetProperty((LookupIterator *)&local_110,false);
      if (puVar8 == (undefined8 *)0x0) {
        uVar9 = *(undefined8 *)(param_3 + 0x180);
        goto LAB_015097e4;
      }
    }
    uVar9 = *puVar8;
  }
  else {
    uVar9 = Isolate::PromoteScheduledException(param_3);
  }
LAB_015097e4:
  local_b0 = &PTR__Relocatable_01cacc40;
  local_78 = 0x1baddead0baddeaf;
  *(undefined8 *)(local_a8 + 0xb790) = uStack_a0;
  *(long *)pIVar2 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar9;
}

