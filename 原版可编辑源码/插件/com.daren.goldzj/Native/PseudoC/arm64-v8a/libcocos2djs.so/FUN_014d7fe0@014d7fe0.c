
undefined8 FUN_014d7fe0(int param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 local_d0 [14];
  void *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pIVar1 = (Isolate *)(param_2 + -8);
  if (param_1 < 6) {
    pIVar1 = param_3 + 0xa0;
  }
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar10 = *(ulong *)pIVar1;
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar4 = *(long *)(param_3 + 0x95a8);
  if (((uVar10 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)))) {
    puVar9 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,0x16e,0,0,0);
    uVar11 = v8::internal::Isolate::Throw(param_3,*puVar9,0);
  }
  else {
    FUN_014d8880(local_d0,param_3);
    plVar7 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    pcVar8 = (char *)(**(code **)(*plVar7 + 0x10))(plVar7,local_d0[0]);
    pvVar6 = local_60;
    local_60 = (void *)0x0;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
    lVar2 = 0xc0;
    if (*pcVar8 != '\0') {
      lVar2 = 0xb8;
    }
    uVar11 = *(undefined8 *)(param_3 + lVar2);
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

