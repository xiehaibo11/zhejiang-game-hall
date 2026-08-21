
undefined8 FUN_01592d54(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong *puVar9;
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_60;
  long *local_58;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x20e);
  }
  if (DAT_01d47358 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47358 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d47358;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d47358 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"V8.Runtime_Runtime_StringReplaceOneCharWithString",0,0,0,
                       0,0,0,0,&local_60,0);
    plVar3 = local_58;
    local_58 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_60;
    local_60 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_StringReplaceOneCharWithString";
    local_a8 = pbVar2;
    local_98 = uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  puVar8 = param_2 + -1;
  uVar6 = *puVar8;
  if (((uVar6 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  puVar9 = param_2 + -2;
  uVar6 = *puVar9;
  if (((uVar6 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsString()");
  }
  local_60 = (long *)((ulong)local_60 & 0xffffffffffffff00);
  puVar5 = (undefined8 *)
           v8::internal::StringReplaceOneCharWithString
                     (param_3,param_2,puVar8,puVar9,&local_60,0x1000);
  if (puVar5 == (undefined8 *)0x0) {
    if (((*(ulong *)(param_3 + 0x2bd8) & 1) != 0) &&
       ((int)*(ulong *)(param_3 + 0x2bd8) == *(int *)(param_3 + 0xa8))) {
      uVar7 = v8::internal::String::Flatten(param_3,param_2,0);
      puVar5 = (undefined8 *)
               v8::internal::StringReplaceOneCharWithString
                         (param_3,uVar7,puVar8,puVar9,&local_60,0x1000);
      if (puVar5 != (undefined8 *)0x0) goto LAB_01592f04;
      if (((*(ulong *)(param_3 + 0x2bd8) & 1) != 0) &&
         ((int)*(ulong *)(param_3 + 0x2bd8) == *(int *)(param_3 + 0xa8))) {
        uVar7 = v8::internal::Isolate::StackOverflow(param_3);
        goto LAB_01592f78;
      }
    }
    uVar7 = *(undefined8 *)(param_3 + 0x180);
  }
  else {
LAB_01592f04:
    uVar7 = *puVar5;
  }
LAB_01592f78:
  *(undefined8 *)(param_3 + 0x95a0) = uVar4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar7;
}

