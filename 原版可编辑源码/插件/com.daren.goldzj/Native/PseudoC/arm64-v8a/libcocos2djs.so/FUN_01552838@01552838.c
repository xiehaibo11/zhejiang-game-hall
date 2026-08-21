
void FUN_01552838(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  long *plVar2;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_40;
  long *local_38;
  
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_70 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,200);
  }
  if (DAT_01d46d08 == (byte *)0x0) {
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d46d08 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.runtime");
  }
  pbVar1 = DAT_01d46d08;
  if ((*DAT_01d46d08 & 5) != 0) {
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar2 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x18))
              (plVar2,0x58,pbVar1,"V8.Runtime_Runtime_AtomicsAnd",0,0,0,0,0,0,0,&local_40,0);
    plVar2 = local_38;
    local_38 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_40;
    local_40 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

