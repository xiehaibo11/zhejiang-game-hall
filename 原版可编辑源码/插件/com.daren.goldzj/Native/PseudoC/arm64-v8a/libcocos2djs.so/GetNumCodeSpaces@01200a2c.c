
/* v8::internal::wasm::WasmCodeAllocator::GetNumCodeSpaces() const */

long __thiscall v8::internal::wasm::WasmCodeAllocator::GetNumCodeSpaces(WasmCodeAllocator *this)

{
  long lVar1;
  long lVar2;
  
  base::Mutex::Lock((Mutex *)(this + 8));
  lVar1 = *(long *)(this + 0x78);
  lVar2 = *(long *)(this + 0x80);
  base::Mutex::Unlock((Mutex *)(this + 8));
  return (lVar2 - lVar1 >> 3) * -0x5555555555555555;
}

