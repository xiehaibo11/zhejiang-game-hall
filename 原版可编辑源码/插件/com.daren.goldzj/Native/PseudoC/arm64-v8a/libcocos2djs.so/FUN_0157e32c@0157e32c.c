
undefined8 FUN_0157e32c(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  Isolate *pIVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  long lVar11;
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_64;
  long *local_60;
  long *local_58;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x1de);
  }
  if (DAT_01d47250 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47250 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47250;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d47250 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_RegExpExec",0,0,0,0,0,0,0,&local_60,0)
    ;
    plVar4 = local_58;
    local_58 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_60;
    local_60 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.Runtime_Runtime_RegExpExec";
    local_a8 = pbVar3;
    local_98 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if (((uVar8 & 1) == 0) ||
     (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x42e)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSRegExp()");
  }
  puVar10 = param_2 + -1;
  uVar8 = *puVar10;
  if (((uVar8 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsString()");
  }
  plVar4 = (long *)param_2[-2];
  if ((((ulong)plVar4 & 1) != 0) &&
     (*(short *)(((ulong)plVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)plVar4 - 1)) !=
      0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsNumber()");
  }
  local_64 = 0;
  local_60 = plVar4;
  uVar8 = v8::internal::Object::ToInt32((Object *)&local_60,&local_64);
  if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].ToInt32(&index)");
  }
  uVar8 = param_2[-3];
  if (((uVar8 & 1) == 0) ||
     (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x76)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[3].IsRegExpMatchInfo()");
  }
  if (local_64 < 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 <= index");
  }
  if (local_64 <= *(int *)(*puVar10 + 7)) {
    lVar11 = *(long *)(param_3 + 0x9520);
    if (*(char *)(lVar11 + 0x1c38) == '\0') {
      *(char *)(lVar11 + 0x1c38) = '\x01';
      piVar6 = (int *)v8::internal::StatsCounterBase::FindLocationInStatsTable
                                ((StatsCounterBase *)(lVar11 + 0x1c20));
      *(int **)(lVar11 + 0x1c30) = piVar6;
    }
    else {
      piVar6 = *(int **)(lVar11 + 0x1c30);
    }
    if (piVar6 != (int *)0x0) {
      *piVar6 = *piVar6 + 1;
    }
    pIVar7 = (Isolate *)v8::internal::RegExp::Exec(param_3,param_2,puVar10,local_64,param_2 + -3);
    pIVar1 = param_3 + 0x180;
    if (pIVar7 != (Isolate *)0x0) {
      pIVar1 = pIVar7;
    }
    uVar9 = *(undefined8 *)pIVar1;
    *(undefined8 *)(param_3 + 0x95a0) = uVar5;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      v8::internal::HandleScope::DeleteExtensions(param_3);
    }
    if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
      plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
      (**(code **)(*plVar4 + 0x28))(plVar4,local_a8,local_a0,local_98);
    }
    if (local_90 != (RuntimeCallStats *)0x0) {
      v8::internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
    }
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","subject->length() >= index");
}

