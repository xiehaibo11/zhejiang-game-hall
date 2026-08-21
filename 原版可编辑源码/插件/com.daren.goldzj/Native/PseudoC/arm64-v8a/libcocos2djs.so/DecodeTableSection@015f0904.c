
/* v8::internal::wasm::ModuleDecoderImpl::DecodeTableSection() */

void __thiscall v8::internal::wasm::ModuleDecoderImpl::DecodeTableSection(ModuleDecoderImpl *this)

{
  ModuleDecoderImpl MVar1;
  undefined1 uVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  char *pcVar9;
  uint uVar10;
  byte bVar11;
  
  pcVar9 = *(char **)(this + 0x10);
  uVar5 = 100000;
  if ((*(uint *)(this + 0x48) & 0x20) == 0) {
    uVar5 = 1;
  }
  uVar3 = Decoder::consume_u32v((Decoder *)this,"table count");
  uVar8 = uVar3 & 0xffffffff;
  if (uVar5 < (uVar3 & 0xffffffff)) {
    Decoder::errorf((uchar *)this,pcVar9,"%s of %u exceeds internal limit of %zu","table count",
                    uVar3 & 0xffffffff,uVar5);
    uVar8 = uVar5;
  }
  uVar10 = 0;
  MVar1 = this[0x30];
  if (((byte)MVar1 & 1) == 0) goto LAB_015f0a08;
  do {
    uVar5 = *(ulong *)(this + 0x38);
    if ((uint)uVar8 <= uVar10) {
      return;
    }
    while( true ) {
      if (uVar5 != 0) {
        return;
      }
      lVar6 = *(long *)(this + 0x50);
      if (((byte)this[0x48] >> 5 & 1) == 0) {
        puVar7 = *(undefined8 **)(lVar6 + 0xc0);
        if (puVar7 != *(undefined8 **)(lVar6 + 0xb8)) {
          Decoder::error((Decoder *)this,"At most one table is supported");
          return;
        }
      }
      else {
        puVar7 = *(undefined8 **)(lVar6 + 0xc0);
      }
      if (puVar7 < *(undefined8 **)(lVar6 + 200)) {
        *puVar7 = 0;
        puVar7[1] = 0;
        *(long *)(lVar6 + 0xc0) = *(long *)(lVar6 + 0xc0) + 0x10;
      }
      else {
        std::__ndk1::
        vector<v8::internal::wasm::WasmTable,std::__ndk1::allocator<v8::internal::wasm::WasmTable>>
        ::__emplace_back_slow_path<>
                  ((vector<v8::internal::wasm::WasmTable,std::__ndk1::allocator<v8::internal::wasm::WasmTable>>
                    *)(lVar6 + 0xb8));
      }
      lVar6 = *(long *)(*(long *)(this + 0x50) + 0xc0);
      uVar2 = consume_reference_type(this);
      *(undefined1 *)(lVar6 + -0x10) = uVar2;
      pbVar4 = *(byte **)(this + 0x10);
      if (*(int *)(this + 0x18) == (int)pbVar4) {
        Decoder::errorf((uchar *)this,(char *)pbVar4,"expected %u bytes, fell off end",1);
        bVar11 = 0;
        *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 0x18);
      }
      else {
        bVar11 = *pbVar4;
        *(byte **)(this + 0x10) = pbVar4 + 1;
        if (1 < bVar11) {
          Decoder::errorf((uchar *)this,(char *)pbVar4,"invalid %s limits flags","table elements");
        }
      }
      consume_resizable_limits
                (this,"table elements","elements",FLAG_wasm_max_table_size,(uint *)(lVar6 + -0xc),
                 (bool *)(lVar6 + -4),FLAG_wasm_max_table_size,(uint *)(lVar6 + -8),bVar11);
      uVar10 = uVar10 + 1;
      MVar1 = this[0x30];
      if (((byte)MVar1 & 1) != 0) break;
LAB_015f0a08:
      uVar5 = (ulong)((byte)MVar1 >> 1);
      if ((uint)uVar8 <= uVar10) {
        return;
      }
    }
  } while( true );
}

