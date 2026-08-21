
/* v8::internal::MicrotaskQueue::RunMicrotasks(v8::internal::Isolate*) */

ulong __thiscall v8::internal::MicrotaskQueue::RunMicrotasks(MicrotaskQueue *this,Isolate *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long *local_c0;
  long *local_b8;
  char *local_b0;
  SuppressMicrotaskExecutionScope aSStack_98 [24];
  long local_80;
  long local_78;
  undefined1 local_6c [4];
  char *local_68;
  
  if (*(long *)(this + 8) == 0) {
    pvVar1 = *(void **)(this + 0x50);
    uVar13 = *(long *)(this + 0x58) - (long)pvVar1;
    if (uVar13 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      if ((ulong)((long)uVar13 >> 4) >> 0x3c != 0) goto LAB_00f6063c;
      puVar6 = operator_new(uVar13);
      puVar2 = puVar6;
      puVar11 = puVar6;
      if (0 < (long)uVar13) {
        memcpy(puVar6,pvVar1,uVar13);
        puVar11 = (undefined8 *)((long)puVar6 + uVar13);
      }
      for (; puVar2 != puVar11; puVar2 = puVar2 + 2) {
        (*(code *)*puVar2)(param_1,puVar2[1]);
      }
    }
    uVar13 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      operator_delete(puVar6);
      uVar13 = 0;
    }
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x95a0);
    lVar8 = *(long *)(this + 0x28);
    lVar10 = *(long *)(param_1 + 0x95a8);
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
    local_80 = 0;
    this[0x4c] = (MicrotaskQueue)0x1;
    v8::Isolate::SuppressMicrotaskExecutionScope::SuppressMicrotaskExecutionScope
              (aSStack_98,(Isolate *)param_1,(MicrotaskQueue *)0x0);
    lVar15 = *(long *)(param_1 + 0x95c0);
    uVar14 = *(ulong *)(lVar15 + 0x30);
    if (DAT_01d3ed40 == (byte *)0x0) {
      plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3ed40 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"v8.execute");
    }
    pbVar3 = DAT_01d3ed40;
    if ((*DAT_01d3ed40 & 5) != 0) {
      local_c0 = (long *)0x0;
      local_b8 = (long *)0x0;
      plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar4 + 0x18))(plVar4,0x42,pbVar3,"RunMicrotasks",0,0,0,0,0,0,0,&local_c0,0);
      plVar4 = local_b8;
      local_b8 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar4 = local_c0;
      local_c0 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    if (DAT_01d3ed48 == (byte *)0x0) {
      plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3ed48 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,&DAT_019c38f7);
    }
    local_b8 = (long *)0x0;
    if ((*DAT_01d3ed48 & 5) != 0) {
      tracing::CallStatsScopedTracer::Initialize
                ((CallStatsScopedTracer *)&local_c0,param_1,DAT_01d3ed48,"V8.RunMicrotasks");
    }
    lVar5 = Execution::TryRunMicrotasks(param_1,this,(MaybeHandle *)&local_80);
    lVar12 = *(long *)(this + 0x28);
    if ((local_b8 != (long *)0x0) && (*local_b0 != '\0')) {
      tracing::CallStatsScopedTracer::AddEndTraceEvent((CallStatsScopedTracer *)&local_c0);
    }
    if (DAT_01d3ed50 == (byte *)0x0) {
      plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
      DAT_01d3ed50 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"v8.execute");
    }
    pbVar3 = DAT_01d3ed50;
    uVar13 = lVar12 - lVar8;
    if ((*DAT_01d3ed50 & 5) != 0) {
      local_78 = (long)(int)uVar13;
      local_68 = "microtask_count";
      local_6c[0] = 3;
      local_c0 = (long *)0x0;
      local_b8 = (long *)0x0;
      plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar4 + 0x18))
                (plVar4,0x45,pbVar3,"RunMicrotasks",0,0,0,1,&local_68,local_6c,&local_78,&local_c0,0
                );
      plVar4 = local_b8;
      local_b8 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      plVar4 = local_c0;
      local_c0 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    uVar7 = *(ulong *)(lVar15 + 0x30);
    if (uVar14 < uVar7) {
      *(ulong *)(lVar15 + 0x30) = uVar14;
      *(ulong *)(lVar15 + 0x48) = (uVar14 + *(long *)(lVar15 + 0x48)) - uVar7;
    }
    v8::Isolate::SuppressMicrotaskExecutionScope::~SuppressMicrotaskExecutionScope(aSStack_98);
    this[0x4c] = (MicrotaskQueue)0x0;
    if ((lVar5 == 0) && (local_80 == 0)) {
      if (*(void **)(this + 0x20) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x20));
      }
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x20) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      Isolate::SetTerminationOnExternalTryCatch(param_1);
      pvVar1 = *(void **)(this + 0x50);
      uVar13 = *(long *)(this + 0x58) - (long)pvVar1;
      if (uVar13 == 0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        if ((ulong)((long)uVar13 >> 4) >> 0x3c != 0) {
LAB_00f6063c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        puVar6 = operator_new(uVar13);
        puVar2 = puVar6;
        puVar11 = puVar6;
        if (0 < (long)uVar13) {
          memcpy(puVar6,pvVar1,uVar13);
          puVar11 = (undefined8 *)((long)puVar6 + uVar13);
        }
        for (; puVar2 != puVar11; puVar2 = puVar2 + 2) {
          (*(code *)*puVar2)(param_1,puVar2[1]);
        }
      }
      if (puVar6 != (undefined8 *)0x0) {
        operator_delete(puVar6);
      }
      uVar13 = 0xffffffff;
    }
    else {
      pvVar1 = *(void **)(this + 0x50);
      uVar14 = *(long *)(this + 0x58) - (long)pvVar1;
      if (uVar14 == 0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        if ((ulong)((long)uVar14 >> 4) >> 0x3c != 0) goto LAB_00f6063c;
        puVar6 = operator_new(uVar14);
        puVar2 = puVar6;
        puVar11 = puVar6;
        if (0 < (long)uVar14) {
          memcpy(puVar6,pvVar1,uVar14);
          puVar11 = (undefined8 *)((long)puVar6 + uVar14);
        }
        for (; puVar2 != puVar11; puVar2 = puVar2 + 2) {
          (*(code *)*puVar2)(param_1,puVar2[1]);
        }
      }
      if (puVar6 != (undefined8 *)0x0) {
        operator_delete(puVar6);
      }
    }
    if (param_1 != (Isolate *)0x0) {
      *(undefined8 *)(param_1 + 0x95a0) = uVar9;
      *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
      if (*(long *)(param_1 + 0x95a8) != lVar10) {
        *(long *)(param_1 + 0x95a8) = lVar10;
        HandleScope::DeleteExtensions(param_1);
      }
    }
  }
  return uVar13 & 0xffffffff;
}

