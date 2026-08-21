
/* v8::internal::WasmStackFrame::GetColumnNumber() */

int __thiscall v8::internal::WasmStackFrame::GetColumnNumber(WasmStackFrame *this)

{
  int iVar1;
  int iVar2;
  WasmModule *pWVar3;
  undefined8 local_28;
  
  local_28 = **(undefined8 **)(this + 0x10);
  pWVar3 = (WasmModule *)WasmInstanceObject::module((WasmInstanceObject *)&local_28);
  iVar1 = wasm::GetWasmFunctionOffset(pWVar3,*(uint *)(this + 0x18));
  iVar2 = (**(code **)(*(long *)this + 0x60))(this);
  return iVar2 + iVar1;
}

