
bool FUN_017e07f4(uchar *param_1,uint *param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  ushort uVar17;
  char *pcVar18;
  long lVar19;
  undefined1 local_64 [4];
  
  uVar2 = *param_2;
  uVar14 = (ulong)(uVar2 - 1);
  if (0 < (int)uVar2) {
    lVar19 = uVar14 << 4;
    uVar8 = (ulong)uVar2;
    do {
      pcVar5 = "<end>";
      puVar9 = param_2 + 2;
      if ((int)uVar8 != 1) {
        puVar9 = (uint *)(*(long *)(param_2 + 2) + lVar19);
      }
      lVar10 = *(long *)(param_1 + 0x4c0);
      bVar4 = (byte)puVar9[2];
      iVar13 = (int)uVar14;
      if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
          (ulong)(lVar10 - *(long *)(param_1 + 0x4b8) >> 4)) {
        pbVar15 = *(byte **)(lVar10 + -0x10);
        bVar3 = *(byte *)(lVar10 + -8);
        uVar14 = (ulong)bVar3;
        *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar10 + -0x10);
        if (bVar3 != bVar4) {
LAB_017e0918:
          uVar16 = (uint)uVar14;
          if ((bVar4 != 7 || uVar16 != 8) && (bVar4 != 6 || 2 < uVar16 - 7)) {
            if ((bVar4 != 10) && ((uVar14 != 10 && (bVar4 != 9 || uVar16 != 8)))) {
              pbVar1 = *(byte **)(param_1 + 0x10);
              if (pbVar1 < *(byte **)(param_1 + 0x18)) {
                bVar3 = *pbVar1;
                uVar17 = (ushort)bVar3;
                uVar8 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar17);
                if ((uVar8 & 1) != 0) {
                  pcVar5 = "<end>";
                  if (*(byte **)(param_1 + 0x18) <= pbVar1 + 1) goto LAB_017e09c8;
                  uVar17 = CONCAT11(bVar3,pbVar1[1]);
                }
                pcVar5 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar17);
              }
LAB_017e09c8:
              pcVar18 = "<unknown>";
              if (bVar4 < 10) {
                pcVar18 = (&PTR_s_<stmt>_01cdb038)[(char)bVar4];
              }
              pcVar6 = "<end>";
              if (pbVar15 < *(byte **)(param_1 + 0x18)) {
                bVar4 = *pbVar15;
                uVar17 = (ushort)bVar4;
                uVar8 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar17);
                if ((uVar8 & 1) != 0) {
                  pcVar6 = "<end>";
                  if (*(byte **)(param_1 + 0x18) <= pbVar15 + 1) goto LAB_017e0a50;
                  uVar17 = CONCAT11(bVar4,pbVar15[1]);
                }
                pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar17);
              }
LAB_017e0a50:
              pcVar7 = "<unknown>";
              if (uVar16 < 0xb) {
                pcVar7 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                   (-(uVar14 >> 7) & 0xfffffffffffff800 | uVar14 << 3));
              }
              v8::internal::wasm::Decoder::errorf
                        (param_1,(char *)pbVar15,"%s[%d] expected type %s, found %s of type %s",
                         pcVar5,(ulong)((param_3 & 1) + iVar13),pcVar18,pcVar6,pcVar7);
            }
          }
        }
      }
      else {
        if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
          pbVar15 = *(byte **)(param_1 + 0x10);
          pcVar18 = pcVar5;
          if (pbVar15 < *(byte **)(param_1 + 0x18)) {
            bVar3 = *pbVar15;
            uVar17 = (ushort)bVar3;
            uVar14 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar17);
            if ((uVar14 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar15 + 1) goto LAB_017e08f8;
              uVar17 = CONCAT11(bVar3,pbVar15[1]);
            }
            pcVar18 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar17);
          }
LAB_017e08f8:
          v8::internal::wasm::Decoder::errorf
                    (param_1,(char *)pbVar15,"%s found empty stack",pcVar18);
        }
        pbVar15 = *(byte **)(param_1 + 0x10);
        uVar14 = 10;
        if (bVar4 != 10) goto LAB_017e0918;
      }
      uVar14 = (ulong)(iVar13 - 1);
      if (iVar13 < 1) goto LAB_017e0ab0;
      uVar8 = (ulong)*param_2;
      lVar19 = lVar19 + -0x10;
    } while( true );
  }
LAB_017e0b3c:
  if ((param_1[0x30] & 1) == 0) {
    uVar14 = (ulong)(param_1[0x30] >> 1);
  }
  else {
    uVar14 = *(ulong *)(param_1 + 0x38);
  }
  return uVar14 == 0;
LAB_017e0ab0:
  if (0 < (int)uVar2) {
    lVar19 = 0;
    do {
      puVar9 = param_2 + 2;
      if (*param_2 != 1) {
        puVar9 = (uint *)(*(long *)(param_2 + 2) + lVar19);
      }
      local_64[0] = (undefined1)puVar9[2];
      puVar11 = *(undefined8 **)(param_1 + 0x4c0);
      if (puVar11 < *(undefined8 **)(param_1 + 0x4c8)) {
        uVar12 = *(undefined8 *)(param_1 + 0x10);
        *(undefined1 *)(puVar11 + 1) = local_64[0];
        *puVar11 = uVar12;
        *(long *)(param_1 + 0x4c0) = *(long *)(param_1 + 0x4c0) + 0x10;
      }
      else {
        std::__ndk1::
        vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
        ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                  ((vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                    *)(param_1 + 0x4b8),(uchar **)(param_1 + 0x10),local_64);
      }
      lVar19 = lVar19 + 0x10;
    } while ((ulong)uVar2 * 0x10 - lVar19 != 0);
  }
  goto LAB_017e0b3c;
}

