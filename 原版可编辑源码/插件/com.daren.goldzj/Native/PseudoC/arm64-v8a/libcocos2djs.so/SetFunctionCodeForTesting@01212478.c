
/* v8::internal::wasm::WasmInterpreter::SetFunctionCodeForTesting(v8::internal::wasm::WasmFunction
   const*, unsigned char const*, unsigned char const*) */

void __thiscall
v8::internal::wasm::WasmInterpreter::SetFunctionCodeForTesting
          (WasmInterpreter *this,WasmFunction *param_1,uchar *param_2,uchar *param_3)

{
  Zone *this_00;
  SideTable *this_01;
  InterpreterCode *pIVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x40);
  pIVar1 = (InterpreterCode *)(*(long *)(lVar2 + 0x30) + (ulong)*(uint *)(param_1 + 8) * 0x58);
  *(uchar **)(pIVar1 + 0x30) = param_2;
  *(uchar **)(pIVar1 + 0x38) = param_3;
  *(uchar **)(pIVar1 + 0x40) = param_2;
  *(uchar **)(pIVar1 + 0x48) = param_3;
  *(undefined8 *)(pIVar1 + 0x50) = 0;
  if (param_2 != (uchar *)0x0) {
    this_00 = *(Zone **)(lVar2 + 0x20);
    this_01 = *(SideTable **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x28) {
      this_01 = (SideTable *)Zone::NewExpand(this_00,0x28);
    }
    else {
      *(SideTable **)(this_00 + 0x10) = this_01 + 0x28;
    }
    SideTable::SideTable(this_01,*(Zone **)(lVar2 + 0x20),*(WasmModule **)(lVar2 + 0x28),pIVar1);
    *(SideTable **)(pIVar1 + 0x50) = this_01;
  }
  return;
}

