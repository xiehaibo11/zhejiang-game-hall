
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::SimdReplaceLane(v8::internal::wasm::WasmOpcode,
   v8::internal::wasm::ValueType) */

undefined8 __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
SimdReplaceLane(WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
                *this,int param_2,byte param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  undefined8 uVar10;
  WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
  *pWVar11;
  ushort uVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  ulong uVar16;
  ValueType local_54 [4];
  
  pWVar11 = this + 0x10;
  pbVar14 = (byte *)(*(long *)pWVar11 + 2);
  if (*(byte **)(this + 0x18) < pbVar14 || (int)*(byte **)(this + 0x18) == (int)pbVar14) {
    Decoder::error((Decoder *)this,pbVar14,"lane");
    uVar15 = 0;
  }
  else {
    uVar15 = (uint)*pbVar14;
  }
  uVar1 = param_2 - 0xfd05;
  if ((0x12 < uVar1) || ((0x6db77U >> (ulong)(uVar1 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pbVar14 = *(byte **)pWVar11;
  if (*(uint *)(&DAT_01a063d8 + (long)(int)uVar1 * 4) <= uVar15) {
    Decoder::error((Decoder *)this,pbVar14 + 2,"invalid lane index");
    return 1;
  }
  lVar9 = *(long *)(this + 0xa8);
  if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) < (ulong)(lVar9 - *(long *)(this + 0xa0) >> 4)
     ) {
    pbVar13 = *(byte **)(lVar9 + -0x10);
    bVar3 = *(byte *)(lVar9 + -8);
    uVar16 = (ulong)bVar3;
    *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar9 + -0x10);
    if (bVar3 != param_3) {
LAB_0133a30c:
      uVar15 = (uint)uVar16;
      if ((param_3 != 7 || uVar15 != 8) && (param_3 != 6 || 2 < uVar15 - 7)) {
        if ((param_3 != 10) && ((uVar16 != 10 && (param_3 != 9 || uVar15 != 8)))) {
          if (pbVar14 < *(byte **)(this + 0x18)) {
            bVar3 = *pbVar14;
            uVar12 = (ushort)bVar3;
            uVar4 = WasmOpcodes::IsPrefixOpcode(uVar12);
            if ((uVar4 & 1) != 0) {
              if (*(byte **)(this + 0x18) <= pbVar14 + 1) goto LAB_0133a3a8;
              uVar12 = CONCAT11(bVar3,pbVar14[1]);
            }
            pcVar5 = (char *)WasmOpcodes::OpcodeName(uVar12);
          }
          else {
LAB_0133a3a8:
            pcVar5 = "<end>";
          }
          if (param_3 < 10) {
            pcVar6 = (&PTR_s_<stmt>_01cc3d10)[(char)param_3];
          }
          else {
            pcVar6 = "<unknown>";
          }
          if (pbVar13 < *(byte **)(this + 0x18)) {
            bVar3 = *pbVar13;
            uVar12 = (ushort)bVar3;
            uVar4 = WasmOpcodes::IsPrefixOpcode(uVar12);
            if ((uVar4 & 1) != 0) {
              if (*(byte **)(this + 0x18) <= pbVar13 + 1) goto LAB_0133a420;
              uVar12 = CONCAT11(bVar3,pbVar13[1]);
            }
            pcVar8 = (char *)WasmOpcodes::OpcodeName(uVar12);
            if (uVar15 < 0xb) goto LAB_0133a430;
LAB_0133a458:
            pcVar7 = "<unknown>";
          }
          else {
LAB_0133a420:
            pcVar8 = "<end>";
            if (10 < uVar15) goto LAB_0133a458;
LAB_0133a430:
            pcVar7 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                               (-(uVar16 >> 7) & 0xfffffffffffff800 | uVar16 << 3));
          }
          Decoder::errorf((uchar *)this,(char *)pbVar13,
                          "%s[%d] expected type %s, found %s of type %s",pcVar5,1,pcVar6,pcVar8,
                          pcVar7);
        }
      }
    }
  }
  else {
    pbVar13 = pbVar14;
    if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
      if (pbVar14 < *(byte **)(this + 0x18)) {
        bVar3 = *pbVar14;
        uVar12 = (ushort)bVar3;
        uVar16 = WasmOpcodes::IsPrefixOpcode(uVar12);
        if ((uVar16 & 1) != 0) {
          if (*(byte **)(this + 0x18) <= pbVar14 + 1) goto LAB_0133a2cc;
          uVar12 = CONCAT11(bVar3,pbVar14[1]);
        }
        pcVar5 = (char *)WasmOpcodes::OpcodeName(uVar12);
      }
      else {
LAB_0133a2cc:
        pcVar5 = "<end>";
      }
      Decoder::errorf((uchar *)this,(char *)pbVar14,"%s found empty stack",pcVar5);
      pbVar13 = *(byte **)(this + 0x10);
    }
    uVar16 = 10;
    pbVar14 = pbVar13;
    if (param_3 != 10) goto LAB_0133a30c;
  }
  lVar9 = *(long *)(this + 0xa8);
  if ((ulong)(lVar9 - *(long *)(this + 0xa0) >> 4) <=
      (ulong)*(uint *)(*(long *)(this + 200) + -0x54)) {
    if (*(char *)(*(long *)(this + 200) + -0x48) == '\x02') goto LAB_0133a61c;
    pbVar14 = *(byte **)(this + 0x10);
    if (pbVar14 < *(byte **)(this + 0x18)) {
      bVar3 = *pbVar14;
      uVar12 = (ushort)bVar3;
      uVar16 = WasmOpcodes::IsPrefixOpcode(uVar12);
      if ((uVar16 & 1) != 0) {
        if (*(byte **)(this + 0x18) <= pbVar14 + 1) goto LAB_0133a544;
        uVar12 = CONCAT11(bVar3,pbVar14[1]);
      }
      pcVar5 = (char *)WasmOpcodes::OpcodeName(uVar12);
    }
    else {
LAB_0133a544:
      pcVar5 = "<end>";
    }
    Decoder::errorf((uchar *)this,(char *)pbVar14,"%s found empty stack",pcVar5);
    goto LAB_0133a61c;
  }
  pbVar14 = *(byte **)(lVar9 + -0x10);
  uVar16 = *(ulong *)(lVar9 + -8);
  *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar9 + -0x10);
  if ((((uint)uVar16 & 0xff) == 5) || (uVar16 = uVar16 & 0xff, uVar16 == 10)) goto LAB_0133a61c;
  pbVar13 = *(byte **)(this + 0x10);
  if (pbVar13 < *(byte **)(this + 0x18)) {
    bVar3 = *pbVar13;
    uVar12 = (ushort)bVar3;
    uVar4 = WasmOpcodes::IsPrefixOpcode(uVar12);
    if ((uVar4 & 1) != 0) {
      if (*(byte **)(this + 0x18) <= pbVar13 + 1) goto LAB_0133a538;
      uVar12 = CONCAT11(bVar3,pbVar13[1]);
    }
    pcVar5 = (char *)WasmOpcodes::OpcodeName(uVar12);
  }
  else {
LAB_0133a538:
    pcVar5 = "<end>";
  }
  if (pbVar14 < *(byte **)(this + 0x18)) {
    bVar3 = *pbVar14;
    uVar12 = (ushort)bVar3;
    uVar4 = WasmOpcodes::IsPrefixOpcode(uVar12);
    if ((uVar4 & 1) != 0) {
      if (*(byte **)(this + 0x18) <= pbVar14 + 1) goto LAB_0133a594;
      uVar12 = CONCAT11(bVar3,pbVar14[1]);
    }
    pcVar6 = (char *)WasmOpcodes::OpcodeName(uVar12);
    if ((uint)uVar16 < 0xb) goto LAB_0133a5a4;
LAB_0133a5f0:
    pcVar8 = "<unknown>";
  }
  else {
LAB_0133a594:
    pcVar6 = "<end>";
    if (10 < (uint)uVar16) goto LAB_0133a5f0;
LAB_0133a5a4:
    pcVar8 = *(char **)((long)&PTR_s_<stmt>_01cc3db8 +
                       (-(uVar16 >> 7) & 0xfffffffffffff800 | uVar16 << 3));
  }
  Decoder::errorf((uchar *)this,(char *)pbVar14,"%s[%d] expected type %s, found %s of type %s",
                  pcVar5,0,&DAT_018ce057,pcVar6,pcVar8);
LAB_0133a61c:
  local_54[0] = 5;
  puVar2 = *(undefined8 **)(this + 0xa8);
  if (puVar2 < *(undefined8 **)(this + 0xb0)) {
    uVar10 = *(undefined8 *)(this + 0x10);
    *(undefined1 *)(puVar2 + 1) = 5;
    *puVar2 = uVar10;
    *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + 0x10;
  }
  else {
    std::__ndk1::
    vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
    ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
              ((vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                *)(this + 0xa0),(uchar **)pWVar11,local_54);
  }
  return 1;
}

