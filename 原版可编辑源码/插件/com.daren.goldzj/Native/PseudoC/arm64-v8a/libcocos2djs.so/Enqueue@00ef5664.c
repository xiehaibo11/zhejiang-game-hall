
/* v8::internal::CompilerDispatcher::Enqueue(v8::internal::ParseInfo const*,
   v8::internal::AstRawString const*, v8::internal::FunctionLiteral const*) */

undefined1  [16] __thiscall
v8::internal::CompilerDispatcher::Enqueue
          (CompilerDispatcher *this,ParseInfo *param_1,AstRawString *param_2,
          FunctionLiteral *param_3)

{
  byte *pbVar1;
  RuntimeCallStats *pRVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  BackgroundCompileTask *pBVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  Job *local_a8;
  RuntimeCallStats *local_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  byte **local_70;
  byte *local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 *local_38;
  
  if (DAT_01d3ec38 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ec38 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.compile");
  }
  pbVar1 = DAT_01d3ec38;
  local_70 = (byte **)0x0;
  if ((*DAT_01d3ec38 & 5) != 0) {
    local_a0 = (RuntimeCallStats *)0x0;
    plStack_98 = (long *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar1,"V8.CompilerDispatcherEnqueue",0,0,0,0,0,0,0,&local_a0,0);
    plVar4 = plStack_98;
    plStack_98 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    pRVar2 = local_a0;
    local_a0 = (RuntimeCallStats *)0x0;
    if (pRVar2 != (RuntimeCallStats *)0x0) {
      (**(code **)(*(long *)pRVar2 + 8))();
    }
    local_70 = &local_68;
    local_60 = "V8.CompilerDispatcherEnqueue";
    local_68 = pbVar1;
    local_58 = uVar5;
  }
  local_80 = 0;
  plStack_98 = (long *)0x0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(*(long *)this + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x78);
  }
  if (FLAG_compiler_dispatcher == '\0') {
    uVar5 = 0;
    uVar9 = 0;
    uVar8 = 0;
  }
  else {
    pBVar6 = operator_new(0x40);
    BackgroundCompileTask::BackgroundCompileTask
              (pBVar6,*(AccountingAllocator **)(this + 8),param_1,param_2,param_3,
               *(WorkerThreadRuntimeCallStats **)(this + 0x10),*(TimedHistogram **)(this + 0x18),
               *(int *)(this + 0x38));
    local_38 = operator_new(0x18);
    *local_38 = pBVar6;
    local_38[1] = 0;
    *(undefined2 *)(local_38 + 2) = 0;
    lVar7 = InsertJob(this,&local_38);
    puVar3 = local_38;
    local_38 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      pBVar6 = (BackgroundCompileTask *)*puVar3;
      *puVar3 = 0;
      if (pBVar6 != (BackgroundCompileTask *)0x0) {
        BackgroundCompileTask::~BackgroundCompileTask(pBVar6);
        operator_delete(pBVar6);
      }
      operator_delete(puVar3);
    }
    uVar9 = *(ulong *)(lVar7 + 0x20);
    if (this[0x40] != (CompilerDispatcher)0x0) {
      PrintF("CompilerDispatcher: enqueued job %zu for function literal id %d\n",uVar9,
             (ulong)*(uint *)(param_3 + 0x1c));
    }
    base::Mutex::Lock((Mutex *)(this + 0xb0));
    local_a8 = *(Job **)(lVar7 + 0x28);
    std::__ndk1::
    __hash_table<v8::internal::CompilerDispatcher::Job*,std::__ndk1::hash<v8::internal::CompilerDispatcher::Job*>,std::__ndk1::equal_to<v8::internal::CompilerDispatcher::Job*>,std::__ndk1::allocator<v8::internal::CompilerDispatcher::Job*>>
    ::
    __emplace_unique_key_args<v8::internal::CompilerDispatcher::Job*,v8::internal::CompilerDispatcher::Job*>
              ((__hash_table<v8::internal::CompilerDispatcher::Job*,std::__ndk1::hash<v8::internal::CompilerDispatcher::Job*>,std::__ndk1::equal_to<v8::internal::CompilerDispatcher::Job*>,std::__ndk1::allocator<v8::internal::CompilerDispatcher::Job*>>
                *)(this + 0xe0),&local_a8,&local_a8);
    base::Mutex::Unlock((Mutex *)(this + 0xb0));
    ScheduleMoreWorkerTasksIfNeeded(this);
    uVar8 = uVar9 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xff;
    uVar5 = 1;
  }
  if (local_a0 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  if ((local_70 != (byte **)0x0) && (*local_68 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_68,local_60,local_58);
  }
  auVar10._8_8_ = uVar8 | uVar9;
  auVar10._0_8_ = uVar5;
  return auVar10;
}

