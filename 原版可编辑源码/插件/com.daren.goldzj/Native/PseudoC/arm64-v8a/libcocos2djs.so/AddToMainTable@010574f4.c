
/* v8::internal::WorkerThreadRuntimeCallStats::AddToMainTable(v8::internal::RuntimeCallStats*) */

void __thiscall
v8::internal::WorkerThreadRuntimeCallStats::AddToMainTable
          (WorkerThreadRuntimeCallStats *this,RuntimeCallStats *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 local_38;
  
  base::Mutex::Lock((Mutex *)this);
  plVar2 = *(long **)(this + 0x30);
  for (plVar4 = *(long **)(this + 0x28); plVar4 != plVar2; plVar4 = plVar4 + 1) {
    lVar5 = *plVar4;
    lVar6 = -0x7068;
    do {
      *(long *)(param_1 + lVar6 + 0x7090) =
           *(long *)(param_1 + lVar6 + 0x7090) + *(long *)(lVar5 + lVar6 + 0x7090);
      local_38 = *(undefined8 *)(lVar5 + lVar6 + 0x7098);
      lVar3 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_38);
      lVar1 = lVar6 + 0x18;
      *(long *)(param_1 + lVar6 + 0x7098) = *(long *)(param_1 + lVar6 + 0x7098) + lVar3;
      lVar6 = lVar1;
    } while (lVar1 != 0);
    RuntimeCallStats::Reset((RuntimeCallStats *)*plVar4);
  }
  base::Mutex::Unlock((Mutex *)this);
  return;
}

