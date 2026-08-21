
/* v8::internal::WasmTableObject::GetFunctionTableEntry(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmTableObject>, int, bool*, bool*,
   v8::internal::MaybeHandle<v8::internal::WasmInstanceObject>*, int*,
   v8::internal::MaybeHandle<v8::internal::WasmJSFunction>*) */

void v8::internal::WasmTableObject::GetFunctionTableEntry
               (Isolate *param_1,ulong *param_2,int param_3,undefined1 *param_4,undefined1 *param_5,
               long *param_6,int *param_7,undefined8 *param_8)

{
  Isolate *pIVar1;
  uint uVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_48;
  
  *param_4 = 1;
  uVar8 = *param_2 & 0xffffffff00000000;
  uVar2 = *(uint *)((uVar8 | *(uint *)(*param_2 + 0xb)) + (long)(param_3 << 2) + 7);
  pIVar1 = param_1 + 0x95a0;
  uVar8 = uVar8 | uVar2;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar8;
    if ((uVar2 & 1) == 0) goto LAB_01251c84;
LAB_01251cbc:
    bVar3 = (int)uVar8 == *(int *)(param_1 + 0xb0);
    *param_5 = bVar3;
    if (bVar3) {
      return;
    }
    uVar8 = *puVar4;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
    uVar8 = *puVar4;
    if ((uVar8 & 1) != 0) goto LAB_01251cbc;
LAB_01251c84:
    *param_5 = 0;
    uVar8 = *puVar4;
  }
  if ((uVar8 & 1) != 0) {
    local_48 = uVar8 & 0xffffffff00000000;
    uVar9 = local_48 | 7;
    if ((*(short *)(uVar9 + *(uint *)(uVar8 - 1)) == 0x439) &&
       ((*(uint *)((local_48 | *(uint *)(uVar8 + 0x17)) + 0x17) & 0x3e) == 0x10)) {
      local_48 = local_48 | *(uint *)(uVar8 + 0xb);
      uVar8 = SharedFunctionInfo::wasm_exported_function_data((SharedFunctionInfo *)&local_48);
      uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 7);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)pIVar1;
        if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar5 + 1;
        *puVar5 = uVar8;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
      }
      *param_6 = (long)puVar5;
      local_48 = *puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar4 + 0xb);
      lVar6 = SharedFunctionInfo::wasm_exported_function_data((SharedFunctionInfo *)&local_48);
      iVar7 = *(int *)(lVar6 + 0xf);
      goto LAB_01251e3c;
    }
    if ((*(short *)(uVar9 + *(uint *)(uVar8 - 1)) == 0x439) &&
       ((uVar2 = *(uint *)((local_48 | *(uint *)(uVar8 + 0xb)) + 3), (uVar2 & 1) != 0 &&
        (*(short *)(uVar9 + *(uint *)((local_48 | uVar2) - 1)) == 0x75)))) {
      *param_6 = 0;
      *param_8 = puVar4;
      return;
    }
  }
  uVar8 = *puVar4;
  if (((uVar8 & 1) == 0) ||
     (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x6e)) {
    *param_4 = 0;
    return;
  }
  uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 3);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar8;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
  }
  *param_6 = (long)puVar5;
  iVar7 = *(int *)(*puVar4 + 7);
LAB_01251e3c:
  *param_7 = iVar7 >> 1;
  *param_8 = 0;
  return;
}

