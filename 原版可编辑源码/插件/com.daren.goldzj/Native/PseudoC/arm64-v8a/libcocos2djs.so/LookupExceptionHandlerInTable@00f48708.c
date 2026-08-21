
/* v8::internal::WasmCompiledFrame::LookupExceptionHandlerInTable() */

undefined8 __thiscall
v8::internal::WasmCompiledFrame::LookupExceptionHandlerInTable(WasmCompiledFrame *this)

{
  int iVar1;
  undefined4 uVar2;
  WasmCode *this_00;
  undefined8 uVar3;
  HandlerTable aHStack_40 [16];
  
  this_00 = (WasmCode *)
            wasm::WasmCodeManager::LookupCode
                      (*(WasmCodeManager **)(*(long *)(this + 0x10) + 0xc770),
                       **(ulong **)(this + 0x28));
  if ((*(int *)(this_00 + 0x38) == -1) ||
     (iVar1 = wasm::WasmCode::handler_table_size(this_00), iVar1 == 0)) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = wasm::WasmCode::handler_table(this_00);
    uVar2 = wasm::WasmCode::handler_table_size(this_00);
    HandlerTable::HandlerTable(aHStack_40,uVar3,uVar2,1);
    uVar3 = HandlerTable::LookupReturn(aHStack_40,**(int **)(this + 0x28) - *(int *)this_00);
  }
  return uVar3;
}

