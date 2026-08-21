
/* v8::internal::wasm::ModuleDecoderImpl::DecodeDataSection() */

void __thiscall v8::internal::wasm::ModuleDecoderImpl::DecodeDataSection(ModuleDecoderImpl *this)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ModuleDecoderImpl MVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  void *__dest;
  char *pcVar9;
  void *__src;
  size_t __n;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  uint local_68;
  bool local_64 [4];
  
  pcVar9 = *(char **)(this + 0x10);
  uVar7 = Decoder::consume_u32v((Decoder *)this,"data segments count");
  if (100000 < uVar7) {
    Decoder::errorf((uchar *)this,pcVar9,"%s of %u exceeds internal limit of %zu",
                    "data segments count",(ulong)uVar7,100000);
    uVar7 = 100000;
  }
  lVar12 = *(long *)(this + 0x50);
  if ((((byte)this[0x6d] >> 4 & 1) != 0) && (*(uint *)(lVar12 + 0x4c) != uVar7)) {
    Decoder::errorf((uchar *)this,*(char **)(this + 0x10),
                    "data segments count %u mismatch (%u expected)",(ulong)uVar7);
    return;
  }
  __src = *(void **)(lVar12 + 0xa0);
  if ((ulong)(*(long *)(lVar12 + 0xb0) - (long)__src >> 5) < (ulong)uVar7) {
    uVar11 = (ulong)uVar7 * 0x20;
    __n = *(long *)(lVar12 + 0xa8) - (long)__src;
    __dest = operator_new(uVar11);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
      __src = *(void **)(lVar12 + 0xa0);
    }
    *(void **)(lVar12 + 0xa0) = __dest;
    *(size_t *)(lVar12 + 0xa8) = (long)__dest + __n;
    *(void **)(lVar12 + 0xb0) = (void *)((long)__dest + uVar11);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  uVar10 = 0;
  MVar5 = this[0x30];
  if (((byte)MVar5 & 1) != 0) goto LAB_015f1d40;
LAB_015f1c9c:
  uVar11 = (ulong)((byte)MVar5 >> 1);
  do {
    if (uVar7 <= uVar10) {
      return;
    }
    if (uVar11 != 0) {
      return;
    }
    if (*(char *)(*(long *)(this + 0x50) + 0x12) == '\0') {
      Decoder::error((Decoder *)this,"cannot load data without memory");
      return;
    }
    pcVar9 = *(char **)(this + 0x10);
    local_80 = 0;
    consume_data_segment_header(this,local_64,&local_68,(WasmInitExpr *)&local_80);
    if (((byte)this[0x30] & 1) == 0) {
      if ((byte)this[0x30] >> 1 != 0) {
        return;
      }
    }
    else if (*(long *)(this + 0x38) != 0) {
      return;
    }
    if ((local_64[0] != false) && (local_68 != 0)) {
      Decoder::errorf((uchar *)this,pcVar9,"illegal memory index %u != 0");
      return;
    }
    uVar8 = Decoder::consume_u32v((Decoder *)this,"source size");
    lVar12 = *(long *)(this + 0x50);
    iVar2 = *(int *)(this + 0x10);
    iVar3 = *(int *)(this + 8);
    iVar4 = *(int *)(this + 0x20);
    puVar1 = *(undefined8 **)(lVar12 + 0xa8);
    bVar6 = *(undefined8 **)(lVar12 + 0xb0) <= puVar1;
    if (local_64[0] == false) {
      if (!bVar6) {
        *(undefined4 *)puVar1 = 0;
        puVar1[2] = 0;
        *(undefined1 *)(puVar1 + 3) = 0;
        goto LAB_015f1d6c;
      }
      std::__ndk1::
      vector<v8::internal::wasm::WasmDataSegment,std::__ndk1::allocator<v8::internal::wasm::WasmDataSegment>>
      ::__emplace_back_slow_path<>
                ((vector<v8::internal::wasm::WasmDataSegment,std::__ndk1::allocator<v8::internal::wasm::WasmDataSegment>>
                  *)(lVar12 + 0xa0));
    }
    else if (bVar6) {
      std::__ndk1::
      vector<v8::internal::wasm::WasmDataSegment,std::__ndk1::allocator<v8::internal::wasm::WasmDataSegment>>
      ::__emplace_back_slow_path<v8::internal::wasm::WasmInitExpr&>
                ((vector<v8::internal::wasm::WasmDataSegment,std::__ndk1::allocator<v8::internal::wasm::WasmDataSegment>>
                  *)(lVar12 + 0xa0),(WasmInitExpr *)&local_80);
    }
    else {
      puVar1[2] = 0;
      *(undefined1 *)(puVar1 + 3) = 1;
      puVar1[1] = uStack_78;
      *puVar1 = CONCAT44(uStack_7c,local_80);
LAB_015f1d6c:
      *(long *)(lVar12 + 0xa8) = *(long *)(lVar12 + 0xa8) + 0x20;
    }
    pcVar9 = *(char **)(this + 0x10);
    lVar12 = *(long *)(*(long *)(this + 0x50) + 0xa8);
    if ((uint)(*(int *)(this + 0x18) - (int)pcVar9) < uVar8) {
      Decoder::errorf((uchar *)this,pcVar9,"expected %u bytes, fell off end",(ulong)uVar8);
      pcVar9 = *(char **)(this + 0x18);
    }
    else {
      pcVar9 = pcVar9 + uVar8;
    }
    *(char **)(this + 0x10) = pcVar9;
    if (((byte)this[0x30] & 1) == 0) {
      if ((byte)this[0x30] >> 1 != 0) {
        return;
      }
    }
    else if (*(long *)(this + 0x38) != 0) {
      return;
    }
    *(ulong *)(lVar12 + -0x10) = CONCAT44(uVar8,iVar4 + (iVar2 - iVar3));
    uVar10 = uVar10 + 1;
    MVar5 = this[0x30];
    if (((byte)MVar5 & 1) == 0) goto LAB_015f1c9c;
LAB_015f1d40:
    uVar11 = *(ulong *)(this + 0x38);
  } while( true );
}

