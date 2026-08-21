
/* v8::internal::wasm::ThreadImpl::GetTargetCode(v8::internal::Isolate*, unsigned long) */

long v8::internal::wasm::ThreadImpl::GetTargetCode(Isolate *param_1,ulong param_2)

{
  uint uVar1;
  NativeModule *this;
  long lVar2;
  ulong uVar3;
  
  this = (NativeModule *)
         WasmCodeManager::LookupNativeModule(*(WasmCodeManager **)(param_1 + 0xc770),param_2);
  lVar2 = NativeModule::Lookup(this,param_2);
  if (*(int *)(lVar2 + 0x3c) == 4) {
    uVar1 = NativeModule::GetFunctionIndexFromJumpTableSlot(this,param_2);
    uVar3 = NativeModule::HasCode(this,uVar1);
    if (((uVar3 & 1) != 0) || (uVar3 = CompileLazy(param_1,this,uVar1), (uVar3 & 1) != 0)) {
      lVar2 = NativeModule::GetCode(this,uVar1);
      return lVar2;
    }
    lVar2 = 0;
  }
  return lVar2;
}

