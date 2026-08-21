
undefined8 FUN_01506c68(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  ushort uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  Isolate *pIVar7;
  ulong uVar8;
  undefined8 uVar9;
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
  undefined1 local_44 [4];
  
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_e0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,300);
  }
  if (DAT_01d46c48 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46c48 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d46c48;
  local_100 = (byte **)0x0;
  if ((*DAT_01d46c48 & 5) != 0) {
    local_b8 = (long *)0x0;
    local_b0 = (long *)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar2,"V8.Runtime_Runtime_ElementsTransitionAndStoreIC_Miss",0,0
                       ,0,0,0,0,0,&local_b8,0);
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
    local_f0 = "V8.Runtime_Runtime_ElementsTransitionAndStoreIC_Miss";
    local_f8 = pbVar2;
    local_e8 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  local_b8 = (long *)param_2[-5];
  pIVar7 = (Isolate *)(param_2 + -2);
  iVar4 = v8::internal::FeedbackVector::GetKind((FeedbackVector *)&local_b8,(int)param_2[-4] >> 1);
  uVar8 = *param_2;
  if (((uVar8 & 1) != 0) &&
     (0xa9 < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
    v8::internal::JSObject::TransitionElementsKind(param_2,*(byte *)(param_2[-3] + 10) >> 3);
  }
  if (iVar4 == 0xe) {
    local_44[0] = 0;
    v8::internal::LookupIterator::PropertyOrElement
              ((LookupIterator *)&local_b8,param_3,param_2,param_2 + -1,local_44,1);
    uVar3 = v8::internal::JSObject::DefineOwnPropertyIgnoreAttributes(&local_b8,pIVar7,0,1,1);
    if ((uVar3 & 0xff) == 0) {
      v8::V8::FromJustIsNothing();
    }
    if (uVar3 < 0x100) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "JSObject::DefineOwnPropertyIgnoreAttributes( &it, value, NONE, Just(ShouldThrow::kThrowOnError)) .FromJust()"
              );
    }
  }
  else {
    pIVar7 = (Isolate *)
             v8::internal::Runtime::SetObjectProperty(param_3,param_2,param_2 + -1,pIVar7,0,0);
    if (pIVar7 == (Isolate *)0x0) {
      pIVar7 = param_3 + 0x180;
    }
  }
  uVar9 = *(undefined8 *)pIVar7;
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_100 != (byte **)0x0) && (*local_f8 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_f8,local_f0,local_e8);
  }
  if (local_e0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
  }
  return uVar9;
}

