
/* v8::internal::wasm::WasmEngine::WasmEngine() */

void __thiscall v8::internal::wasm::WasmEngine::WasmEngine(WasmEngine *this)

{
  WasmCodeManager::WasmCodeManager
            ((WasmCodeManager *)this,(ulong)(uint)(FLAG_wasm_max_code_space << 0x14));
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined ***)(this + 0x58) = &PTR__AccountingAllocator_01cbced0;
  CancelableTaskManager::CancelableTaskManager((CancelableTaskManager *)(this + 0x70));
  base::Mutex::Mutex((Mutex *)(this + 0x100));
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x148) = 0x3f800000;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x180) = 0x3f800000;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x1a8) = 0x3f800000;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  return;
}

