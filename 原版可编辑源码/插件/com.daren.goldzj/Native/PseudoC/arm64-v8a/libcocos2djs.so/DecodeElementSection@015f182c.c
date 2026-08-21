
/* v8::internal::wasm::ModuleDecoderImpl::DecodeElementSection() */

void __thiscall v8::internal::wasm::ModuleDecoderImpl::DecodeElementSection(ModuleDecoderImpl *this)

{
  uint *puVar1;
  ModuleDecoderImpl MVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  uint uVar14;
  uint local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  uint local_6c;
  bool local_68 [4];
  bool local_64 [4];
  
  uVar14 = FLAG_wasm_max_table_size;
  pcVar12 = *(char **)(this + 0x10);
  uVar11 = (ulong)FLAG_wasm_max_table_size;
  uVar4 = Decoder::consume_u32v((Decoder *)this,"element count");
  if (uVar14 < uVar4) {
    Decoder::errorf((uchar *)this,pcVar12,"%s of %u exceeds internal limit of %zu","element count",
                    (ulong)uVar4,uVar11);
    uVar4 = uVar14;
  }
  if ((uVar4 != 0) &&
     (*(long *)(*(long *)(this + 0x50) + 0xc0) == *(long *)(*(long *)(this + 0x50) + 0xb8))) {
    Decoder::error((Decoder *)this,*(uchar **)(this + 0x10),"The element section requires a table");
  }
  uVar14 = 0;
  MVar2 = this[0x30];
  if (((byte)MVar2 & 1) == 0) goto LAB_015f18fc;
LAB_015f19f8:
  uVar11 = *(ulong *)(this + 0x38);
  do {
    if (uVar4 <= uVar14) {
      return;
    }
    if (uVar11 != 0) {
      return;
    }
    pcVar12 = *(char **)(this + 0x10);
    local_80 = 0;
    consume_element_segment_header(this,local_64,local_68,&local_6c,(WasmInitExpr *)&local_80);
    if (((byte)this[0x30] & 1) == 0) {
      if ((byte)this[0x30] >> 1 != 0) {
        return;
      }
    }
    else if (*(long *)(this + 0x38) != 0) {
      return;
    }
    if (local_64[0] != false) {
      lVar9 = *(long *)(*(long *)(this + 0x50) + 0xb8);
      if ((ulong)(*(long *)(*(long *)(this + 0x50) + 0xc0) - lVar9 >> 4) <= (ulong)local_6c) {
        pcVar8 = "out of bounds table index %u";
LAB_015f1b60:
        Decoder::errorf((uchar *)this,pcVar12,pcVar8);
        return;
      }
      if ((*(byte *)(lVar9 + (ulong)local_6c * 0x10) & 0xfe) != 6) {
        pcVar8 = "Invalid element segment. Table %u is not of type FuncRef";
        goto LAB_015f1b60;
      }
    }
    uVar5 = max_table_init_entries();
    pcVar12 = *(char **)(this + 0x10);
    uVar6 = Decoder::consume_u32v((Decoder *)this,"number of elements");
    if (uVar5 < uVar6) {
      Decoder::errorf((uchar *)this,pcVar12,"%s of %u exceeds internal limit of %zu",
                      "number of elements",(ulong)uVar6,(ulong)uVar5);
      uVar6 = uVar5;
    }
    lVar9 = *(long *)(this + 0x50);
    puVar1 = *(uint **)(lVar9 + 0x120);
    bVar3 = puVar1 < *(uint **)(lVar9 + 0x128);
    if (local_64[0] == false) {
      if (bVar3) {
        *puVar1 = 0;
        puVar1[2] = 0;
        puVar1[8] = 0;
        puVar1[9] = 0;
        puVar1[10] = 0;
        puVar1[0xb] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        *(undefined1 *)(puVar1 + 0xc) = 0;
        goto LAB_015f1a2c;
      }
      std::__ndk1::
      vector<v8::internal::wasm::WasmElemSegment,std::__ndk1::allocator<v8::internal::wasm::WasmElemSegment>>
      ::__emplace_back_slow_path<>
                ((vector<v8::internal::wasm::WasmElemSegment,std::__ndk1::allocator<v8::internal::wasm::WasmElemSegment>>
                  *)(lVar9 + 0x118));
    }
    else if (bVar3) {
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *puVar1 = local_6c;
      *(undefined8 *)(puVar1 + 4) = uStack_78;
      *(ulong *)(puVar1 + 2) = CONCAT44(uStack_7c,local_80);
      *(undefined1 *)(puVar1 + 0xc) = 1;
LAB_015f1a2c:
      *(long *)(lVar9 + 0x120) = *(long *)(lVar9 + 0x120) + 0x38;
    }
    else {
      std::__ndk1::
      vector<v8::internal::wasm::WasmElemSegment,std::__ndk1::allocator<v8::internal::wasm::WasmElemSegment>>
      ::__emplace_back_slow_path<unsigned_int&,v8::internal::wasm::WasmInitExpr&>
                ((vector<v8::internal::wasm::WasmElemSegment,std::__ndk1::allocator<v8::internal::wasm::WasmElemSegment>>
                  *)(lVar9 + 0x118),&local_6c,(WasmInitExpr *)&local_80);
    }
    if (uVar6 != 0) {
      uVar5 = 0;
      lVar9 = *(long *)(*(long *)(this + 0x50) + 0x120);
      if (local_68[0] != false) goto LAB_015f1a98;
      do {
        lVar13 = *(long *)(this + 0x50);
        pcVar12 = *(char **)(this + 0x10);
        uVar7 = Decoder::consume_u32v((Decoder *)this,"element function index");
        uVar11 = uVar7 & 0xffffffff;
        uVar10 = *(long *)(lVar13 + 0x90) - *(long *)(lVar13 + 0x88);
        if ((ulong)((long)uVar10 >> 5) <= (uVar7 & 0xffffffff)) {
          pcVar8 = "y";
          if (uVar10 != 0x20) {
            pcVar8 = "ies";
          }
          Decoder::errorf((uchar *)this,pcVar12,"%s %u out of bounds (%d entr%s)",
                          "element function index",uVar11,uVar10 >> 5,pcVar8);
          uVar11 = 0;
        }
        while( true ) {
          local_84 = (uint)uVar11;
          if (((byte)this[0x30] & 1) == 0) {
            if ((byte)this[0x30] >> 1 != 0) goto LAB_015f18e8;
          }
          else if (*(long *)(this + 0x38) != 0) goto LAB_015f18e8;
          if (*(uint **)(lVar9 + -0x18) == *(uint **)(lVar9 + -0x10)) {
            std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
            __push_back_slow_path<unsigned_int_const&>
                      ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(lVar9 + -0x20),
                       &local_84);
          }
          else {
            **(uint **)(lVar9 + -0x18) = local_84;
            *(long *)(lVar9 + -0x18) = *(long *)(lVar9 + -0x18) + 4;
          }
          uVar5 = uVar5 + 1;
          if (uVar6 <= uVar5) goto LAB_015f18e8;
          if (local_68[0] == false) break;
LAB_015f1a98:
          uVar11 = consume_element_expr(this);
          uVar11 = uVar11 & 0xffffffff;
        }
      } while( true );
    }
LAB_015f18e8:
    uVar14 = uVar14 + 1;
    MVar2 = this[0x30];
    if (((byte)MVar2 & 1) != 0) goto LAB_015f19f8;
LAB_015f18fc:
    uVar11 = (ulong)((byte)MVar2 >> 1);
  } while( true );
}

