
/* v8::internal::Heap::CollectCodeStatistics() */

void __thiscall v8::internal::Heap::CollectCodeStatistics(Heap *this)

{
  Isolate *pIVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  byte **local_60;
  byte *local_58;
  char *local_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  
  if (DAT_01d3f0f8 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f0f8 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,&DAT_019c38f7);
  }
  pbVar2 = DAT_01d3f0f8;
  local_60 = (byte **)0x0;
  if ((*DAT_01d3f0f8 & 5) != 0) {
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"Heap::CollectCodeStatistics",0,0,0,0,0,0,0,&local_40,0);
    plVar3 = local_38;
    local_38 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_40;
    local_40 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_60 = &local_58;
    local_50 = "Heap::CollectCodeStatistics";
    local_58 = pbVar2;
    local_48 = uVar4;
  }
  pIVar1 = (Isolate *)(this + -0x8850);
  CodeStatistics::ResetCodeAndMetadataStatistics(pIVar1);
  CodeStatistics::CollectCodeStatistics(*(PagedSpace **)(this + 0xf8),pIVar1);
  CodeStatistics::CollectCodeStatistics(*(PagedSpace **)(this + 0xf0),pIVar1);
  CodeStatistics::CollectCodeStatistics(*(OldLargeObjectSpace **)(this + 0x110),pIVar1);
  if ((local_60 != (byte **)0x0) && (*local_58 != 0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_58,local_50,local_48);
  }
  return;
}

