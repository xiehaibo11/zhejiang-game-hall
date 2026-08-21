
/* v8::internal::Debug::PrepareStepIn(v8::internal::Handle<v8::internal::JSFunction>) */

void __thiscall v8::internal::Debug::PrepareStepIn(Debug *this,ulong *param_2)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long lVar5;
  Debug *pDVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong local_28;
  
  if (((char)this[0x4c] < '\x02') && (this[0x84] == (Debug)0x0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","last_step_action() >= StepIn || break_on_next_function_call()");
  }
  if ((((this[10] == (Debug)0x0) && (this[8] != (Debug)0x0)) &&
      (pIVar1 = *(Isolate **)(this + 0x88), *(int *)(pIVar1 + 0xb80c) != 0x20)) &&
     ((*(long *)(this + 0x40) == 0 && (this[0xc] == (Debug)0x0)))) {
    uVar7 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar7;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar7);
      uVar7 = *puVar2;
    }
    if (((*(uint *)(uVar7 + 3) & 1) != 0) &&
       (*(short *)((uVar7 & 0xffffffff00000000 | 7) +
                  (ulong)*(uint *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 3)) - 1))
        == 0x73)) {
      local_28 = *param_2;
      uVar7 = WasmExportedFunction::instance((WasmExportedFunction *)&local_28);
      pIVar1 = *(Isolate **)(this + 0x88);
      if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(pIVar1 + 0x95a0);
        if (puVar3 == *(ulong **)(pIVar1 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(pIVar1);
        }
        *(ulong **)(pIVar1 + 0x95a0) = puVar3 + 1;
        *puVar3 = uVar7;
      }
      else {
        CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar7);
      }
      uVar4 = WasmInstanceObject::GetOrCreateDebugInfo();
      local_28 = *puVar2;
      lVar5 = SharedFunctionInfo::wasm_exported_function_data((SharedFunctionInfo *)&local_28);
      pDVar6 = (Debug *)WasmDebugInfo::PrepareStepIn(uVar4,*(int *)(lVar5 + 0xf) >> 1);
      for (puVar8 = *(undefined8 **)(this + 0x18); puVar8 != (undefined8 *)0x0;
          puVar8 = (undefined8 *)puVar8[1]) {
        uVar4 = *puVar8;
        ClearBreakPoints(pDVar6,uVar4);
        pDVar6 = (Debug *)ApplyBreakPoints(this,uVar4);
      }
      this[0x4c] = (Debug)0xff;
      *(undefined8 *)(this + 0x50) = 0;
      this[0x58] = (Debug)0x0;
      *(undefined8 *)(this + 0x5c) = 0xffffffffffffffff;
      *(undefined4 *)(this + 100) = 0xffffffff;
      this[0x84] = (Debug)0x0;
      this[9] = (Debug)(*(int *)(*(long *)(this + 0x88) + 0xb80c) == 0x20);
    }
    uVar7 = IsBlackboxed(this,puVar2);
    if (((uVar7 & 1) == 0) && ((int)*param_2 != *(int *)(this + 0x50))) {
      *(undefined8 *)(this + 0x50) = 0;
      pIVar1 = *(Isolate **)(this + 0x88);
      uVar7 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
      if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar2 = *(ulong **)(pIVar1 + 0x95a0);
        if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
          puVar2 = (ulong *)HandleScope::Extend(pIVar1);
        }
        *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
        *puVar2 = uVar7;
      }
      else {
        puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar7);
      }
      FloodWithOneShot(this,puVar2,0);
    }
  }
  return;
}

