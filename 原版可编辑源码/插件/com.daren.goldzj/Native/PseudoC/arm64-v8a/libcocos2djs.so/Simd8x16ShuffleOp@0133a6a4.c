
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::Simd8x16ShuffleOp() */

undefined8 __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
Simd8x16ShuffleOp(WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
                  *this)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  byte *pbVar14;
  ushort uVar15;
  ValueType local_6c [4];
  byte local_68 [16];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar10 = *(long *)(this + 0x10);
  lVar13 = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[7] = 0;
  local_68[8] = 0;
  local_68[9] = 0;
  local_68[10] = 0;
  local_68[0xb] = 0;
  local_68[0xc] = 0;
  local_68[0xd] = 0;
  local_68[0xe] = 0;
  local_68[0xf] = 0;
  do {
    pbVar14 = (byte *)(lVar10 + 2 + lVar13);
    if ((*(byte **)(this + 0x18) < pbVar14) || ((int)*(byte **)(this + 0x18) == (int)pbVar14)) {
      Decoder::error((Decoder *)this,pbVar14,"shuffle");
      bVar9 = 0;
    }
    else {
      bVar9 = *pbVar14;
    }
    local_68[lVar13] = bVar9;
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x10);
  bVar9 = local_68[1];
  if (local_68[1] <= local_68[0]) {
    bVar9 = local_68[0];
  }
  bVar1 = local_68[2];
  if (local_68[2] <= bVar9) {
    bVar1 = bVar9;
  }
  bVar9 = local_68[3];
  if (local_68[3] <= bVar1) {
    bVar9 = bVar1;
  }
  bVar1 = local_68[4];
  if (local_68[4] <= bVar9) {
    bVar1 = bVar9;
  }
  bVar9 = local_68[5];
  if (local_68[5] <= bVar1) {
    bVar9 = bVar1;
  }
  bVar1 = local_68[6];
  if (local_68[6] <= bVar9) {
    bVar1 = bVar9;
  }
  bVar9 = local_68[7];
  if (local_68[7] <= bVar1) {
    bVar9 = bVar1;
  }
  bVar1 = local_68[8];
  if (local_68[8] <= bVar9) {
    bVar1 = bVar9;
  }
  bVar9 = local_68[9];
  if (local_68[9] <= bVar1) {
    bVar9 = bVar1;
  }
  bVar1 = local_68[10];
  if (local_68[10] <= bVar9) {
    bVar1 = bVar9;
  }
  bVar9 = local_68[0xb];
  if (local_68[0xb] <= bVar1) {
    bVar9 = bVar1;
  }
  bVar1 = local_68[0xc];
  if (local_68[0xc] <= bVar9) {
    bVar1 = bVar9;
  }
  bVar9 = local_68[0xd];
  if (local_68[0xd] <= bVar1) {
    bVar9 = bVar1;
  }
  bVar1 = local_68[0xe];
  if (local_68[0xe] <= bVar9) {
    bVar1 = bVar9;
  }
  bVar9 = local_68[0xf];
  if (local_68[0xf] <= bVar1) {
    bVar9 = bVar1;
  }
  if (0x20 < bVar9) {
    Decoder::error((Decoder *)this,(uchar *)(*(long *)(this + 0x10) + 2),"invalid shuffle mask");
    goto LAB_0133ab94;
  }
  lVar13 = *(long *)(this + 0xa8);
  if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
      (ulong)(lVar13 - *(long *)(this + 0xa0) >> 4)) {
    pbVar14 = *(byte **)(lVar13 + -0x10);
    uVar11 = *(ulong *)(lVar13 + -8);
    *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar13 + -0x10);
    if ((((uint)uVar11 & 0xff) != 5) && (uVar11 = uVar11 & 0xff, uVar11 != 10)) {
      pbVar2 = *(byte **)(this + 0x10);
      if (pbVar2 < *(byte **)(this + 0x18)) {
        bVar9 = *pbVar2;
        uVar15 = (ushort)bVar9;
        uVar5 = WasmOpcodes::IsPrefixOpcode(uVar15);
        if ((uVar5 & 1) != 0) {
          if (*(byte **)(this + 0x18) <= pbVar2 + 1) goto LAB_0133a8e0;
          uVar15 = CONCAT11(bVar9,pbVar2[1]);
        }
        pcVar6 = (char *)WasmOpcodes::OpcodeName(uVar15);
      }
      else {
LAB_0133a8e0:
        pcVar6 = "<end>";
      }
      if (pbVar14 < *(byte **)(this + 0x18)) {
        bVar9 = *pbVar14;
        uVar15 = (ushort)bVar9;
        uVar5 = WasmOpcodes::IsPrefixOpcode(uVar15);
        if ((uVar5 & 1) != 0) {
          if (*(byte **)(this + 0x18) <= pbVar14 + 1) goto LAB_0133a954;
          uVar15 = CONCAT11(bVar9,pbVar14[1]);
        }
        pcVar7 = (char *)WasmOpcodes::OpcodeName(uVar15);
        if ((uint)uVar11 < 0xb) goto LAB_0133a964;
LAB_0133a98c:
        pcVar8 = "<unknown>";
      }
      else {
LAB_0133a954:
        pcVar7 = "<end>";
        if (10 < (uint)uVar11) goto LAB_0133a98c;
LAB_0133a964:
        pcVar8 = *(char **)((long)&PTR_s_<stmt>_01cc3db8 +
                           (-(uVar11 >> 7) & 0xfffffffffffff800 | uVar11 << 3));
      }
      Decoder::errorf((uchar *)this,(char *)pbVar14,"%s[%d] expected type %s, found %s of type %s",
                      pcVar6,1,&DAT_018ce057,pcVar7,pcVar8);
    }
  }
  else if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
    pbVar14 = *(byte **)(this + 0x10);
    if (pbVar14 < *(byte **)(this + 0x18)) {
      bVar9 = *pbVar14;
      uVar15 = (ushort)bVar9;
      uVar11 = WasmOpcodes::IsPrefixOpcode(uVar15);
      if ((uVar11 & 1) != 0) {
        if (*(byte **)(this + 0x18) <= pbVar14 + 1) goto LAB_0133a8d4;
        uVar15 = CONCAT11(bVar9,pbVar14[1]);
      }
      pcVar6 = (char *)WasmOpcodes::OpcodeName(uVar15);
    }
    else {
LAB_0133a8d4:
      pcVar6 = "<end>";
    }
    Decoder::errorf((uchar *)this,(char *)pbVar14,"%s found empty stack",pcVar6);
  }
  lVar13 = *(long *)(this + 0xa8);
  if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
      (ulong)(lVar13 - *(long *)(this + 0xa0) >> 4)) {
    pbVar14 = *(byte **)(lVar13 + -0x10);
    uVar11 = *(ulong *)(lVar13 + -8);
    *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar13 + -0x10);
    if ((((uint)uVar11 & 0xff) != 5) && (uVar11 = uVar11 & 0xff, uVar11 != 10)) {
      pbVar2 = *(byte **)(this + 0x10);
      if (pbVar2 < *(byte **)(this + 0x18)) {
        bVar9 = *pbVar2;
        uVar15 = (ushort)bVar9;
        uVar5 = WasmOpcodes::IsPrefixOpcode(uVar15);
        if ((uVar5 & 1) != 0) {
          if (*(byte **)(this + 0x18) <= pbVar2 + 1) goto LAB_0133aa7c;
          uVar15 = CONCAT11(bVar9,pbVar2[1]);
        }
        pcVar6 = (char *)WasmOpcodes::OpcodeName(uVar15);
      }
      else {
LAB_0133aa7c:
        pcVar6 = "<end>";
      }
      if (pbVar14 < *(byte **)(this + 0x18)) {
        bVar9 = *pbVar14;
        uVar15 = (ushort)bVar9;
        uVar5 = WasmOpcodes::IsPrefixOpcode(uVar15);
        if ((uVar5 & 1) != 0) {
          if (*(byte **)(this + 0x18) <= pbVar14 + 1) goto LAB_0133aaf0;
          uVar15 = CONCAT11(bVar9,pbVar14[1]);
        }
        pcVar7 = (char *)WasmOpcodes::OpcodeName(uVar15);
        if ((uint)uVar11 < 0xb) goto LAB_0133ab00;
LAB_0133ab28:
        pcVar8 = "<unknown>";
      }
      else {
LAB_0133aaf0:
        pcVar7 = "<end>";
        if (10 < (uint)uVar11) goto LAB_0133ab28;
LAB_0133ab00:
        pcVar8 = *(char **)((long)&PTR_s_<stmt>_01cc3db8 +
                           (-(uVar11 >> 7) & 0xfffffffffffff800 | uVar11 << 3));
      }
      Decoder::errorf((uchar *)this,(char *)pbVar14,"%s[%d] expected type %s, found %s of type %s",
                      pcVar6,0,&DAT_018ce057,pcVar7,pcVar8);
    }
  }
  else if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
    pbVar14 = *(byte **)(this + 0x10);
    if (pbVar14 < *(byte **)(this + 0x18)) {
      bVar9 = *pbVar14;
      uVar15 = (ushort)bVar9;
      uVar11 = WasmOpcodes::IsPrefixOpcode(uVar15);
      if ((uVar11 & 1) != 0) {
        if (*(byte **)(this + 0x18) <= pbVar14 + 1) goto LAB_0133aa70;
        uVar15 = CONCAT11(bVar9,pbVar14[1]);
      }
      pcVar6 = (char *)WasmOpcodes::OpcodeName(uVar15);
    }
    else {
LAB_0133aa70:
      pcVar6 = "<end>";
    }
    Decoder::errorf((uchar *)this,(char *)pbVar14,"%s found empty stack",pcVar6);
  }
  local_6c[0] = 5;
  puVar3 = *(undefined8 **)(this + 0xa8);
  if (puVar3 < *(undefined8 **)(this + 0xb0)) {
    uVar12 = *(undefined8 *)(this + 0x10);
    *(undefined1 *)(puVar3 + 1) = 5;
    *puVar3 = uVar12;
    *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + 0x10;
  }
  else {
    std::__ndk1::
    vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
    ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
              ((vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                *)(this + 0xa0),(uchar **)(this + 0x10),local_6c);
  }
LAB_0133ab94:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0x10;
}

