
/* v8::internal::wasm::WasmFunctionBuilder::EmitWithU8U8(v8::internal::wasm::WasmOpcode, unsigned
   char, unsigned char) */

void __thiscall
v8::internal::wasm::WasmFunctionBuilder::EmitWithU8U8
          (WasmFunctionBuilder *this,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  ulong uVar1;
  Zone *pZVar2;
  void *pvVar3;
  ulong uVar4;
  undefined1 *puVar5;
  
  puVar5 = *(undefined1 **)(this + 0x50);
  if (*(undefined1 **)(this + 0x58) < puVar5 + 1) {
    pZVar2 = *(Zone **)(this + 0x40);
    pvVar3 = *(void **)(pZVar2 + 0x10);
    uVar1 = ((long)*(undefined1 **)(this + 0x58) - *(long *)(this + 0x48)) * 2 | 1;
    uVar4 = uVar1 + 7 & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)pvVar3) < uVar4) {
      pvVar3 = (void *)Zone::NewExpand(pZVar2,uVar4);
    }
    else {
      *(ulong *)(pZVar2 + 0x10) = uVar4 + (long)pvVar3;
    }
    memcpy(pvVar3,*(void **)(this + 0x48),*(long *)(this + 0x50) - (long)*(void **)(this + 0x48));
    *(ulong *)(this + 0x58) = (long)pvVar3 + uVar1;
    puVar5 = (undefined1 *)((long)pvVar3 + (*(long *)(this + 0x50) - *(long *)(this + 0x48)));
    *(void **)(this + 0x48) = pvVar3;
    *(undefined1 **)(this + 0x50) = puVar5;
  }
  *(undefined1 **)(this + 0x50) = puVar5 + 1;
  *puVar5 = param_2;
  puVar5 = *(undefined1 **)(this + 0x50);
  if (*(undefined1 **)(this + 0x58) < puVar5 + 1) {
    pZVar2 = *(Zone **)(this + 0x40);
    pvVar3 = *(void **)(pZVar2 + 0x10);
    uVar1 = ((long)*(undefined1 **)(this + 0x58) - *(long *)(this + 0x48)) * 2 | 1;
    uVar4 = uVar1 + 7 & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)pvVar3) < uVar4) {
      pvVar3 = (void *)Zone::NewExpand(pZVar2,uVar4);
    }
    else {
      *(ulong *)(pZVar2 + 0x10) = uVar4 + (long)pvVar3;
    }
    memcpy(pvVar3,*(void **)(this + 0x48),*(long *)(this + 0x50) - (long)*(void **)(this + 0x48));
    *(ulong *)(this + 0x58) = (long)pvVar3 + uVar1;
    puVar5 = (undefined1 *)((long)pvVar3 + (*(long *)(this + 0x50) - *(long *)(this + 0x48)));
    *(void **)(this + 0x48) = pvVar3;
    *(undefined1 **)(this + 0x50) = puVar5;
  }
  *(undefined1 **)(this + 0x50) = puVar5 + 1;
  *puVar5 = param_3;
  puVar5 = *(undefined1 **)(this + 0x50);
  if (*(undefined1 **)(this + 0x58) < puVar5 + 1) {
    pZVar2 = *(Zone **)(this + 0x40);
    pvVar3 = *(void **)(pZVar2 + 0x10);
    uVar1 = ((long)*(undefined1 **)(this + 0x58) - *(long *)(this + 0x48)) * 2 | 1;
    uVar4 = uVar1 + 7 & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)pvVar3) < uVar4) {
      pvVar3 = (void *)Zone::NewExpand(pZVar2,uVar4);
    }
    else {
      *(ulong *)(pZVar2 + 0x10) = uVar4 + (long)pvVar3;
    }
    memcpy(pvVar3,*(void **)(this + 0x48),*(long *)(this + 0x50) - (long)*(void **)(this + 0x48));
    *(ulong *)(this + 0x58) = (long)pvVar3 + uVar1;
    puVar5 = (undefined1 *)((long)pvVar3 + (*(long *)(this + 0x50) - *(long *)(this + 0x48)));
    *(void **)(this + 0x48) = pvVar3;
    *(undefined1 **)(this + 0x50) = puVar5;
  }
  *(undefined1 **)(this + 0x50) = puVar5 + 1;
  *puVar5 = param_4;
  return;
}

