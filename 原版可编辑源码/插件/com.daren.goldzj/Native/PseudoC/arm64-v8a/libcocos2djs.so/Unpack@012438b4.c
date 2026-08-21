
/* v8::WasmStreaming::Unpack(v8::Isolate*, v8::Local<v8::Value>) */

void __thiscall v8::WasmStreaming::Unpack(undefined8 *param_1_00,WasmStreaming *this,long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  puVar7 = *(undefined8 **)(*(long *)(*param_1 + 3) + 0x18);
  uVar2 = *(undefined8 *)(this + 0x95a0);
  lVar3 = *(long *)(this + 0x95a8);
  lVar4 = puVar7[1];
  *param_1_00 = *puVar7;
  param_1_00[1] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  *(undefined8 *)(this + 0x95a0) = uVar2;
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
  if (*(long *)(this + 0x95a8) != lVar3) {
    *(long *)(this + 0x95a8) = lVar3;
    internal::HandleScope::DeleteExtensions((Isolate *)this);
    return;
  }
  return;
}

