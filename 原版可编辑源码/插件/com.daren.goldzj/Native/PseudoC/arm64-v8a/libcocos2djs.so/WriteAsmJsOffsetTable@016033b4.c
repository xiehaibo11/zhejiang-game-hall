
/* v8::internal::wasm::WasmModuleBuilder::WriteAsmJsOffsetTable(v8::internal::wasm::ZoneBuffer*)
   const */

void __thiscall
v8::internal::wasm::WasmModuleBuilder::WriteAsmJsOffsetTable
          (WasmModuleBuilder *this,ZoneBuffer *param_1)

{
  ulong uVar1;
  Zone *this_00;
  undefined8 *puVar2;
  void *__dest;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  
  ZoneBuffer::write_size(param_1,*(long *)(this + 0x90) - *(long *)(this + 0x88) >> 3);
  puVar2 = *(undefined8 **)(this + 0x90);
  for (puVar5 = *(undefined8 **)(this + 0x88); puVar5 != puVar2; puVar5 = puVar5 + 1) {
    WasmFunctionBuilder::WriteAsmWasmOffsetTable((WasmFunctionBuilder *)*puVar5,param_1);
  }
  puVar4 = *(undefined1 **)(param_1 + 0x10);
  if (*(undefined1 **)(param_1 + 0x18) < puVar4 + 1) {
    this_00 = *(Zone **)param_1;
    __dest = *(void **)(this_00 + 0x10);
    uVar1 = ((long)*(undefined1 **)(param_1 + 0x18) - *(long *)(param_1 + 8)) * 2 | 1;
    uVar3 = uVar1 + 7 & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)__dest) < uVar3) {
      __dest = (void *)Zone::NewExpand(this_00,uVar3);
    }
    else {
      *(ulong *)(this_00 + 0x10) = uVar3 + (long)__dest;
    }
    memcpy(__dest,*(void **)(param_1 + 8),*(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8))
    ;
    *(ulong *)(param_1 + 0x18) = (long)__dest + uVar1;
    puVar4 = (undefined1 *)((long)__dest + (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)));
    *(void **)(param_1 + 8) = __dest;
    *(undefined1 **)(param_1 + 0x10) = puVar4;
  }
  *(undefined1 **)(param_1 + 0x10) = puVar4 + 1;
  *puVar4 = 0;
  return;
}

