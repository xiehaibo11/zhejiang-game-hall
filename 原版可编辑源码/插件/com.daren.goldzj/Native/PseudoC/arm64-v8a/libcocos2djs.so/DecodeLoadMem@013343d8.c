
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::DecodeLoadMem(v8::internal::wasm::LoadType, int) */

undefined4 __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
DecodeLoadMem(WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
              *this,ulong param_2,int param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ushort uVar12;
  MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> aMStack_60 [8];
  undefined4 local_58;
  undefined1 local_54 [4];
  
  if (*(char *)(*(long *)(this + 0x48) + 0x12) == '\0') {
    Decoder::error((Decoder *)this,(uchar *)(*(long *)(this + 0x10) + -1),
                   "memory instruction with no memory");
    return 0;
  }
  MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::MemoryAccessImmediate
            (aMStack_60,(Decoder *)this,(uchar *)(*(long *)(this + 0x10) + (long)param_3),
             (uint)(byte)(&DAT_01a06288)[param_2 & 0xff]);
  lVar8 = *(long *)(this + 0xa8);
  if ((ulong)(lVar8 - *(long *)(this + 0xa0) >> 4) <=
      (ulong)*(uint *)(*(long *)(this + 200) + -0x54)) {
    if (*(char *)(*(long *)(this + 200) + -0x48) == '\x02') goto LAB_013345f0;
    pbVar11 = *(byte **)(this + 0x10);
    if (pbVar11 < *(byte **)(this + 0x18)) {
      bVar3 = *pbVar11;
      uVar12 = (ushort)bVar3;
      uVar9 = WasmOpcodes::IsPrefixOpcode(uVar12);
      if ((uVar9 & 1) != 0) {
        if (*(byte **)(this + 0x18) <= pbVar11 + 1) goto LAB_0133450c;
        uVar12 = CONCAT11(bVar3,pbVar11[1]);
      }
      pcVar5 = (char *)WasmOpcodes::OpcodeName(uVar12);
    }
    else {
LAB_0133450c:
      pcVar5 = "<end>";
    }
    Decoder::errorf((uchar *)this,(char *)pbVar11,"%s found empty stack",pcVar5);
    goto LAB_013345f0;
  }
  pbVar11 = *(byte **)(lVar8 + -0x10);
  uVar9 = *(ulong *)(lVar8 + -8);
  *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar8 + -0x10);
  if ((((uint)uVar9 & 0xff) == 1) || (uVar9 = uVar9 & 0xff, uVar9 == 10)) goto LAB_013345f0;
  pbVar1 = *(byte **)(this + 0x10);
  if (pbVar1 < *(byte **)(this + 0x18)) {
    bVar3 = *pbVar1;
    uVar12 = (ushort)bVar3;
    uVar4 = WasmOpcodes::IsPrefixOpcode(uVar12);
    if ((uVar4 & 1) != 0) {
      if (*(byte **)(this + 0x18) <= pbVar1 + 1) goto LAB_01334518;
      uVar12 = CONCAT11(bVar3,pbVar1[1]);
    }
    pcVar5 = (char *)WasmOpcodes::OpcodeName(uVar12);
  }
  else {
LAB_01334518:
    pcVar5 = "<end>";
  }
  if (pbVar11 < *(byte **)(this + 0x18)) {
    bVar3 = *pbVar11;
    uVar12 = (ushort)bVar3;
    uVar4 = WasmOpcodes::IsPrefixOpcode(uVar12);
    if ((uVar4 & 1) != 0) {
      if (*(byte **)(this + 0x18) <= pbVar11 + 1) goto LAB_0133458c;
      uVar12 = CONCAT11(bVar3,pbVar11[1]);
    }
    pcVar6 = (char *)WasmOpcodes::OpcodeName(uVar12);
    if (10 < (uint)uVar9) goto LAB_013345c4;
LAB_0133459c:
    pcVar7 = *(char **)((long)&PTR_s_<stmt>_01cc3e10 +
                       (-(uVar9 >> 7) & 0xfffffffffffff800 | uVar9 << 3));
  }
  else {
LAB_0133458c:
    pcVar6 = "<end>";
    if ((uint)uVar9 < 0xb) goto LAB_0133459c;
LAB_013345c4:
    pcVar7 = "<unknown>";
  }
  Decoder::errorf((uchar *)this,(char *)pbVar11,"%s[%d] expected type %s, found %s of type %s",
                  pcVar5,0,"i32",pcVar6,pcVar7);
LAB_013345f0:
  local_54[0] = (&DAT_01a06297)[param_2 & 0xff];
  puVar2 = *(undefined8 **)(this + 0xa8);
  if (puVar2 < *(undefined8 **)(this + 0xb0)) {
    uVar10 = *(undefined8 *)(this + 0x10);
    *(undefined1 *)(puVar2 + 1) = local_54[0];
    *puVar2 = uVar10;
    *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + 0x10;
  }
  else {
    std::__ndk1::
    vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
    ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
              ((vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                *)(this + 0xa0),(uchar **)(this + 0x10),local_54);
  }
  return local_58;
}

