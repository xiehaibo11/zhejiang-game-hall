
/* v8::internal::interpreter::InterpreterCompilationJob::ExecuteJobImpl() */

InterpreterCompilationJob __thiscall
v8::internal::interpreter::InterpreterCompilationJob::ExecuteJobImpl
          (InterpreterCompilationJob *this)

{
  InterpreterCompilationJob IVar1;
  byte *pbVar2;
  RuntimeCallStats *pRVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
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
  
  pRVar3 = *(RuntimeCallStats **)(*(long *)(this + 0x20) + 0x88);
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if ((pRVar3 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
    uVar6 = 0x435;
    if (*(int *)(pRVar3 + 0x14) == 1) {
      uVar6 = 0x436;
    }
    local_80 = pRVar3;
    RuntimeCallStats::Enter(pRVar3,(RuntimeCallTimer *)((ulong)&local_80 | 8),uVar6);
  }
  if (DAT_01d3f5c8 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f5c8 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.compile");
  }
  pbVar2 = DAT_01d3f5c8;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d3f5c8 & 5) != 0) {
    local_50 = (long *)0x0;
    local_48 = (long *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar2,"V8.CompileIgnition",0,0,0,0,0,0,0,&local_50,0);
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
    local_90 = "V8.CompileIgnition";
    local_98 = pbVar2;
    local_88 = uVar5;
  }
  BytecodeGenerator::GenerateBytecode((BytecodeGenerator *)(this + 0xe0),*(ulong *)(this + 0x18));
  IVar1 = this[0xe8];
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_98,local_90,local_88);
  }
  if (local_80 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return IVar1;
}

