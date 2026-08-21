
undefined8 FUN_01508678(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined4 uVar13;
  ulong uVar14;
  ulong uVar15;
  Logger *this;
  ulong *puVar16;
  byte **local_160;
  byte *local_158;
  char *local_150;
  undefined8 local_148;
  RuntimeCallStats *local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  ulong local_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long local_f8;
  ulong *local_f0;
  undefined8 uStack_e8;
  ulong *local_e0;
  ulong *local_d8;
  ulong *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined **local_b8;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  long local_90;
  undefined8 local_80;
  
  local_120 = 0;
  uStack_138 = 0;
  local_140 = (RuntimeCallStats *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_140 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_140,(ulong)&local_140 | 8,0x136);
  }
  if (DAT_01d46c60 == (byte *)0x0) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46c60 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d46c60;
  local_160 = (byte **)0x0;
  if ((*DAT_01d46c60 & 5) != 0) {
    local_110 = (RuntimeCallStats *)0x0;
    uStack_108 = 0;
    uStack_104 = 0;
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar4,"V8.Runtime_Runtime_LoadPropertyWithInterceptor",0,0,0,0,0
                       ,0,0,&local_110,0);
    plVar6 = (long *)CONCAT44(uStack_104,uStack_108);
    uStack_108 = 0;
    uStack_104 = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = (long *)local_110;
    local_110 = (RuntimeCallStats *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_160 = &local_158;
    local_150 = "V8.Runtime_Runtime_LoadPropertyWithInterceptor";
    local_158 = pbVar4;
    local_148 = uVar7;
  }
  uVar7 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar8 = param_2 + -1;
  uVar12 = *puVar8;
  if ((((uVar12 & 1) == 0) ||
      (*(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) < 0xa9)) &&
     (puVar8 = (ulong *)v8::internal::Object::ConvertReceiver(param_3,puVar8),
     puVar8 == (ulong *)0x0)) {
    uVar11 = *(undefined8 *)(param_3 + 0x180);
  }
  else {
    puVar16 = param_2 + -2;
    uVar12 = *puVar16 & 0xffffffff00000000;
    uVar3 = *(uint *)((uVar12 | 0x13) + (ulong)*(uint *)(*puVar16 - 1));
    uVar14 = uVar12 | uVar3;
    if ((uVar3 & 1) != 0) {
      do {
        if (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar14 - 1)) != 0xa2) {
          if (((uVar14 & 1) != 0) &&
             (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar14 - 1)) == 0x439)) {
            uVar14 = uVar14 & 0xffffffff00000000 |
                     (ulong)*(uint *)((uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0xb))
                                     + 3);
          }
          break;
        }
        puVar1 = (uint *)(uVar14 + 0x13);
        uVar14 = uVar12 | *puVar1;
      } while ((*puVar1 & 1) != 0);
    }
    uVar15 = *(ulong *)(uVar12 + 0xa0);
    if (*(uint *)(uVar14 + 0x23) != (uint)uVar15) {
      uVar15 = uVar12 | *(uint *)((uVar12 | *(uint *)(uVar14 + 0x23)) + 0xf);
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
    v8::internal::PropertyCallbackArguments::PropertyCallbackArguments
              ((PropertyCallbackArguments *)&local_b8,param_3,
               uVar15 & 0xffffffff00000000 | (ulong)*(uint *)(uVar15 + 0x1f),*puVar8,*puVar16,
               0x100000001);
    local_f0 = (ulong *)0x0;
    uStack_108 = 0;
    uStack_104 = 0;
    local_110 = (RuntimeCallStats *)0x0;
    local_f8 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    if (v8::internal::TracingFlags::runtime_stats != 0) {
      local_110 = (RuntimeCallStats *)(*(long *)(local_90 + 0x9520) + 0x58a0);
      v8::internal::RuntimeCallStats::Enter(local_110,(ulong)&local_110 | 8,0xa0);
    }
    this = *(Logger **)(local_90 + 0x9558);
    uVar12 = v8::internal::Logger::is_logging(this);
    if ((uVar12 & 1) != 0) {
      v8::internal::Logger::ApiNamedPropertyAccess
                (this,"interceptor-named-getter",local_98,*param_2);
    }
    uVar3 = *(uint *)(*puVar9 + 3);
    if (uVar3 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)((*puVar9 & 0xffffffff00000000 | (ulong)uVar3) + 3);
    }
    puVar10 = (undefined8 *)
              v8::internal::PropertyCallbackArguments::BasicCallNamedGetterCallback
                        ((PropertyCallbackArguments *)&local_b8,uVar11,param_2,puVar9,0);
    if (local_110 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_110,(RuntimeCallTimer *)((ulong)&local_110 | 8));
    }
    if (*(int *)(param_3 + 0x2c20) == *(int *)(param_3 + 0xa8)) {
      if (puVar10 == (undefined8 *)0x0) {
        uVar12 = *param_2;
        local_f8 = (ulong)*(uint *)((long)param_2 + -0xc) << 0x20;
        uVar13 = 3;
        if ((*(short *)(((ulong)*(uint *)((long)param_2 + -0xc) << 0x20 | 7) +
                       (ulong)*(uint *)(uVar12 - 1)) == 0x40) &&
           (uVar13 = 3, (*(byte *)(uVar12 + 7) & 1) != 0)) {
          uVar13 = 0;
        }
        local_110 = (RuntimeCallStats *)CONCAT44(local_110._4_4_,uVar13);
        uStack_104 = 0;
        uStack_100 = 0xc0;
        puVar9 = param_2;
        if ((*(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) & 0xffe0)
            == 0x20) {
          puVar9 = (ulong *)v8::internal::StringTable::LookupString(local_f8,param_2);
        }
        uStack_e8 = 0;
        local_d8 = (ulong *)0x0;
        local_c0 = 0xffffffffffffffff;
        uStack_c8 = 0xffffffffffffffff;
        local_f0 = puVar9;
        local_e0 = puVar8;
        local_d0 = puVar16;
        v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_110);
        do {
          while (local_110._4_4_ != 2) {
LAB_01508ad8:
            v8::internal::LookupIterator::Next((LookupIterator *)&local_110);
          }
          if (local_d8 == puVar16) {
            v8::internal::LookupIterator::Next((LookupIterator *)&local_110);
            break;
          }
          if ((puVar16 == (ulong *)0x0) || (local_d8 == (ulong *)0x0)) goto LAB_01508ad8;
          uVar12 = *local_d8;
          uVar14 = *puVar16;
          v8::internal::LookupIterator::Next((LookupIterator *)&local_110);
        } while (uVar12 != uVar14);
        puVar10 = (undefined8 *)
                  v8::internal::Object::GetProperty((LookupIterator *)&local_110,false);
        if (puVar10 == (undefined8 *)0x0) {
          uVar11 = *(undefined8 *)(param_3 + 0x180);
        }
        else if (local_110._4_4_ == 4) {
          local_118 = param_2[-4];
          iVar5 = v8::internal::FeedbackVector::GetKind
                            ((FeedbackVector *)&local_118,(int)param_2[-3] >> 1);
          if (iVar5 == 6) {
            puVar10 = (undefined8 *)
                      v8::internal::Factory::NewReferenceError((Factory *)param_3,0xb2,local_f0,0,0)
            ;
            uVar11 = v8::internal::Isolate::Throw(param_3,*puVar10,0);
          }
          else {
            uVar11 = *(undefined8 *)(param_3 + 0xa0);
          }
        }
        else {
          uVar11 = *puVar10;
        }
      }
      else {
        uVar11 = *puVar10;
      }
    }
    else {
      uVar11 = v8::internal::Isolate::PromoteScheduledException(param_3);
    }
    local_b8 = &PTR__Relocatable_01cacc40;
    local_80 = 0x1baddead0baddeaf;
    *(undefined8 *)(local_b0 + 0xb790) = uStack_a8;
    if (param_3 == (Isolate *)0x0) goto LAB_015089e8;
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar7;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
LAB_015089e8:
  if ((local_160 != (byte **)0x0) && (*local_158 != 0)) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_158,local_150,local_148);
  }
  if (local_140 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_140,(RuntimeCallTimer *)((ulong)&local_140 | 8));
  }
  return uVar11;
}

