
/* v8::internal::wasm::WasmFunctionBuilder::WriteBody(v8::internal::wasm::ZoneBuffer*) const */

void __thiscall
v8::internal::wasm::WasmFunctionBuilder::WriteBody(WasmFunctionBuilder *this,ZoneBuffer *param_1)

{
  long *plVar1;
  byte *pbVar2;
  Zone *this_00;
  long *plVar3;
  uint uVar4;
  long lVar5;
  void *__dest;
  ulong uVar6;
  uchar *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  lVar5 = LocalDeclEncoder::Size((LocalDeclEncoder *)(this + 8));
  ZoneBuffer::write_size(param_1,(*(long *)(this + 0x50) + lVar5) - *(long *)(this + 0x48));
  puVar7 = *(uchar **)(param_1 + 0x10);
  if (*(uchar **)(param_1 + 0x18) < puVar7 + lVar5) {
    this_00 = *(Zone **)param_1;
    __dest = *(void **)(this_00 + 0x10);
    lVar8 = lVar5 + ((long)*(uchar **)(param_1 + 0x18) - *(long *)(param_1 + 8)) * 2;
    uVar6 = lVar8 + 7U & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)__dest) < uVar6) {
      __dest = (void *)Zone::NewExpand(this_00,uVar6);
    }
    else {
      *(ulong *)(this_00 + 0x10) = uVar6 + (long)__dest;
    }
    memcpy(__dest,*(void **)(param_1 + 8),*(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8))
    ;
    *(long *)(param_1 + 0x18) = (long)__dest + lVar8;
    puVar7 = (uchar *)((long)__dest + (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)));
    *(void **)(param_1 + 8) = __dest;
    *(uchar **)(param_1 + 0x10) = puVar7;
  }
  LocalDeclEncoder::Emit((LocalDeclEncoder *)(this + 8),puVar7);
  lVar8 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar8 + lVar5;
  uVar6 = *(long *)(this + 0x50) - (long)*(uchar **)(this + 0x48);
  if (uVar6 != 0) {
    lVar10 = *(long *)(param_1 + 8);
    ZoneBuffer::write(param_1,*(uchar **)(this + 0x48),uVar6);
    plVar9 = *(long **)(this + 0xf0);
    plVar3 = *(long **)(this + 0xf8);
    if (plVar9 != plVar3) {
      do {
        pbVar2 = (byte *)(*(long *)(param_1 + 8) + ((lVar8 + lVar5) - lVar10) + *plVar9);
        plVar1 = plVar9 + 1;
        plVar9 = plVar9 + 2;
        uVar4 = (int)*plVar1 +
                (int)((ulong)(*(long *)(*(long *)this + 0x30) - *(long *)(*(long *)this + 0x28)) >>
                     3) * -0x55555555;
        *pbVar2 = (byte)uVar4 | 0x80;
        pbVar2[1] = (byte)(uVar4 >> 7) | 0x80;
        pbVar2[2] = (byte)(uVar4 >> 0xe) | 0x80;
        pbVar2[3] = (byte)(uVar4 >> 0x15) | 0x80;
        pbVar2[4] = (byte)(uVar4 >> 0x1c);
      } while (plVar9 != plVar3);
    }
  }
  return;
}

