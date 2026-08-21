
uint FUN_015d996c(Decoder *param_1,undefined4 param_2)

{
  uchar *puVar1;
  undefined8 *puVar2;
  char cVar3;
  byte bVar4;
  Decoder DVar5;
  byte bVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 uVar14;
  ulong uVar15;
  char *pcVar16;
  char *pcVar17;
  long lVar18;
  Zone *pZVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  Node *pNVar24;
  uint uVar25;
  byte *pbVar26;
  Node *pNVar27;
  byte *pbVar28;
  ushort uVar29;
  uint uVar30;
  char *pcVar31;
  Node *pNVar32;
  undefined8 uVar33;
  undefined1 *local_190;
  Node *local_188;
  uint local_170 [2];
  uint local_168;
  uint local_160;
  undefined8 local_158;
  undefined1 *local_150;
  undefined4 *local_148;
  undefined1 auStack_140 [192];
  undefined4 local_80;
  undefined3 uStack_7c;
  undefined4 uStack_78;
  undefined3 uStack_74;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  plVar11 = (long *)v8::internal::wasm::WasmOpcodes::Signature(param_2);
  if (plVar11 == (long *)0x0) {
switchD_015d99d4_default:
    v8::internal::wasm::Decoder::error(param_1,"invalid numeric opcode");
    goto LAB_015d99fc;
  }
  switch(param_2) {
  case 0xfc00:
  case 0xfc01:
  case 0xfc02:
  case 0xfc03:
  case 0xfc04:
  case 0xfc05:
  case 0xfc06:
  case 0xfc07:
    FUN_015dcdb8(param_1,param_2,plVar11);
    break;
  case 0xfc08:
    lVar18 = *(long *)(param_1 + 0x10);
    local_158 = (undefined1 *)((ulong)local_158 & 0xffffffff00000000);
    uVar8 = v8::internal::wasm::Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                      (param_1,(uchar *)(lVar18 + 2),(uint *)&local_158,"data segment index");
    puVar1 = (uchar *)(lVar18 + ((ulong)local_158 & 0xffffffff) + 2);
    if ((*(uchar **)(param_1 + 0x18) < puVar1) || ((int)*(uchar **)(param_1 + 0x18) == (int)puVar1))
    {
      v8::internal::wasm::Decoder::error(param_1,puVar1,"memory index");
      lVar18 = *(long *)(param_1 + 0x48);
    }
    else {
      if (*puVar1 != '\0') {
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)puVar1,"expected memory index 0, found %u");
      }
      lVar18 = *(long *)(param_1 + 0x48);
    }
    if ((lVar18 != 0) && (uVar8 < *(uint *)(lVar18 + 0x4c))) {
      uVar10 = (uint)local_158 + 1;
      if (*(char *)(lVar18 + 0x12) == '\0') {
        pbVar28 = (byte *)(*(long *)(param_1 + 0x10) + (ulong)uVar10 + -1);
        goto LAB_015d9dd0;
      }
      lVar18 = *(long *)(param_1 + 0xb8);
      uVar21 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
      bVar6 = *(byte *)(*plVar11 + plVar11[2] + 2);
      uVar15 = (lVar18 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
      if (uVar15 < uVar21 || uVar15 - uVar21 == 0) {
        if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
          pbVar28 = *(byte **)(param_1 + 0x10);
          if (pbVar28 < *(byte **)(param_1 + 0x18)) {
            bVar4 = *pbVar28;
            uVar29 = (ushort)bVar4;
            uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
            if ((uVar15 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015dacd8;
              uVar29 = CONCAT11(bVar4,pbVar28[1]);
            }
            pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
          }
          else {
LAB_015dacd8:
            pcVar12 = "<end>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar28,"%s found empty stack",pcVar12);
        }
        pbVar28 = *(byte **)(param_1 + 0x10);
        local_188 = (Node *)0x0;
        uVar9 = 10;
      }
      else {
        pbVar28 = *(byte **)(lVar18 + -0x18);
        uVar9 = (uint)*(byte *)(lVar18 + -0x10);
        local_188 = *(Node **)(lVar18 + -8);
        *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar18 + -0x18);
      }
      if (uVar9 != bVar6) {
        if ((bVar6 != 7 || uVar9 != 8) && (bVar6 != 6 || 2 < uVar9 - 7)) {
          if ((bVar6 != 10) && ((uVar9 != 10 && (bVar6 != 9 || uVar9 != 8)))) {
            pbVar26 = *(byte **)(param_1 + 0x10);
            if (pbVar26 < *(byte **)(param_1 + 0x18)) {
              bVar4 = *pbVar26;
              uVar29 = (ushort)bVar4;
              uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
              if ((uVar15 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar26 + 1) goto LAB_015db4ac;
                uVar29 = CONCAT11(bVar4,pbVar26[1]);
              }
              pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
            }
            else {
LAB_015db4ac:
              pcVar12 = "<end>";
            }
            if (bVar6 < 10) {
              pcVar31 = (&PTR_s_<stmt>_01cc9818)[(char)bVar6];
            }
            else {
              pcVar31 = "<unknown>";
            }
            if (pbVar28 < *(byte **)(param_1 + 0x18)) {
              bVar6 = *pbVar28;
              uVar29 = (ushort)bVar6;
              uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
              if ((uVar15 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015dc1a8;
                uVar29 = CONCAT11(bVar6,pbVar28[1]);
              }
              pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
              if (uVar9 < 0xb) goto LAB_015dc1b8;
LAB_015dc554:
              pcVar17 = "<unknown>";
            }
            else {
LAB_015dc1a8:
              pcVar13 = "<end>";
              if (10 < uVar9) goto LAB_015dc554;
LAB_015dc1b8:
              pcVar17 = (&PTR_s_<stmt>_01cc9868)[(char)uVar9];
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar28,
                       "%s[%d] expected type %s, found %s of type %s",pcVar12,2,pcVar31,pcVar13,
                       pcVar17);
          }
        }
      }
      lVar18 = *(long *)(param_1 + 0xb8);
      uVar21 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
      bVar6 = *(byte *)(*plVar11 + plVar11[2] + 1);
      uVar15 = (lVar18 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
      if (uVar15 < uVar21 || uVar15 - uVar21 == 0) {
        if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
          pbVar28 = *(byte **)(param_1 + 0x10);
          if (pbVar28 < *(byte **)(param_1 + 0x18)) {
            bVar4 = *pbVar28;
            uVar29 = (ushort)bVar4;
            uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
            if ((uVar15 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015db4a0;
              uVar29 = CONCAT11(bVar4,pbVar28[1]);
            }
            pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
          }
          else {
LAB_015db4a0:
            pcVar12 = "<end>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar28,"%s found empty stack",pcVar12);
        }
        pbVar28 = *(byte **)(param_1 + 0x10);
        pNVar32 = (Node *)0x0;
        uVar9 = 10;
        if (bVar6 != 10) goto LAB_015db578;
      }
      else {
        pbVar28 = *(byte **)(lVar18 + -0x18);
        bVar4 = *(byte *)(lVar18 + -0x10);
        uVar9 = (uint)bVar4;
        pNVar32 = *(Node **)(lVar18 + -8);
        *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar18 + -0x18);
        if (bVar4 != bVar6) {
LAB_015db578:
          if ((bVar6 != 7 || uVar9 != 8) && (bVar6 != 6 || 2 < uVar9 - 7)) {
            if ((bVar6 != 10) && ((uVar9 != 10 && (bVar6 != 9 || uVar9 != 8)))) {
              pbVar26 = *(byte **)(param_1 + 0x10);
              if (pbVar26 < *(byte **)(param_1 + 0x18)) {
                bVar4 = *pbVar26;
                uVar29 = (ushort)bVar4;
                uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
                if ((uVar15 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar26 + 1) goto LAB_015db610;
                  uVar29 = CONCAT11(bVar4,pbVar26[1]);
                }
                pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
              }
              else {
LAB_015db610:
                pcVar12 = "<end>";
              }
              if (bVar6 < 10) {
                pcVar31 = (&PTR_s_<stmt>_01cc9818)[(char)bVar6];
              }
              else {
                pcVar31 = "<unknown>";
              }
              if (pbVar28 < *(byte **)(param_1 + 0x18)) {
                bVar6 = *pbVar28;
                uVar29 = (ushort)bVar6;
                uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
                if ((uVar15 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015dc234;
                  uVar29 = CONCAT11(bVar6,pbVar28[1]);
                }
                pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
                if (uVar9 < 0xb) goto LAB_015dc244;
LAB_015dc598:
                pcVar17 = "<unknown>";
              }
              else {
LAB_015dc234:
                pcVar13 = "<end>";
                if (10 < uVar9) goto LAB_015dc598;
LAB_015dc244:
                pcVar17 = (&PTR_s_<stmt>_01cc9868)[(char)uVar9];
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar28,
                         "%s[%d] expected type %s, found %s of type %s",pcVar12,1,pcVar31,pcVar13,
                         pcVar17);
            }
          }
        }
      }
      lVar18 = *(long *)(param_1 + 0xb8);
      bVar6 = *(byte *)(plVar11[2] + *plVar11);
      uVar15 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
      uVar21 = (lVar18 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
      if (uVar21 < uVar15 || uVar21 - uVar15 == 0) {
        if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
          pbVar28 = *(byte **)(param_1 + 0x10);
          if (pbVar28 < *(byte **)(param_1 + 0x18)) {
            bVar4 = *pbVar28;
            uVar29 = (ushort)bVar4;
            uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
            if ((uVar15 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015dc658;
              uVar29 = CONCAT11(bVar4,pbVar28[1]);
            }
            pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
          }
          else {
LAB_015dc658:
            pcVar12 = "<end>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar28,"%s found empty stack",pcVar12);
        }
        pbVar28 = *(byte **)(param_1 + 0x10);
        pNVar27 = (Node *)0x0;
        uVar9 = 10;
        if (bVar6 != 10) goto LAB_015dc698;
      }
      else {
        pbVar28 = *(byte **)(lVar18 + -0x18);
        bVar4 = *(byte *)(lVar18 + -0x10);
        uVar9 = (uint)bVar4;
        pNVar27 = *(Node **)(lVar18 + -8);
        *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar18 + -0x18);
        if (bVar4 != bVar6) {
LAB_015dc698:
          if ((bVar6 != 7 || uVar9 != 8) && (bVar6 != 6 || 2 < uVar9 - 7)) {
            if ((bVar6 != 10) && ((uVar9 != 10 && (bVar6 != 9 || uVar9 != 8)))) {
              pbVar26 = *(byte **)(param_1 + 0x10);
              if (pbVar26 < *(byte **)(param_1 + 0x18)) {
                bVar4 = *pbVar26;
                uVar29 = (ushort)bVar4;
                uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
                if ((uVar15 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar26 + 1) goto LAB_015dc730;
                  uVar29 = CONCAT11(bVar4,pbVar26[1]);
                }
                pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
              }
              else {
LAB_015dc730:
                pcVar12 = "<end>";
              }
              if (bVar6 < 10) {
                pcVar31 = (&PTR_s_<stmt>_01cc9818)[(char)bVar6];
              }
              else {
                pcVar31 = "<unknown>";
              }
              if (pbVar28 < *(byte **)(param_1 + 0x18)) {
                bVar6 = *pbVar28;
                uVar29 = (ushort)bVar6;
                uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
                if ((uVar15 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015dc7a4;
                  uVar29 = CONCAT11(bVar6,pbVar28[1]);
                }
                pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
                if (uVar9 < 0xb) goto LAB_015dc7b4;
LAB_015dc7dc:
                pcVar17 = "<unknown>";
              }
              else {
LAB_015dc7a4:
                pcVar13 = "<end>";
                if (10 < uVar9) goto LAB_015dc7dc;
LAB_015dc7b4:
                pcVar17 = (&PTR_s_<stmt>_01cc9868)[(char)uVar9];
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar28,
                         "%s[%d] expected type %s, found %s of type %s",pcVar12,0,pcVar31,pcVar13,
                         pcVar17);
            }
          }
        }
      }
      if (((byte)param_1[0x30] & 1) == 0) {
        if ((byte)param_1[0x30] >> 1 != 0) goto LAB_015d9a00;
      }
      else if (*(long *)(param_1 + 0x38) != 0) goto LAB_015d9a00;
      if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\0') goto LAB_015d9a00;
      uVar14 = v8::internal::compiler::WasmGraphBuilder::MemoryInit
                         (*(WasmGraphBuilder **)(param_1 + 0x80),uVar8,pNVar27,pNVar32,local_188,
                          *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
      goto LAB_015dcd18;
    }
    v8::internal::wasm::Decoder::errorf
              ((uchar *)param_1,(char *)(*(long *)(param_1 + 0x10) + 2),
               "invalid data segment index: %u",(ulong)uVar8);
    break;
  case 0xfc09:
    uVar8 = v8::internal::wasm::Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                      (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 2),
                       (uint *)((ulong)&local_158 | 4),"data segment index");
    uVar10 = local_158._4_4_;
    local_158 = (undefined1 *)CONCAT44(local_158._4_4_,uVar8);
    if ((*(long *)(param_1 + 0x48) != 0) && (uVar8 < *(uint *)(*(long *)(param_1 + 0x48) + 0x4c))) {
      if (((byte)param_1[0x30] & 1) == 0) {
        if ((byte)param_1[0x30] >> 1 != 0) goto LAB_015d9a00;
      }
      else if (*(long *)(param_1 + 0x38) != 0) goto LAB_015d9a00;
      if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\0') goto LAB_015d9a00;
      uVar14 = v8::internal::compiler::WasmGraphBuilder::DataDrop
                         ((uint)*(undefined8 *)(param_1 + 0x80),uVar8);
      goto LAB_015dcd18;
    }
    lVar18 = *(long *)(param_1 + 0x10);
    pcVar12 = "invalid data segment index: %u";
LAB_015d9f20:
    v8::internal::wasm::Decoder::errorf((uchar *)param_1,(char *)(lVar18 + 2),pcVar12);
    break;
  case 0xfc0a:
    lVar18 = *(long *)(param_1 + 0x10);
    puVar1 = (uchar *)(lVar18 + 2);
    if ((*(uchar **)(param_1 + 0x18) < puVar1) || ((int)*(uchar **)(param_1 + 0x18) == (int)puVar1))
    {
      v8::internal::wasm::Decoder::error(param_1,puVar1,"memory index");
    }
    else if (*puVar1 != '\0') {
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)puVar1,"expected memory index 0, found %u");
    }
    puVar1 = (uchar *)(lVar18 + 3);
    if ((*(uchar **)(param_1 + 0x18) < puVar1) || ((int)*(uchar **)(param_1 + 0x18) == (int)puVar1))
    {
      v8::internal::wasm::Decoder::error(param_1,puVar1,"memory index");
    }
    else if (*puVar1 != '\0') {
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)puVar1,"expected memory index 0, found %u");
    }
    pbVar28 = *(byte **)(param_1 + 0x10);
    if ((*(long *)(param_1 + 0x48) != 0) && (*(char *)(*(long *)(param_1 + 0x48) + 0x12) != '\0')) {
      lVar18 = *(long *)(param_1 + 0xb8);
      uVar21 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
      bVar6 = *(byte *)(*plVar11 + plVar11[2] + 2);
      uVar15 = (lVar18 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
      if (uVar15 < uVar21 || uVar15 - uVar21 == 0) {
        pbVar26 = pbVar28;
        if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
          if (pbVar28 < *(byte **)(param_1 + 0x18)) {
            bVar4 = *pbVar28;
            uVar29 = (ushort)bVar4;
            uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
            if ((uVar15 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015dac10;
              uVar29 = CONCAT11(bVar4,pbVar28[1]);
            }
            pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
          }
          else {
LAB_015dac10:
            pcVar12 = "<end>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar28,"%s found empty stack",pcVar12);
          pbVar26 = *(byte **)(param_1 + 0x10);
        }
        pNVar32 = (Node *)0x0;
        uVar10 = 10;
        pbVar28 = pbVar26;
        if (bVar6 != 10) goto LAB_015dadfc;
      }
      else {
        pbVar26 = *(byte **)(lVar18 + -0x18);
        bVar4 = *(byte *)(lVar18 + -0x10);
        uVar10 = (uint)bVar4;
        pNVar32 = *(Node **)(lVar18 + -8);
        *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar18 + -0x18);
        if (bVar4 != bVar6) {
LAB_015dadfc:
          if ((bVar6 != 7 || uVar10 != 8) && (bVar6 != 6 || 2 < uVar10 - 7)) {
            if ((bVar6 != 10) && ((uVar10 != 10 && (bVar6 != 9 || uVar10 != 8)))) {
              if (pbVar28 < *(byte **)(param_1 + 0x18)) {
                bVar4 = *pbVar28;
                uVar29 = (ushort)bVar4;
                uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
                if ((uVar15 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015dae90;
                  uVar29 = CONCAT11(bVar4,pbVar28[1]);
                }
                pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
              }
              else {
LAB_015dae90:
                pcVar12 = "<end>";
              }
              if (bVar6 < 10) {
                pcVar31 = (&PTR_s_<stmt>_01cc9818)[(char)bVar6];
              }
              else {
                pcVar31 = "<unknown>";
              }
              if (pbVar26 < *(byte **)(param_1 + 0x18)) {
                bVar6 = *pbVar26;
                uVar29 = (ushort)bVar6;
                uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
                if ((uVar15 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar26 + 1) goto LAB_015db520;
                  uVar29 = CONCAT11(bVar6,pbVar26[1]);
                }
                pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
                if (uVar10 < 0xb) goto LAB_015db530;
LAB_015db630:
                pcVar17 = "<unknown>";
              }
              else {
LAB_015db520:
                pcVar13 = "<end>";
                if (10 < uVar10) goto LAB_015db630;
LAB_015db530:
                pcVar17 = (&PTR_s_<stmt>_01cc9868)[(char)uVar10];
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar26,
                         "%s[%d] expected type %s, found %s of type %s",pcVar12,2,pcVar31,pcVar13,
                         pcVar17);
            }
          }
        }
      }
      lVar18 = *(long *)(param_1 + 0xb8);
      uVar21 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
      bVar6 = *(byte *)(*plVar11 + plVar11[2] + 1);
      uVar15 = (lVar18 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
      if (uVar15 < uVar21 || uVar15 - uVar21 == 0) {
        if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
          pbVar28 = *(byte **)(param_1 + 0x10);
          if (pbVar28 < *(byte **)(param_1 + 0x18)) {
            bVar4 = *pbVar28;
            uVar29 = (ushort)bVar4;
            uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
            if ((uVar15 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015db6f8;
              uVar29 = CONCAT11(bVar4,pbVar28[1]);
            }
            pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
          }
          else {
LAB_015db6f8:
            pcVar12 = "<end>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar28,"%s found empty stack",pcVar12);
        }
        pbVar28 = *(byte **)(param_1 + 0x10);
        pNVar27 = (Node *)0x0;
        uVar10 = 10;
        if (bVar6 != 10) goto LAB_015db738;
      }
      else {
        pbVar28 = *(byte **)(lVar18 + -0x18);
        bVar4 = *(byte *)(lVar18 + -0x10);
        uVar10 = (uint)bVar4;
        pNVar27 = *(Node **)(lVar18 + -8);
        *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar18 + -0x18);
        if (bVar4 != bVar6) {
LAB_015db738:
          if ((bVar6 != 7 || uVar10 != 8) && (bVar6 != 6 || 2 < uVar10 - 7)) {
            if ((bVar6 != 10) && ((uVar10 != 10 && (bVar6 != 9 || uVar10 != 8)))) {
              pbVar26 = *(byte **)(param_1 + 0x10);
              if (pbVar26 < *(byte **)(param_1 + 0x18)) {
                bVar4 = *pbVar26;
                uVar29 = (ushort)bVar4;
                uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
                if ((uVar15 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar26 + 1) goto LAB_015db7d0;
                  uVar29 = CONCAT11(bVar4,pbVar26[1]);
                }
                pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
              }
              else {
LAB_015db7d0:
                pcVar12 = "<end>";
              }
              if (bVar6 < 10) {
                pcVar31 = (&PTR_s_<stmt>_01cc9818)[(char)bVar6];
              }
              else {
                pcVar31 = "<unknown>";
              }
              if (pbVar28 < *(byte **)(param_1 + 0x18)) {
                bVar6 = *pbVar28;
                uVar29 = (ushort)bVar6;
                uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
                if ((uVar15 & 1) == 0) {
LAB_015db870:
                  pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
                }
                else {
                  if (pbVar28 + 1 < *(byte **)(param_1 + 0x18)) {
                    uVar29 = CONCAT11(bVar6,pbVar28[1]);
                    goto LAB_015db870;
                  }
                  pcVar13 = "<end>";
                }
                if (uVar10 < 0xb) goto LAB_015db858;
LAB_015dc26c:
                pcVar17 = "<unknown>";
              }
              else {
                pcVar13 = "<end>";
                if (10 < uVar10) goto LAB_015dc26c;
LAB_015db858:
                pcVar17 = (&PTR_s_<stmt>_01cc9868)[(char)uVar10];
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar28,
                         "%s[%d] expected type %s, found %s of type %s",pcVar12,1,pcVar31,pcVar13,
                         pcVar17);
            }
          }
        }
      }
      lVar18 = *(long *)(param_1 + 0xb8);
      bVar6 = *(byte *)(plVar11[2] + *plVar11);
      uVar15 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
      uVar21 = (lVar18 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
      if (uVar21 < uVar15 || uVar21 - uVar15 == 0) {
        if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
          pbVar28 = *(byte **)(param_1 + 0x10);
          if (pbVar28 < *(byte **)(param_1 + 0x18)) {
            bVar4 = *pbVar28;
            uVar29 = (ushort)bVar4;
            uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
            if ((uVar15 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015dc328;
              uVar29 = CONCAT11(bVar4,pbVar28[1]);
            }
            pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
          }
          else {
LAB_015dc328:
            pcVar12 = "<end>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar28,"%s found empty stack",pcVar12);
        }
        pbVar28 = *(byte **)(param_1 + 0x10);
        pNVar24 = (Node *)0x0;
        uVar10 = 10;
        if (bVar6 != 10) goto LAB_015dc368;
      }
      else {
        pbVar28 = *(byte **)(lVar18 + -0x18);
        bVar4 = *(byte *)(lVar18 + -0x10);
        uVar10 = (uint)bVar4;
        pNVar24 = *(Node **)(lVar18 + -8);
        *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar18 + -0x18);
        if (bVar4 != bVar6) {
LAB_015dc368:
          if ((bVar6 != 7 || uVar10 != 8) && (bVar6 != 6 || 2 < uVar10 - 7)) {
            if ((bVar6 != 10) && ((uVar10 != 10 && (bVar6 != 9 || uVar10 != 8)))) {
              pbVar26 = *(byte **)(param_1 + 0x10);
              if (pbVar26 < *(byte **)(param_1 + 0x18)) {
                bVar4 = *pbVar26;
                uVar29 = (ushort)bVar4;
                uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
                if ((uVar15 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar26 + 1) goto LAB_015dc400;
                  uVar29 = CONCAT11(bVar4,pbVar26[1]);
                }
                pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
              }
              else {
LAB_015dc400:
                pcVar12 = "<end>";
              }
              if (bVar6 < 10) {
                pcVar31 = (&PTR_s_<stmt>_01cc9818)[(char)bVar6];
              }
              else {
                pcVar31 = "<unknown>";
              }
              if (pbVar28 < *(byte **)(param_1 + 0x18)) {
                bVar6 = *pbVar28;
                uVar29 = (ushort)bVar6;
                uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
                if ((uVar15 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015dc474;
                  uVar29 = CONCAT11(bVar6,pbVar28[1]);
                }
                pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
              }
              else {
LAB_015dc474:
                pcVar13 = "<end>";
              }
              if (uVar10 < 0xb) {
                pcVar17 = (&PTR_s_<stmt>_01cc9868)[(char)uVar10];
              }
              else {
                pcVar17 = "<unknown>";
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar28,
                         "%s[%d] expected type %s, found %s of type %s",pcVar12,0,pcVar31,pcVar13,
                         pcVar17);
            }
          }
        }
      }
      if (((byte)param_1[0x30] & 1) == 0) {
        if ((byte)param_1[0x30] >> 1 == 0) {
LAB_015dc4f0:
          if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) == '\0') {
            uVar14 = v8::internal::compiler::WasmGraphBuilder::MemoryCopy
                               (*(WasmGraphBuilder **)(param_1 + 0x80),pNVar24,pNVar27,pNVar32,
                                *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
            FUN_015ddc44(param_1 + 0x78,param_1,uVar14);
            uVar10 = 2;
            goto LAB_015d9a00;
          }
        }
      }
      else if (*(long *)(param_1 + 0x38) == 0) goto LAB_015dc4f0;
      uVar10 = 2;
      goto LAB_015d9a00;
    }
LAB_015d9dcc:
    pbVar28 = pbVar28 + 2;
LAB_015d9dd0:
    v8::internal::wasm::Decoder::errorf
              ((uchar *)param_1,(char *)pbVar28,"memory instruction with no memory");
    break;
  case 0xfc0b:
    puVar1 = (uchar *)(*(long *)(param_1 + 0x10) + 2);
    if ((*(uchar **)(param_1 + 0x18) < puVar1) || ((int)*(uchar **)(param_1 + 0x18) == (int)puVar1))
    {
      v8::internal::wasm::Decoder::error(param_1,puVar1,"memory index");
    }
    else if (*puVar1 != '\0') {
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)puVar1,"expected memory index 0, found %u");
    }
    pbVar28 = *(byte **)(param_1 + 0x10);
    if ((*(long *)(param_1 + 0x48) == 0) || (*(char *)(*(long *)(param_1 + 0x48) + 0x12) == '\0'))
    goto LAB_015d9dcc;
    lVar18 = *(long *)(param_1 + 0xb8);
    uVar21 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
    bVar6 = *(byte *)(*plVar11 + plVar11[2] + 2);
    uVar15 = (lVar18 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
    if (uVar15 < uVar21 || uVar15 - uVar21 == 0) {
      pbVar26 = pbVar28;
      if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
        if (pbVar28 < *(byte **)(param_1 + 0x18)) {
          bVar4 = *pbVar28;
          uVar29 = (ushort)bVar4;
          uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
          if ((uVar15 & 1) != 0) {
            if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015dac00;
            uVar29 = CONCAT11(bVar4,pbVar28[1]);
          }
          pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
        }
        else {
LAB_015dac00:
          pcVar12 = "<end>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar28,"%s found empty stack",pcVar12);
        pbVar26 = *(byte **)(param_1 + 0x10);
      }
      pNVar32 = (Node *)0x0;
      uVar10 = 10;
      pbVar28 = pbVar26;
      if (bVar6 != 10) goto LAB_015dad20;
    }
    else {
      pbVar26 = *(byte **)(lVar18 + -0x18);
      bVar4 = *(byte *)(lVar18 + -0x10);
      uVar10 = (uint)bVar4;
      pNVar32 = *(Node **)(lVar18 + -8);
      *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar18 + -0x18);
      if (bVar4 != bVar6) {
LAB_015dad20:
        if ((bVar6 != 7 || uVar10 != 8) && (bVar6 != 6 || 2 < uVar10 - 7)) {
          if ((bVar6 != 10) && ((uVar10 != 10 && (bVar6 != 9 || uVar10 != 8)))) {
            if (pbVar28 < *(byte **)(param_1 + 0x18)) {
              bVar4 = *pbVar28;
              uVar29 = (ushort)bVar4;
              uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
              if ((uVar15 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015dadb4;
                uVar29 = CONCAT11(bVar4,pbVar28[1]);
              }
              pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
            }
            else {
LAB_015dadb4:
              pcVar12 = "<end>";
            }
            if (bVar6 < 10) {
              pcVar31 = (&PTR_s_<stmt>_01cc9818)[(char)bVar6];
            }
            else {
              pcVar31 = "<unknown>";
            }
            if (pbVar26 < *(byte **)(param_1 + 0x18)) {
              bVar6 = *pbVar26;
              uVar29 = (ushort)bVar6;
              uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
              if ((uVar15 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar26 + 1) goto LAB_015db0b8;
                uVar29 = CONCAT11(bVar6,pbVar26[1]);
              }
              pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
              if (uVar10 < 0xb) goto LAB_015db0c8;
LAB_015db0f0:
              pcVar17 = "<unknown>";
            }
            else {
LAB_015db0b8:
              pcVar13 = "<end>";
              if (10 < uVar10) goto LAB_015db0f0;
LAB_015db0c8:
              pcVar17 = (&PTR_s_<stmt>_01cc9868)[(char)uVar10];
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar26,
                       "%s[%d] expected type %s, found %s of type %s",pcVar12,2,pcVar31,pcVar13,
                       pcVar17);
          }
        }
      }
    }
    lVar18 = *(long *)(param_1 + 0xb8);
    uVar21 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
    bVar6 = *(byte *)(*plVar11 + plVar11[2] + 1);
    uVar15 = (lVar18 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
    if (uVar15 < uVar21 || uVar15 - uVar21 == 0) {
      if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
        pbVar28 = *(byte **)(param_1 + 0x10);
        if (pbVar28 < *(byte **)(param_1 + 0x18)) {
          bVar4 = *pbVar28;
          uVar29 = (ushort)bVar4;
          uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
          if ((uVar15 & 1) != 0) {
            if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015db1b8;
            uVar29 = CONCAT11(bVar4,pbVar28[1]);
          }
          pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
        }
        else {
LAB_015db1b8:
          pcVar12 = "<end>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar28,"%s found empty stack",pcVar12);
      }
      pbVar28 = *(byte **)(param_1 + 0x10);
      pNVar27 = (Node *)0x0;
      uVar10 = 10;
      if (bVar6 != 10) goto LAB_015db1f8;
    }
    else {
      pbVar28 = *(byte **)(lVar18 + -0x18);
      bVar4 = *(byte *)(lVar18 + -0x10);
      uVar10 = (uint)bVar4;
      pNVar27 = *(Node **)(lVar18 + -8);
      *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar18 + -0x18);
      if (bVar4 != bVar6) {
LAB_015db1f8:
        if ((bVar6 != 7 || uVar10 != 8) && (bVar6 != 6 || 2 < uVar10 - 7)) {
          if ((bVar6 != 10) && ((uVar10 != 10 && (bVar6 != 9 || uVar10 != 8)))) {
            pbVar26 = *(byte **)(param_1 + 0x10);
            if (pbVar26 < *(byte **)(param_1 + 0x18)) {
              bVar4 = *pbVar26;
              uVar29 = (ushort)bVar4;
              uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
              if ((uVar15 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar26 + 1) goto LAB_015db290;
                uVar29 = CONCAT11(bVar4,pbVar26[1]);
              }
              pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
            }
            else {
LAB_015db290:
              pcVar12 = "<end>";
            }
            if (bVar6 < 10) {
              pcVar31 = (&PTR_s_<stmt>_01cc9818)[(char)bVar6];
            }
            else {
              pcVar31 = "<unknown>";
            }
            if (pbVar28 < *(byte **)(param_1 + 0x18)) {
              bVar6 = *pbVar28;
              uVar29 = (ushort)bVar6;
              uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
              if ((uVar15 & 1) == 0) {
LAB_015db330:
                pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
              }
              else {
                if (pbVar28 + 1 < *(byte **)(param_1 + 0x18)) {
                  uVar29 = CONCAT11(bVar6,pbVar28[1]);
                  goto LAB_015db330;
                }
                pcVar13 = "<end>";
              }
              if (uVar10 < 0xb) goto LAB_015db318;
LAB_015dbe68:
              pcVar17 = "<unknown>";
            }
            else {
              pcVar13 = "<end>";
              if (10 < uVar10) goto LAB_015dbe68;
LAB_015db318:
              pcVar17 = (&PTR_s_<stmt>_01cc9868)[(char)uVar10];
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar28,
                       "%s[%d] expected type %s, found %s of type %s",pcVar12,1,pcVar31,pcVar13,
                       pcVar17);
          }
        }
      }
    }
    lVar18 = *(long *)(param_1 + 0xb8);
    bVar6 = *(byte *)(plVar11[2] + *plVar11);
    uVar15 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
    uVar21 = (lVar18 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
    if (uVar21 < uVar15 || uVar21 - uVar15 == 0) {
      if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
        pbVar28 = *(byte **)(param_1 + 0x10);
        if (pbVar28 < *(byte **)(param_1 + 0x18)) {
          bVar4 = *pbVar28;
          uVar29 = (ushort)bVar4;
          uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
          if ((uVar15 & 1) != 0) {
            if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015dbf24;
            uVar29 = CONCAT11(bVar4,pbVar28[1]);
          }
          pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
        }
        else {
LAB_015dbf24:
          pcVar12 = "<end>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar28,"%s found empty stack",pcVar12);
      }
      pbVar28 = *(byte **)(param_1 + 0x10);
      pNVar24 = (Node *)0x0;
      uVar10 = 10;
      if (bVar6 != 10) goto LAB_015dbf64;
    }
    else {
      pbVar28 = *(byte **)(lVar18 + -0x18);
      bVar4 = *(byte *)(lVar18 + -0x10);
      uVar10 = (uint)bVar4;
      pNVar24 = *(Node **)(lVar18 + -8);
      *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar18 + -0x18);
      if (bVar4 != bVar6) {
LAB_015dbf64:
        if ((bVar6 != 7 || uVar10 != 8) && (bVar6 != 6 || 2 < uVar10 - 7)) {
          if ((bVar6 != 10) && ((uVar10 != 10 && (bVar6 != 9 || uVar10 != 8)))) {
            pbVar26 = *(byte **)(param_1 + 0x10);
            if (pbVar26 < *(byte **)(param_1 + 0x18)) {
              bVar4 = *pbVar26;
              uVar29 = (ushort)bVar4;
              uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
              if ((uVar15 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar26 + 1) goto LAB_015dbffc;
                uVar29 = CONCAT11(bVar4,pbVar26[1]);
              }
              pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
            }
            else {
LAB_015dbffc:
              pcVar12 = "<end>";
            }
            if (bVar6 < 10) {
              pcVar31 = (&PTR_s_<stmt>_01cc9818)[(char)bVar6];
            }
            else {
              pcVar31 = "<unknown>";
            }
            if (pbVar28 < *(byte **)(param_1 + 0x18)) {
              bVar6 = *pbVar28;
              uVar29 = (ushort)bVar6;
              uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
              if ((uVar15 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015dc070;
                uVar29 = CONCAT11(bVar6,pbVar28[1]);
              }
              pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
            }
            else {
LAB_015dc070:
              pcVar13 = "<end>";
            }
            if (uVar10 < 0xb) {
              pcVar17 = (&PTR_s_<stmt>_01cc9868)[(char)uVar10];
            }
            else {
              pcVar17 = "<unknown>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar28,
                       "%s[%d] expected type %s, found %s of type %s",pcVar12,0,pcVar31,pcVar13,
                       pcVar17);
          }
        }
      }
    }
    if (((byte)param_1[0x30] & 1) == 0) {
      if ((byte)param_1[0x30] >> 1 == 0) {
LAB_015dc0ec:
        if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) == '\0') {
          uVar14 = v8::internal::compiler::WasmGraphBuilder::MemoryFill
                             (*(WasmGraphBuilder **)(param_1 + 0x80),pNVar24,pNVar27,pNVar32,
                              *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
          FUN_015ddc44(param_1 + 0x78,param_1,uVar14);
          uVar10 = 1;
          goto LAB_015d9a00;
        }
      }
    }
    else if (*(long *)(param_1 + 0x38) == 0) goto LAB_015dc0ec;
    uVar10 = 1;
    goto LAB_015d9a00;
  case 0xfc0c:
    lVar18 = *(long *)(param_1 + 0x10);
    local_170[0] = 0;
    uVar8 = v8::internal::wasm::Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                      (param_1,(uchar *)(lVar18 + 2),local_170,"elem segment index");
    local_158 = (undefined1 *)0x100000000;
    lVar18 = lVar18 + (ulong)local_170[0];
    pbVar28 = (byte *)(lVar18 + 2);
    uVar15 = (ulong)uVar8;
    if (pbVar28 < *(byte **)(param_1 + 0x18)) {
      uVar9 = *pbVar28 & 0x7f;
      if ((char)*pbVar28 < '\0') {
        uVar9 = v8::internal::wasm::Decoder::
                read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                          (param_1,(uchar *)(lVar18 + 3),(uint *)((ulong)&local_158 | 4),
                           "table index",uVar9);
      }
      else {
        local_158 = (undefined1 *)0x100000000;
      }
    }
    else {
      local_158 = (undefined1 *)0x0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar28,"expected %s","table index");
      uVar9 = 0;
    }
    local_158 = (undefined1 *)CONCAT44(local_158._4_4_,uVar9);
    lVar18 = *(long *)(param_1 + 0x48);
    if ((lVar18 != 0) &&
       (uVar21 = (*(long *)(lVar18 + 0x120) - *(long *)(lVar18 + 0x118) >> 3) * 0x6db6db6db6db6db7,
       uVar15 <= uVar21 && uVar21 - uVar15 != 0)) {
      uVar10 = local_170[0] + local_158._4_4_;
      if ((ulong)uVar9 < (ulong)(*(long *)(lVar18 + 0xc0) - *(long *)(lVar18 + 0xb8) >> 4)) {
        local_158 = auStack_140;
        local_148 = &local_80;
        uVar30 = (uint)plVar11[1];
        lVar18 = (long)(int)uVar30;
        if (8 < uVar30) {
          local_150 = local_158;
          FUN_015de7a0(&local_158,lVar18);
        }
        local_150 = local_158 + lVar18 * 0x18;
        if (0 < (int)uVar30) {
          lVar20 = (long)(int)uVar30 * 0x18;
          do {
            uVar30 = uVar30 - 1;
            lVar22 = *(long *)(param_1 + 0xb8);
            uVar21 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
            bVar6 = *(byte *)(plVar11[2] + *plVar11 + lVar18 + -1);
            uVar15 = (lVar22 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
            if (uVar15 < uVar21 || uVar15 - uVar21 == 0) {
              if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
                pbVar28 = *(byte **)(param_1 + 0x10);
                pcVar12 = "<end>";
                if (pbVar28 < *(byte **)(param_1 + 0x18)) {
                  bVar4 = *pbVar28;
                  uVar29 = (ushort)bVar4;
                  uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
                  if ((uVar15 & 1) != 0) {
                    pcVar12 = "<end>";
                    if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015da500;
                    uVar29 = CONCAT11(bVar4,pbVar28[1]);
                  }
                  pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
                }
LAB_015da500:
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar28,"%s found empty stack",pcVar12);
              }
              pcVar12 = *(char **)(param_1 + 0x10);
              uVar14 = 0;
              uVar25 = 10;
            }
            else {
              pcVar12 = *(char **)(lVar22 + -0x18);
              local_80 = *(undefined4 *)(lVar22 + -0xf);
              uVar25 = (uint)*(byte *)(lVar22 + -0x10);
              uStack_74 = (undefined3)((uint)*(undefined4 *)(lVar22 + -0xc) >> 8);
              uVar14 = *(undefined8 *)(lVar22 + -8);
              *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar22 + -0x18);
              uStack_7c = uStack_74;
              uStack_78 = local_80;
            }
            lVar18 = lVar18 + -1;
            if (uVar25 != bVar6) {
              if ((bVar6 != 7 || uVar25 != 8) && (bVar6 != 6 || 2 < uVar25 - 7)) {
                if ((bVar6 != 10) && ((uVar25 != 10 && (bVar6 != 9 || uVar25 != 8)))) {
                  pbVar28 = *(byte **)(param_1 + 0x10);
                  pcVar31 = "<end>";
                  if (pbVar28 < *(byte **)(param_1 + 0x18)) {
                    bVar4 = *pbVar28;
                    uVar29 = (ushort)bVar4;
                    uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode();
                    if ((uVar15 & 1) != 0) {
                      pcVar31 = "<end>";
                      if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015da5f4;
                      uVar29 = CONCAT11(bVar4,pbVar28[1]);
                    }
                    pcVar31 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
                  }
LAB_015da5f4:
                  pcVar13 = "<unknown>";
                  if (bVar6 < 10) {
                    pcVar13 = (&PTR_s_<stmt>_01cc9818)[(char)bVar6];
                  }
                  pcVar17 = "<end>";
                  if (pcVar12 < *(char **)(param_1 + 0x18)) {
                    cVar3 = *pcVar12;
                    uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(cVar3);
                    if ((uVar15 & 1) == 0) {
                      pcVar17 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(cVar3);
                    }
                    else {
                      pcVar17 = "<end>";
                      if (pcVar12 + 1 < *(char **)(param_1 + 0x18)) {
                        pcVar17 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName
                                                    (CONCAT11(cVar3,pcVar12[1]));
                      }
                    }
                  }
                  pcVar16 = "<unknown>";
                  if (uVar25 < 0xb) {
                    pcVar16 = (&PTR_s_<stmt>_01cc9868)[(char)uVar25];
                  }
                  v8::internal::wasm::Decoder::errorf
                            ((uchar *)param_1,pcVar12,"%s[%d] expected type %s, found %s of type %s"
                             ,pcVar31,(ulong)uVar30,pcVar13,pcVar17,pcVar16);
                }
              }
            }
            *(char **)(local_158 + lVar20 + -0x18) = pcVar12;
            local_158[lVar20 + -0x10] = (char)uVar25;
            *(undefined8 *)(local_158 + lVar20 + -8) = uVar14;
            *(uint *)(local_158 + lVar20 + -0xc) = CONCAT31(uStack_7c,local_80._3_1_);
            *(undefined4 *)(local_158 + lVar20 + -0xf) = local_80;
            lVar20 = lVar20 + -0x18;
          } while (0 < lVar18);
        }
        if (((byte)param_1[0x30] & 1) == 0) {
          uVar15 = (ulong)((byte)param_1[0x30] >> 1);
        }
        else {
          uVar15 = *(ulong *)(param_1 + 0x38);
        }
        if ((uVar15 == 0) && (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) == '\0')) {
          uVar14 = v8::internal::compiler::WasmGraphBuilder::TableInit
                             ((uint)*(undefined8 *)(param_1 + 0x80),uVar9,(Node *)(ulong)uVar8,
                              *(Node **)(local_158 + 0x10),*(Node **)(local_158 + 0x28),
                              (int)*(undefined8 *)(local_158 + 0x40));
LAB_015dabd8:
          FUN_015ddc44(param_1 + 0x78,param_1,uVar14);
        }
LAB_015dabe8:
        local_190 = auStack_140;
        if (local_158 != local_190) {
          free(local_158);
        }
        goto LAB_015d9a00;
      }
      pcVar12 = (char *)(~(ulong)local_158._4_4_ + *(long *)(param_1 + 0x10) + (ulong)uVar10);
      goto LAB_015d9f34;
    }
    v8::internal::wasm::Decoder::errorf
              ((uchar *)param_1,(char *)(*(long *)(param_1 + 0x10) + 2),
               "invalid element segment index: %u",uVar15);
    break;
  case 0xfc0d:
    uVar8 = v8::internal::wasm::Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                      (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 2),
                       (uint *)((ulong)&local_158 | 4),"elem segment index");
    uVar10 = local_158._4_4_;
    local_158 = (undefined1 *)CONCAT44(local_158._4_4_,uVar8);
    lVar18 = *(long *)(param_1 + 0x48);
    if ((lVar18 == 0) ||
       (uVar15 = (*(long *)(lVar18 + 0x120) - *(long *)(lVar18 + 0x118) >> 3) * 0x6db6db6db6db6db7,
       uVar15 < uVar8 || uVar15 - uVar8 == 0)) {
      lVar18 = *(long *)(param_1 + 0x10);
      pcVar12 = "invalid element segment index: %u";
      goto LAB_015d9f20;
    }
    if (((byte)param_1[0x30] & 1) == 0) {
      if ((byte)param_1[0x30] >> 1 != 0) goto LAB_015d9a00;
    }
    else if (*(long *)(param_1 + 0x38) != 0) goto LAB_015d9a00;
    if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\0') goto LAB_015d9a00;
    uVar14 = v8::internal::compiler::WasmGraphBuilder::ElemDrop
                       ((uint)*(undefined8 *)(param_1 + 0x80),uVar8);
    goto LAB_015dcd18;
  case 0xfc0e:
    v8::internal::wasm::TableCopyImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
    TableCopyImmediate((TableCopyImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)local_170
                       ,param_1,*(uchar **)(param_1 + 0x10));
    lVar18 = *(long *)(param_1 + 0x48);
    if ((lVar18 == 0) ||
       (uVar15 = *(long *)(lVar18 + 0xc0) - *(long *)(lVar18 + 0xb8) >> 4, uVar15 <= local_168)) {
      pcVar12 = (char *)(*(long *)(param_1 + 0x10) + 1);
    }
    else {
      if (local_170[0] < uVar15) {
        local_158 = auStack_140;
        local_148 = &local_80;
        uVar10 = (uint)plVar11[1];
        lVar18 = (long)(int)uVar10;
        if (8 < uVar10) {
          local_150 = local_158;
          FUN_015de7a0(&local_158,lVar18);
        }
        local_150 = local_158 + lVar18 * 0x18;
        if (0 < (int)uVar10) {
          lVar20 = (long)(int)uVar10 * 0x18;
          do {
            uVar10 = uVar10 - 1;
            lVar22 = *(long *)(param_1 + 0xb8);
            uVar21 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
            bVar6 = *(byte *)(plVar11[2] + *plVar11 + lVar18 + -1);
            uVar15 = (lVar22 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
            if (uVar15 < uVar21 || uVar15 - uVar21 == 0) {
              if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
                pbVar28 = *(byte **)(param_1 + 0x10);
                pcVar12 = "<end>";
                if (pbVar28 < *(byte **)(param_1 + 0x18)) {
                  bVar4 = *pbVar28;
                  uVar29 = (ushort)bVar4;
                  uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
                  if ((uVar15 & 1) != 0) {
                    pcVar12 = "<end>";
                    if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015da0f8;
                    uVar29 = CONCAT11(bVar4,pbVar28[1]);
                  }
                  pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
                }
LAB_015da0f8:
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar28,"%s found empty stack",pcVar12);
              }
              pcVar12 = *(char **)(param_1 + 0x10);
              uVar14 = 0;
              uVar8 = 10;
            }
            else {
              pcVar12 = *(char **)(lVar22 + -0x18);
              local_80 = *(undefined4 *)(lVar22 + -0xf);
              uVar8 = (uint)*(byte *)(lVar22 + -0x10);
              uStack_74 = (undefined3)((uint)*(undefined4 *)(lVar22 + -0xc) >> 8);
              uVar14 = *(undefined8 *)(lVar22 + -8);
              *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar22 + -0x18);
              uStack_7c = uStack_74;
              uStack_78 = local_80;
            }
            lVar18 = lVar18 + -1;
            if (uVar8 != bVar6) {
              if ((bVar6 != 7 || uVar8 != 8) && (bVar6 != 6 || 2 < uVar8 - 7)) {
                if ((bVar6 != 10) && ((uVar8 != 10 && (bVar6 != 9 || uVar8 != 8)))) {
                  pbVar28 = *(byte **)(param_1 + 0x10);
                  pcVar31 = "<end>";
                  if (pbVar28 < *(byte **)(param_1 + 0x18)) {
                    bVar4 = *pbVar28;
                    uVar29 = (ushort)bVar4;
                    uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode();
                    if ((uVar15 & 1) != 0) {
                      pcVar31 = "<end>";
                      if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015da1e4;
                      uVar29 = CONCAT11(bVar4,pbVar28[1]);
                    }
                    pcVar31 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
                  }
LAB_015da1e4:
                  pcVar13 = "<unknown>";
                  if (bVar6 < 10) {
                    pcVar13 = (&PTR_s_<stmt>_01cc9818)[(char)bVar6];
                  }
                  pcVar17 = "<end>";
                  if (pcVar12 < *(char **)(param_1 + 0x18)) {
                    cVar3 = *pcVar12;
                    uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(cVar3);
                    if ((uVar15 & 1) == 0) {
                      pcVar17 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(cVar3);
                    }
                    else {
                      pcVar17 = "<end>";
                      if (pcVar12 + 1 < *(char **)(param_1 + 0x18)) {
                        pcVar17 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName
                                                    (CONCAT11(cVar3,pcVar12[1]));
                      }
                    }
                  }
                  pcVar16 = "<unknown>";
                  if (uVar8 < 0xb) {
                    pcVar16 = (&PTR_s_<stmt>_01cc9868)[(char)uVar8];
                  }
                  v8::internal::wasm::Decoder::errorf
                            ((uchar *)param_1,pcVar12,"%s[%d] expected type %s, found %s of type %s"
                             ,pcVar31,(ulong)uVar10,pcVar13,pcVar17,pcVar16);
                }
              }
            }
            *(char **)(local_158 + lVar20 + -0x18) = pcVar12;
            local_158[lVar20 + -0x10] = (char)uVar8;
            *(undefined8 *)(local_158 + lVar20 + -8) = uVar14;
            *(uint *)(local_158 + lVar20 + -0xc) = CONCAT31(uStack_7c,local_80._3_1_);
            *(undefined4 *)(local_158 + lVar20 + -0xf) = local_80;
            lVar20 = lVar20 + -0x18;
          } while (0 < lVar18);
        }
        if (((byte)param_1[0x30] & 1) == 0) {
          uVar15 = (ulong)((byte)param_1[0x30] >> 1);
        }
        else {
          uVar15 = *(ulong *)(param_1 + 0x38);
        }
        uVar10 = local_160;
        if ((uVar15 == 0) && (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) == '\0')) {
          uVar14 = v8::internal::compiler::WasmGraphBuilder::TableCopy
                             ((uint)*(undefined8 *)(param_1 + 0x80),local_170[0],
                              (Node *)(ulong)local_168,*(Node **)(local_158 + 0x10),
                              *(Node **)(local_158 + 0x28),(int)*(undefined8 *)(local_158 + 0x40));
          goto LAB_015dabd8;
        }
        goto LAB_015dabe8;
      }
      pcVar12 = (char *)(*(long *)(param_1 + 0x10) + 2);
    }
