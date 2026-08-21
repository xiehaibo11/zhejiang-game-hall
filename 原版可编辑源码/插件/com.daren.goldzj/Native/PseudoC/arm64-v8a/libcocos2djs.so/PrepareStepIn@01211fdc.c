
/* v8::internal::wasm::WasmInterpreter::PrepareStepIn(v8::internal::wasm::WasmFunction const*) */

void __thiscall
v8::internal::wasm::WasmInterpreter::PrepareStepIn(WasmInterpreter *this,WasmFunction *param_1)

{
  Zone *this_00;
  SideTable *this_01;
  InterpreterCode *pIVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  InterpreterCode *pIVar5;
  
  lVar2 = *(long *)(this + 0x40);
  uVar3 = (ulong)*(uint *)(param_1 + 8);
  lVar4 = *(long *)(lVar2 + 0x30);
  pIVar1 = (InterpreterCode *)(lVar4 + uVar3 * 0x58);
  pIVar5 = pIVar1 + 0x50;
  if ((*(long *)pIVar5 == 0) && (*(long *)(lVar4 + uVar3 * 0x58 + 0x40) != 0)) {
    this_00 = *(Zone **)(lVar2 + 0x20);
    this_01 = *(SideTable **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x28) {
      this_01 = (SideTable *)Zone::NewExpand(this_00,0x28);
    }
    else {
      *(SideTable **)(this_00 + 0x10) = this_01 + 0x28;
    }
    SideTable::SideTable(this_01,*(Zone **)(lVar2 + 0x20),*(WasmModule **)(lVar2 + 0x28),pIVar1);
    *(SideTable **)pIVar5 = this_01;
  }
  SetBreakpoint(this,param_1,(ulong)*(uint *)(lVar4 + uVar3 * 0x58 + 8),true);
  return;
}

