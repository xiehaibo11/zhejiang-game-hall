
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::SimdExtractLane(v8::internal::wasm::WasmOpcode,
   v8::internal::wasm::ValueType) */

undefined8 __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
SimdExtractLane(WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
                *this,int param_2,undefined1 param_3)

{
  uint uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte bVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  ushort uVar14;
  undefined1 local_54 [4];
  
  pbVar13 = (byte *)(*(long *)(this + 0x10) + 2);
  if (*(byte **)(this + 0x18) < pbVar13 || (int)*(byte **)(this + 0x18) == (int)pbVar13) {
    Decoder::error((Decoder *)this,pbVar13,"lane");
    uVar9 = 0;
  }
  else {
    uVar9 = (uint)*pbVar13;
  }
  uVar1 = param_2 - 0xfd05;
  if ((0x12 < uVar1) || ((0x6db77U >> (ulong)(uVar1 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if (*(uint *)(&DAT_01a063d8 + (long)(int)uVar1 * 4) <= uVar9) {
    Decoder::error((Decoder *)this,(uchar *)(*(long *)(this + 0x10) + 2),"invalid lane index");
    return 1;
  }
  lVar10 = *(long *)(this + 0xa8);
  if ((ulong)(lVar10 - *(long *)(this + 0xa0) >> 4) <=
      (ulong)*(uint *)(*(long *)(this + 200) + -0x54)) {
    if (*(char *)(*(long *)(this + 200) + -0x48) == '\x02') goto LAB_0133a130;
    pbVar13 = *(byte **)(this + 0x10);
    if (pbVar13 < *(byte **)(this + 0x18)) {
      bVar4 = *pbVar13;
      uVar14 = (ushort)bVar4;
      uVar11 = WasmOpcodes::IsPrefixOpcode(uVar14);
      if ((uVar11 & 1) != 0) {
        if (*(byte **)(this + 0x18) <= pbVar13 + 1) goto LAB_0133a058;
        uVar14 = CONCAT11(bVar4,pbVar13[1]);
      }
      pcVar6 = (char *)WasmOpcodes::OpcodeName(uVar14);
    }
    else {
LAB_0133a058:
      pcVar6 = "<end>";
    }
    Decoder::errorf((uchar *)this,(char *)pbVar13,"%s found empty stack",pcVar6);
    goto LAB_0133a130;
  }
  pbVar13 = *(byte **)(lVar10 + -0x10);
  uVar11 = *(ulong *)(lVar10 + -8);
  *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar10 + -0x10);
  if ((((uint)uVar11 & 0xff) == 5) || (uVar11 = uVar11 & 0xff, uVar11 == 10)) goto LAB_0133a130;
  pbVar2 = *(byte **)(this + 0x10);
  if (pbVar2 < *(byte **)(this + 0x18)) {
    bVar4 = *pbVar2;
    uVar14 = (ushort)bVar4;
    uVar5 = WasmOpcodes::IsPrefixOpcode(uVar14);
    if ((uVar5 & 1) != 0) {
      if (*(byte **)(this + 0x18) <= pbVar2 + 1) goto LAB_0133a04c;
      uVar14 = CONCAT11(bVar4,pbVar2[1]);
    }
    pcVar6 = (char *)WasmOpcodes::OpcodeName(uVar14);
  }
  else {
LAB_0133a04c:
    pcVar6 = "<end>";
  }
  if (pbVar13 < *(byte **)(this + 0x18)) {
    bVar4 = *pbVar13;
    uVar14 = (ushort)bVar4;
    uVar5 = WasmOpcodes::IsPrefixOpcode(uVar14);
    if ((uVar5 & 1) != 0) {
      if (*(byte **)(this + 0x18) <= pbVar13 + 1) goto LAB_0133a0a8;
      uVar14 = CONCAT11(bVar4,pbVar13[1]);
    }
    pcVar7 = (char *)WasmOpcodes::OpcodeName(uVar14);
    if ((uint)uVar11 < 0xb) goto LAB_0133a0b8;
LAB_0133a104:
    pcVar8 = "<unknown>";
  }
  else {
LAB_0133a0a8:
    pcVar7 = "<end>";
    if (10 < (uint)uVar11) goto LAB_0133a104;
LAB_0133a0b8:
    pcVar8 = *(char **)((long)&PTR_s_<stmt>_01cc3db8 +
                       (-(uVar11 >> 7) & 0xfffffffffffff800 | uVar11 << 3));
  }
  Decoder::errorf((uchar *)this,(char *)pbVar13,"%s[%d] expected type %s, found %s of type %s",
                  pcVar6,0,&DAT_018ce057,pcVar7,pcVar8);
LAB_0133a130:
  puVar3 = *(undefined8 **)(this + 0xa8);
  if (puVar3 < *(undefined8 **)(this + 0xb0)) {
    uVar12 = *(undefined8 *)(this + 0x10);
    *(undefined1 *)(puVar3 + 1) = param_3;
    *puVar3 = uVar12;
    *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + 0x10;
  }
  else {
    local_54[0] = param_3;
    std::__ndk1::
    vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
    ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
              ((vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                *)(this + 0xa0),(uchar **)(this + 0x10),local_54);
  }
  return 1;
}

