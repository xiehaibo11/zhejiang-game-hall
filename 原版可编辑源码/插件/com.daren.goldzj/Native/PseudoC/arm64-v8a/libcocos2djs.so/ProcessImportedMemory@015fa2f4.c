
/* v8::internal::wasm::InstanceBuilder::ProcessImportedMemory(v8::internal::Handle<v8::internal::WasmInstanceObject>,
   int, v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object>) */

undefined8 __thiscall
v8::internal::wasm::InstanceBuilder::ProcessImportedMemory
          (InstanceBuilder *this,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
          ulong *param_6)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *param_6;
  param_3 = param_3 & 0xffffffff;
  if (((uVar6 & 1) == 0) ||
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x435)) {
    ReportLinkError(this,"memory import must be a WebAssembly.Memory object",param_3);
    return 0;
  }
  if (*(int *)(*param_2 + 0x7b) != (int)uVar6) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","instance->memory_object() == *memory_object");
  }
  pIVar2 = *(Isolate **)this;
  uVar6 = **(ulong **)(this + 0x38) & 0xffffffff00000000 |
          (ulong)*(uint *)(**(ulong **)(this + 0x38) + 0xb);
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar6;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar6);
    uVar6 = *puVar3;
  }
  lVar7 = *(long *)(this + 0x10);
  if ((uint)((ulong)*(undefined8 *)(uVar6 + 0xb) >> 0x10) < *(uint *)(lVar7 + 8)) {
    ErrorThrower::LinkError
              (*(char **)(this + 0x18),"memory import %d is smaller than initial %u, got %u",param_3
              );
    return 0;
  }
  if (*(char *)(lVar7 + 0x11) != '\0') {
    uVar1 = *(int *)(**(long **)(this + 0x38) + 0xf) >> 1;
    if (*(int *)(**(long **)(this + 0x38) + 0xf) < 0) {
      pcVar4 = *(char **)(this + 0x18);
      pcVar5 = "memory import %d has no maximum limit, expected at most %u";
      goto LAB_015fa478;
    }
    if (*(uint *)(lVar7 + 0xc) < uVar1) {
      ErrorThrower::LinkError
                (*(char **)(this + 0x18),
                 "memory import %d has a larger maximum size %u than the module\'s declared maximum %u"
                 ,param_3);
      return 0;
    }
  }
  param_3 = (ulong)*(byte *)(lVar7 + 0x10);
  if ((uint)*(byte *)(lVar7 + 0x10) == (*(uint *)(uVar6 + 0x1b) >> 4 & 1)) {
    return 1;
  }
  pcVar4 = *(char **)(this + 0x18);
  pcVar5 = "mismatch in shared state of memory, declared = %d, imported = %d";
  uVar1 = *(uint *)(uVar6 + 0x1b) >> 4 & 1;
LAB_015fa478:
  ErrorThrower::LinkError(pcVar4,pcVar5,param_3,(ulong)uVar1);
  return 0;
}

