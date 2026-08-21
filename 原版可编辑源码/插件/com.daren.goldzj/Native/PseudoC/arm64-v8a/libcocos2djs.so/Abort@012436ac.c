
/* v8::WasmStreaming::Abort(v8::MaybeLocal<v8::Value>) */

void __thiscall v8::WasmStreaming::Abort(WasmStreaming *this,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  Isolate *pIVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)this;
  pIVar3 = (Isolate *)*puVar4;
  uVar1 = *(undefined8 *)(pIVar3 + 0x95a0);
  lVar2 = *(long *)(pIVar3 + 0x95a8);
  *(int *)(pIVar3 + 0x95b0) = *(int *)(pIVar3 + 0x95b0) + 1;
  internal::wasm::StreamingDecoder::Abort((StreamingDecoder *)puVar4[1]);
  if (param_2 != 0) {
    (**(code **)(*(long *)puVar4[3] + 8))((long *)puVar4[3],param_2);
  }
  if (pIVar3 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar3 + 0x95a0) = uVar1;
    *(int *)(pIVar3 + 0x95b0) = *(int *)(pIVar3 + 0x95b0) + -1;
    if (*(long *)(pIVar3 + 0x95a8) != lVar2) {
      *(long *)(pIVar3 + 0x95a8) = lVar2;
      internal::HandleScope::DeleteExtensions(pIVar3);
      return;
    }
  }
  return;
}

