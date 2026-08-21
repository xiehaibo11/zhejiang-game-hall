
/* v8::internal::wasm::WasmInterpreter::GetBreakpoint(v8::internal::wasm::WasmFunction const*,
   unsigned long) */

bool __thiscall
v8::internal::wasm::WasmInterpreter::GetBreakpoint
          (WasmInterpreter *this,WasmFunction *param_1,ulong param_2)

{
  bool bVar1;
  Zone *this_00;
  SideTable *this_01;
  InterpreterCode *pIVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  InterpreterCode *pIVar6;
  
  lVar3 = *(long *)(this + 0x40);
  uVar4 = (ulong)*(uint *)(param_1 + 8);
  lVar5 = *(long *)(lVar3 + 0x30);
  pIVar2 = (InterpreterCode *)(lVar5 + uVar4 * 0x58);
  pIVar6 = pIVar2 + 0x50;
  if ((*(long *)pIVar6 == 0) && (*(long *)(lVar5 + uVar4 * 0x58 + 0x40) != 0)) {
    this_00 = *(Zone **)(lVar3 + 0x20);
    this_01 = *(SideTable **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x28) {
      this_01 = (SideTable *)Zone::NewExpand(this_00,0x28);
    }
    else {
      *(SideTable **)(this_00 + 0x10) = this_01 + 0x28;
    }
    SideTable::SideTable(this_01,*(Zone **)(lVar3 + 0x20),*(WasmModule **)(lVar3 + 0x28),pIVar2);
    *(SideTable **)pIVar6 = this_01;
  }
  lVar3 = lVar5 + uVar4 * 0x58;
  if ((param_2 < *(uint *)(lVar3 + 8)) ||
     (lVar3 = *(long *)(lVar3 + 0x40),
     (ulong)(*(long *)(lVar5 + uVar4 * 0x58 + 0x48) - lVar3) <= param_2)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(lVar3 + param_2) == -1;
  }
  return bVar1;
}

