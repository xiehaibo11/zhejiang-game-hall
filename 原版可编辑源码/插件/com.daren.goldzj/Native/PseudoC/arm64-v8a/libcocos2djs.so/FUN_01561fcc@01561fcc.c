
undefined8 FUN_01561fcc(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  double dVar8;
  byte **local_a0;
  byte *local_98;
  char *local_90;
  undefined8 local_88;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_50;
  long *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0xcb);
  }
  if (DAT_01d46eb0 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46eb0 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d46eb0;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d46eb0 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar2,"V8.Runtime_Runtime_AtomicsNumWaitersForTesting",0,0,0,0,0
                       ,0,0,&local_50,0);
    plVar4 = local_48;
    local_48 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_50;
    local_50 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_AtomicsNumWaitersForTesting";
    local_98 = pbVar2;
    local_88 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  plVar4 = (long *)*param_2;
  if ((((ulong)plVar4 & 1) == 0) ||
     (*(short *)(((ulong)plVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)plVar4 - 1)) !=
      0x41b)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSTypedArray()");
  }
  uVar7 = param_2[-1];
  if ((uVar7 & 1) == 0) {
    if (-1 < (int)uVar7) {
      uVar7 = uVar7 >> 1 & 0x7fffffff;
LAB_01562158:
      if ((*(uint *)(((ulong)plVar4 & 0xffffffff00000000 | (ulong)*(uint *)((long)plVar4 + 0xb)) +
                    0x1b) >> 2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!sta->WasDetached()");
      }
      local_50 = plVar4;
      plVar4 = (long *)v8::internal::JSTypedArray::GetBuffer((JSTypedArray *)&local_50);
      if ((*(uint *)(*plVar4 + 0x1b) >> 4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","sta->GetBuffer()->is_shared()");
      }
      if (*(ulong *)((long)*param_2 + 0x1f) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","index < sta->length()");
      }
      local_50 = (long *)*param_2;
      iVar3 = v8::internal::JSTypedArray::type((JSTypedArray *)&local_50);
      if (iVar3 == 5) {
        local_50 = (long *)*param_2;
        uVar6 = v8::internal::JSTypedArray::GetBuffer((JSTypedArray *)&local_50);
        uVar6 = v8::internal::FutexEmulation::NumWaitersForTesting
                          (uVar6,*(long *)(*param_2 + 0xf) + uVar7 * 4);
        *(undefined8 *)(param_3 + 0x95a0) = uVar5;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(long *)(param_3 + 0x95a8) != lVar1) {
          *(long *)(param_3 + 0x95a8) = lVar1;
          v8::internal::HandleScope::DeleteExtensions(param_3);
        }
        if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
          plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
          (**(code **)(*plVar4 + 0x28))(plVar4,local_98,local_90,local_88);
        }
        if (local_80 != (RuntimeCallStats *)0x0) {
          v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8))
          ;
        }
        return uVar6;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","sta->type() == kExternalInt32Array");
    }
  }
  else {
    if (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsNumber()");
    }
    dVar8 = *(double *)(uVar7 + 3);
    if ((0.0 <= dVar8) && (dVar8 < 1.8446744073709552e+19)) {
      uVar7 = (ulong)dVar8;
      goto LAB_01562158;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","TryNumberToSize(*index_object, &index)");
}

