
undefined8 FUN_01509018(undefined8 param_1,Isolate *param_2,Isolate *param_3)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  char cVar4;
  long *plVar5;
  undefined8 uVar6;
  Isolate *pIVar7;
  ulong *puVar8;
  long lVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 uVar15;
  Isolate *pIVar16;
  byte **local_150;
  byte *local_148;
  char *local_140;
  undefined8 local_138;
  RuntimeCallStats *local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  long local_f0;
  Isolate *local_e8;
  undefined8 uStack_e0;
  Isolate *local_d8;
  undefined8 uStack_d0;
  Isolate *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined **local_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_78;
  
  local_110 = 0;
  uStack_128 = 0;
  local_130 = (RuntimeCallStats *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_130 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_130,(ulong)&local_130 | 8,0x13d);
  }
  if (DAT_01d46c68 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46c68 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d46c68;
  local_150 = (byte **)0x0;
  if ((*DAT_01d46c68 & 5) != 0) {
    local_108 = (long *)0x0;
    local_100 = 0;
    uStack_fc = 0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar3,"V8.Runtime_Runtime_StorePropertyWithInterceptor",0,0,0,0,
                       0,0,0,&local_108,0);
    plVar5 = (long *)CONCAT44(uStack_fc,local_100);
    local_100 = 0;
    uStack_fc = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_108;
    local_108 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_150 = &local_148;
    local_140 = "V8.Runtime_Runtime_StorePropertyWithInterceptor";
    local_148 = pbVar3;
    local_138 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  pIVar16 = param_2 + -8;
  uVar13 = *(ulong *)pIVar16;
  uVar11 = uVar13 & 0xffffffff00000000;
  uVar12 = uVar11 | 7;
  pIVar7 = pIVar16;
  if (*(short *)(uVar12 + *(uint *)(uVar13 - 1)) == 0xab) {
    puVar14 = (uint *)(uVar13 - 1);
    if ((*(byte *)((uVar11 | 9) + (ulong)*puVar14) >> 2 & 1) != 0) {
      uVar2 = *(uint *)((uVar11 | 0x13) + (ulong)*puVar14);
      while (uVar13 = uVar11 | uVar2, (uVar2 & 1) != 0) {
        if (*(short *)(uVar12 + *(uint *)(uVar13 - 1)) != 0xa2) {
          if (((uVar2 & 1) != 0) && (*(short *)(uVar12 + *(uint *)(uVar13 - 1)) == 0x439)) {
            uVar13 = uVar11 | *(uint *)((uVar11 | *(uint *)(uVar13 + 0xb)) + 3);
          }
          break;
        }
        uVar2 = *(uint *)(uVar13 + 0x13);
      }
      uVar12 = *(ulong *)(uVar11 + 0xa0);
      if (*(uint *)(uVar13 + 0x23) != (uint)uVar12) {
        uVar12 = uVar11 | *(uint *)((uVar11 | *(uint *)(uVar13 + 0x23)) + 0xf);
      }
      if ((*(byte *)(uVar12 + 0x23) >> 3 & 1) == 0) goto LAB_01509224;
      uVar11 = *(ulong *)pIVar16 & 0xffffffff00000000;
      puVar14 = (uint *)(*(ulong *)pIVar16 - 1);
    }
    uVar11 = uVar11 | *(uint *)((uVar11 | *puVar14) + 0xf);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      pIVar7 = *(Isolate **)(param_3 + 0x95a0);
      if (pIVar7 == *(Isolate **)(param_3 + 0x95a8)) {
        pIVar7 = (Isolate *)v8::internal::HandleScope::Extend(param_3);
      }
      *(Isolate **)(param_3 + 0x95a0) = pIVar7 + 8;
      *(ulong *)pIVar7 = uVar11;
    }
    else {
      pIVar7 = (Isolate *)
               v8::internal::CanonicalHandleScope::Lookup
                         (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
    }
  }
LAB_01509224:
  uVar11 = *(ulong *)pIVar7 & 0xffffffff00000000;
  uVar2 = *(uint *)((uVar11 | 0x13) + (ulong)*(uint *)(*(ulong *)pIVar7 - 1));
  uVar12 = uVar11 | uVar2;
  if ((uVar2 & 1) != 0) {
    do {
      if (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0xa2) {
        if (((uVar12 & 1) != 0) &&
           (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar12 - 1)) == 0x439)) {
          uVar12 = uVar12 & 0xffffffff00000000 |
                   (ulong)*(uint *)((uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 0xb)) +
                                   3);
        }
        break;
      }
      puVar14 = (uint *)(uVar12 + 0x13);
      uVar12 = uVar11 | *puVar14;
    } while ((*puVar14 & 1) != 0);
  }
  uVar13 = *(ulong *)(uVar11 + 0xa0);
  pIVar7 = param_2 + -0x10;
  if (*(uint *)(uVar12 + 0x23) != (uint)uVar13) {
    uVar13 = uVar11 | *(uint *)((uVar11 | *(uint *)(uVar12 + 0x23)) + 0xf);
  }
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(param_3 + 0x95a0);
    if (puVar8 == *(ulong **)(param_3 + 0x95a8)) {
      puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar13;
  }
  else {
    puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar13);
    uVar13 = *puVar8;
  }
  v8::internal::PropertyCallbackArguments::PropertyCallbackArguments
            ((PropertyCallbackArguments *)&local_b0,param_3,
             uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + 0x1f),
             *(undefined8 *)(param_2 + -8),*(undefined8 *)(param_2 + -8),0x100000001);
  lVar9 = v8::internal::PropertyCallbackArguments::CallNamedSetter
                    ((PropertyCallbackArguments *)&local_b0,puVar8,pIVar7,param_2);
  if (*(int *)(param_3 + 0x2c20) == *(int *)(param_3 + 0xa8)) {
    if (lVar9 == 0) {
      local_f0 = (ulong)*(uint *)(param_2 + -4) << 0x20;
      uVar10 = 3;
      if ((*(short *)(((ulong)*(uint *)(param_2 + -4) << 0x20 | 7) +
                     (ulong)*(uint *)(*(long *)pIVar7 + -1)) == 0x40) &&
         (uVar10 = 3, (*(byte *)(*(long *)pIVar7 + 7) & 1) != 0)) {
        uVar10 = 0;
      }
      local_108 = (long *)CONCAT44(local_108._4_4_,uVar10);
      uStack_fc = 0;
      uStack_f8 = 0xc0;
      if ((*(ushort *)
            ((*(ulong *)pIVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)pIVar7 - 1)) &
          0xffe0) == 0x20) {
        pIVar7 = (Isolate *)v8::internal::StringTable::LookupString(local_f0,pIVar7);
      }
      uStack_e0 = 0;
      uStack_d0 = 0;
      local_b8 = 0xffffffffffffffff;
      uStack_c0 = 0xffffffffffffffff;
      local_e8 = pIVar7;
      local_d8 = pIVar16;
      local_c8 = pIVar16;
      v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_108);
      if (local_108._4_4_ == 0) {
        v8::internal::LookupIterator::Next((LookupIterator *)&local_108);
      }
      v8::internal::LookupIterator::Next((LookupIterator *)&local_108);
      cVar4 = v8::internal::Object::SetProperty(&local_108,param_2,1,0);
      pIVar7 = param_3 + 0x180;
      if (cVar4 != '\0') {
        pIVar7 = param_2;
      }
      uVar15 = *(undefined8 *)pIVar7;
    }
    else {
      uVar15 = *(undefined8 *)param_2;
    }
  }
  else {
    uVar15 = v8::internal::Isolate::PromoteScheduledException(param_3);
  }
  local_b0 = &PTR__Relocatable_01cacc40;
  local_78 = 0x1baddead0baddeaf;
  *(undefined8 *)(local_a8 + 0xb790) = uStack_a0;
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_150 != (byte **)0x0) && (*local_148 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_148,local_140,local_138);
  }
  if (local_130 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_130,(RuntimeCallTimer *)((ulong)&local_130 | 8));
  }
  return uVar15;
}

