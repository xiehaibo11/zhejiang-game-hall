
/* v8::internal::WasmScript::SetBreakpointsOnNewInstance(v8::internal::Handle<v8::internal::Script>,
   v8::internal::Handle<v8::internal::WasmInstanceObject>) */

void v8::internal::WasmScript::SetBreakpointsOnNewInstance(ulong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  CanonicalHandleScope *pCVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  Isolate *pIVar10;
  WasmModule *pWVar11;
  int iVar12;
  ulong uVar13;
  int local_64;
  
  uVar9 = *param_1;
  if (((*(uint *)(uVar9 + 0x17) & 0xfffffffe) == 6) &&
     (pIVar10 = (Isolate *)(uVar9 & 0xffffffff00000000),
     1 < *(int *)(((ulong)pIVar10 | (ulong)*(uint *)(uVar9 + 0x23)) + 3))) {
    lVar4 = WasmInstanceObject::GetOrCreateDebugInfo(param_2);
    pCVar5 = *(CanonicalHandleScope **)(pIVar10 + 0x95b8);
    uVar9 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0x23);
    if (pCVar5 == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar10 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar10 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar10);
      }
      *(ulong **)(pIVar10 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar9;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup(pCVar5,uVar9);
      uVar9 = *puVar6;
    }
    uVar2 = *(uint *)(uVar9 + 3);
    if (1 < (int)uVar2) {
      iVar12 = 0;
      uVar13 = 1;
      do {
        uVar3 = *(uint *)(uVar9 + (long)iVar12 + 7);
        pCVar5 = *(CanonicalHandleScope **)(pIVar10 + 0x95b8);
        uVar9 = uVar9 & 0xffffffff00000000 | (ulong)uVar3;
        if (pCVar5 == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)(pIVar10 + 0x95a0);
          if (puVar7 == *(ulong **)(pIVar10 + 0x95a8)) {
            puVar7 = (ulong *)HandleScope::Extend(pIVar10);
          }
          *(ulong **)(pIVar10 + 0x95a0) = puVar7 + 1;
          *puVar7 = uVar9;
          if ((uVar3 & 1) != 0) goto LAB_0120822c;
        }
        else {
          puVar7 = (ulong *)CanonicalHandleScope::Lookup(pCVar5,uVar9);
          uVar9 = *puVar7;
          if ((uVar9 & 1) != 0) {
LAB_0120822c:
            if ((int)uVar9 == *(int *)(pIVar10 + 0xa0)) {
              return;
            }
          }
        }
        uVar3 = *(int *)(uVar9 + 3) >> 1;
        pWVar11 = *(WasmModule **)
                   (**(long **)(*(long *)((*param_1 & 0xffffffff00000000 |
                                          (ulong)*(uint *)(*param_1 + 0x27)) + 3) + 0x18) + 200);
        local_64 = wasm::GetContainingWasmFunction(pWVar11,uVar3);
        iVar1 = *(int *)(*(long *)(pWVar11 + 0x88) + (long)local_64 * 0x20 + 0x10);
        lVar8 = FUN_01205bac((ulong)*(uint *)(lVar4 + 4) << 0x20,lVar4);
        WasmDebugInfo::RedirectToInterpreter(lVar4,&local_64,1);
        wasm::WasmInterpreter::SetBreakpoint
                  ((WasmInterpreter *)(lVar8 + 0x10),
                   (WasmFunction *)(*(long *)(*(long *)(lVar8 + 8) + 0x88) + (long)local_64 * 0x20),
                   (long)(int)(uVar3 - iVar1),true);
        if (uVar2 >> 1 <= uVar13) {
          return;
        }
        uVar9 = *puVar6;
        iVar12 = iVar12 + 4;
        uVar13 = uVar13 + 1;
      } while( true );
    }
  }
  return;
}

