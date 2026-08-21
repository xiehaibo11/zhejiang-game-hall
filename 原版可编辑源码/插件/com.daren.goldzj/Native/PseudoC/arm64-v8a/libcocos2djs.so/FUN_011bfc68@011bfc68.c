
int FUN_011bfc68(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  byte **local_100;
  byte *local_f8;
  char *local_f0;
  undefined8 local_e8;
  RuntimeCallStats *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long *local_b8;
  long *local_b0;
  long local_90;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_e0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x109);
  }
  if (DAT_01d3f960 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f960 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d3f960;
  local_100 = (byte **)0x0;
  if ((*DAT_01d3f960 & 5) != 0) {
    local_b8 = (long *)0x0;
    local_b0 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.Runtime_Runtime_GetGeneratorScopeCount",0,0,0,0,0,0,0,
                       &local_b8,0);
    plVar5 = local_b0;
    local_b0 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_b8;
    local_b8 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_100 = &local_f8;
    local_f0 = "V8.Runtime_Runtime_GetGeneratorScopeCount";
    local_f8 = pbVar4;
    local_e8 = uVar6;
  }
  iVar2 = *(int *)(param_3 + 0x95b0);
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = iVar2 + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) != 0) &&
     (uVar8 = uVar7 & 0xffffffff00000000 | 7, *(ushort *)(uVar8 + *(uint *)(uVar7 - 1)) - 0x417 < 3)
     ) {
    if (2 < *(ushort *)(uVar8 + *(uint *)(uVar7 - 1)) - 0x417) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsJSGeneratorObject()");
    }
    if (-1 < *(int *)(uVar7 + 0x1f)) {
      v8::internal::ScopeIterator::ScopeIterator((ScopeIterator *)&local_b8,param_3,param_2);
      if (local_90 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = 0;
        do {
          v8::internal::ScopeIterator::Next((ScopeIterator *)&local_b8);
          iVar9 = iVar9 + 2;
        } while (local_90 != 0);
      }
      v8::internal::ScopeIterator::~ScopeIterator((ScopeIterator *)&local_b8);
      if (param_3 != (Isolate *)0x0) {
        *(undefined8 *)(param_3 + 0x95a0) = uVar6;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(long *)(param_3 + 0x95a8) != lVar1) {
          *(long *)(param_3 + 0x95a8) = lVar1;
          v8::internal::HandleScope::DeleteExtensions(param_3);
        }
      }
      goto joined_r0x011bfe20;
    }
  }
  iVar9 = 0;
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = iVar2;
joined_r0x011bfe20:
  if ((local_100 != (byte **)0x0) && (*local_f8 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_f8,local_f0,local_e8);
  }
  if (local_e0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
}

