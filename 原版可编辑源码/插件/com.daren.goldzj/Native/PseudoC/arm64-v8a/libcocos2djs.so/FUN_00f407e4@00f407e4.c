
Isolate * FUN_00f407e4(Isolate *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long *plVar5;
  RuntimeCallStats *pRVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  Isolate *pIVar14;
  RuntimeCallStats *local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  SaveContext aSStack_98 [24];
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong local_38;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  pIVar14 = param_1 + 0x9520;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)pIVar14 + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x94);
  }
  puVar13 = (ulong *)*param_2;
  uVar12 = *puVar13;
  if ((uVar12 & 1) != 0) {
    uVar11 = uVar12 & 0xffffffff00000000;
    if ((*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar12 - 1)) == 0x439) &&
       ((((*(char *)(param_2 + 8) == '\0' ||
          ((*(byte *)((uVar11 | 9) + (ulong)*(uint *)(uVar12 - 1)) >> 6 & 1) != 0)) &&
         (uVar2 = *(uint *)((uVar11 | *(uint *)(uVar12 + 0xb)) + 3), (uVar2 & 1) != 0)) &&
        (*(short *)((uVar11 | 7) + (ulong)*(uint *)((uVar11 | uVar2) - 1)) == 0x4e)))) {
      local_c0 = (RuntimeCallStats *)
                 (*puVar13 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar13 + 0xb));
      uVar12 = v8::internal::SharedFunctionInfo::BreakAtEntry((SharedFunctionInfo *)&local_c0);
      if ((uVar12 & 1) == 0) {
        v8::internal::SaveAndSwitchContext::SaveAndSwitchContext
                  ((SaveAndSwitchContext *)&local_c0,param_1,
                   *puVar13 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar13 + 0xf));
        pIVar14 = (Isolate *)param_2[1];
        if (*(char *)(param_2 + 8) != '\0') {
          pIVar14 = param_1 + 0xa8;
        }
        pIVar14 = (Isolate *)
                  v8::internal::Builtins::InvokeApiFunction
                            (param_1,*(char *)(param_2 + 8),puVar13,pIVar14,
                             *(undefined4 *)(param_2 + 2),param_2[3],param_2[4]);
        if (pIVar14 == (Isolate *)0x0) {
          if (*(int *)(param_2 + 6) == 0) {
            v8::internal::Isolate::ReportPendingMessages(param_1);
          }
        }
        else {
          *(undefined8 *)(param_1 + 0x2c10) = *(undefined8 *)(param_1 + 0xa8);
        }
        v8::internal::SaveContext::~SaveContext((SaveContext *)&local_c0);
        goto joined_r0x00f40c04;
      }
    }
  }
  uVar4 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 0;
  uVar12 = v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true>::
           IsAllowed(param_1);
  if ((uVar12 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","AllowJavascriptExecution::IsAllowed(isolate)");
  }
  uVar12 = v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)1,false>::
           IsAllowed(param_1);
  if ((uVar12 & 1) == 0) {
    v8::internal::Isolate::ThrowIllegalOperation(param_1);
    if (*(int *)(param_2 + 6) == 0) {
LAB_00f40b10:
      v8::internal::Isolate::ReportPendingMessages(param_1);
      pIVar14 = (Isolate *)0x0;
    }
    else {
LAB_00f4090c:
      pIVar14 = (Isolate *)0x0;
    }
  }
  else {
    uVar12 = v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)2,false>::
             IsAllowed(param_1);
    if ((uVar12 & 1) == 0) {
      plVar5 = (long *)v8::internal::V8::GetCurrentPlatform();
      (**(code **)(*plVar5 + 0x98))();
      pIVar14 = param_1 + 0xa0;
    }
    else {
      iVar7 = *(int *)((long)param_2 + 0x44);
      if (iVar7 == 0) {
        uVar12 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
        uVar12 = uVar12 | *(uint *)((uVar12 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar13 = *(ulong **)(param_1 + 0x95a0);
          if (puVar13 == *(ulong **)(param_1 + 0x95a8)) {
            puVar13 = (ulong *)v8::internal::HandleScope::Extend(param_1);
          }
          *(ulong **)(param_1 + 0x95a0) = puVar13 + 1;
          *puVar13 = uVar12;
        }
        else {
          puVar13 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
        }
        puVar1 = (uint *)(*puVar13 + 0x277);
        uVar2 = *puVar1;
        if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(param_1 + 0xa0))) {
          (**(code **)((*puVar13 & 0xffffffff00000000 | (ulong)*puVar1) + 3))(param_1);
          v8::internal::Isolate::ThrowIllegalOperation(param_1);
          pIVar14 = (Isolate *)0x0;
          goto LAB_00f40b64;
        }
        iVar7 = *(int *)((long)param_2 + 0x44);
      }
      local_38 = 0;
      if (*(char *)(param_2 + 8) == '\0') {
        if (iVar7 == 0) {
          iVar7 = 0x28;
        }
        else {
          if (iVar7 != 1) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          iVar7 = 0x2a;
        }
      }
      else {
        iVar7 = 0x29;
      }
      plVar5 = (long *)v8::internal::Builtins::builtin_handle((Builtins *)(param_1 + 0x9e00),iVar7);
      v8::internal::SaveContext::SaveContext(aSStack_98,param_1);
      if (v8::internal::FLAG_clear_exceptions_on_js_entry != '\0') {
        *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
      }
      if (*(int *)((long)param_2 + 0x44) == 0) {
        local_c0 = (RuntimeCallStats *)*plVar5;
        if (*(int *)(local_c0 + 0x17) < 0) {
          pRVar6 = (RuntimeCallStats *)
                   v8::internal::Code::OffHeapInstructionStart((Code *)&local_c0);
        }
        else {
          pRVar6 = local_c0 + 0x3f;
        }
        uVar3 = param_2[3];
        uVar8 = *(undefined8 *)param_2[4];
        uVar9 = *(undefined8 *)*param_2;
        uVar10 = *(undefined8 *)param_2[1];
        local_a0 = 0;
        uStack_b8 = 0;
        local_c0 = (RuntimeCallStats *)0x0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        if (v8::internal::TracingFlags::runtime_stats != 0) {
          local_c0 = (RuntimeCallStats *)(*(long *)pIVar14 + 0x58a0);
          v8::internal::RuntimeCallStats::Enter(local_c0,(ulong)&local_c0 | 8,0x97,uVar10);
        }
        local_38 = (*(code *)pRVar6)(param_1,uVar8,uVar9,uVar10,(long)*(int *)(param_2 + 2),uVar3);
      }
      else {
        local_c0 = (RuntimeCallStats *)*plVar5;
        if (*(int *)(local_c0 + 0x17) < 0) {
          pRVar6 = (RuntimeCallStats *)
                   v8::internal::Code::OffHeapInstructionStart((Code *)&local_c0);
        }
        else {
          pRVar6 = local_c0 + 0x3f;
        }
        local_a0 = 0;
        uStack_b8 = 0;
        local_c0 = (RuntimeCallStats *)0x0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        if (v8::internal::TracingFlags::runtime_stats != 0) {
          local_c0 = (RuntimeCallStats *)(*(long *)pIVar14 + 0x58a0);
          v8::internal::RuntimeCallStats::Enter(local_c0,(ulong)&local_c0 | 8,0x97);
        }
        local_38 = (*(code *)pRVar6)(param_1,param_2[5]);
      }
      if (local_c0 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_c0,(RuntimeCallTimer *)((ulong)&local_c0 | 8));
      }
      v8::internal::SaveContext::~SaveContext(aSStack_98);
      if (v8::internal::FLAG_verify_heap != '\0') {
        v8::internal::Object::ObjectVerify((Object *)&local_38,param_1);
      }
      uVar12 = local_38;
      if (((local_38 & 1) != 0) && ((int)local_38 == *(int *)(param_1 + 0x180))) {
        if (*(int *)(param_2 + 6) != 0) goto LAB_00f4090c;
        goto LAB_00f40b10;
      }
      *(undefined8 *)(param_1 + 0x2c10) = *(undefined8 *)(param_1 + 0xa8);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        pIVar14 = *(Isolate **)(param_1 + 0x95a0);
        if (pIVar14 == *(Isolate **)(param_1 + 0x95a8)) {
          pIVar14 = (Isolate *)v8::internal::HandleScope::Extend(param_1);
        }
        *(Isolate **)(param_1 + 0x95a0) = pIVar14 + 8;
        *(ulong *)pIVar14 = uVar12;
      }
      else {
        pIVar14 = (Isolate *)
                  v8::internal::CanonicalHandleScope::Lookup
                            (*(CanonicalHandleScope **)(param_1 + 0x95b8),local_38);
      }
    }
  }
LAB_00f40b64:
  *(undefined4 *)(param_1 + 0x2c60) = uVar4;
joined_r0x00f40c04:
  if (local_80 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return pIVar14;
}

