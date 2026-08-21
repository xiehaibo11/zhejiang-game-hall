
/* v8::internal::interpreter::BytecodeGenerator::VisitCallRuntime(v8::internal::CallRuntime*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitCallRuntime
          (BytecodeGenerator *this,CallRuntime *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  ulong local_18;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 == (undefined4 *)0x0) {
    local_18 = (ulong)*(uint *)(this + 0x118);
    if (0 < *(int *)(param_1 + 0x24)) {
      lVar2 = 0;
      do {
        VisitAndPushIntoRegisterList
                  (this,*(Expression **)(*(long *)(param_1 + 0x18) + lVar2 * 8),
                   (RegisterList *)&local_18);
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)(param_1 + 0x24));
    }
    BytecodeArrayBuilder::CallJSRuntime
              ((BytecodeArrayBuilder *)(this + 0x18),*(undefined4 *)(param_1 + 8),local_18);
  }
  else {
    local_18 = (ulong)*(uint *)(this + 0x118);
    if (0 < *(int *)(param_1 + 0x24)) {
      lVar2 = 0;
      do {
        VisitAndPushIntoRegisterList
                  (this,*(Expression **)(*(long *)(param_1 + 0x18) + lVar2 * 8),
                   (RegisterList *)&local_18);
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)(param_1 + 0x24));
      puVar1 = *(undefined4 **)(param_1 + 0x10);
    }
    BytecodeArrayBuilder::CallRuntime((BytecodeArrayBuilder *)(this + 0x18),*puVar1,local_18);
  }
  return;
}

