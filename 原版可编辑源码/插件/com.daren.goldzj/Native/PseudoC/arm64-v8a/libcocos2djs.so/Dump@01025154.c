
/* v8::internal::ICStats::Dump() */

void __thiscall v8::internal::ICStats::Dump(ICStats *this)

{
  byte *pbVar1;
  TracedValue *pTVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  TracedValue *local_58;
  undefined1 local_50 [12];
  undefined1 local_44 [4];
  TracedValue *local_40;
  long *local_38;
  char *local_18;
  
  pTVar2 = local_58;
  v8::tracing::TracedValue::Create((TracedValue *)this);
  v8::tracing::TracedValue::BeginArray(local_58,"data");
  if (0 < *(int *)(this + 0x70)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      ICInfo::AppendToTracedValue((ICInfo *)(*(long *)(this + 8) + lVar4),local_58);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x80;
    } while (lVar5 < *(int *)(this + 0x70));
  }
  v8::tracing::TracedValue::EndArray(local_58);
  if (DAT_01d3f5b0 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f5b0 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.ic_stats");
  }
  pbVar1 = DAT_01d3f5b0;
  if ((*DAT_01d3f5b0 & 5) != 0) {
    local_58 = (TracedValue *)0x0;
    local_18 = "ic-stats";
    local_44[0] = 8;
    local_40 = pTVar2;
    local_38 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x18))
              (plVar3,0x49,pbVar1,"V8.ICStats",0,0,0,1,&local_18,local_44,local_50,&local_40,0x10);
    plVar3 = local_38;
    local_38 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    pTVar2 = local_40;
    local_40 = (TracedValue *)0x0;
    if (pTVar2 != (TracedValue *)0x0) {
      (**(code **)(*(long *)pTVar2 + 8))();
    }
  }
  Reset(this);
  if (local_58 != (TracedValue *)0x0) {
    (**(code **)(*(long *)local_58 + 8))();
  }
  return;
}

