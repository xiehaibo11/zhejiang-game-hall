
/* v8::internal::wasm::WasmEngine::GetWasmEngine() */

WasmEngine * __thiscall v8::internal::wasm::WasmEngine::GetWasmEngine(WasmEngine *this)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *in_x8;
  
  if ((DAT_01d3fce0 & 1) == 0) {
    this = (WasmEngine *)__cxa_guard_acquire(&DAT_01d3fce0);
    if ((int)this != 0) {
      DAT_01d3fcd0 = 0;
      DAT_01d3fcd8 = 0;
      this = (WasmEngine *)__cxa_guard_release(&DAT_01d3fce0);
    }
  }
  lVar4 = DAT_01d3fcd8;
  *in_x8 = DAT_01d3fcd0;
  in_x8[1] = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return this;
}

