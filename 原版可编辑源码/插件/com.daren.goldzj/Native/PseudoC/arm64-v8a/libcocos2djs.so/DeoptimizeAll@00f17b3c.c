
/* v8::internal::Deoptimizer::DeoptimizeAll(v8::internal::Isolate*) */

void v8::internal::Deoptimizer::DeoptimizeAll(Isolate *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  __sFILE *p_Var8;
  ulong uVar9;
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
  if (DAT_01d3ec70 == (byte *)0x0) {
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ec70 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,&DAT_019c38f7);
  }
  pbVar4 = DAT_01d3ec70;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d3ec70 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.DeoptimizeCode",0,0,0,0,0,0,0,&local_50,0);
    plVar5 = local_48;
    local_48 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    plVar5 = local_50;
    local_50 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    local_a0 = &local_98;
    local_90 = "V8.DeoptimizeCode";
    local_98 = pbVar4;
    local_88 = uVar6;
  }
  if (FLAG_trace_deopt != '\0') {
    puVar7 = (undefined8 *)Isolate::GetCodeTracer();
    p_Var8 = (__sFILE *)puVar7[0x12];
    if (FLAG_redirect_code_traces != '\0') {
      if (p_Var8 == (__sFILE *)0x0) {
        p_Var8 = (__sFILE *)base::OS::FOpen((char *)*puVar7,"ab");
        puVar7[0x12] = p_Var8;
      }
      *(int *)(puVar7 + 0x13) = *(int *)(puVar7 + 0x13) + 1;
    }
    PrintF(p_Var8,"[deoptimize all code in all contexts]\n");
    if ((FLAG_redirect_code_traces != '\0') &&
       (iVar2 = *(int *)(puVar7 + 0x13), *(int *)(puVar7 + 0x13) = iVar2 + -1, iVar2 + -1 == 0)) {
      fclose((FILE *)puVar7[0x12]);
      puVar7[0x12] = 0;
    }
  }
  Isolate::AbortConcurrentOptimization(param_1,0);
  plVar5 = *(long **)(param_1 + 0x8e38);
  if (((ulong)plVar5 & 1) == 0) goto LAB_00f17d24;
  do {
    if ((int)plVar5 == *(int *)(param_1 + 0xa0)) {
      if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
        plVar5 = (long *)tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar5 + 0x28))(plVar5,local_98,local_90,local_88);
      }
      TimerEventScope<v8::internal::TimerEventDeoptimizeCode>::LogTimerEvent
                ((TimerEventScope<v8::internal::TimerEventDeoptimizeCode> *)&local_28,1);
      if (local_80 != (RuntimeCallStats *)0x0) {
        RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
      }
      return;
    }
LAB_00f17d24:
    do {
      local_50 = plVar5;
      uVar9 = NativeContext::OptimizedCodeListHead((NativeContext *)&local_50);
      if ((uVar9 & 1) == 0) goto LAB_00f17d48;
      while ((int)uVar9 != *(int *)(((ulong)local_50 & 0xffffffff00000000) + 0xa0)) {
LAB_00f17d48:
        do {
          if ((*(byte *)(uVar9 + 0x17) & 0x3e) != 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","code.kind() == Code::OPTIMIZED_FUNCTION");
          }
          puVar1 = (uint *)(uVar9 + 0xf);
          uVar9 = uVar9 & 0xffffffff00000000;
          *(uint *)((uVar9 | *puVar1) + 7) = *(uint *)((uVar9 | *puVar1) + 7) | 1;
          uVar3 = *(uint *)((uVar9 | *puVar1) + 3);
          uVar9 = uVar9 | uVar3;
        } while ((uVar3 & 1) == 0);
      }
      OSROptimizedCodeCache::Clear(plVar5);
      DeoptimizeMarkedCodeForContext(plVar5);
      puVar1 = (uint *)((long)plVar5 + 0x41f);
      plVar5 = (long *)((ulong)plVar5 & 0xffffffff00000000 | (ulong)*puVar1);
    } while ((*puVar1 & 1) == 0);
  } while( true );
}

