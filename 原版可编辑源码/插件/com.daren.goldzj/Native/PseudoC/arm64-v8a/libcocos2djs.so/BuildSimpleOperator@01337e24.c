
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::BuildSimpleOperator(v8::internal::wasm::WasmOpcode,
   v8::internal::Signature<v8::internal::wasm::ValueType>*) */

void __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
BuildSimpleOperator(WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
                    *this,undefined8 param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 *puVar8;
  char *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  byte *pbVar13;
  ushort uVar14;
  char *pcVar15;
  uint uVar16;
  ulong uVar17;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  
  if (param_3[1] == 2) {
    bVar4 = *(byte *)(*param_3 + param_3[2] + 1);
    lVar10 = *(long *)(this + 0xa8);
    if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
        (ulong)(lVar10 - *(long *)(this + 0xa0) >> 4)) {
      pbVar13 = *(byte **)(lVar10 + -0x10);
      bVar2 = *(byte *)(lVar10 + -8);
      uVar17 = (ulong)bVar2;
      *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar10 + -0x10);
      if (bVar2 != bVar4) {
LAB_01338088:
        uVar16 = (uint)uVar17;
        if ((bVar4 != 7 || uVar16 != 8) && (bVar4 != 6 || 2 < uVar16 - 7)) {
          if ((bVar4 != 10) && ((uVar17 != 10 && (bVar4 != 9 || uVar16 != 8)))) {
            pbVar1 = *(byte **)(this + 0x10);
            if (pbVar1 < *(byte **)(this + 0x18)) {
              bVar2 = *pbVar1;
              uVar14 = (ushort)bVar2;
              uVar5 = WasmOpcodes::IsPrefixOpcode(uVar14);
              if ((uVar5 & 1) != 0) {
                if (*(byte **)(this + 0x18) <= pbVar1 + 1) goto LAB_0133811c;
                uVar14 = CONCAT11(bVar2,pbVar1[1]);
              }
              pcVar6 = (char *)WasmOpcodes::OpcodeName(uVar14);
            }
            else {
LAB_0133811c:
              pcVar6 = "<end>";
            }
            if (bVar4 < 10) {
              pcVar15 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
            }
            else {
              pcVar15 = "<unknown>";
            }
            if (pbVar13 < *(byte **)(this + 0x18)) {
              bVar4 = *pbVar13;
              uVar14 = (ushort)bVar4;
              uVar5 = WasmOpcodes::IsPrefixOpcode(uVar14);
              if ((uVar5 & 1) != 0) {
                if (*(byte **)(this + 0x18) <= pbVar13 + 1) goto LAB_0133821c;
                uVar14 = CONCAT11(bVar4,pbVar13[1]);
              }
              pcVar7 = (char *)WasmOpcodes::OpcodeName(uVar14);
              if (10 < uVar16) goto LAB_013382bc;
LAB_0133822c:
              pcVar9 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                 (-(uVar17 >> 7) & 0xfffffffffffff800 | uVar17 << 3));
            }
            else {
LAB_0133821c:
              pcVar7 = "<end>";
              if (uVar16 < 0xb) goto LAB_0133822c;
LAB_013382bc:
              pcVar9 = "<unknown>";
            }
            Decoder::errorf((uchar *)this,(char *)pbVar13,
                            "%s[%d] expected type %s, found %s of type %s",pcVar6,1,pcVar15,pcVar7,
                            pcVar9);
          }
        }
      }
    }
    else {
      if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
        pbVar13 = *(byte **)(this + 0x10);
        if (pbVar13 < *(byte **)(this + 0x18)) {
          bVar2 = *pbVar13;
          uVar14 = (ushort)bVar2;
          uVar17 = WasmOpcodes::IsPrefixOpcode(uVar14);
          if ((uVar17 & 1) != 0) {
            if (*(byte **)(this + 0x18) <= pbVar13 + 1) goto LAB_01337f7c;
            uVar14 = CONCAT11(bVar2,pbVar13[1]);
          }
          pcVar6 = (char *)WasmOpcodes::OpcodeName(uVar14);
        }
        else {
LAB_01337f7c:
          pcVar6 = "<end>";
        }
        Decoder::errorf((uchar *)this,(char *)pbVar13,"%s found empty stack",pcVar6);
      }
      pbVar13 = *(byte **)(this + 0x10);
      uVar17 = 10;
      if (bVar4 != 10) goto LAB_01338088;
    }
    lVar10 = *(long *)(this + 0xa8);
    bVar4 = *(byte *)(param_3[2] + *param_3);
    if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
        (ulong)(lVar10 - *(long *)(this + 0xa0) >> 4)) {
      pbVar13 = *(byte **)(lVar10 + -0x10);
      bVar2 = *(byte *)(lVar10 + -8);
      uVar17 = (ulong)bVar2;
      *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar10 + -0x10);
      if (bVar2 != bVar4) {
LAB_013383a0:
        uVar16 = (uint)uVar17;
        if ((bVar4 != 7 || uVar16 != 8) && (bVar4 != 6 || 2 < uVar16 - 7)) {
          if ((bVar4 != 10) && ((uVar17 != 10 && (bVar4 != 9 || uVar16 != 8)))) {
            pbVar1 = *(byte **)(this + 0x10);
            if (pbVar1 < *(byte **)(this + 0x18)) {
              bVar2 = *pbVar1;
              uVar14 = (ushort)bVar2;
              uVar5 = WasmOpcodes::IsPrefixOpcode(uVar14);
              if ((uVar5 & 1) != 0) {
                if (*(byte **)(this + 0x18) <= pbVar1 + 1) goto LAB_01338434;
                uVar14 = CONCAT11(bVar2,pbVar1[1]);
              }
              pcVar6 = (char *)WasmOpcodes::OpcodeName(uVar14);
            }
            else {
LAB_01338434:
              pcVar6 = "<end>";
            }
            if (bVar4 < 10) {
              pcVar15 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
            }
            else {
              pcVar15 = "<unknown>";
            }
            if (pbVar13 < *(byte **)(this + 0x18)) {
              bVar4 = *pbVar13;
              uVar14 = (ushort)bVar4;
              uVar5 = WasmOpcodes::IsPrefixOpcode(uVar14);
              if ((uVar5 & 1) != 0) {
                if (*(byte **)(this + 0x18) <= pbVar13 + 1) goto LAB_013384a8;
                uVar14 = CONCAT11(bVar4,pbVar13[1]);
              }
              pcVar7 = (char *)WasmOpcodes::OpcodeName(uVar14);
              if (10 < uVar16) goto LAB_013384e0;
LAB_013384b8:
              pcVar9 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                 (-(uVar17 >> 7) & 0xfffffffffffff800 | uVar17 << 3));
            }
            else {
LAB_013384a8:
              pcVar7 = "<end>";
              if (uVar16 < 0xb) goto LAB_013384b8;
LAB_013384e0:
              pcVar9 = "<unknown>";
            }
            Decoder::errorf((uchar *)this,(char *)pbVar13,
                            "%s[%d] expected type %s, found %s of type %s",pcVar6,0,pcVar15,pcVar7,
                            pcVar9);
          }
        }
      }
    }
    else {
      if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
        pbVar13 = *(byte **)(this + 0x10);
        if (pbVar13 < *(byte **)(this + 0x18)) {
          bVar2 = *pbVar13;
          uVar14 = (ushort)bVar2;
          uVar17 = WasmOpcodes::IsPrefixOpcode(uVar14);
          if ((uVar17 & 1) != 0) {
            if (*(byte **)(this + 0x18) <= pbVar13 + 1) goto LAB_01338364;
            uVar14 = CONCAT11(bVar2,pbVar13[1]);
          }
          pcVar6 = (char *)WasmOpcodes::OpcodeName(uVar14);
        }
        else {
LAB_01338364:
          pcVar6 = "<end>";
        }
        Decoder::errorf((uchar *)this,(char *)pbVar13,"%s found empty stack",pcVar6);
      }
      pbVar13 = *(byte **)(this + 0x10);
      uVar17 = 10;
      if (bVar4 != 10) goto LAB_013383a0;
    }
    if (*param_3 == 0) {
      return;
    }
    uVar3 = *(undefined1 *)param_3[2];
    puVar11 = *(undefined8 **)(this + 0xa8);
    if (puVar11 < *(undefined8 **)(this + 0xb0)) goto LAB_01338528;
    puVar8 = local_58;
    local_58[0] = uVar3;
    goto LAB_0133854c;
  }
  if (param_3[1] != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  bVar4 = *(byte *)(param_3[2] + *param_3);
  lVar10 = *(long *)(this + 0xa8);
  if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
      (ulong)(lVar10 - *(long *)(this + 0xa0) >> 4)) {
    pbVar13 = *(byte **)(lVar10 + -0x10);
    bVar2 = *(byte *)(lVar10 + -8);
    uVar17 = (ulong)bVar2;
    *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar10 + -0x10);
    if (bVar2 != bVar4) {
LAB_01337fb8:
      uVar16 = (uint)uVar17;
      if ((bVar4 != 7 || uVar16 != 8) && (bVar4 != 6 || 2 < uVar16 - 7)) {
        if ((bVar4 != 10) && ((uVar17 != 10 && (bVar4 != 9 || uVar16 != 8)))) {
          pbVar1 = *(byte **)(this + 0x10);
          if (pbVar1 < *(byte **)(this + 0x18)) {
            bVar2 = *pbVar1;
            uVar14 = (ushort)bVar2;
            uVar5 = WasmOpcodes::IsPrefixOpcode(uVar14);
            if ((uVar5 & 1) != 0) {
              if (*(byte **)(this + 0x18) <= pbVar1 + 1) goto LAB_0133804c;
              uVar14 = CONCAT11(bVar2,pbVar1[1]);
            }
            pcVar6 = (char *)WasmOpcodes::OpcodeName(uVar14);
          }
          else {
LAB_0133804c:
            pcVar6 = "<end>";
          }
          if (bVar4 < 10) {
            pcVar15 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
          }
          else {
            pcVar15 = "<unknown>";
          }
          if (pbVar13 < *(byte **)(this + 0x18)) {
            bVar4 = *pbVar13;
            uVar14 = (ushort)bVar4;
            uVar5 = WasmOpcodes::IsPrefixOpcode(uVar14);
            if ((uVar5 & 1) != 0) {
              if (*(byte **)(this + 0x18) <= pbVar13 + 1) goto LAB_01338190;
              uVar14 = CONCAT11(bVar4,pbVar13[1]);
            }
            pcVar7 = (char *)WasmOpcodes::OpcodeName(uVar14);
            if (10 < uVar16) goto LAB_01338254;
LAB_013381a0:
            pcVar9 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                               (-(uVar17 >> 7) & 0xfffffffffffff800 | uVar17 << 3));
          }
          else {
LAB_01338190:
            pcVar7 = "<end>";
            if (uVar16 < 0xb) goto LAB_013381a0;
LAB_01338254:
            pcVar9 = "<unknown>";
          }
          Decoder::errorf((uchar *)this,(char *)pbVar13,
                          "%s[%d] expected type %s, found %s of type %s",pcVar6,0,pcVar15,pcVar7,
                          pcVar9);
        }
      }
    }
  }
  else {
    if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
      pbVar13 = *(byte **)(this + 0x10);
      if (pbVar13 < *(byte **)(this + 0x18)) {
        bVar2 = *pbVar13;
        uVar14 = (ushort)bVar2;
        uVar17 = WasmOpcodes::IsPrefixOpcode(uVar14);
        if ((uVar17 & 1) != 0) {
          if (*(byte **)(this + 0x18) <= pbVar13 + 1) goto LAB_01337f70;
          uVar14 = CONCAT11(bVar2,pbVar13[1]);
        }
        pcVar6 = (char *)WasmOpcodes::OpcodeName(uVar14);
      }
      else {
LAB_01337f70:
        pcVar6 = "<end>";
      }
      Decoder::errorf((uchar *)this,(char *)pbVar13,"%s found empty stack",pcVar6);
    }
    pbVar13 = *(byte **)(this + 0x10);
    uVar17 = 10;
    if (bVar4 != 10) goto LAB_01337fb8;
  }
  if (*param_3 == 0) {
    return;
  }
  uVar3 = *(undefined1 *)param_3[2];
  puVar11 = *(undefined8 **)(this + 0xa8);
  if (puVar11 < *(undefined8 **)(this + 0xb0)) {
LAB_01338528:
    uVar12 = *(undefined8 *)(this + 0x10);
    *(undefined1 *)(puVar11 + 1) = uVar3;
    *puVar11 = uVar12;
    *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + 0x10;
    return;
  }
  puVar8 = local_54;
  local_54[0] = uVar3;
LAB_0133854c:
  std::__ndk1::
  vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>::
  __emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
            ((vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
              *)(this + 0xa0),(uchar **)(this + 0x10),puVar8);
  return;
}

