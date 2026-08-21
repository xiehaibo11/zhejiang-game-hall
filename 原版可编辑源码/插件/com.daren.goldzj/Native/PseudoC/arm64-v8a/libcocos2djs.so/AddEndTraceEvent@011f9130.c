
/* v8::internal::tracing::CallStatsScopedTracer::AddEndTraceEvent() */

void __thiscall
v8::internal::tracing::CallStatsScopedTracer::AddEndTraceEvent(CallStatsScopedTracer *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  TracedValue *pTVar3;
  long *plVar4;
  undefined8 *puVar5;
  TracedValue *local_50;
  TracedValue *local_48;
  long *local_40;
  undefined1 auStack_38 [12];
  undefined1 local_2c [4];
  char *local_28;
  
  puVar5 = *(undefined8 **)(this + 8);
  if ((*this == (CallStatsScopedTracer)0x0) && (puVar5[2] != 0)) {
    v8::tracing::TracedValue::Create((TracedValue *)this);
    RuntimeCallStats::Dump
              ((RuntimeCallStats *)
               (*(long *)(*(long *)(*(long *)(this + 8) + 0x10) + 0x9520) + 0x58a0),local_50);
    uVar1 = **(undefined8 **)(this + 8);
    uVar2 = (*(undefined8 **)(this + 8))[1];
    local_28 = "runtime-call-stats";
    local_2c[0] = 8;
    local_40 = (long *)0x0;
    local_48 = local_50;
    plVar4 = (long *)V8::GetCurrentPlatform();
    plVar4 = (long *)(**(code **)(*plVar4 + 0x90))();
    (**(code **)(*plVar4 + 0x18))
              (plVar4,0x45,uVar1,uVar2,0,0,0,1,&local_28,local_2c,auStack_38,&local_48,0);
    plVar4 = local_40;
    local_40 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    pTVar3 = local_48;
    local_48 = (TracedValue *)0x0;
    if (pTVar3 != (TracedValue *)0x0) {
      (**(code **)(*(long *)pTVar3 + 8))();
    }
  }
  else {
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    local_48 = (TracedValue *)0x0;
    local_40 = (long *)0x0;
    plVar4 = (long *)V8::GetCurrentPlatform();
    plVar4 = (long *)(**(code **)(*plVar4 + 0x90))();
    (**(code **)(*plVar4 + 0x18))(plVar4,0x45,uVar1,uVar2,0,0,0,0,0,0,0,&local_48,0);
    plVar4 = local_40;
    local_40 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    pTVar3 = local_48;
    if (local_48 != (TracedValue *)0x0) {
      local_48 = (TracedValue *)0x0;
      (**(code **)(*(long *)pTVar3 + 8))();
    }
  }
  return;
}

