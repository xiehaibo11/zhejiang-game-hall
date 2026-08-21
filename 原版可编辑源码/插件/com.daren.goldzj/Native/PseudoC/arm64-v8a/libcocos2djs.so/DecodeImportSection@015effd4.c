
/* v8::internal::wasm::ModuleDecoderImpl::DecodeImportSection() */

void __thiscall v8::internal::wasm::ModuleDecoderImpl::DecodeImportSection(ModuleDecoderImpl *this)

{
  undefined8 *puVar1;
  ModuleDecoderImpl MVar2;
  long lVar3;
  undefined1 uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  uint *puVar11;
  bool *pbVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  char *pcVar21;
  char *pcVar22;
  Signature *local_88;
  ulong uStack_80;
  long local_78;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pcVar21 = *(char **)(this + 0x10);
  uVar7 = Decoder::consume_u32v((Decoder *)this,"imports count");
  uVar20 = (ulong)uVar7;
  if (100000 < uVar7) {
    Decoder::errorf((uchar *)this,pcVar21,"%s of %u exceeds internal limit of %zu","imports count",
                    uVar20,100000);
    uVar20 = 100000;
  }
  std::__ndk1::
  vector<v8::internal::wasm::WasmImport,std::__ndk1::allocator<v8::internal::wasm::WasmImport>>::
  reserve((vector<v8::internal::wasm::WasmImport,std::__ndk1::allocator<v8::internal::wasm::WasmImport>>
           *)(*(long *)(this + 0x50) + 0xd0),uVar20);
  uVar7 = 0;
  MVar2 = this[0x30];
joined_r0x015f0098:
  if (((byte)MVar2 & 1) == 0) goto LAB_015f05f8;
LAB_015f009c:
  uVar14 = *(ulong *)(this + 0x38);
  do {
    if (((uint)uVar20 <= uVar7) || (pcVar21 = "element count", uVar14 != 0)) {
      if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    lVar15 = *(long *)(this + 0x50);
    local_78._1_7_ = (uint7)((ulong)local_78 >> 8) & 0xffffff;
    local_88 = (Signature *)0x0;
    uStack_80 = 0;
    local_78 = (ulong)local_78._1_7_ << 8;
    puVar1 = *(undefined8 **)(lVar15 + 0xd8);
    if (puVar1 < *(undefined8 **)(lVar15 + 0xe0)) {
      puVar1[2] = local_78;
      puVar1[1] = 0;
      *puVar1 = 0;
      *(long *)(lVar15 + 0xd8) = *(long *)(lVar15 + 0xd8) + 0x18;
    }
    else {
      std::__ndk1::
      vector<v8::internal::wasm::WasmImport,std::__ndk1::allocator<v8::internal::wasm::WasmImport>>
      ::__push_back_slow_path<v8::internal::wasm::WasmImport>
                ((vector<v8::internal::wasm::WasmImport,std::__ndk1::allocator<v8::internal::wasm::WasmImport>>
                  *)(lVar15 + 0xd0),(WasmImport *)&local_88);
    }
    pcVar22 = *(char **)(this + 0x10);
    lVar15 = *(long *)(*(long *)(this + 0x50) + 0xd8);
    uVar9 = FUN_015ede44(this,1,"module name");
    *(undefined8 *)(lVar15 + -0x18) = uVar9;
    uVar9 = FUN_015ede44(this,1,"field name");
    *(undefined8 *)(lVar15 + -0x10) = uVar9;
    pbVar10 = *(byte **)(this + 0x10);
    if (*(int *)(this + 0x18) == (int)pbVar10) {
      Decoder::errorf((uchar *)this,(char *)pbVar10,"expected %u bytes, fell off end",1);
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 0x18);
      *(undefined1 *)(lVar15 + -8) = 0;
switchD_015f0158_caseD_0:
      *(int *)(lVar15 + -4) =
           (int)((ulong)(*(long *)(*(long *)(this + 0x50) + 0x90) -
                        *(long *)(*(long *)(this + 0x50) + 0x88)) >> 5);
      *(int *)(*(long *)(this + 0x50) + 0x3c) = *(int *)(*(long *)(this + 0x50) + 0x3c) + 1;
      lVar16 = *(long *)(this + 0x50);
      local_88 = (Signature *)0x0;
      local_78 = 0;
      uStack_70 = 1;
      uStack_80 = (ulong)*(uint *)(lVar15 + -4);
      puVar1 = *(undefined8 **)(lVar16 + 0x90);
      if (puVar1 < *(undefined8 **)(lVar16 + 0x98)) {
        puVar1[1] = uStack_80;
        *puVar1 = 0;
        puVar1[3] = CONCAT26(uStack_6a,CONCAT24(uStack_6c,CONCAT22(uStack_6e,1)));
        puVar1[2] = 0;
        *(long *)(lVar16 + 0x90) = *(long *)(lVar16 + 0x90) + 0x20;
      }
      else {
        std::__ndk1::
        vector<v8::internal::wasm::WasmFunction,std::__ndk1::allocator<v8::internal::wasm::WasmFunction>>
        ::__push_back_slow_path<v8::internal::wasm::WasmFunction>
                  ((vector<v8::internal::wasm::WasmFunction,std::__ndk1::allocator<v8::internal::wasm::WasmFunction>>
                    *)(lVar16 + 0x88),(WasmFunction *)&local_88);
      }
      lVar16 = *(long *)(this + 0x50);
      pcVar21 = *(char **)(this + 0x10);
      lVar15 = *(long *)(lVar16 + 0x90);
      uVar8 = Decoder::consume_u32v((Decoder *)this,"signature index");
      uVar14 = *(long *)(lVar16 + 0x60) - *(long *)(lVar16 + 0x58);
      if ((ulong)uVar8 < (ulong)((long)uVar14 >> 3)) {
        uVar9 = *(undefined8 *)(*(long *)(lVar16 + 0x58) + (ulong)uVar8 * 8);
        *(uint *)(lVar15 + -0x14) = uVar8;
        *(undefined8 *)(lVar15 + -0x20) = uVar9;
      }
      else {
        Decoder::errorf((uchar *)this,pcVar21,"signature index %u out of bounds (%d signatures)",
                        (ulong)uVar8,uVar14 >> 3);
        *(undefined8 *)(lVar15 + -0x20) = 0;
        *(undefined4 *)(lVar15 + -0x14) = 0;
      }
      goto LAB_015f05ec;
    }
    bVar5 = *pbVar10;
    uVar14 = (ulong)bVar5;
    *(byte **)(this + 0x10) = pbVar10 + 1;
    *(byte *)(lVar15 + -8) = bVar5;
    switch(uVar14) {
    case 0:
      goto switchD_015f0158_caseD_0;
    case 1:
      lVar16 = *(long *)(this + 0x50);
      if (((byte)this[0x48] >> 5 & 1) == 0) {
        lVar17 = *(long *)(lVar16 + 0xc0);
        lVar19 = lVar17;
        if (lVar17 != *(long *)(lVar16 + 0xb8)) {
          pcVar21 = "At most one table is supported";
          goto LAB_015f0274;
        }
      }
      else {
        lVar17 = *(long *)(lVar16 + 0xb8);
        lVar19 = *(long *)(lVar16 + 0xc0);
      }
      *(int *)(lVar15 + -4) = (int)((ulong)(lVar19 - lVar17) >> 4);
      *(int *)(*(long *)(this + 0x50) + 0x40) = *(int *)(*(long *)(this + 0x50) + 0x40) + 1;
      lVar15 = *(long *)(this + 0x50);
      puVar1 = *(undefined8 **)(lVar15 + 0xc0);
      if (puVar1 < *(undefined8 **)(lVar15 + 200)) {
        *puVar1 = 0;
        puVar1[1] = 0;
        *(long *)(lVar15 + 0xc0) = *(long *)(lVar15 + 0xc0) + 0x10;
      }
      else {
        std::__ndk1::
        vector<v8::internal::wasm::WasmTable,std::__ndk1::allocator<v8::internal::wasm::WasmTable>>
        ::__emplace_back_slow_path<>
                  ((vector<v8::internal::wasm::WasmTable,std::__ndk1::allocator<v8::internal::wasm::WasmTable>>
                    *)(lVar15 + 0xb8));
      }
      lVar15 = *(long *)(*(long *)(this + 0x50) + 0xc0);
      *(undefined1 *)(lVar15 + -3) = 1;
      cVar6 = consume_reference_type(this);
      if ((cVar6 == '\a') || ((*(uint *)(this + 0x48) >> 5 & 1) != 0)) {
        *(char *)(lVar15 + -0x10) = cVar6;
        pbVar10 = *(byte **)(this + 0x10);
        if (*(int *)(this + 0x18) == (int)pbVar10) {
          Decoder::errorf((uchar *)this,(char *)pbVar10,"expected %u bytes, fell off end",1);
          bVar5 = 0;
          *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 0x18);
        }
        else {
          bVar5 = *pbVar10;
          *(byte **)(this + 0x10) = pbVar10 + 1;
          if (1 < bVar5) {
            Decoder::errorf((uchar *)this,(char *)pbVar10,"invalid %s limits flags","element count")
            ;
          }
        }
        puVar11 = (uint *)(lVar15 + -0xc);
        pbVar12 = (bool *)(lVar15 + -4);
        puVar13 = (uint *)(lVar15 + -8);
        pcVar22 = "elements";
        uVar8 = FLAG_wasm_max_table_size;
LAB_015f0588:
        consume_resizable_limits(this,pcVar21,pcVar22,uVar8,puVar11,pbVar12,uVar8,puVar13,bVar5);
      }
      else {
        Decoder::error((Decoder *)this,(uchar *)(*(long *)(this + 0x10) + -1),"invalid table type");
      }
      break;
    case 2:
      if (*(char *)(*(long *)(this + 0x50) + 0x12) == '\0') {
        *(undefined1 *)(*(long *)(this + 0x50) + 0x12) = 1;
        bVar5 = validate_memory_flags(this,(bool *)(*(long *)(this + 0x50) + 0x10));
        lVar15 = *(long *)(this + 0x50);
        puVar11 = (uint *)(lVar15 + 8);
        pbVar12 = (bool *)(lVar15 + 0x11);
        puVar13 = (uint *)(lVar15 + 0xc);
        pcVar21 = "memory";
        pcVar22 = "pages";
        uVar8 = 0x10000;
        goto LAB_015f0588;
      }
      pcVar21 = "At most one memory is supported";
LAB_015f0274:
      Decoder::error((Decoder *)this,pcVar21);
      break;
    case 3:
      *(int *)(lVar15 + -4) =
           (int)((ulong)(*(long *)(*(long *)(this + 0x50) + 0x20) -
                        *(long *)(*(long *)(this + 0x50) + 0x18)) >> 5);
      lVar15 = *(long *)(this + 0x50);
      local_88 = (Signature *)((ulong)local_88 & 0xffffffffffff0000);
      uStack_70 = 0;
      uStack_6e = 0;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      uStack_6c = 1;
      puVar1 = *(undefined8 **)(lVar15 + 0x20);
      if (puVar1 < *(undefined8 **)(lVar15 + 0x28)) {
        puVar1[1] = uStack_80;
        *puVar1 = local_88;
        puVar1[3] = CONCAT26(uStack_6a,0x100000000);
        puVar1[2] = local_78;
        *(long *)(lVar15 + 0x20) = *(long *)(lVar15 + 0x20) + 0x20;
      }
      else {
        std::__ndk1::
        vector<v8::internal::wasm::WasmGlobal,std::__ndk1::allocator<v8::internal::wasm::WasmGlobal>>
        ::__push_back_slow_path<v8::internal::wasm::WasmGlobal>
                  ((vector<v8::internal::wasm::WasmGlobal,std::__ndk1::allocator<v8::internal::wasm::WasmGlobal>>
                    *)(lVar15 + 0x18),(WasmGlobal *)&local_88);
      }
      lVar15 = *(long *)(*(long *)(this + 0x50) + 0x20);
      uVar4 = consume_value_type(this);
      *(undefined1 *)(lVar15 + -0x20) = uVar4;
      pbVar10 = *(byte **)(this + 0x10);
      if (*(int *)(this + 0x18) == (int)pbVar10) {
        Decoder::errorf((uchar *)this,(char *)pbVar10,"expected %u bytes, fell off end",1);
        *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 0x18);
        *(undefined1 *)(lVar15 + -0x1f) = 0;
        MVar2 = this[0x30];
        goto joined_r0x015f0654;
      }
      bVar5 = *pbVar10;
      *(byte **)(this + 0x10) = pbVar10 + 1;
      if (bVar5 < 2) {
        *(bool *)(lVar15 + -0x1f) = bVar5 != 0;
        if (bVar5 == 0) break;
      }
      else {
        Decoder::error((Decoder *)this,pbVar10,"invalid mutability");
        *(undefined1 *)(lVar15 + -0x1f) = 1;
      }
      uVar7 = uVar7 + 1;
      *(int *)(*(long *)(this + 0x50) + 0x38) = *(int *)(*(long *)(this + 0x50) + 0x38) + 1;
      MVar2 = this[0x30];
      goto joined_r0x015f0098;
    case 4:
      if (((byte)this[0x48] & 1) == 0) {
        uVar14 = 4;
        goto switchD_015f0158_default;
      }
      *(int *)(lVar15 + -4) =
           (int)((ulong)(*(long *)(*(long *)(this + 0x50) + 0x108) -
                        *(long *)(*(long *)(this + 0x50) + 0x100)) >> 3);
      local_88 = (Signature *)0x0;
      pcVar21 = *(char **)(this + 0x10);
      uVar8 = Decoder::consume_u32v((Decoder *)this,"exception attribute");
      if (uVar8 != 0) {
        Decoder::errorf((uchar *)this,pcVar21,"exception attribute %u not supported",(ulong)uVar8);
      }
      lVar16 = *(long *)(this + 0x50);
      pcVar21 = *(char **)(this + 0x10);
      uVar14 = Decoder::consume_u32v((Decoder *)this,"signature index");
      lVar15 = *(long *)(lVar16 + 0x58);
      uVar14 = uVar14 & 0xffffffff;
      uVar18 = *(long *)(lVar16 + 0x60) - lVar15;
      if (uVar14 < (ulong)((long)uVar18 >> 3)) {
        local_88 = *(Signature **)(lVar15 + uVar14 * 8);
        if ((local_88 != (Signature *)0x0) && (*(long *)local_88 != 0)) {
          Decoder::errorf((uchar *)this,pcVar21,"exception signature %u has non-void return");
          goto LAB_015f05a8;
        }
      }
      else {
        Decoder::errorf((uchar *)this,pcVar21,"signature index %u out of bounds (%d signatures)",
                        uVar14,uVar18 >> 3);
LAB_015f05a8:
        local_88 = (Signature *)0x0;
      }
      lVar15 = *(long *)(this + 0x50);
      if (*(long **)(lVar15 + 0x108) < *(long **)(lVar15 + 0x110)) {
        **(long **)(lVar15 + 0x108) = (long)local_88;
        uVar7 = uVar7 + 1;
        *(long *)(lVar15 + 0x108) = *(long *)(lVar15 + 0x108) + 8;
        MVar2 = this[0x30];
        goto joined_r0x015f0098;
      }
      std::__ndk1::
      vector<v8::internal::wasm::WasmException,std::__ndk1::allocator<v8::internal::wasm::WasmException>>
      ::__emplace_back_slow_path<v8::internal::Signature<v8::internal::wasm::ValueType>*&>
                ((vector<v8::internal::wasm::WasmException,std::__ndk1::allocator<v8::internal::wasm::WasmException>>
                  *)(lVar15 + 0x100),&local_88);
      break;
    default:
switchD_015f0158_default:
      Decoder::errorf((uchar *)this,pcVar22,"unknown import kind 0x%02x",uVar14);
    }
LAB_015f05ec:
    MVar2 = this[0x30];
joined_r0x015f0654:
    uVar7 = uVar7 + 1;
    if (((byte)MVar2 & 1) != 0) goto LAB_015f009c;
LAB_015f05f8:
    uVar14 = (ulong)((byte)MVar2 >> 1);
  } while( true );
}

