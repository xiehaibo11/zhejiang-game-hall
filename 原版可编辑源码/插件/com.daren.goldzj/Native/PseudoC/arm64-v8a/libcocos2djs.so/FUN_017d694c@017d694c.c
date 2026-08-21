
void FUN_017d694c(uchar *param_1,undefined4 param_2,char param_3,byte param_4)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  byte *pbVar11;
  ushort uVar12;
  uint uVar13;
  ulong uVar14;
  char local_54 [4];
  
  lVar7 = *(long *)(param_1 + 0x4c0);
  if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
      (ulong)(lVar7 - *(long *)(param_1 + 0x4b8) >> 4)) {
    pbVar11 = *(byte **)(lVar7 + -0x10);
    bVar2 = *(byte *)(lVar7 + -8);
    uVar14 = (ulong)bVar2;
    *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar7 + -0x10);
    if (bVar2 != param_4) {
LAB_017d6a34:
      uVar13 = (uint)uVar14;
      if ((param_4 != 7 || uVar13 != 8) && (param_4 != 6 || 2 < uVar13 - 7)) {
        if ((param_4 != 10) && ((uVar14 != 10 && (param_4 != 9 || uVar13 != 8)))) {
          pbVar1 = *(byte **)(param_1 + 0x10);
          if (pbVar1 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar1;
            uVar12 = (ushort)bVar2;
            uVar3 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar12);
            if ((uVar3 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar1 + 1) goto LAB_017d6ad0;
              uVar12 = CONCAT11(bVar2,pbVar1[1]);
            }
            pcVar4 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar12);
          }
          else {
LAB_017d6ad0:
            pcVar4 = "<end>";
          }
          if (param_4 < 10) {
            pcVar10 = (&PTR_s_<stmt>_01cdb038)[(char)param_4];
          }
          else {
            pcVar10 = "<unknown>";
          }
          if (pbVar11 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar11;
            uVar12 = (ushort)bVar2;
            uVar3 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar12);
            if ((uVar3 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar11 + 1) goto LAB_017d6b48;
              uVar12 = CONCAT11(bVar2,pbVar11[1]);
            }
            pcVar5 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar12);
            if (uVar13 < 0xb) goto LAB_017d6b58;
LAB_017d6b80:
            pcVar6 = "<unknown>";
          }
          else {
LAB_017d6b48:
            pcVar5 = "<end>";
            if (10 < uVar13) goto LAB_017d6b80;
LAB_017d6b58:
            pcVar6 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                               (-(uVar14 >> 7) & 0xfffffffffffff800 | uVar14 << 3));
          }
          v8::internal::wasm::Decoder::errorf
                    (param_1,(char *)pbVar11,"%s[%d] expected type %s, found %s of type %s",pcVar4,0
                     ,pcVar10,pcVar5,pcVar6);
        }
      }
    }
  }
  else {
    if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
      pbVar11 = *(byte **)(param_1 + 0x10);
      if (pbVar11 < *(byte **)(param_1 + 0x18)) {
        bVar2 = *pbVar11;
        uVar12 = (ushort)bVar2;
        uVar14 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar12);
        if ((uVar14 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar11 + 1) goto LAB_017d69f8;
          uVar12 = CONCAT11(bVar2,pbVar11[1]);
        }
        pcVar4 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar12);
      }
      else {
LAB_017d69f8:
        pcVar4 = "<end>";
      }
      v8::internal::wasm::Decoder::errorf(param_1,(char *)pbVar11,"%s found empty stack",pcVar4);
    }
    pbVar11 = *(byte **)(param_1 + 0x10);
    uVar14 = 10;
    if (param_4 != 10) goto LAB_017d6a34;
  }
  if (param_3 != '\0') {
    puVar8 = *(undefined8 **)(param_1 + 0x4c0);
    local_54[0] = param_3;
    if (*(undefined8 **)(param_1 + 0x4c8) <= puVar8) {
      std::__ndk1::
      vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
      ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                ((vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                  *)(param_1 + 0x4b8),(uchar **)(param_1 + 0x10),local_54);
      bVar2 = param_1[0x30];
      goto joined_r0x017d6be0;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    *(char *)(puVar8 + 1) = param_3;
    *puVar8 = uVar9;
    *(long *)(param_1 + 0x4c0) = *(long *)(param_1 + 0x4c0) + 0x10;
  }
  bVar2 = param_1[0x30];
joined_r0x017d6be0:
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 0x38) != 0) {
    return;
  }
  if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) == '\0') {
    FUN_017d6c4c(param_1 + 0x78,param_1,param_2);
  }
  return;
}

