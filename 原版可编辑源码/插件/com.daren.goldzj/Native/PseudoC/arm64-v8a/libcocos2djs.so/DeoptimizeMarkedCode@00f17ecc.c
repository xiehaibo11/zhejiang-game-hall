
/* v8::internal::Deoptimizer::DeoptimizeMarkedCode(v8::internal::Isolate*) */

void v8::internal::Deoptimizer::DeoptimizeMarkedCode(Isolate *param_1)

{
  uint *puVar1;
  int iVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  __sFILE *p_Var7;
  ulong uVar8;
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
  Isolate *local_28;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x7f);
  }
  local_28 = param_1;
  TimerEventScope<v8::internal::TimerEventDeoptimizeCode>::LogTimerEvent
            ((TimerEventScope<v8::internal::TimerEventDeoptimizeCode> *)&local_28,0);
  if (DAT_01d3ec78 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ec78 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,&DAT_019c38f7);
  }
  pbVar3 = DAT_01d3ec78;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d3ec78 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.DeoptimizeCode",0,0,0,0,0,0,0,&local_50,0);
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
    local_90 = "V8.DeoptimizeCode";
    local_98 = pbVar3;
    local_88 = uVar5;
  }
  if (FLAG_trace_deopt != '\0') {
    puVar6 = (undefined8 *)Isolate::GetCodeTracer();
    p_Var7 = (__sFILE *)puVar6[0x12];
    if (FLAG_redirect_code_traces != '\0') {
      if (p_Var7 == (__sFILE *)0x0) {
        p_Var7 = (__sFILE *)base::OS::FOpen((char *)*puVar6,"ab");
        puVar6[0x12] = p_Var7;
      }
      *(int *)(puVar6 + 0x13) = *(int *)(puVar6 + 0x13) + 1;
    }
    PrintF(p_Var7,"[deoptimize marked code in all contexts]\n");
    if ((FLAG_redirect_code_traces != '\0') &&
       (iVar2 = *(int *)(puVar6 + 0x13), *(int *)(puVar6 + 0x13) = iVar2 + -1, iVar2 + -1 == 0)) {
      fclose((FILE *)puVar6[0x12]);
      puVar6[0x12] = 0;
      uVar8 = *(ulong *)(param_1 + 0x8e38);
      goto joined_r0x00f180fc;
    }
  }
  uVar8 = *(ulong *)(param_1 + 0x8e38);
joined_r0x00f180fc:
  if ((uVar8 & 1) != 0) goto LAB_00f18084;
  do {
    do {
      DeoptimizeMarkedCodeForContext(uVar8);
      puVar1 = (uint *)(uVar8 + 0x41f);
      uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*puVar1;
    } while ((*puVar1 & 1) == 0);
LAB_00f18084:
  } while ((int)uVar8 != *(int *)(param_1 + 0xa0));
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_98,local_90,local_88);
  }
  TimerEventScope<v8::internal::TimerEventDeoptimizeCode>::LogTimerEvent
            ((TimerEventScope<v8::internal::TimerEventDeoptimizeCode> *)&local_28,1);
  if (local_80 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return;
}

