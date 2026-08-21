
ulong FUN_011cfec8(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  uint uVar11;
  byte **local_120;
  byte *local_118;
  char *local_110;
  undefined8 local_108;
  RuntimeCallStats *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulong *local_d0;
  long *local_c8;
  int local_c0;
  undefined4 local_bc;
  ulong local_78;
  undefined8 local_70;
  
  local_e0 = 0;
  uStack_f8 = 0;
  local_100 = (RuntimeCallStats *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_100 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_100,(ulong)&local_100 | 8,0x193);
  }
  if (DAT_01d3fb30 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fb30 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d3fb30;
  local_120 = (byte **)0x0;
  if ((*DAT_01d3fb30 & 5) != 0) {
    local_d0 = (ulong *)0x0;
    local_c8 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar2,"V8.Runtime_Runtime_DefineDataPropertyInLiteral",0,0,0,0,0
                       ,0,0,&local_d0,0);
    plVar5 = local_c8;
    local_c8 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    puVar9 = local_d0;
    local_d0 = (ulong *)0x0;
    if (puVar9 != (ulong *)0x0) {
      (**(code **)(*puVar9 + 8))();
    }
    local_120 = &local_118;
    local_110 = "V8.Runtime_Runtime_DefineDataPropertyInLiteral";
    local_118 = pbVar2;
    local_108 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if (((uVar8 & 1) == 0) ||
     (*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0xaa)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSObject()");
  }
  puVar9 = param_2 + -1;
  uVar8 = *puVar9;
  if (((uVar8 & 1) == 0) ||
     (0x40 < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsName()");
  }
  uVar11 = (uint)param_2[-3];
  if ((param_2[-3] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[3].IsSmi()");
  }
  puVar7 = param_2 + -4;
  uVar8 = *puVar7;
  if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[4].IsHeapObject()");
  }
  if ((param_2[-5] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[5].IsSmi()");
  }
  puVar10 = param_2 + -2;
  if ((int)uVar8 != *(int *)((uVar8 & 0xffffffff00000000) + 0xa0)) {
    local_c0 = (int)param_2[-5] >> 1;
    local_c8 = (long *)0x0;
    local_d0 = puVar7;
    if (puVar7 == (ulong *)0x0) {
      local_bc = 0;
    }
    else {
      local_78 = *puVar7;
      local_bc = v8::internal::FeedbackVector::GetKind((FeedbackVector *)&local_78);
    }
    iVar4 = v8::internal::FeedbackNexus::ic_state((FeedbackNexus *)&local_d0);
    if (iVar4 == 1) {
      if ((*(ushort *)((*puVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar9 - 1)) & 0xffe0)
          == 0x20) {
LAB_011d0124:
        v8::internal::FeedbackNexus::ConfigureMegamorphic((FeedbackNexus *)&local_d0,1);
      }
      else {
        uVar8 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)(param_3 + 0x95a0);
          if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
            puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
          }
          *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
          *puVar7 = uVar8;
        }
        else {
          puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar8);
        }
        local_78 = CONCAT44(local_78._4_4_,1);
        local_70 = 0;
        v8::internal::FeedbackNexus::ConfigureMonomorphic
                  ((FeedbackNexus *)&local_d0,puVar9,puVar7,&local_78);
      }
    }
    else {
      iVar4 = v8::internal::FeedbackNexus::ic_state((FeedbackNexus *)&local_d0);
      if ((iVar4 == 2) &&
         ((iVar4 = v8::internal::FeedbackNexus::GetFirstMap((FeedbackNexus *)&local_d0),
          *(int *)(*param_2 - 1) != iVar4 ||
          (iVar4 = v8::internal::FeedbackNexus::GetName((FeedbackNexus *)&local_d0),
          iVar4 != (int)*puVar9)))) goto LAB_011d0124;
    }
  }
  if ((uVar11 >> 2 & 1) != 0) {
    uVar8 = *puVar10 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar10 - 1);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(param_3 + 0x95a0);
      if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
        puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar8;
    }
    else {
      puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar8);
    }
    uVar8 = v8::internal::JSFunction::SetName(puVar10,puVar9,param_3 + 200);
    if ((uVar8 & 1) == 0) {
      uVar8 = *(ulong *)(param_3 + 0x180);
      goto LAB_011d0270;
    }
    uVar8 = *puVar10;
    if ((3 < ((*(uint *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb)) + 0x1b) & 0x1f
              ) - 3 & 0xff)) && (*(int *)(uVar8 - 1) != (int)*puVar7)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "!IsClassConstructor(function->shared().kind()) implies *function_map == function->map()"
              );
    }
  }
  v8::internal::LookupIterator::PropertyOrElement
            ((LookupIterator *)&local_d0,param_3,param_2,puVar9,param_2,1);
  cVar3 = v8::internal::JSObject::DefineOwnPropertyIgnoreAttributes
                    (&local_d0,puVar10,uVar11 & 2,0x100000001,1);
  if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "JSObject::DefineOwnPropertyIgnoreAttributes(&it, value, attrs, Just(kDontThrow)) .IsJust()"
            );
  }
  uVar8 = *param_2;
LAB_011d0270:
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_120 != (byte **)0x0) && (*local_118 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_118,local_110,local_108);
  }
  if (local_100 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_100,(RuntimeCallTimer *)((ulong)&local_100 | 8));
  }
  return uVar8;
}

