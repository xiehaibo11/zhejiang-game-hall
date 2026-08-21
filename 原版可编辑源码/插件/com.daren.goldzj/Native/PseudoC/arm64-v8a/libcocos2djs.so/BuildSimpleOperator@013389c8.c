
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::BuildSimpleOperator(v8::internal::wasm::WasmOpcode,
   v8::internal::wasm::ValueType, v8::internal::wasm::ValueType, v8::internal::wasm::ValueType) */

void __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
BuildSimpleOperator(WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
                    *this,undefined8 param_2,char param_3,byte param_4,byte param_5)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  ushort uVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  char local_44 [4];
  
  lVar8 = *(long *)(this + 0xa8);
  if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) < (ulong)(lVar8 - *(long *)(this + 0xa0) >> 4)
     ) {
    pbVar12 = *(byte **)(lVar8 + -0x10);
    bVar3 = *(byte *)(lVar8 + -8);
    uVar14 = (ulong)bVar3;
    *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar8 + -0x10);
    if (bVar3 != param_5) {
LAB_01338aac:
      uVar13 = (uint)uVar14;
      if ((param_5 != 7 || uVar13 != 8) && (param_5 != 6 || 2 < uVar13 - 7)) {
        if ((param_5 != 10) && ((uVar14 != 10 && (param_5 != 9 || uVar13 != 8)))) {
          pbVar1 = *(byte **)(this + 0x10);
          if (pbVar1 < *(byte **)(this + 0x18)) {
            bVar3 = *pbVar1;
            uVar11 = (ushort)bVar3;
            uVar4 = WasmOpcodes::IsPrefixOpcode(uVar11);
            if ((uVar4 & 1) != 0) {
              if (*(byte **)(this + 0x18) <= pbVar1 + 1) goto LAB_01338b48;
              uVar11 = CONCAT11(bVar3,pbVar1[1]);
            }
            pcVar5 = (char *)WasmOpcodes::OpcodeName(uVar11);
          }
          else {
LAB_01338b48:
            pcVar5 = "<end>";
          }
          if (param_5 < 10) {
            pcVar10 = (&PTR_s_<stmt>_01cc3d10)[(char)param_5];
          }
          else {
            pcVar10 = "<unknown>";
          }
          if (pbVar12 < *(byte **)(this + 0x18)) {
            bVar3 = *pbVar12;
            uVar11 = (ushort)bVar3;
            uVar4 = WasmOpcodes::IsPrefixOpcode(uVar11);
            if ((uVar4 & 1) != 0) {
              if (*(byte **)(this + 0x18) <= pbVar12 + 1) goto LAB_01338bc0;
              uVar11 = CONCAT11(bVar3,pbVar12[1]);
            }
            pcVar6 = (char *)WasmOpcodes::OpcodeName(uVar11);
            if (uVar13 < 0xb) goto LAB_01338bd0;
LAB_01338bf8:
            pcVar7 = "<unknown>";
          }
          else {
LAB_01338bc0:
            pcVar6 = "<end>";
            if (10 < uVar13) goto LAB_01338bf8;
LAB_01338bd0:
            pcVar7 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                               (-(uVar14 >> 7) & 0xfffffffffffff800 | uVar14 << 3));
          }
          Decoder::errorf((uchar *)this,(char *)pbVar12,
                          "%s[%d] expected type %s, found %s of type %s",pcVar5,1,pcVar10,pcVar6,
                          pcVar7);
        }
      }
    }
  }
  else {
    if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
      pbVar12 = *(byte **)(this + 0x10);
      if (pbVar12 < *(byte **)(this + 0x18)) {
        bVar3 = *pbVar12;
        uVar11 = (ushort)bVar3;
        uVar14 = WasmOpcodes::IsPrefixOpcode(uVar11);
        if ((uVar14 & 1) != 0) {
          if (*(byte **)(this + 0x18) <= pbVar12 + 1) goto LAB_01338a70;
          uVar11 = CONCAT11(bVar3,pbVar12[1]);
        }
        pcVar5 = (char *)WasmOpcodes::OpcodeName(uVar11);
      }
      else {
LAB_01338a70:
        pcVar5 = "<end>";
      }
      Decoder::errorf((uchar *)this,(char *)pbVar12,"%s found empty stack",pcVar5);
    }
    pbVar12 = *(byte **)(this + 0x10);
    uVar14 = 10;
    if (param_5 != 10) goto LAB_01338aac;
  }
  lVar8 = *(long *)(this + 0xa8);
  if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) < (ulong)(lVar8 - *(long *)(this + 0xa0) >> 4)
     ) {
    pbVar12 = *(byte **)(lVar8 + -0x10);
    bVar3 = *(byte *)(lVar8 + -8);
    uVar14 = (ulong)bVar3;
    *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar8 + -0x10);
    if (bVar3 == param_4) goto LAB_01338e44;
  }
  else {
    if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
      pbVar12 = *(byte **)(this + 0x10);
      if (pbVar12 < *(byte **)(this + 0x18)) {
        bVar3 = *pbVar12;
        uVar11 = (ushort)bVar3;
        uVar14 = WasmOpcodes::IsPrefixOpcode(uVar11);
        if ((uVar14 & 1) != 0) {
          if (*(byte **)(this + 0x18) <= pbVar12 + 1) goto LAB_01338c94;
          uVar11 = CONCAT11(bVar3,pbVar12[1]);
        }
        pcVar5 = (char *)WasmOpcodes::OpcodeName(uVar11);
      }
      else {
LAB_01338c94:
        pcVar5 = "<end>";
      }
      Decoder::errorf((uchar *)this,(char *)pbVar12,"%s found empty stack",pcVar5);
    }
    pbVar12 = *(byte **)(this + 0x10);
    uVar14 = 10;
    if (param_4 == 10) goto LAB_01338e44;
  }
  uVar13 = (uint)uVar14;
  if ((param_4 == 7 && uVar13 == 8) || (param_4 == 6 && uVar13 - 7 < 3)) goto LAB_01338e44;
  if ((param_4 == 10) || ((uVar14 == 10 || (param_4 == 9 && uVar13 == 8)))) goto LAB_01338e44;
  pbVar1 = *(byte **)(this + 0x10);
  if (pbVar1 < *(byte **)(this + 0x18)) {
    bVar3 = *pbVar1;
    uVar11 = (ushort)bVar3;
    uVar4 = WasmOpcodes::IsPrefixOpcode(uVar11);
    if ((uVar4 & 1) != 0) {
      if (*(byte **)(this + 0x18) <= pbVar1 + 1) goto LAB_01338d6c;
      uVar11 = CONCAT11(bVar3,pbVar1[1]);
    }
    pcVar5 = (char *)WasmOpcodes::OpcodeName(uVar11);
  }
  else {
LAB_01338d6c:
    pcVar5 = "<end>";
  }
  if (param_4 < 10) {
    pcVar10 = (&PTR_s_<stmt>_01cc3d10)[(char)param_4];
  }
  else {
    pcVar10 = "<unknown>";
  }
  if (pbVar12 < *(byte **)(this + 0x18)) {
    bVar3 = *pbVar12;
    uVar11 = (ushort)bVar3;
    uVar4 = WasmOpcodes::IsPrefixOpcode(uVar11);
    if ((uVar4 & 1) != 0) {
      if (*(byte **)(this + 0x18) <= pbVar12 + 1) goto LAB_01338de4;
      uVar11 = CONCAT11(bVar3,pbVar12[1]);
    }
    pcVar6 = (char *)WasmOpcodes::OpcodeName(uVar11);
    if (uVar13 < 0xb) goto LAB_01338df4;
LAB_01338e1c:
    pcVar7 = "<unknown>";
  }
  else {
LAB_01338de4:
    pcVar6 = "<end>";
    if (10 < uVar13) goto LAB_01338e1c;
LAB_01338df4:
    pcVar7 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                       (-(uVar14 >> 7) & 0xfffffffffffff800 | uVar14 << 3));
  }
  Decoder::errorf((uchar *)this,(char *)pbVar12,"%s[%d] expected type %s, found %s of type %s",
                  pcVar5,0,pcVar10,pcVar6,pcVar7);
LAB_01338e44:
  if (param_3 != '\0') {
    puVar2 = *(undefined8 **)(this + 0xa8);
    if (puVar2 < *(undefined8 **)(this + 0xb0)) {
      uVar9 = *(undefined8 *)(this + 0x10);
      *(char *)(puVar2 + 1) = param_3;
      *puVar2 = uVar9;
      *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + 0x10;
    }
    else {
      local_44[0] = param_3;
      std::__ndk1::
      vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
      ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                ((vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                  *)(this + 0xa0),(uchar **)(this + 0x10),local_44);
    }
  }
  return;
}

