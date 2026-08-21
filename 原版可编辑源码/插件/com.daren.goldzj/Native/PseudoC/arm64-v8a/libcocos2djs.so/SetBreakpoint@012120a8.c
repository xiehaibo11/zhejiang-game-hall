
/* v8::internal::wasm::WasmInterpreter::SetBreakpoint(v8::internal::wasm::WasmFunction const*,
   unsigned long, bool) */

bool __thiscall
v8::internal::wasm::WasmInterpreter::SetBreakpoint
          (WasmInterpreter *this,WasmFunction *param_1,ulong param_2,bool param_3)

{
  char cVar1;
  bool bVar2;
  Zone *this_00;
  SideTable *this_01;
  void *__dest;
  long lVar3;
  undefined1 uVar4;
  InterpreterCode *pIVar5;
  size_t __n;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  InterpreterCode *pIVar10;
  long *plVar11;
  
  lVar3 = *(long *)(this + 0x40);
  uVar7 = (ulong)*(uint *)(param_1 + 8);
  lVar9 = *(long *)(lVar3 + 0x30);
  pIVar5 = (InterpreterCode *)(lVar9 + uVar7 * 0x58);
  pIVar10 = pIVar5 + 0x50;
  if ((*(long *)pIVar10 == 0) && (*(long *)(lVar9 + uVar7 * 0x58 + 0x40) != 0)) {
    this_00 = *(Zone **)(lVar3 + 0x20);
    this_01 = *(SideTable **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x28) {
      this_01 = (SideTable *)Zone::NewExpand(this_00,0x28);
    }
    else {
      *(SideTable **)(this_00 + 0x10) = this_01 + 0x28;
    }
    SideTable::SideTable(this_01,*(Zone **)(lVar3 + 0x20),*(WasmModule **)(lVar3 + 0x28),pIVar5);
    *(SideTable **)pIVar10 = this_01;
  }
  lVar6 = lVar9 + uVar7 * 0x58;
  bVar2 = false;
  plVar11 = (long *)(lVar6 + 0x40);
  lVar3 = *plVar11;
  if ((*(uint *)(lVar6 + 8) <= param_2) && (__n = *(long *)(lVar6 + 0x48) - lVar3, param_2 < __n)) {
    plVar8 = (long *)(lVar9 + uVar7 * 0x58 + 0x30);
    lVar9 = *plVar8;
    if (param_3) {
      if (lVar9 == lVar3) {
        __dest = *(void **)(this + 0x10);
        uVar7 = __n + 7 & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(this + 0x18) - (long)__dest) < uVar7) {
          __dest = (void *)Zone::NewExpand((Zone *)this,uVar7);
        }
        else {
          *(ulong *)(this + 0x10) = (long)__dest + uVar7;
        }
        *plVar11 = (long)__dest;
        memcpy(__dest,(void *)*plVar8,__n);
        lVar3 = *plVar11;
        *(long *)(lVar6 + 0x48) = lVar3 + __n;
      }
      uVar4 = 0xff;
    }
    else {
      uVar4 = *(undefined1 *)(lVar9 + param_2);
    }
    cVar1 = *(char *)(lVar3 + param_2);
    *(undefined1 *)(lVar3 + param_2) = uVar4;
    bVar2 = cVar1 == -1;
  }
  return bVar2;
}

