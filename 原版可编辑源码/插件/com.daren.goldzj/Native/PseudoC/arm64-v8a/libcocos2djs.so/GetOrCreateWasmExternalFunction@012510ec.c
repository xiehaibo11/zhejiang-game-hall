
/* v8::internal::WasmInstanceObject::GetOrCreateWasmExternalFunction(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmInstanceObject>, int) */

ulong * v8::internal::WasmInstanceObject::GetOrCreateWasmExternalFunction
                  (Isolate *param_1,ulong *param_2,int param_3)

{
  long lVar1;
  Isolate *pIVar2;
  long *plVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  WasmModule *pWVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar12 = *param_2;
  uVar10 = uVar12 & 0xffffffff00000000;
  pIVar2 = param_1 + 0x95a0;
  if (*(uint *)(uVar12 + 0x9f) != *(uint *)(uVar10 + 0xa0)) {
    uVar5 = *(uint *)((uVar10 | *(uint *)(uVar12 + 0x9f)) + (long)(param_3 << 2) + 7);
    if (((uVar5 & 1) == 0) || (uVar5 != *(uint *)(param_1 + 0xa0))) {
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)pIVar2;
        if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar2 = puVar7 + 1;
        *puVar7 = uVar10 | uVar5;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10 | uVar5);
      }
      if (puVar7 != (ulong *)0x0) {
        return puVar7;
      }
      uVar12 = *param_2;
      uVar10 = uVar12 & 0xffffffff00000000;
    }
  }
  uVar10 = uVar10 | *(uint *)(uVar12 + 0x6f);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar2;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar7 + 1;
    *puVar7 = uVar10;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
    uVar10 = *puVar7;
  }
  pWVar8 = *(WasmModule **)
            (**(long **)(*(long *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb)) +
                                  3) + 0x18) + 200);
  plVar3 = (long *)(*(long *)(pWVar8 + 0x88) + (long)param_3 * 0x20);
  iVar6 = wasm::GetExportWrapperIndex(pWVar8,(Signature *)*plVar3,SUB81(plVar3[3],0));
  lVar1 = (long)(iVar6 << 2) + 7;
  uVar5 = *(uint *)(lVar1 + (*puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar7 + 0xf)));
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)pIVar2;
    if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar2 = puVar9 + 1;
    *puVar9 = (ulong)(param_1 + uVar5);
    uVar10 = *puVar9;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),
                                 (ulong)(param_1 + uVar5));
    uVar10 = *puVar9;
  }
  if (((uVar10 & 1) == 0) ||
     (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x9a)) {
    puVar9 = (ulong *)wasm::JSToWasmWrapperCompilationUnit::CompileJSToWasmWrapper
                                (param_1,(Signature *)*plVar3,SUB81(plVar3[3],0));
    uVar13 = *puVar9;
    uVar12 = (ulong)*(uint *)(*puVar7 + 0xf);
    uVar10 = *puVar7 & 0xffffffff00000000;
    uVar14 = uVar10 | uVar12;
    puVar4 = (undefined4 *)(lVar1 + uVar14);
    *puVar4 = (int)uVar13;
    if ((uVar13 & 1) != 0) {
      uVar11 = *(ulong *)((uVar13 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar11 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar14,puVar4,uVar13);
        uVar11 = *(ulong *)(uVar13 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar11 & 0x18) != 0) &&
         ((*(byte *)((uVar10 | uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar14,puVar4,uVar13);
      }
    }
  }
  puVar7 = (ulong *)WasmExportedFunction::New
                              (param_1,param_2,param_3,*(undefined4 *)(*plVar3 + 8),puVar9);
  SetWasmExternalFunction(param_1,param_2,param_3,puVar7);
  return puVar7;
}

