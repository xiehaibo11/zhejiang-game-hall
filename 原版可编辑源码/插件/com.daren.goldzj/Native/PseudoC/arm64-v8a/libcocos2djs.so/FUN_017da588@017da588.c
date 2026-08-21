
void FUN_017da588(uchar *param_1,undefined4 param_2,char param_3,byte param_4,byte param_5)

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
  ushort uVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  char local_44 [4];
  
  lVar7 = *(long *)(param_1 + 0x4c0);
  if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
      (ulong)(lVar7 - *(long *)(param_1 + 0x4b8) >> 4)) {
    pbVar12 = *(byte **)(lVar7 + -0x10);
    bVar2 = *(byte *)(lVar7 + -8);
    uVar14 = (ulong)bVar2;
    *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar7 + -0x10);
    if (bVar2 != param_5) {
LAB_017da674:
      uVar13 = (uint)uVar14;
      if ((param_5 != 7 || uVar13 != 8) && (param_5 != 6 || 2 < uVar13 - 7)) {
        if ((param_5 != 10) && ((uVar14 != 10 && (param_5 != 9 || uVar13 != 8)))) {
          pbVar1 = *(byte **)(param_1 + 0x10);
          if (pbVar1 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar1;
            uVar11 = (ushort)bVar2;
            uVar3 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar11);
            if ((uVar3 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar1 + 1) goto LAB_017da710;
              uVar11 = CONCAT11(bVar2,pbVar1[1]);
            }
            pcVar4 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar11);
          }
          else {
LAB_017da710:
            pcVar4 = "<end>";
          }
          if (param_5 < 10) {
            pcVar10 = (&PTR_s_<stmt>_01cdb038)[(char)param_5];
          }
          else {
            pcVar10 = "<unknown>";
          }
          if (pbVar12 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar12;
            uVar11 = (ushort)bVar2;
            uVar3 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar11);
            if ((uVar3 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar12 + 1) goto LAB_017da788;
              uVar11 = CONCAT11(bVar2,pbVar12[1]);
            }
            pcVar5 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar11);
            if (uVar13 < 0xb) goto LAB_017da798;
LAB_017da7c0:
            pcVar6 = "<unknown>";
          }
          else {
LAB_017da788:
            pcVar5 = "<end>";
            if (10 < uVar13) goto LAB_017da7c0;
LAB_017da798:
            pcVar6 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                               (-(uVar14 >> 7) & 0xfffffffffffff800 | uVar14 << 3));
          }
          v8::internal::wasm::Decoder::errorf
                    (param_1,(char *)pbVar12,"%s[%d] expected type %s, found %s of type %s",pcVar4,1
                     ,pcVar10,pcVar5,pcVar6);
        }
      }
    }
  }
  else {
    if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
      pbVar12 = *(byte **)(param_1 + 0x10);
      if (pbVar12 < *(byte **)(param_1 + 0x18)) {
        bVar2 = *pbVar12;
        uVar11 = (ushort)bVar2;
        uVar14 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar11);
        if ((uVar14 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar12 + 1) goto LAB_017da638;
          uVar11 = CONCAT11(bVar2,pbVar12[1]);
        }
        pcVar4 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar11);
      }
      else {
LAB_017da638:
        pcVar4 = "<end>";
      }
      v8::internal::wasm::Decoder::errorf(param_1,(char *)pbVar12,"%s found empty stack",pcVar4);
    }
    pbVar12 = *(byte **)(param_1 + 0x10);
    uVar14 = 10;
    if (param_5 != 10) goto LAB_017da674;
  }
  lVar7 = *(long *)(param_1 + 0x4c0);
  if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
      (ulong)(lVar7 - *(long *)(param_1 + 0x4b8) >> 4)) {
    pbVar12 = *(byte **)(lVar7 + -0x10);
    bVar2 = *(byte *)(lVar7 + -8);
    uVar14 = (ulong)bVar2;
    *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar7 + -0x10);
    if (bVar2 != param_4) {
LAB_017da8a4:
      uVar13 = (uint)uVar14;
      if ((param_4 != 7 || uVar13 != 8) && (param_4 != 6 || 2 < uVar13 - 7)) {
        if ((param_4 != 10) && ((uVar14 != 10 && (param_4 != 9 || uVar13 != 8)))) {
          pbVar1 = *(byte **)(param_1 + 0x10);
          if (pbVar1 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar1;
            uVar11 = (ushort)bVar2;
            uVar3 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar11);
            if ((uVar3 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar1 + 1) goto LAB_017da940;
              uVar11 = CONCAT11(bVar2,pbVar1[1]);
            }
            pcVar4 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar11);
          }
          else {
LAB_017da940:
            pcVar4 = "<end>";
          }
          if (param_4 < 10) {
            pcVar10 = (&PTR_s_<stmt>_01cdb038)[(char)param_4];
          }
          else {
            pcVar10 = "<unknown>";
          }
          if (pbVar12 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar12;
            uVar11 = (ushort)bVar2;
            uVar3 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar11);
            if ((uVar3 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar12 + 1) goto LAB_017da9b8;
              uVar11 = CONCAT11(bVar2,pbVar12[1]);
            }
            pcVar5 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar11);
            if (uVar13 < 0xb) goto LAB_017da9c8;
LAB_017da9f0:
            pcVar6 = "<unknown>";
          }
          else {
LAB_017da9b8:
            pcVar5 = "<end>";
            if (10 < uVar13) goto LAB_017da9f0;
LAB_017da9c8:
            pcVar6 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                               (-(uVar14 >> 7) & 0xfffffffffffff800 | uVar14 << 3));
          }
          v8::internal::wasm::Decoder::errorf
                    (param_1,(char *)pbVar12,"%s[%d] expected type %s, found %s of type %s",pcVar4,0
                     ,pcVar10,pcVar5,pcVar6);
        }
      }
    }
  }
  else {
    if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
      pbVar12 = *(byte **)(param_1 + 0x10);
      if (pbVar12 < *(byte **)(param_1 + 0x18)) {
        bVar2 = *pbVar12;
        uVar11 = (ushort)bVar2;
        uVar14 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar11);
        if ((uVar14 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar12 + 1) goto LAB_017da868;
          uVar11 = CONCAT11(bVar2,pbVar12[1]);
        }
        pcVar4 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar11);
      }
      else {
LAB_017da868:
        pcVar4 = "<end>";
      }
      v8::internal::wasm::Decoder::errorf(param_1,(char *)pbVar12,"%s found empty stack",pcVar4);
    }
    pbVar12 = *(byte **)(param_1 + 0x10);
    uVar14 = 10;
    if (param_4 != 10) goto LAB_017da8a4;
  }
  if (param_3 != '\0') {
    puVar8 = *(undefined8 **)(param_1 + 0x4c0);
    local_44[0] = param_3;
    if (*(undefined8 **)(param_1 + 0x4c8) <= puVar8) {
      std::__ndk1::
      vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
      ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                ((vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                  *)(param_1 + 0x4b8),(uchar **)(param_1 + 0x10),local_44);
      bVar2 = param_1[0x30];
      goto joined_r0x017daa50;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    *(char *)(puVar8 + 1) = param_3;
    *puVar8 = uVar9;
    *(long *)(param_1 + 0x4c0) = *(long *)(param_1 + 0x4c0) + 0x10;
  }
  bVar2 = param_1[0x30];
joined_r0x017daa50:
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 0x38) != 0) {
    return;
  }
  if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) == '\0') {
    FUN_017daabc(param_1 + 0x78,param_1,param_2);
  }
  return;
}

