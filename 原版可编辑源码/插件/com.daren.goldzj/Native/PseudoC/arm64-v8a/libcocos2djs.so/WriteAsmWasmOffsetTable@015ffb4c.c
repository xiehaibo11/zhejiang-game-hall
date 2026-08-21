
/* v8::internal::wasm::WasmFunctionBuilder::WriteAsmWasmOffsetTable(v8::internal::wasm::ZoneBuffer*)
   const */

void __thiscall
v8::internal::wasm::WasmFunctionBuilder::WriteAsmWasmOffsetTable
          (WasmFunctionBuilder *this,ZoneBuffer *param_1)

{
  Zone *this_00;
  uint uVar1;
  void *__dest;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  
  if ((*(int *)(this + 0x138) == 0) && (*(long *)(this + 0x120) == *(long *)(this + 0x118))) {
    puVar4 = *(undefined1 **)(param_1 + 0x10);
    if (*(undefined1 **)(param_1 + 0x18) < puVar4 + 5) {
      this_00 = *(Zone **)param_1;
      __dest = *(void **)(this_00 + 0x10);
      lVar3 = ((long)*(undefined1 **)(param_1 + 0x18) - *(long *)(param_1 + 8)) * 2;
      uVar2 = lVar3 + 0xcU & 0xfffffffffffffff8;
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)__dest) < uVar2) {
        __dest = (void *)Zone::NewExpand(this_00,uVar2);
      }
      else {
        *(ulong *)(this_00 + 0x10) = uVar2 + (long)__dest;
      }
      memcpy(__dest,*(void **)(param_1 + 8),
             *(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8));
      *(long *)(param_1 + 0x18) = (long)__dest + lVar3 + 5;
      puVar4 = (undefined1 *)((long)__dest + (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)));
      *(void **)(param_1 + 8) = __dest;
      *(undefined1 **)(param_1 + 0x10) = puVar4;
    }
    *(undefined1 **)(param_1 + 0x10) = puVar4 + 1;
    *puVar4 = 0;
    return;
  }
  uVar2 = LocalDeclEncoder::Size((LocalDeclEncoder *)(this + 8));
  lVar3 = 0;
  do {
    uVar2 = uVar2 >> 7;
    lVar3 = lVar3 + 1;
  } while (uVar2 != 0);
  uVar2 = (ulong)*(uint *)(this + 0x138);
  do {
    uVar2 = uVar2 >> 7;
    lVar3 = lVar3 + 1;
  } while (uVar2 != 0);
  ZoneBuffer::write_size(param_1,(*(long *)(this + 0x120) - *(long *)(this + 0x118)) + lVar3);
  uVar1 = LocalDeclEncoder::Size((LocalDeclEncoder *)(this + 8));
  ZoneBuffer::write_u32v(param_1,uVar1);
  ZoneBuffer::write_u32v(param_1,*(uint *)(this + 0x138));
  ZoneBuffer::write(param_1,*(uchar **)(this + 0x118),
                    *(long *)(this + 0x120) - (long)*(uchar **)(this + 0x118));
  return;
}