LAB_015d9f34:
    v8::internal::wasm::Decoder::errorf((uchar *)param_1,pcVar12,"invalid table index: %u");
    break;
  case 0xfc0f:
    local_158 = (undefined1 *)0x100000000;
    pbVar28 = (byte *)(*(long *)(param_1 + 0x10) + 2);
    if (pbVar28 < *(byte **)(param_1 + 0x18)) {
      uVar10 = *pbVar28 & 0x7f;
      uVar15 = (ulong)uVar10;
      if ((char)*pbVar28 < '\0') {
        uVar10 = v8::internal::wasm::Decoder::
                 read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                           (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 3),
                            (uint *)((ulong)&local_158 | 4),"table index",uVar10);
        uVar15 = (ulong)uVar10;
      }
      else {
        local_158 = (undefined1 *)0x100000000;
      }
    }
    else {
      local_158 = (undefined1 *)0x0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar28,"expected %s","table index");
      uVar15 = 0;
    }
    uVar10 = local_158._4_4_;
    local_158 = (undefined1 *)CONCAT44(local_158._4_4_,(int)uVar15);
    lVar18 = *(long *)(param_1 + 0x48);
    pbVar28 = *(byte **)(param_1 + 0x10);
    if ((lVar18 != 0) &&
       (uVar15 < (ulong)(*(long *)(lVar18 + 0xc0) - *(long *)(lVar18 + 0xb8) >> 4))) {
      lVar18 = *(long *)(param_1 + 0xb8);
      uVar21 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
      bVar6 = *(byte *)(*plVar11 + plVar11[2] + 1);
      uVar15 = (lVar18 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
      if (uVar15 < uVar21 || uVar15 - uVar21 == 0) {
        pbVar26 = pbVar28;
        if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
          if (pbVar28 < *(byte **)(param_1 + 0x18)) {
            bVar4 = *pbVar28;
            uVar29 = (ushort)bVar4;
            uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
            if ((uVar15 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015dacc0;
              uVar29 = CONCAT11(bVar4,pbVar28[1]);
            }
            pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
          }
          else {
LAB_015dacc0:
            pcVar12 = "<end>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar28,"%s found empty stack",pcVar12);
          pbVar26 = *(byte **)(param_1 + 0x10);
        }
        pNVar32 = (Node *)0x0;
        uVar8 = 10;
        pbVar28 = pbVar26;
        if (bVar6 != 10) goto LAB_015daed4;
      }
      else {
        pbVar26 = *(byte **)(lVar18 + -0x18);
        bVar4 = *(byte *)(lVar18 + -0x10);
        uVar8 = (uint)bVar4;
        pNVar32 = *(Node **)(lVar18 + -8);
        *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar18 + -0x18);
        if (bVar4 != bVar6) {
LAB_015daed4:
          if ((bVar6 != 7 || uVar8 != 8) && (bVar6 != 6 || 2 < uVar8 - 7)) {
            if ((bVar6 != 10) && ((uVar8 != 10 && (bVar6 != 9 || uVar8 != 8)))) {
              if (pbVar28 < *(byte **)(param_1 + 0x18)) {
                bVar4 = *pbVar28;
                uVar29 = (ushort)bVar4;
                uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
                if ((uVar15 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015daf68;
                  uVar29 = CONCAT11(bVar4,pbVar28[1]);
                }
                pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
              }
              else {
LAB_015daf68:
                pcVar12 = "<end>";
              }
              if (bVar6 < 10) {
                pcVar31 = (&PTR_s_<stmt>_01cc9818)[(char)bVar6];
              }
              else {
                pcVar31 = "<unknown>";
              }
              if (pbVar26 < *(byte **)(param_1 + 0x18)) {
                bVar6 = *pbVar26;
                uVar29 = (ushort)bVar6;
                uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
                if ((uVar15 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar26 + 1) goto LAB_015db8e4;
                  uVar29 = CONCAT11(bVar6,pbVar26[1]);
                }
                pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
                if (uVar8 < 0xb) goto LAB_015db8f4;
LAB_015db91c:
                pcVar17 = "<unknown>";
              }
              else {
LAB_015db8e4:
                pcVar13 = "<end>";
                if (10 < uVar8) goto LAB_015db91c;
LAB_015db8f4:
                pcVar17 = (&PTR_s_<stmt>_01cc9868)[(char)uVar8];
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar26,
                         "%s[%d] expected type %s, found %s of type %s",pcVar12,1,pcVar31,pcVar13,
                         pcVar17);
            }
          }
        }
      }
      lVar18 = *(long *)(param_1 + 0xb8);
      uVar21 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
      bVar6 = *(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 0xb8) +
                       ((ulong)local_158 & 0xffffffff) * 0x10);
      uVar15 = (lVar18 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
      if (uVar15 < uVar21 || uVar15 - uVar21 == 0) {
        if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
          pbVar28 = *(byte **)(param_1 + 0x10);
          if (pbVar28 < *(byte **)(param_1 + 0x18)) {
            bVar4 = *pbVar28;
            uVar29 = (ushort)bVar4;
            uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
            if ((uVar15 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015db9e8;
              uVar29 = CONCAT11(bVar4,pbVar28[1]);
            }
            pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
          }
          else {
LAB_015db9e8:
            pcVar12 = "<end>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar28,"%s found empty stack",pcVar12);
        }
        pbVar28 = *(byte **)(param_1 + 0x10);
        pNVar27 = (Node *)0x0;
        uVar8 = 10;
        if (bVar6 != 10) goto LAB_015dba28;
      }
      else {
        pbVar28 = *(byte **)(lVar18 + -0x18);
        bVar4 = *(byte *)(lVar18 + -0x10);
        uVar8 = (uint)bVar4;
        pNVar27 = *(Node **)(lVar18 + -8);
        *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar18 + -0x18);
        if (bVar4 != bVar6) {
LAB_015dba28:
          if ((bVar6 != 7 || uVar8 != 8) && (bVar6 != 6 || 2 < uVar8 - 7)) {
            if ((bVar6 != 10) && ((uVar8 != 10 && (bVar6 != 9 || uVar8 != 8)))) {
              pbVar26 = *(byte **)(param_1 + 0x10);
              if (pbVar26 < *(byte **)(param_1 + 0x18)) {
                bVar4 = *pbVar26;
                uVar29 = (ushort)bVar4;
                uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
                if ((uVar15 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar26 + 1) goto LAB_015dbabc;
                  uVar29 = CONCAT11(bVar4,pbVar26[1]);
                }
                pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
              }
              else {
LAB_015dbabc:
                pcVar12 = "<end>";
              }
              if (bVar6 < 10) {
                pcVar31 = (&PTR_s_<stmt>_01cc9818)[(char)bVar6];
              }
              else {
                pcVar31 = "<unknown>";
              }
              if (pbVar28 < *(byte **)(param_1 + 0x18)) {
                bVar6 = *pbVar28;
                uVar29 = (ushort)bVar6;
                uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
                if ((uVar15 & 1) == 0) {
LAB_015dbb5c:
                  pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
                }
                else {
                  if (pbVar28 + 1 < *(byte **)(param_1 + 0x18)) {
                    uVar29 = CONCAT11(bVar6,pbVar28[1]);
                    goto LAB_015dbb5c;
                  }
                  pcVar13 = "<end>";
                }
                if (uVar8 < 0xb) goto LAB_015dbb44;
LAB_015dc884:
                pcVar17 = "<unknown>";
              }
              else {
                pcVar13 = "<end>";
                if (10 < uVar8) goto LAB_015dc884;
LAB_015dbb44:
                pcVar17 = (&PTR_s_<stmt>_01cc9868)[(char)uVar8];
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar28,
                         "%s[%d] expected type %s, found %s of type %s",pcVar12,0,pcVar31,pcVar13,
                         pcVar17);
            }
          }
        }
      }
      puVar2 = *(undefined8 **)(param_1 + 0xb8);
      if (puVar2 < *(undefined8 **)(param_1 + 0xc0)) {
        uVar14 = *(undefined8 *)(param_1 + 0x10);
        *(undefined1 *)(puVar2 + 1) = 1;
        puVar2[2] = 0;
        *puVar2 = uVar14;
        puVar23 = *(undefined8 **)(param_1 + 0xb8);
        *(undefined8 **)(param_1 + 0xb8) = puVar23 + 3;
        DVar5 = param_1[0x30];
        if (((byte)DVar5 & 1) != 0) goto LAB_015dc9e4;
LAB_015dc8e4:
        if ((byte)DVar5 >> 1 != 0) goto LAB_015d9a00;
      }
      else {
        lVar18 = (long)puVar2 - *(long *)(param_1 + 0xb0) >> 3;
        uVar15 = lVar18 * -0x5555555555555555 + 1;
        if (0x5555555 < uVar15) {
LAB_015dcdb4:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar20 = (long)*(undefined8 **)(param_1 + 0xc0) - *(long *)(param_1 + 0xb0) >> 3;
        uVar21 = lVar20 * 0x5555555555555556;
        if (uVar15 <= uVar21) {
          uVar15 = uVar21;
        }
        if (0x2aaaaa9 < (ulong)(lVar20 * -0x5555555555555555)) {
          uVar15 = 0x5555555;
        }
        if (uVar15 == 0) {
          lVar20 = 0;
        }
        else {
          pZVar19 = *(Zone **)(param_1 + 200);
          uVar21 = uVar15 * 0x18;
          lVar20 = *(long *)(pZVar19 + 0x10);
          if (uVar21 < (ulong)(*(long *)(pZVar19 + 0x18) - lVar20) ||
              uVar21 - (*(long *)(pZVar19 + 0x18) - lVar20) == 0) {
            *(ulong *)(pZVar19 + 0x10) = lVar20 + uVar21;
          }
          else {
            lVar20 = v8::internal::Zone::NewExpand(pZVar19,uVar21);
          }
        }
        uVar14 = *(undefined8 *)(param_1 + 0x10);
        puVar23 = (undefined8 *)(lVar20 + lVar18 * 8);
        *(undefined1 *)(puVar23 + 1) = 1;
        puVar23[2] = 0;
        *puVar23 = uVar14;
        lVar18 = *(long *)(param_1 + 0xb0);
        puVar2 = puVar23;
        for (lVar22 = *(long *)(param_1 + 0xb8); lVar22 != lVar18; lVar22 = lVar22 + -0x18) {
          uVar33 = *(undefined8 *)(lVar22 + -0x10);
          uVar14 = *(undefined8 *)(lVar22 + -0x18);
          puVar2[-1] = *(undefined8 *)(lVar22 + -8);
          puVar2[-2] = uVar33;
          puVar2[-3] = uVar14;
          puVar2 = puVar2 + -3;
        }
        *(undefined8 **)(param_1 + 0xb0) = puVar2;
        *(undefined8 **)(param_1 + 0xb8) = puVar23 + 3;
        *(ulong *)(param_1 + 0xc0) = lVar20 + uVar15 * 0x18;
        DVar5 = param_1[0x30];
        if (((byte)DVar5 & 1) == 0) goto LAB_015dc8e4;
LAB_015dc9e4:
        if (*(long *)(param_1 + 0x38) != 0) goto LAB_015d9a00;
      }
      if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\0') goto LAB_015d9a00;
      uVar14 = v8::internal::compiler::WasmGraphBuilder::TableGrow
                         (*(WasmGraphBuilder **)(param_1 + 0x80),(uint)local_158,pNVar27,pNVar32);
      goto LAB_015dca18;
    }
LAB_015da8ac:
    v8::internal::wasm::Decoder::errorf
              ((uchar *)param_1,(char *)pbVar28,"invalid table index: %u",uVar15);
    break;
  case 0xfc10:
    local_158 = (undefined1 *)0x100000000;
    pbVar28 = (byte *)(*(long *)(param_1 + 0x10) + 2);
    if (pbVar28 < *(byte **)(param_1 + 0x18)) {
      uVar10 = *pbVar28 & 0x7f;
      uVar15 = (ulong)uVar10;
      if ((char)*pbVar28 < '\0') {
        uVar10 = v8::internal::wasm::Decoder::
                 read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                           (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 3),
                            (uint *)((ulong)&local_158 | 4),"table index",uVar10);
        uVar15 = (ulong)uVar10;
      }
      else {
        local_158 = (undefined1 *)0x100000000;
      }
    }
    else {
      local_158 = (undefined1 *)0x0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar28,"expected %s","table index");
      uVar15 = 0;
    }
    uVar10 = local_158._4_4_;
    local_158 = (undefined1 *)CONCAT44(local_158._4_4_,(int)uVar15);
    lVar18 = *(long *)(param_1 + 0x48);
    pbVar28 = *(byte **)(param_1 + 0x10);
    if ((lVar18 == 0) ||
       ((ulong)(*(long *)(lVar18 + 0xc0) - *(long *)(lVar18 + 0xb8) >> 4) <= uVar15))
    goto LAB_015da8ac;
    puVar2 = *(undefined8 **)(param_1 + 0xb8);
    if (puVar2 < *(undefined8 **)(param_1 + 0xc0)) {
      *puVar2 = pbVar28;
      *(undefined1 *)(puVar2 + 1) = 1;
      puVar2[2] = 0;
      puVar23 = *(undefined8 **)(param_1 + 0xb8);
      *(undefined8 **)(param_1 + 0xb8) = puVar23 + 3;
      DVar5 = param_1[0x30];
      if (((byte)DVar5 & 1) != 0) goto LAB_015dac90;
LAB_015da894:
      if ((byte)DVar5 >> 1 != 0) goto LAB_015d9a00;
    }
    else {
      lVar18 = (long)puVar2 - *(long *)(param_1 + 0xb0) >> 3;
      uVar15 = lVar18 * -0x5555555555555555 + 1;
      if (0x5555555 < uVar15) goto LAB_015dcdb4;
      lVar20 = (long)*(undefined8 **)(param_1 + 0xc0) - *(long *)(param_1 + 0xb0) >> 3;
      uVar21 = lVar20 * 0x5555555555555556;
      if (uVar15 <= uVar21) {
        uVar15 = uVar21;
      }
      if (0x2aaaaa9 < (ulong)(lVar20 * -0x5555555555555555)) {
        uVar15 = 0x5555555;
      }
      if (uVar15 == 0) {
        lVar20 = 0;
      }
      else {
        pZVar19 = *(Zone **)(param_1 + 200);
        uVar21 = uVar15 * 0x18;
        lVar20 = *(long *)(pZVar19 + 0x10);
        if (uVar21 < (ulong)(*(long *)(pZVar19 + 0x18) - lVar20) ||
            uVar21 - (*(long *)(pZVar19 + 0x18) - lVar20) == 0) {
          *(ulong *)(pZVar19 + 0x10) = lVar20 + uVar21;
        }
        else {
          lVar20 = v8::internal::Zone::NewExpand(pZVar19,uVar21);
        }
        pbVar28 = *(byte **)(param_1 + 0x10);
      }
      puVar23 = (undefined8 *)(lVar20 + lVar18 * 8);
      *puVar23 = pbVar28;
      *(undefined1 *)(puVar23 + 1) = 1;
      puVar23[2] = 0;
      lVar18 = *(long *)(param_1 + 0xb0);
      puVar2 = puVar23;
      for (lVar22 = *(long *)(param_1 + 0xb8); lVar22 != lVar18; lVar22 = lVar22 + -0x18) {
        uVar33 = *(undefined8 *)(lVar22 + -0x10);
        uVar14 = *(undefined8 *)(lVar22 + -0x18);
        puVar2[-1] = *(undefined8 *)(lVar22 + -8);
        puVar2[-2] = uVar33;
        puVar2[-3] = uVar14;
        puVar2 = puVar2 + -3;
      }
      *(undefined8 **)(param_1 + 0xb0) = puVar2;
      *(undefined8 **)(param_1 + 0xb8) = puVar23 + 3;
      *(ulong *)(param_1 + 0xc0) = lVar20 + uVar15 * 0x18;
      DVar5 = param_1[0x30];
      if (((byte)DVar5 & 1) == 0) goto LAB_015da894;
LAB_015dac90:
      if (*(long *)(param_1 + 0x38) != 0) goto LAB_015d9a00;
    }
    if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\0') goto LAB_015d9a00;
    uVar14 = v8::internal::compiler::WasmGraphBuilder::TableSize
                       (*(WasmGraphBuilder **)(param_1 + 0x80),(uint)local_158);
LAB_015dca18:
    uVar14 = FUN_015ddc44(param_1 + 0x78,param_1,uVar14);
    puVar23[2] = uVar14;
    goto LAB_015d9a00;
  case 0xfc11:
    local_158 = (undefined1 *)0x100000000;
    pbVar28 = (byte *)(*(long *)(param_1 + 0x10) + 2);
    if (pbVar28 < *(byte **)(param_1 + 0x18)) {
      uVar10 = *pbVar28 & 0x7f;
      uVar15 = (ulong)uVar10;
      if ((char)*pbVar28 < '\0') {
        uVar10 = v8::internal::wasm::Decoder::
                 read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                           (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 3),
                            (uint *)((ulong)&local_158 | 4),"table index",uVar10);
        uVar15 = (ulong)uVar10;
      }
      else {
        local_158 = (undefined1 *)0x100000000;
      }
    }
    else {
      local_158 = (undefined1 *)0x0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar28,"expected %s","table index");
      uVar15 = 0;
    }
    uVar10 = local_158._4_4_;
    local_158 = (undefined1 *)CONCAT44(local_158._4_4_,(int)uVar15);
    lVar18 = *(long *)(param_1 + 0x48);
    pbVar28 = *(byte **)(param_1 + 0x10);
    if ((lVar18 == 0) ||
       ((ulong)(*(long *)(lVar18 + 0xc0) - *(long *)(lVar18 + 0xb8) >> 4) <= uVar15))
    goto LAB_015da8ac;
    lVar18 = *(long *)(param_1 + 0xb8);
    uVar21 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
    bVar6 = *(byte *)(*plVar11 + plVar11[2] + 2);
    uVar15 = (lVar18 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
    if (uVar15 < uVar21 || uVar15 - uVar21 == 0) {
      pbVar26 = pbVar28;
      if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
        if (pbVar28 < *(byte **)(param_1 + 0x18)) {
          bVar4 = *pbVar28;
          uVar29 = (ushort)bVar4;
          uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
          if ((uVar15 & 1) != 0) {
            if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015daccc;
            uVar29 = CONCAT11(bVar4,pbVar28[1]);
          }
          pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
        }
        else {
LAB_015daccc:
          pcVar12 = "<end>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar28,"%s found empty stack",pcVar12);
        pbVar26 = *(byte **)(param_1 + 0x10);
      }
      pNVar32 = (Node *)0x0;
      uVar8 = 10;
      pbVar28 = pbVar26;
      if (bVar6 != 10) goto LAB_015dafac;
    }
    else {
      pbVar26 = *(byte **)(lVar18 + -0x18);
      bVar4 = *(byte *)(lVar18 + -0x10);
      uVar8 = (uint)bVar4;
      pNVar32 = *(Node **)(lVar18 + -8);
      *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar18 + -0x18);
      if (bVar4 != bVar6) {
LAB_015dafac:
        if ((bVar6 != 7 || uVar8 != 8) && (bVar6 != 6 || 2 < uVar8 - 7)) {
          if ((bVar6 != 10) && ((uVar8 != 10 && (bVar6 != 9 || uVar8 != 8)))) {
            if (pbVar28 < *(byte **)(param_1 + 0x18)) {
              bVar4 = *pbVar28;
              uVar29 = (ushort)bVar4;
              uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
              if ((uVar15 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015db044;
                uVar29 = CONCAT11(bVar4,pbVar28[1]);
              }
              pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
            }
            else {
LAB_015db044:
              pcVar12 = "<end>";
            }
            if (bVar6 < 10) {
              pcVar31 = (&PTR_s_<stmt>_01cc9818)[(char)bVar6];
            }
            else {
              pcVar31 = "<unknown>";
            }
            if (pbVar26 < *(byte **)(param_1 + 0x18)) {
              bVar6 = *pbVar26;
              uVar29 = (ushort)bVar6;
              uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
              if ((uVar15 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar26 + 1) goto LAB_015dbbd0;
                uVar29 = CONCAT11(bVar6,pbVar26[1]);
              }
              pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
              if (uVar8 < 0xb) goto LAB_015dbbe0;
LAB_015dbc08:
              pcVar17 = "<unknown>";
            }
            else {
LAB_015dbbd0:
              pcVar13 = "<end>";
              if (10 < uVar8) goto LAB_015dbc08;
LAB_015dbbe0:
              pcVar17 = (&PTR_s_<stmt>_01cc9868)[(char)uVar8];
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar26,
                       "%s[%d] expected type %s, found %s of type %s",pcVar12,2,pcVar31,pcVar13,
                       pcVar17);
          }
        }
      }
    }
    lVar18 = *(long *)(param_1 + 0xb8);
    uVar21 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
    bVar6 = *(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 0xb8) +
                     ((ulong)local_158 & 0xffffffff) * 0x10);
    uVar15 = (lVar18 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
    if (uVar15 < uVar21 || uVar15 - uVar21 == 0) {
      if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
        pbVar28 = *(byte **)(param_1 + 0x10);
        if (pbVar28 < *(byte **)(param_1 + 0x18)) {
          bVar4 = *pbVar28;
          uVar29 = (ushort)bVar4;
          uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
          if ((uVar15 & 1) != 0) {
            if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015dbcd0;
            uVar29 = CONCAT11(bVar4,pbVar28[1]);
          }
          pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
        }
        else {
LAB_015dbcd0:
          pcVar12 = "<end>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar28,"%s found empty stack",pcVar12);
      }
      pbVar28 = *(byte **)(param_1 + 0x10);
      pNVar27 = (Node *)0x0;
      uVar8 = 10;
      if (bVar6 != 10) goto LAB_015dbd10;
    }
    else {
      pbVar28 = *(byte **)(lVar18 + -0x18);
      bVar4 = *(byte *)(lVar18 + -0x10);
      uVar8 = (uint)bVar4;
      pNVar27 = *(Node **)(lVar18 + -8);
      *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar18 + -0x18);
      if (bVar4 != bVar6) {
LAB_015dbd10:
        if ((bVar6 != 7 || uVar8 != 8) && (bVar6 != 6 || 2 < uVar8 - 7)) {
          if ((bVar6 != 10) && ((uVar8 != 10 && (bVar6 != 9 || uVar8 != 8)))) {
            pbVar26 = *(byte **)(param_1 + 0x10);
            if (pbVar26 < *(byte **)(param_1 + 0x18)) {
              bVar4 = *pbVar26;
              uVar29 = (ushort)bVar4;
              uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
              if ((uVar15 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar26 + 1) goto LAB_015dbda8;
                uVar29 = CONCAT11(bVar4,pbVar26[1]);
              }
              pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
            }
            else {
LAB_015dbda8:
              pcVar12 = "<end>";
            }
            if (bVar6 < 10) {
              pcVar31 = (&PTR_s_<stmt>_01cc9818)[(char)bVar6];
            }
            else {
              pcVar31 = "<unknown>";
            }
            if (pbVar28 < *(byte **)(param_1 + 0x18)) {
              bVar6 = *pbVar28;
              uVar29 = (ushort)bVar6;
              uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
              if ((uVar15 & 1) == 0) {
LAB_015dbe48:
                pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
              }
              else {
                if (pbVar28 + 1 < *(byte **)(param_1 + 0x18)) {
                  uVar29 = CONCAT11(bVar6,pbVar28[1]);
                  goto LAB_015dbe48;
                }
                pcVar13 = "<end>";
              }
              if (uVar8 < 0xb) goto LAB_015dbe30;
LAB_015dca3c:
              pcVar17 = "<unknown>";
            }
            else {
              pcVar13 = "<end>";
              if (10 < uVar8) goto LAB_015dca3c;
LAB_015dbe30:
              pcVar17 = (&PTR_s_<stmt>_01cc9868)[(char)uVar8];
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar28,
                       "%s[%d] expected type %s, found %s of type %s",pcVar12,1,pcVar31,pcVar13,
                       pcVar17);
          }
        }
      }
    }
    lVar18 = *(long *)(param_1 + 0xb8);
    bVar6 = *(byte *)(plVar11[2] + *plVar11);
    uVar15 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
    uVar21 = (lVar18 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
    if (uVar21 < uVar15 || uVar21 - uVar15 == 0) {
      if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
        pbVar28 = *(byte **)(param_1 + 0x10);
        if (pbVar28 < *(byte **)(param_1 + 0x18)) {
          bVar4 = *pbVar28;
          uVar29 = (ushort)bVar4;
          uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
          if ((uVar15 & 1) != 0) {
            if (*(byte **)(param_1 + 0x18) <= pbVar28 + 1) goto LAB_015dcafc;
            uVar29 = CONCAT11(bVar4,pbVar28[1]);
          }
          pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
        }
        else {
LAB_015dcafc:
          pcVar12 = "<end>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar28,"%s found empty stack",pcVar12);
      }
      pbVar28 = *(byte **)(param_1 + 0x10);
      pNVar24 = (Node *)0x0;
      uVar8 = 10;
      if (bVar6 != 10) goto LAB_015dcb3c;
    }
    else {
      pbVar28 = *(byte **)(lVar18 + -0x18);
      bVar4 = *(byte *)(lVar18 + -0x10);
      uVar8 = (uint)bVar4;
      pNVar24 = *(Node **)(lVar18 + -8);
      *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar18 + -0x18);
      if (bVar4 != bVar6) {
LAB_015dcb3c:
        if ((bVar6 != 7 || uVar8 != 8) && (bVar6 != 6 || 2 < uVar8 - 7)) {
          if ((bVar6 != 10) && ((uVar8 != 10 && (bVar6 != 9 || uVar8 != 8)))) {
            pbVar26 = *(byte **)(param_1 + 0x10);
            if (pbVar26 < *(byte **)(param_1 + 0x18)) {
              bVar4 = *pbVar26;
              uVar29 = (ushort)bVar4;
              uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
              if ((uVar15 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar26 + 1) goto LAB_015dcbd8;
                uVar29 = CONCAT11(bVar4,pbVar26[1]);
              }
              pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
            }
            else {
LAB_015dcbd8:
              pcVar12 = "<end>";
            }
            if (bVar6 < 10) {
              pcVar31 = (&PTR_s_<stmt>_01cc9818)[(char)bVar6];
            }
            else {
              pcVar31 = "<unknown>";
            }
            if (pbVar28 < *(byte **)(param_1 + 0x18)) {
              bVar6 = *pbVar28;
              uVar29 = (ushort)bVar6;
              uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar29);
              if ((uVar15 & 1) == 0) {
LAB_015dcc78:
                pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar29);
              }
              else {
                if (pbVar28 + 1 < *(byte **)(param_1 + 0x18)) {
                  uVar29 = CONCAT11(bVar6,pbVar28[1]);
                  goto LAB_015dcc78;
                }
                pcVar13 = "<end>";
              }
              if (uVar8 < 0xb) goto LAB_015dcc60;
LAB_015dcc98:
              pcVar17 = "<unknown>";
            }
            else {
              pcVar13 = "<end>";
              if (10 < uVar8) goto LAB_015dcc98;
LAB_015dcc60:
              pcVar17 = (&PTR_s_<stmt>_01cc9868)[(char)uVar8];
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar28,
                       "%s[%d] expected type %s, found %s of type %s",pcVar12,0,pcVar31,pcVar13,
                       pcVar17);
          }
        }
      }
    }
    if (((byte)param_1[0x30] & 1) == 0) {
      if ((byte)param_1[0x30] >> 1 != 0) goto LAB_015d9a00;
    }
    else if (*(long *)(param_1 + 0x38) != 0) goto LAB_015d9a00;
    if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\0') goto LAB_015d9a00;
    uVar14 = v8::internal::compiler::WasmGraphBuilder::TableFill
                       (*(WasmGraphBuilder **)(param_1 + 0x80),(uint)local_158,pNVar24,pNVar27,
                        pNVar32);
LAB_015dcd18:
    FUN_015ddc44(param_1 + 0x78,param_1,uVar14);
    goto LAB_015d9a00;
  default:
    goto switchD_015d99d4_default;
  }
LAB_015d99fc:
  uVar10 = 0;
LAB_015d9a00:
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}

