
/* v8::internal::WasmScript::ClearBreakPoint(v8::internal::Handle<v8::internal::Script>, int,
   v8::internal::Handle<v8::internal::BreakPoint>) */

undefined8 v8::internal::WasmScript::ClearBreakPoint(ulong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  CanonicalHandleScope *pCVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  Isolate *pIVar9;
  WasmModule *pWVar10;
  int iVar11;
  long lVar12;
  
  pIVar9 = (Isolate *)(*param_1 & 0xffffffff00000000);
  pWVar10 = *(WasmModule **)
             (**(long **)(*(long *)(((ulong)pIVar9 | (ulong)*(uint *)(*param_1 + 0x27)) + 3) + 0x18)
             + 200);
  uVar3 = wasm::GetContainingWasmFunction(pWVar10,param_2);
  if (-1 < (int)uVar3) {
    iVar1 = *(int *)(*(long *)(pWVar10 + 0x88) + (ulong)uVar3 * 0x20 + 0x10);
    uVar4 = RemoveBreakpointFromInfo(param_1,param_2,param_3);
    if ((uVar4 & 1) != 0) {
      pCVar5 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
      uVar4 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 0x2b);
      if (pCVar5 == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)(pIVar9 + 0x95a0);
        if (puVar6 == *(ulong **)(pIVar9 + 0x95a8)) {
          puVar6 = (ulong *)HandleScope::Extend(pIVar9);
        }
        *(ulong **)(pIVar9 + 0x95a0) = puVar6 + 1;
        *puVar6 = uVar4;
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup(pCVar5,uVar4);
        uVar4 = *puVar6;
      }
      if (1 < *(int *)(uVar4 + 7)) {
        iVar11 = 0;
        lVar12 = 0;
        do {
          uVar2 = *(uint *)(uVar4 + (long)iVar11 + 0xb);
          if ((uVar2 != 3) && (((ulong)uVar2 & 3) == 3)) {
            pCVar5 = *(CanonicalHandleScope **)(pIVar9 + 0x95b8);
            uVar4 = (ulong)uVar2 & 0xfffffffffffffffd | uVar4 & 0xffffffff00000000;
            if (pCVar5 == (CanonicalHandleScope *)0x0) {
              puVar8 = *(ulong **)(pIVar9 + 0x95a0);
              if (puVar8 == *(ulong **)(pIVar9 + 0x95a8)) {
                puVar8 = (ulong *)HandleScope::Extend(pIVar9);
              }
              *(ulong **)(pIVar9 + 0x95a0) = puVar8 + 1;
              *puVar8 = uVar4;
            }
            else {
              CanonicalHandleScope::Lookup(pCVar5,uVar4);
            }
            lVar7 = WasmInstanceObject::GetOrCreateDebugInfo();
            lVar7 = FUN_01205bac((ulong)*(uint *)(lVar7 + 4) << 0x20,lVar7);
            wasm::WasmInterpreter::SetBreakpoint
                      ((WasmInterpreter *)(lVar7 + 0x10),
                       (WasmFunction *)
                       (*(long *)(*(long *)(lVar7 + 8) + 0x88) + (ulong)uVar3 * 0x20),
                       (long)(int)(param_2 - iVar1),false);
            uVar4 = *puVar6;
          }
          lVar12 = lVar12 + 1;
          iVar11 = iVar11 + 4;
        } while (lVar12 < *(int *)(uVar4 + 7) >> 1);
      }
      return 1;
    }
  }
  return 0;
}

