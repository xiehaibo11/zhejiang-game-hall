
undefined8 FUN_0150a5e8(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  RuntimeCallStats *pRVar7;
  ushort uVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  Isolate *pIVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
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
  int local_b4;
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
    v8::internal::RuntimeCallStats::Enter(local_140,(ulong)&local_140 | 8,0x140);
  }
  if (DAT_01d46c80 == (byte *)0x0) {
    plVar9 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46c80 = (byte *)(**(code **)(*plVar9 + 0x10))(plVar9,"disabled-by-default-v8.runtime");
  }
  pbVar6 = DAT_01d46c80;
  local_160 = (byte **)0x0;
  if ((*DAT_01d46c80 & 5) != 0) {
    local_110 = (RuntimeCallStats *)0x0;
    uStack_108 = 0;
    uStack_104 = 0;
    plVar9 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar10 = (**(code **)(*plVar9 + 0x18))
                       (plVar9,0x58,pbVar6,"V8.Runtime_Runtime_HasElementWithInterceptor",0,0,0,0,0,
                        0,0,&local_110,0);
    plVar9 = (long *)CONCAT44(uStack_104,uStack_108);
    uStack_108 = 0;
    uStack_104 = 0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    pRVar7 = local_110;
    local_110 = (RuntimeCallStats *)0x0;
    if (pRVar7 != (RuntimeCallStats *)0x0) {
      (**(code **)(*(long *)pRVar7 + 8))();
    }
    local_160 = &local_158;
    local_150 = "V8.Runtime_Runtime_HasElementWithInterceptor";
    local_158 = pbVar6;
    local_148 = uVar10;
  }
  uVar10 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar16 = *param_2 & 0xffffffff00000000;
  uVar5 = *(uint *)((uVar16 | 0x13) + (ulong)*(uint *)(*param_2 - 1));
  uVar17 = uVar16 | uVar5;
  if ((uVar5 & 1) != 0) {
    do {
      if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar17 - 1)) != 0xa2) {
        if (((uVar17 & 1) != 0) &&
           (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar17 - 1)) == 0x439)) {
          uVar17 = uVar17 & 0xffffffff00000000 |
                   (ulong)*(uint *)((uVar17 & 0xffffffff00000000 | (ulong)*(uint *)(uVar17 + 0xb)) +
                                   3);
        }
        break;
      }
      puVar1 = (uint *)(uVar17 + 0x13);
      uVar17 = uVar16 | *puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  uVar18 = *(ulong *)(uVar16 + 0xa0);
  if (*(uint *)(uVar17 + 0x23) != (uint)uVar18) {
    uVar18 = uVar16 | *(uint *)((uVar16 | *(uint *)(uVar17 + 0x23)) + 0x13);
  }
  uVar5 = (int)param_2[-1] >> 1;
  uVar16 = (ulong)uVar5;
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar11 = *(ulong **)(param_3 + 0x95a0);
    if (puVar11 == *(ulong **)(param_3 + 0x95a8)) {
      puVar11 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar11 + 1;
    *puVar11 = uVar18;
  }
  else {
    puVar11 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                 (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar18);
    uVar18 = *puVar11;
  }
  v8::internal::PropertyCallbackArguments::PropertyCallbackArguments
            ((PropertyCallbackArguments *)&local_b0,param_3,
             uVar18 & 0xffffffff00000000 | (ulong)*(uint *)(uVar18 + 0x1f),*param_2,*param_2,
             0x100000001);
  uVar3 = *(uint *)(*puVar11 + 0xb);
  if (((uVar3 & 1) == 0) || (uVar3 != *(uint *)(param_3 + 0xa0))) {
    puVar12 = (undefined8 *)
              v8::internal::PropertyCallbackArguments::CallIndexedQuery
                        ((PropertyCallbackArguments *)&local_b0,puVar11,uVar16);
    if (puVar12 != (undefined8 *)0x0) {
      local_110 = (RuntimeCallStats *)*puVar12;
      uVar16 = v8::internal::Object::ToInt32((Object *)&local_110,&local_b4);
      if ((uVar16 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","result->ToInt32(&value)");
      }
      lVar13 = 0xc0;
      if (local_b4 != 0x40) {
        lVar13 = 0xb8;
      }
      uVar14 = *(undefined8 *)(param_3 + lVar13);
      goto LAB_0150aa38;
    }
  }
  else {
    uVar4 = *(uint *)(*puVar11 + 3);
    if ((uVar4 != uVar3) || ((uVar4 & 1) == 0)) {
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
      uVar17 = v8::internal::Logger::is_logging(this);
      if ((uVar17 & 1) != 0) {
        v8::internal::Logger::ApiIndexedPropertyAccess
                  (this,"interceptor-indexed-getter",local_90,uVar16);
      }
      uVar3 = *(uint *)(*puVar11 + 3);
      if (uVar3 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)((*puVar11 & 0xffffffff00000000 | (ulong)uVar3) + 3);
      }
      lVar13 = v8::internal::PropertyCallbackArguments::BasicCallIndexedGetterCallback
                         ((PropertyCallbackArguments *)&local_b0,uVar14,uVar16,puVar11);
      if (local_110 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_110,(RuntimeCallTimer *)((ulong)&local_110 | 8))
        ;
      }
      if (lVar13 != 0) {
        uVar14 = *(undefined8 *)(param_3 + 0xb8);
        goto LAB_0150aa38;
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
  puVar11 = local_f0;
  puStack_e0 = param_2;
  puStack_d0 = param_2;
  local_c8 = uVar16;
  if (((uVar5 == 0xffffffff) &&
      (*(short *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) != 0x41b))
     && (puVar11 = (ulong *)v8::internal::Factory::SizeToString((Factory *)param_3,0xffffffff,true),
        (*(ushort *)((*puVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar11 - 1)) & 0xffe0)
        == 0x20)) {
    puVar11 = (ulong *)v8::internal::StringTable::LookupString(param_3);
  }
  local_f0 = puVar11;
  v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_110);
  v8::internal::LookupIterator::Next((LookupIterator *)&local_110);
  uVar8 = v8::internal::JSReceiver::HasProperty((LookupIterator *)&local_110);
  if ((uVar8 & 0xff) == 0) {
    pIVar15 = param_3 + 0x180;
  }
  else if (uVar8 < 0x100) {
    pIVar15 = param_3 + 0xc0;
  }
  else {
    pIVar15 = param_3 + 0xb8;
  }
  uVar14 = *(undefined8 *)pIVar15;
LAB_0150aa38:
  local_b0 = &PTR__Relocatable_01cacc40;
  local_78 = 0x1baddead0baddeaf;
  *(undefined8 *)(local_a8 + 0xb790) = uStack_a0;
  *(undefined8 *)(param_3 + 0x95a0) = uVar10;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_160 != (byte **)0x0) && (*local_158 != 0)) {
    plVar9 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar9 + 0x28))(plVar9,local_158,local_150,local_148);
  }
  if (local_140 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_140,(RuntimeCallTimer *)((ulong)&local_140 | 8));
  }
  return uVar14;
}

