
/* v8::internal::WasmJSFunction::MatchesSignature(v8::internal::Signature<v8::internal::wasm::ValueType>*)
    */

bool __thiscall
v8::internal::WasmJSFunction::MatchesSignature(WasmJSFunction *this,Signature *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong local_38;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)param_1;
  local_38 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  uVar4 = SharedFunctionInfo::wasm_js_function_data((SharedFunctionInfo *)&local_38);
  if (((int)uVar5 == *(int *)(uVar4 + 0xb) >> 1) && ((int)uVar1 == *(int *)(uVar4 + 0xf) >> 1)) {
    iVar3 = (int)uVar5 + (int)uVar1;
    if (iVar3 == 0) {
      bVar2 = true;
    }
    else {
      iVar3 = memcmp((void *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0x13)) + 7),
                     *(void **)(param_1 + 0x10),(long)iVar3);
      bVar2 = iVar3 == 0;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

