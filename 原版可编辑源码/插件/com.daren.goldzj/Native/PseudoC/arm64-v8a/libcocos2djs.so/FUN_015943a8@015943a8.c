
ulong FUN_015943a8(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  byte **local_a0;
  byte *local_98;
  char *local_90;
  undefined8 local_88;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  long *local_50;
  long *local_48;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x210);
  }
  if (DAT_01d47388 == (byte *)0x0) {
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47388 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.runtime");
  }
  pbVar2 = DAT_01d47388;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d47388 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"V8.Runtime_Runtime_StringSubstring",0,0,0,0,0,0,0,
                       &local_50,0);
    plVar3 = local_48;
    local_48 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_50;
    local_50 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.Runtime_Runtime_StringSubstring";
    local_98 = pbVar2;
    local_88 = uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  plVar3 = (long *)param_2[-1];
  if ((((ulong)plVar3 & 1) != 0) &&
     (*(short *)(((ulong)plVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)plVar3 - 1)) !=
      0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsNumber()");
  }
  local_54 = 0;
  local_50 = plVar3;
  uVar7 = v8::internal::Object::ToInt32((Object *)&local_50,&local_54);
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].ToInt32(&start)");
  }
  plVar3 = (long *)param_2[-2];
  if ((((ulong)plVar3 & 1) != 0) &&
     (*(short *)(((ulong)plVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)plVar3 - 1)) !=
      0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsNumber()");
  }
  local_58 = 0;
  local_50 = plVar3;
  uVar7 = v8::internal::Object::ToInt32((Object *)&local_50,&local_58);
  if ((uVar7 & 1) != 0) {
    lVar8 = *(long *)(param_3 + 0x9520);
    if (*(char *)(lVar8 + 0x1c18) == '\0') {
      *(char *)(lVar8 + 0x1c18) = '\x01';
      piVar5 = (int *)v8::internal::StatsCounterBase::FindLocationInStatsTable
                                ((StatsCounterBase *)(lVar8 + 0x1c00));
      *(int **)(lVar8 + 0x1c10) = piVar5;
    }
    else {
      piVar5 = *(int **)(lVar8 + 0x1c10);
    }
    if (piVar5 != (int *)0x0) {
      *piVar5 = *piVar5 + 1;
    }
    if ((local_54 != 0) || (uVar7 = *param_2, *(int *)(uVar7 + 7) != local_58)) {
      puVar6 = (ulong *)v8::internal::Factory::NewProperSubString((Factory *)param_3,param_2);
      uVar7 = *puVar6;
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
    if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
      plVar3 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar3 + 0x28))(plVar3,local_98,local_90,local_88);
    }
    if (local_80 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
    }
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[2].ToInt32(&end)");
}

