
/* v8::internal::wasm::JSToWasmWrapperCompilationUnit::~JSToWasmWrapperCompilationUnit() */

void __thiscall
v8::internal::wasm::JSToWasmWrapperCompilationUnit::~JSToWasmWrapperCompilationUnit
          (JSToWasmWrapperCompilationUnit *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015cb1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}

