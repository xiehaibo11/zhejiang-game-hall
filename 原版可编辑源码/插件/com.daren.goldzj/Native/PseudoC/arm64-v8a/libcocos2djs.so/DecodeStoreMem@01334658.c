
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::DecodeStoreMem(v8::internal::wasm::StoreType, int) */

undefined4 __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
DecodeStoreMem(WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
               *this,ulong param_2,int param_3)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  byte *pbVar10;
  ushort uVar11;
  undefined *puVar12;
  MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> aMStack_50 [8];
  undefined4 local_48;
  
  if (*(char *)(*(long *)(this + 0x48) + 0x12) == '\0') {
    Decoder::error((Decoder *)this,(uchar *)(*(long *)(this + 0x10) + -1),
                   "memory instruction with no memory");
    return 0;
  }
  MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::MemoryAccessImmediate
            (aMStack_50,(Decoder *)this,(uchar *)(*(long *)(this + 0x10) + (long)param_3),
             (uint)(byte)(&DAT_01a062a6)[param_2 & 0xff]);
  lVar2 = *(long *)(this + 0xa8);
  if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) < (ulong)(lVar2 - *(long *)(this + 0xa0) >> 4)
     ) {
    pbVar10 = *(byte **)(lVar2 + -0x10);
    bVar4 = (&DAT_01a062b0)[param_2 & 0xff];
    uVar9 = *(ulong *)(lVar2 + -8);
    *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar2 + -0x10);
    if (((uint)bVar4 != ((uint)uVar9 & 0xff)) && (uVar9 = uVar9 & 0xff, uVar9 != 10)) {
      pbVar1 = *(byte **)(this + 0x10);
      if (pbVar1 < *(byte **)(this + 0x18)) {
        bVar3 = *pbVar1;
        uVar11 = (ushort)bVar3;
        uVar5 = WasmOpcodes::IsPrefixOpcode(uVar11);
        if ((uVar5 & 1) != 0) {
          if (*(byte **)(this + 0x18) <= pbVar1 + 1) goto LAB_01334794;
          uVar11 = CONCAT11(bVar3,pbVar1[1]);
        }
        pcVar6 = (char *)WasmOpcodes::OpcodeName(uVar11);
      }
      else {
LAB_01334794:
        pcVar6 = "<end>";
      }
      puVar12 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
      if (pbVar10 < *(byte **)(this + 0x18)) {
        bVar4 = *pbVar10;
        uVar11 = (ushort)bVar4;
        uVar5 = WasmOpcodes::IsPrefixOpcode(uVar11);
        if ((uVar5 & 1) != 0) {
          if (*(byte **)(this + 0x18) <= pbVar10 + 1) goto LAB_01334814;
          uVar11 = CONCAT11(bVar4,pbVar10[1]);
        }
        pcVar7 = (char *)WasmOpcodes::OpcodeName(uVar11);
        if ((uint)uVar9 < 0xb) goto LAB_01334824;
LAB_0133484c:
        pcVar8 = "<unknown>";
      }
      else {
LAB_01334814:
        pcVar7 = "<end>";
        if (10 < (uint)uVar9) goto LAB_0133484c;
LAB_01334824:
        pcVar8 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                           (-(uVar9 >> 7) & 0xfffffffffffff800 | uVar9 << 3));
      }
      Decoder::errorf((uchar *)this,(char *)pbVar10,"%s[%d] expected type %s, found %s of type %s",
                      pcVar6,1,puVar12,pcVar7,pcVar8);
    }
  }
  else if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
    pbVar10 = *(byte **)(this + 0x10);
    if (pbVar10 < *(byte **)(this + 0x18)) {
      bVar4 = *pbVar10;
      uVar11 = (ushort)bVar4;
      uVar9 = WasmOpcodes::IsPrefixOpcode(uVar11);
      if ((uVar9 & 1) != 0) {
        if (*(byte **)(this + 0x18) <= pbVar10 + 1) goto LAB_01334788;
        uVar11 = CONCAT11(bVar4,pbVar10[1]);
      }
      pcVar6 = (char *)WasmOpcodes::OpcodeName(uVar11);
    }
    else {
LAB_01334788:
      pcVar6 = "<end>";
    }
    Decoder::errorf((uchar *)this,(char *)pbVar10,"%s found empty stack",pcVar6);
  }
  lVar2 = *(long *)(this + 0xa8);
  if ((ulong)(lVar2 - *(long *)(this + 0xa0) >> 4) <=
      (ulong)*(uint *)(*(long *)(this + 200) + -0x54)) {
    if (*(char *)(*(long *)(this + 200) + -0x48) == '\x02') {
      return local_48;
    }
    pbVar10 = *(byte **)(this + 0x10);
    if (pbVar10 < *(byte **)(this + 0x18)) {
      bVar4 = *pbVar10;
      uVar11 = (ushort)bVar4;
      uVar9 = WasmOpcodes::IsPrefixOpcode(uVar11);
      if ((uVar9 & 1) != 0) {
        if (*(byte **)(this + 0x18) <= pbVar10 + 1) goto LAB_0133492c;
        uVar11 = CONCAT11(bVar4,pbVar10[1]);
      }
      pcVar6 = (char *)WasmOpcodes::OpcodeName(uVar11);
    }
    else {
LAB_0133492c:
      pcVar6 = "<end>";
    }
    Decoder::errorf((uchar *)this,(char *)pbVar10,"%s found empty stack",pcVar6);
    return local_48;
  }
  pbVar10 = *(byte **)(lVar2 + -0x10);
  uVar9 = *(ulong *)(lVar2 + -8);
  *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar2 + -0x10);
  if (((uint)uVar9 & 0xff) == 1) {
    return local_48;
  }
  uVar9 = uVar9 & 0xff;
  if (uVar9 == 10) {
    return local_48;
  }
  pbVar1 = *(byte **)(this + 0x10);
  if (pbVar1 < *(byte **)(this + 0x18)) {
    bVar4 = *pbVar1;
    uVar11 = (ushort)bVar4;
    uVar5 = WasmOpcodes::IsPrefixOpcode(uVar11);
    if ((uVar5 & 1) != 0) {
      if (*(byte **)(this + 0x18) <= pbVar1 + 1) goto LAB_01334938;
      uVar11 = CONCAT11(bVar4,pbVar1[1]);
    }
    pcVar6 = (char *)WasmOpcodes::OpcodeName(uVar11);
  }
  else {
LAB_01334938:
    pcVar6 = "<end>";
  }
  if (pbVar10 < *(byte **)(this + 0x18)) {
    bVar4 = *pbVar10;
    uVar11 = (ushort)bVar4;
    uVar5 = WasmOpcodes::IsPrefixOpcode(uVar11);
    if ((uVar5 & 1) != 0) {
      if (*(byte **)(this + 0x18) <= pbVar10 + 1) goto LAB_013349ac;
      uVar11 = CONCAT11(bVar4,pbVar10[1]);
    }
    pcVar7 = (char *)WasmOpcodes::OpcodeName(uVar11);
  }
  else {
LAB_013349ac:
    pcVar7 = "<end>";
  }
  if ((uint)uVar9 < 0xb) {
    pcVar8 = *(char **)((long)&PTR_s_<stmt>_01cc3e10 +
                       (-(uVar9 >> 7) & 0xfffffffffffff800 | uVar9 << 3));
  }
  else {
    pcVar8 = "<unknown>";
  }
  Decoder::errorf((uchar *)this,(char *)pbVar10,"%s[%d] expected type %s, found %s of type %s",
                  pcVar6,0,"i32",pcVar7,pcVar8);
  return local_48;
}

