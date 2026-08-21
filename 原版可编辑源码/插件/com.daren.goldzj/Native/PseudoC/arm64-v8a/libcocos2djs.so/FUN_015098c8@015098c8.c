
undefined8 FUN_015098c8(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  RuntimeCallStats *pRVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  Logger *this;
  byte **local_160;
  byte *local_158;
  char *local_150;
  undefined8 local_148;
  RuntimeCallStats *local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
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
  
  local_120 = 0;
  uStack_138 = 0;
  local_140 = (RuntimeCallStats *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_140 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_140,(ulong)&local_140 | 8,0x131);
  }
  if (DAT_01d46c70 == (byte *)0x0) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46c70 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.runtime");
  }
  pbVar5 = DAT_01d46c70;
  local_160 = (byte **)0x0;
  if ((*DAT_01d46c70 & 5) != 0) {
    local_110 = (RuntimeCallStats *)0x0;
    uStack_108 = 0;
    uStack_104 = 0;
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar7 + 0x18))
                      (plVar7,0x58,pbVar5,"V8.Runtime_Runtime_LoadElementWithInterceptor",0,0,0,0,0,
                       0,0,&local_110,0);
    plVar7 = (long *)CONCAT44(uStack_104,uStack_108);
    uStack_108 = 0;
    uStack_104 = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    pRVar6 = local_110;
    local_110 = (RuntimeCallStats *)0x0;
    if (pRVar6 != (RuntimeCallStats *)0x0) {
      (**(code **)(*(long *)pRVar6 + 8))();
    }
    local_160 = &local_158;
    local_150 = "V8.Runtime_Runtime_LoadElementWithInterceptor";
    local_158 = pbVar5;
    local_148 = uVar8;
  }
  uVar8 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar14 = param_2[-1];
  uVar12 = *param_2 & 0xffffffff00000000;
  uVar4 = *(uint *)((uVar12 | 0x13) + (ulong)*(uint *)(*param_2 - 1));
  uVar13 = uVar12 | uVar4;
  if ((uVar4 & 1) != 0) {
    do {
      if (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0xa2) {
        if (((uVar13 & 1) != 0) &&
           (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0x439)) {
          uVar13 = uVar13 & 0xffffffff00000000 |
                   (ulong)*(uint *)((uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + 0xb)) +
                                   3);
        }
        break;
      }
      puVar1 = (uint *)(uVar13 + 0x13);
      uVar13 = uVar12 | *puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  uVar15 = *(ulong *)(uVar12 + 0xa0);
  if (*(uint *)(uVar13 + 0x23) != (uint)uVar15) {
    uVar15 = uVar12 | *(uint *)((uVar12 | *(uint *)(uVar13 + 0x23)) + 0x13);
  }
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(param_3 + 0x95a0);
    if (puVar9 == *(ulong **)(param_3 + 0x95a8)) {
      puVar9 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar15;
  }
  else {
    puVar9 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar15);
    uVar15 = *puVar9;
  }
  uVar4 = (int)uVar14 >> 1;
  uVar14 = (ulong)uVar4;
  v8::internal::PropertyCallbackArguments::PropertyCallbackArguments
            ((PropertyCallbackArguments *)&local_b0,param_3,
             uVar15 & 0xffffffff00000000 | (ulong)*(uint *)(uVar15 + 0x1f),*param_2,*param_2,
             0x100000001);
  local_f0 = (ulong *)0x0;
  uStack_108 = 0;
  uStack_104 = 0;
  local_110 = (RuntimeCallStats *)0x0;
  local_f8 = (Isolate *)0x0;
  uStack_100 = 0;
  uStack_fc = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_110 = (RuntimeCallStats *)(*(long *)(local_88 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_110,(ulong)&local_110 | 8,0xa0);
  }
  this = *(Logger **)(local_88 + 0x9558);
  uVar12 = v8::internal::Logger::is_logging(this);
  if ((uVar12 & 1) != 0) {
    v8::internal::Logger::ApiIndexedPropertyAccess
              (this,"interceptor-indexed-getter",local_90,uVar14);
  }
  uVar3 = *(uint *)(*puVar9 + 3);
  if (uVar3 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)((*puVar9 & 0xffffffff00000000 | (ulong)uVar3) + 3);
  }
  puVar10 = (undefined8 *)
            v8::internal::PropertyCallbackArguments::BasicCallIndexedGetterCallback
                      ((PropertyCallbackArguments *)&local_b0,uVar11,uVar14,puVar9);
  if (local_110 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_110,(RuntimeCallTimer *)((ulong)&local_110 | 8));
  }
  if (*(int *)(param_3 + 0x2c20) == *(int *)(param_3 + 0xa8)) {
    if (puVar10 == (undefined8 *)0x0) {
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
      if (((uVar4 == 0xffffffff) &&
          (*(short *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) != 0x41b
          )) && (puVar9 = (ulong *)v8::internal::Factory::SizeToString
                                             ((Factory *)param_3,0xffffffff,true),
                (*(ushort *)((*puVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar9 - 1)) &
                0xffe0) == 0x20)) {
        puVar9 = (ulong *)v8::internal::StringTable::LookupString(param_3);
      }
      local_f0 = puVar9;
      v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_110);
      v8::internal::LookupIterator::Next((LookupIterator *)&local_110);
      puVar10 = (undefined8 *)v8::internal::Object::GetProperty((LookupIterator *)&local_110,false);
      if (puVar10 == (undefined8 *)0x0) {
        uVar11 = *(undefined8 *)(param_3 + 0x180);
        goto LAB_01509c48;
      }
    }
    uVar11 = *puVar10;
  }
  else {
    uVar11 = v8::internal::Isolate::PromoteScheduledException(param_3);
  }
LAB_01509c48:
  local_b0 = &PTR__Relocatable_01cacc40;
  local_78 = 0x1baddead0baddeaf;
  *(undefined8 *)(local_a8 + 0xb790) = uStack_a0;
  *(undefined8 *)(param_3 + 0x95a0) = uVar8;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_160 != (byte **)0x0) && (*local_158 != 0)) {
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar7 + 0x28))(plVar7,local_158,local_150,local_148);
  }
  if (local_140 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_140,(RuntimeCallTimer *)((ulong)&local_140 | 8));
  }
  return uVar11;
}

