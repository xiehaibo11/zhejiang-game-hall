
uint FUN_017d2270(Decoder *param_1,undefined4 param_2)

{
  uchar *puVar1;
  byte bVar2;
  Decoder DVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  char *pcVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  ushort uVar20;
  Decoder *pDVar21;
  byte *pbVar22;
  byte *pbVar23;
  uint uVar24;
  ulong uVar25;
  undefined1 *local_140;
  uint local_120 [2];
  uint local_118;
  uint local_110;
  undefined8 local_108;
  undefined1 *local_100;
  long *local_f8;
  undefined1 auStack_f0 [128];
  long local_70 [2];
  
  lVar5 = tpidr_el0;
  local_70[0] = *(long *)(lVar5 + 0x28);
  plVar9 = (long *)v8::internal::wasm::WasmOpcodes::Signature(param_2);
  if (plVar9 == (long *)0x0) {
switchD_017d22d8_default:
    v8::internal::wasm::Decoder::error(param_1,"invalid numeric opcode");
    goto LAB_017d2300;
  }
  uVar6 = (uint)param_1;
  switch(param_2) {
  case 0xfc00:
  case 0xfc01:
  case 0xfc02:
  case 0xfc03:
  case 0xfc04:
  case 0xfc05:
  case 0xfc06:
  case 0xfc07:
    FUN_017d5424(param_1,param_2,plVar9);
    break;
  case 0xfc08:
    lVar17 = *(long *)(param_1 + 0x10);
    local_108 = (undefined1 *)((ulong)local_108 & 0xffffffff00000000);
    uVar8 = v8::internal::wasm::Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                      (param_1,(uchar *)(lVar17 + 2),(uint *)&local_108,"data segment index");
    puVar1 = (uchar *)(lVar17 + ((ulong)local_108 & 0xffffffff) + 2);
    uVar15 = (ulong)uVar8;
    if ((*(uchar **)(param_1 + 0x18) < puVar1) || ((int)*(uchar **)(param_1 + 0x18) == (int)puVar1))
    {
      v8::internal::wasm::Decoder::error(param_1,puVar1,"memory index");
      lVar17 = *(long *)(param_1 + 0x48);
    }
    else {
      if (*puVar1 != '\0') {
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)puVar1,"expected memory index 0, found %u");
      }
      lVar17 = *(long *)(param_1 + 0x48);
    }
    if ((lVar17 != 0) && (uVar8 < *(uint *)(lVar17 + 0x4c))) {
      uVar8 = (uint)local_108 + 1;
      if (*(char *)(lVar17 + 0x12) == '\0') {
        pbVar23 = (byte *)(*(long *)(param_1 + 0x10) + (ulong)uVar8 + -1);
        goto LAB_017d2644;
      }
      lVar17 = *(long *)(param_1 + 0x4c0);
      bVar4 = *(byte *)(*plVar9 + plVar9[2] + 2);
      if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
          (ulong)(lVar17 - *(long *)(param_1 + 0x4b8) >> 4)) {
        pbVar23 = *(byte **)(lVar17 + -0x10);
        bVar2 = *(byte *)(lVar17 + -8);
        uVar15 = (ulong)bVar2;
        *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar17 + -0x10);
        if (bVar2 != bVar4) {
LAB_017d3838:
          uVar7 = (uint)uVar15;
          if ((bVar4 != 7 || uVar7 != 8) && (bVar4 != 6 || 2 < uVar7 - 7)) {
            if ((bVar4 != 10) && ((uVar15 != 10 && (bVar4 != 9 || uVar7 != 8)))) {
              pbVar22 = *(byte **)(param_1 + 0x10);
              if (pbVar22 < *(byte **)(param_1 + 0x18)) {
                bVar2 = *pbVar22;
                uVar20 = (ushort)bVar2;
                uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar11 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar22 + 1) goto LAB_017d38cc;
                  uVar20 = CONCAT11(bVar2,pbVar22[1]);
                }
                pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
              }
              else {
LAB_017d38cc:
                pcVar12 = "<end>";
              }
              if (bVar4 < 10) {
                pcVar14 = (&PTR_s_<stmt>_01cdb038)[(char)bVar4];
              }
              else {
                pcVar14 = "<unknown>";
              }
              if (pbVar23 < *(byte **)(param_1 + 0x18)) {
                bVar4 = *pbVar23;
                uVar20 = (ushort)bVar4;
                uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar11 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d4e58;
                  uVar20 = CONCAT11(bVar4,pbVar23[1]);
                }
                pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
                if (10 < uVar7) goto LAB_017d4e90;
LAB_017d4e68:
                pcVar16 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                    (-(uVar15 >> 7) & 0xfffffffffffff800 | uVar15 << 3));
              }
              else {
LAB_017d4e58:
                pcVar13 = "<end>";
                if (uVar7 < 0xb) goto LAB_017d4e68;
LAB_017d4e90:
                pcVar16 = "<unknown>";
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar23,
                         "%s[%d] expected type %s, found %s of type %s",pcVar12,2,pcVar14,pcVar13,
                         pcVar16);
            }
          }
        }
      }
      else {
        if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
          pbVar23 = *(byte **)(param_1 + 0x10);
          if (pbVar23 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar23;
            uVar20 = (ushort)bVar2;
            uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
            if ((uVar15 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d34ac;
              uVar20 = CONCAT11(bVar2,pbVar23[1]);
            }
            pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
          }
          else {
LAB_017d34ac:
            pcVar12 = "<end>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar23,"%s found empty stack",pcVar12);
        }
        pbVar23 = *(byte **)(param_1 + 0x10);
        uVar15 = 10;
        if (bVar4 != 10) goto LAB_017d3838;
      }
      lVar17 = *(long *)(param_1 + 0x4c0);
      bVar4 = *(byte *)(*plVar9 + plVar9[2] + 1);
      if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
          (ulong)(lVar17 - *(long *)(param_1 + 0x4b8) >> 4)) {
        pbVar23 = *(byte **)(lVar17 + -0x10);
        bVar2 = *(byte *)(lVar17 + -8);
        uVar15 = (ulong)bVar2;
        *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar17 + -0x10);
        if (bVar2 != bVar4) {
LAB_017d4f84:
          uVar7 = (uint)uVar15;
          if ((bVar4 != 7 || uVar7 != 8) && (bVar4 != 6 || 2 < uVar7 - 7)) {
            if ((bVar4 != 10) && ((uVar15 != 10 && (bVar4 != 9 || uVar7 != 8)))) {
              pbVar22 = *(byte **)(param_1 + 0x10);
              if (pbVar22 < *(byte **)(param_1 + 0x18)) {
                bVar2 = *pbVar22;
                uVar20 = (ushort)bVar2;
                uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar11 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar22 + 1) goto LAB_017d5018;
                  uVar20 = CONCAT11(bVar2,pbVar22[1]);
                }
                pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
              }
              else {
LAB_017d5018:
                pcVar12 = "<end>";
              }
              if (bVar4 < 10) {
                pcVar14 = (&PTR_s_<stmt>_01cdb038)[(char)bVar4];
              }
              else {
                pcVar14 = "<unknown>";
              }
              if (pbVar23 < *(byte **)(param_1 + 0x18)) {
                bVar4 = *pbVar23;
                uVar20 = (ushort)bVar4;
                uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar11 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d508c;
                  uVar20 = CONCAT11(bVar4,pbVar23[1]);
                }
                pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
                if (10 < uVar7) goto LAB_017d50c4;
LAB_017d509c:
                pcVar16 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                    (-(uVar15 >> 7) & 0xfffffffffffff800 | uVar15 << 3));
              }
              else {
LAB_017d508c:
                pcVar13 = "<end>";
                if (uVar7 < 0xb) goto LAB_017d509c;
LAB_017d50c4:
                pcVar16 = "<unknown>";
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar23,
                         "%s[%d] expected type %s, found %s of type %s",pcVar12,1,pcVar14,pcVar13,
                         pcVar16);
            }
          }
        }
      }
      else {
        if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
          pbVar23 = *(byte **)(param_1 + 0x10);
          if (pbVar23 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar23;
            uVar20 = (ushort)bVar2;
            uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
            if ((uVar15 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d4f48;
              uVar20 = CONCAT11(bVar2,pbVar23[1]);
            }
            pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
          }
          else {
LAB_017d4f48:
            pcVar12 = "<end>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar23,"%s found empty stack",pcVar12);
        }
        pbVar23 = *(byte **)(param_1 + 0x10);
        uVar15 = 10;
        if (bVar4 != 10) goto LAB_017d4f84;
      }
      lVar17 = *(long *)(param_1 + 0x4c0);
      bVar4 = *(byte *)(plVar9[2] + *plVar9);
      if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
          (ulong)(lVar17 - *(long *)(param_1 + 0x4b8) >> 4)) {
        pbVar23 = *(byte **)(lVar17 + -0x10);
        bVar2 = *(byte *)(lVar17 + -8);
        uVar15 = (ulong)bVar2;
        *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar17 + -0x10);
        if (bVar2 != bVar4) {
LAB_017d51b4:
          uVar7 = (uint)uVar15;
          if ((bVar4 != 7 || uVar7 != 8) && (bVar4 != 6 || 2 < uVar7 - 7)) {
            if ((bVar4 != 10) && ((uVar15 != 10 && (bVar4 != 9 || uVar7 != 8)))) {
              pbVar22 = *(byte **)(param_1 + 0x10);
              if (pbVar22 < *(byte **)(param_1 + 0x18)) {
                bVar2 = *pbVar22;
                uVar20 = (ushort)bVar2;
                uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar11 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar22 + 1) goto LAB_017d5248;
                  uVar20 = CONCAT11(bVar2,pbVar22[1]);
                }
                pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
              }
              else {
LAB_017d5248:
                pcVar12 = "<end>";
              }
              if (bVar4 < 10) {
                pcVar14 = (&PTR_s_<stmt>_01cdb038)[(char)bVar4];
              }
              else {
                pcVar14 = "<unknown>";
              }
              if (pbVar23 < *(byte **)(param_1 + 0x18)) {
                bVar4 = *pbVar23;
                uVar20 = (ushort)bVar4;
                uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar11 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d52bc;
                  uVar20 = CONCAT11(bVar4,pbVar23[1]);
                }
                pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
                if (10 < uVar7) goto LAB_017d52f4;
LAB_017d52cc:
                pcVar16 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                    (-(uVar15 >> 7) & 0xfffffffffffff800 | uVar15 << 3));
              }
              else {
LAB_017d52bc:
                pcVar13 = "<end>";
                if (uVar7 < 0xb) goto LAB_017d52cc;
LAB_017d52f4:
                pcVar16 = "<unknown>";
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar23,
                         "%s[%d] expected type %s, found %s of type %s",pcVar12,0,pcVar14,pcVar13,
                         pcVar16);
            }
          }
        }
      }
      else {
        if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
          pbVar23 = *(byte **)(param_1 + 0x10);
          if (pbVar23 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar23;
            uVar20 = (ushort)bVar2;
            uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
            if ((uVar15 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d5178;
              uVar20 = CONCAT11(bVar2,pbVar23[1]);
            }
            pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
          }
          else {
LAB_017d5178:
            pcVar12 = "<end>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar23,"%s found empty stack",pcVar12);
        }
        pbVar23 = *(byte **)(param_1 + 0x10);
        uVar15 = 10;
        if (bVar4 != 10) goto LAB_017d51b4;
      }
      if (((byte)param_1[0x30] & 1) == 0) {
        if ((byte)param_1[0x30] >> 1 != 0) goto LAB_017d2304;
      }
      else if (*(long *)(param_1 + 0x38) != 0) goto LAB_017d2304;
      if ((*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\0') ||
         (param_1[1000] != (Decoder)0x0)) goto LAB_017d2304;
      param_1[1000] = (Decoder)0xb;
      if (v8::internal::FLAG_trace_liftoff != '\0') {
        v8::internal::PrintF("[liftoff] unsupported: %s\n","memory.init");
      }
      pcVar14 = (char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                     (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)));
      pcVar12 = "memory.init";
      goto LAB_017d53a0;
    }
    lVar17 = *(long *)(param_1 + 0x10);
    pcVar12 = "invalid data segment index: %u";
    goto LAB_017d53e4;
  case 0xfc09:
    uVar7 = v8::internal::wasm::Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                      (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 2),
                       (uint *)((ulong)&local_108 | 4),"data segment index");
    uVar8 = local_108._4_4_;
    local_108 = (undefined1 *)CONCAT44(local_108._4_4_,uVar7);
    if ((*(long *)(param_1 + 0x48) != 0) && (uVar7 < *(uint *)(*(long *)(param_1 + 0x48) + 0x4c))) {
      if (((byte)param_1[0x30] & 1) == 0) {
        if ((byte)param_1[0x30] >> 1 != 0) goto LAB_017d2304;
      }
      else if (*(long *)(param_1 + 0x38) != 0) goto LAB_017d2304;
      if ((*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\0') ||
         (param_1[1000] != (Decoder)0x0)) goto LAB_017d2304;
      param_1[1000] = (Decoder)0xb;
      if (v8::internal::FLAG_trace_liftoff != '\0') {
        v8::internal::PrintF("[liftoff] unsupported: %s\n","data.drop");
      }
      pcVar14 = (char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                     (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)));
      pcVar12 = "data.drop";
      goto LAB_017d53a0;
    }
    lVar17 = *(long *)(param_1 + 0x10);
    pcVar12 = "invalid data segment index: %u";
LAB_017d2800:
    v8::internal::wasm::Decoder::errorf((uchar *)param_1,(char *)(lVar17 + 2),pcVar12);
    break;
  case 0xfc0a:
    lVar17 = *(long *)(param_1 + 0x10);
    puVar1 = (uchar *)(lVar17 + 2);
    if ((*(uchar **)(param_1 + 0x18) < puVar1) || ((int)*(uchar **)(param_1 + 0x18) == (int)puVar1))
    {
      v8::internal::wasm::Decoder::error(param_1,puVar1,"memory index");
    }
    else if (*puVar1 != '\0') {
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)puVar1,"expected memory index 0, found %u");
    }
    puVar1 = (uchar *)(lVar17 + 3);
    if ((*(uchar **)(param_1 + 0x18) < puVar1) || ((int)*(uchar **)(param_1 + 0x18) == (int)puVar1))
    {
      v8::internal::wasm::Decoder::error(param_1,puVar1,"memory index");
    }
    else if (*puVar1 != '\0') {
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)puVar1,"expected memory index 0, found %u");
    }
    pbVar23 = *(byte **)(param_1 + 0x10);
    if ((*(long *)(param_1 + 0x48) != 0) && (*(char *)(*(long *)(param_1 + 0x48) + 0x12) != '\0')) {
      lVar17 = *(long *)(param_1 + 0x4c0);
      bVar4 = *(byte *)(*plVar9 + plVar9[2] + 2);
      if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
          (ulong)(lVar17 - *(long *)(param_1 + 0x4b8) >> 4)) {
        pbVar22 = *(byte **)(lVar17 + -0x10);
        bVar2 = *(byte *)(lVar17 + -8);
        uVar15 = (ulong)bVar2;
        *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar17 + -0x10);
        if (bVar2 != bVar4) {
LAB_017d35c0:
          uVar8 = (uint)uVar15;
          if ((bVar4 != 7 || uVar8 != 8) && (bVar4 != 6 || 2 < uVar8 - 7)) {
            if ((bVar4 != 10) && ((uVar15 != 10 && (bVar4 != 9 || uVar8 != 8)))) {
              if (pbVar23 < *(byte **)(param_1 + 0x18)) {
                bVar2 = *pbVar23;
                uVar20 = (ushort)bVar2;
                uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar11 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d3654;
                  uVar20 = CONCAT11(bVar2,pbVar23[1]);
                }
                pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
              }
              else {
LAB_017d3654:
                pcVar12 = "<end>";
              }
              if (bVar4 < 10) {
                pcVar14 = (&PTR_s_<stmt>_01cdb038)[(char)bVar4];
              }
              else {
                pcVar14 = "<unknown>";
              }
              if (pbVar22 < *(byte **)(param_1 + 0x18)) {
                bVar4 = *pbVar22;
                uVar20 = (ushort)bVar4;
                uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar11 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar22 + 1) goto LAB_017d39cc;
                  uVar20 = CONCAT11(bVar4,pbVar22[1]);
                }
                pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
                if (10 < uVar8) goto LAB_017d3bac;
LAB_017d39dc:
                pcVar16 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                    (-(uVar15 >> 7) & 0xfffffffffffff800 | uVar15 << 3));
              }
              else {
LAB_017d39cc:
                pcVar13 = "<end>";
                if (uVar8 < 0xb) goto LAB_017d39dc;
LAB_017d3bac:
                pcVar16 = "<unknown>";
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar22,
                         "%s[%d] expected type %s, found %s of type %s",pcVar12,2,pcVar14,pcVar13,
                         pcVar16);
            }
          }
        }
      }
      else {
        pbVar22 = pbVar23;
        if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
          if (pbVar23 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar23;
            uVar20 = (ushort)bVar2;
            uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
            if ((uVar15 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d3488;
              uVar20 = CONCAT11(bVar2,pbVar23[1]);
            }
            pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
          }
          else {
LAB_017d3488:
            pcVar12 = "<end>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar23,"%s found empty stack",pcVar12);
          pbVar22 = *(byte **)(param_1 + 0x10);
        }
        uVar15 = 10;
        pbVar23 = pbVar22;
        if (bVar4 != 10) goto LAB_017d35c0;
      }
      lVar17 = *(long *)(param_1 + 0x4c0);
      bVar4 = *(byte *)(*plVar9 + plVar9[2] + 1);
      if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
          (ulong)(lVar17 - *(long *)(param_1 + 0x4b8) >> 4)) {
        pbVar23 = *(byte **)(lVar17 + -0x10);
        bVar2 = *(byte *)(lVar17 + -8);
        uVar15 = (ulong)bVar2;
        *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar17 + -0x10);
        if (bVar2 != bVar4) {
LAB_017d3ca0:
          uVar8 = (uint)uVar15;
          if ((bVar4 != 7 || uVar8 != 8) && (bVar4 != 6 || 2 < uVar8 - 7)) {
            if ((bVar4 != 10) && ((uVar15 != 10 && (bVar4 != 9 || uVar8 != 8)))) {
              pbVar22 = *(byte **)(param_1 + 0x10);
              if (pbVar22 < *(byte **)(param_1 + 0x18)) {
                bVar2 = *pbVar22;
                uVar20 = (ushort)bVar2;
                uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar11 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar22 + 1) goto LAB_017d3d34;
                  uVar20 = CONCAT11(bVar2,pbVar22[1]);
                }
                pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
              }
              else {
LAB_017d3d34:
                pcVar12 = "<end>";
              }
              if (bVar4 < 10) {
                pcVar14 = (&PTR_s_<stmt>_01cdb038)[(char)bVar4];
              }
              else {
                pcVar14 = "<unknown>";
              }
              if (pbVar23 < *(byte **)(param_1 + 0x18)) {
                bVar4 = *pbVar23;
                uVar20 = (ushort)bVar4;
                uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar11 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d3e34;
                  uVar20 = CONCAT11(bVar4,pbVar23[1]);
                }
                pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
                if (10 < uVar8) goto LAB_017d4010;
LAB_017d3e44:
                pcVar16 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                    (-(uVar15 >> 7) & 0xfffffffffffff800 | uVar15 << 3));
              }
              else {
LAB_017d3e34:
                pcVar13 = "<end>";
                if (uVar8 < 0xb) goto LAB_017d3e44;
LAB_017d4010:
                pcVar16 = "<unknown>";
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar23,
                         "%s[%d] expected type %s, found %s of type %s",pcVar12,1,pcVar14,pcVar13,
                         pcVar16);
            }
          }
        }
      }
      else {
        if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
          pbVar23 = *(byte **)(param_1 + 0x10);
          if (pbVar23 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar23;
            uVar20 = (ushort)bVar2;
            uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
            if ((uVar15 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d3c64;
              uVar20 = CONCAT11(bVar2,pbVar23[1]);
            }
            pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
          }
          else {
LAB_017d3c64:
            pcVar12 = "<end>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar23,"%s found empty stack",pcVar12);
        }
        pbVar23 = *(byte **)(param_1 + 0x10);
        uVar15 = 10;
        if (bVar4 != 10) goto LAB_017d3ca0;
      }
      lVar17 = *(long *)(param_1 + 0x4c0);
      bVar4 = *(byte *)(plVar9[2] + *plVar9);
      if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
          (ulong)(lVar17 - *(long *)(param_1 + 0x4b8) >> 4)) {
        pbVar23 = *(byte **)(lVar17 + -0x10);
        bVar2 = *(byte *)(lVar17 + -8);
        uVar15 = (ulong)bVar2;
        *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar17 + -0x10);
        if (bVar2 != bVar4) {
LAB_017d4100:
          uVar8 = (uint)uVar15;
          if ((bVar4 != 7 || uVar8 != 8) && (bVar4 != 6 || 2 < uVar8 - 7)) {
            if ((bVar4 != 10) && ((uVar15 != 10 && (bVar4 != 9 || uVar8 != 8)))) {
              pbVar22 = *(byte **)(param_1 + 0x10);
              if (pbVar22 < *(byte **)(param_1 + 0x18)) {
                bVar2 = *pbVar22;
                uVar20 = (ushort)bVar2;
                uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar11 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar22 + 1) goto LAB_017d4194;
                  uVar20 = CONCAT11(bVar2,pbVar22[1]);
                }
                pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
              }
              else {
LAB_017d4194:
                pcVar12 = "<end>";
              }
              if (bVar4 < 10) {
                pcVar14 = (&PTR_s_<stmt>_01cdb038)[(char)bVar4];
              }
              else {
                pcVar14 = "<unknown>";
              }
              if (pbVar23 < *(byte **)(param_1 + 0x18)) {
                bVar4 = *pbVar23;
                uVar20 = (ushort)bVar4;
                uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar11 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d4294;
                  uVar20 = CONCAT11(bVar4,pbVar23[1]);
                }
                pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
                if (10 < uVar8) goto LAB_017d43a4;
LAB_017d42a4:
                pcVar16 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                    (-(uVar15 >> 7) & 0xfffffffffffff800 | uVar15 << 3));
              }
              else {
LAB_017d4294:
                pcVar13 = "<end>";
                if (uVar8 < 0xb) goto LAB_017d42a4;
LAB_017d43a4:
                pcVar16 = "<unknown>";
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar23,
                         "%s[%d] expected type %s, found %s of type %s",pcVar12,0,pcVar14,pcVar13,
                         pcVar16);
            }
          }
        }
      }
      else {
        if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
          pbVar23 = *(byte **)(param_1 + 0x10);
          if (pbVar23 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar23;
            uVar20 = (ushort)bVar2;
            uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
            if ((uVar15 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d40c4;
              uVar20 = CONCAT11(bVar2,pbVar23[1]);
            }
            pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
          }
          else {
LAB_017d40c4:
            pcVar12 = "<end>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar23,"%s found empty stack",pcVar12);
        }
        pbVar23 = *(byte **)(param_1 + 0x10);
        uVar15 = 10;
        if (bVar4 != 10) goto LAB_017d4100;
      }
      if (((byte)param_1[0x30] & 1) == 0) {
        if ((byte)param_1[0x30] >> 1 == 0) {
LAB_017d43e8:
          if ((*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) == '\0') &&
             (param_1[1000] == (Decoder)0x0)) {
            param_1[1000] = (Decoder)0xb;
            if (v8::internal::FLAG_trace_liftoff != '\0') {
              v8::internal::PrintF("[liftoff] unsupported: %s\n","memory.copy");
            }
            v8::internal::wasm::Decoder::errorf
                      (uVar6,(char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                                  (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8))
                                                  ),"unsupported liftoff operation: %s",
                       "memory.copy");
            uVar8 = 2;
            goto LAB_017d2304;
          }
        }
      }
      else if (*(long *)(param_1 + 0x38) == 0) goto LAB_017d43e8;
      uVar8 = 2;
      goto LAB_017d2304;
    }
LAB_017d2640:
    pbVar23 = pbVar23 + 2;
LAB_017d2644:
    v8::internal::wasm::Decoder::errorf
              ((uchar *)param_1,(char *)pbVar23,"memory instruction with no memory");
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
    pbVar23 = *(byte **)(param_1 + 0x10);
    if ((*(long *)(param_1 + 0x48) == 0) || (*(char *)(*(long *)(param_1 + 0x48) + 0x12) == '\0'))
    goto LAB_017d2640;
    lVar17 = *(long *)(param_1 + 0x4c0);
    bVar4 = *(byte *)(*plVar9 + plVar9[2] + 2);
    if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
        (ulong)(lVar17 - *(long *)(param_1 + 0x4b8) >> 4)) {
      pbVar22 = *(byte **)(lVar17 + -0x10);
      bVar2 = *(byte *)(lVar17 + -8);
      uVar15 = (ulong)bVar2;
      *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar17 + -0x10);
      if (bVar2 != bVar4) {
LAB_017d34ec:
        uVar8 = (uint)uVar15;
        if ((bVar4 != 7 || uVar8 != 8) && (bVar4 != 6 || 2 < uVar8 - 7)) {
          if ((bVar4 != 10) && ((uVar15 != 10 && (bVar4 != 9 || uVar8 != 8)))) {
            if (pbVar23 < *(byte **)(param_1 + 0x18)) {
              bVar2 = *pbVar23;
              uVar20 = (ushort)bVar2;
              uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar11 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d3580;
                uVar20 = CONCAT11(bVar2,pbVar23[1]);
              }
              pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
            }
            else {
LAB_017d3580:
              pcVar12 = "<end>";
            }
            if (bVar4 < 10) {
              pcVar14 = (&PTR_s_<stmt>_01cdb038)[(char)bVar4];
            }
            else {
              pcVar14 = "<unknown>";
            }
            if (pbVar22 < *(byte **)(param_1 + 0x18)) {
              bVar4 = *pbVar22;
              uVar20 = (ushort)bVar4;
              uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar11 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar22 + 1) goto LAB_017d3940;
                uVar20 = CONCAT11(bVar4,pbVar22[1]);
              }
              pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
              if (10 < uVar8) goto LAB_017d3a04;
LAB_017d3950:
              pcVar16 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                  (-(uVar15 >> 7) & 0xfffffffffffff800 | uVar15 << 3));
            }
            else {
LAB_017d3940:
              pcVar13 = "<end>";
              if (uVar8 < 0xb) goto LAB_017d3950;
LAB_017d3a04:
              pcVar16 = "<unknown>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar22,
                       "%s[%d] expected type %s, found %s of type %s",pcVar12,2,pcVar14,pcVar13,
                       pcVar16);
          }
        }
      }
    }
    else {
      pbVar22 = pbVar23;
      if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
        if (pbVar23 < *(byte **)(param_1 + 0x18)) {
          bVar2 = *pbVar23;
          uVar20 = (ushort)bVar2;
          uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
          if ((uVar15 & 1) != 0) {
            if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d347c;
            uVar20 = CONCAT11(bVar2,pbVar23[1]);
          }
          pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
        }
        else {
LAB_017d347c:
          pcVar12 = "<end>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar23,"%s found empty stack",pcVar12);
        pbVar22 = *(byte **)(param_1 + 0x10);
      }
      uVar15 = 10;
      pbVar23 = pbVar22;
      if (bVar4 != 10) goto LAB_017d34ec;
    }
    lVar17 = *(long *)(param_1 + 0x4c0);
    bVar4 = *(byte *)(*plVar9 + plVar9[2] + 1);
    if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
        (ulong)(lVar17 - *(long *)(param_1 + 0x4b8) >> 4)) {
      pbVar23 = *(byte **)(lVar17 + -0x10);
      bVar2 = *(byte *)(lVar17 + -8);
      uVar15 = (ulong)bVar2;
      *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar17 + -0x10);
      if (bVar2 != bVar4) {
LAB_017d3af8:
        uVar8 = (uint)uVar15;
        if ((bVar4 != 7 || uVar8 != 8) && (bVar4 != 6 || 2 < uVar8 - 7)) {
          if ((bVar4 != 10) && ((uVar15 != 10 && (bVar4 != 9 || uVar8 != 8)))) {
            pbVar22 = *(byte **)(param_1 + 0x10);
            if (pbVar22 < *(byte **)(param_1 + 0x18)) {
              bVar2 = *pbVar22;
              uVar20 = (ushort)bVar2;
              uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar11 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar22 + 1) goto LAB_017d3b8c;
                uVar20 = CONCAT11(bVar2,pbVar22[1]);
              }
              pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
            }
            else {
LAB_017d3b8c:
              pcVar12 = "<end>";
            }
            if (bVar4 < 10) {
              pcVar14 = (&PTR_s_<stmt>_01cdb038)[(char)bVar4];
            }
            else {
              pcVar14 = "<unknown>";
            }
            if (pbVar23 < *(byte **)(param_1 + 0x18)) {
              bVar4 = *pbVar23;
              uVar20 = (ushort)bVar4;
              uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar11 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d3da8;
                uVar20 = CONCAT11(bVar4,pbVar23[1]);
              }
              pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
              if (10 < uVar8) goto LAB_017d3e6c;
LAB_017d3db8:
              pcVar16 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                  (-(uVar15 >> 7) & 0xfffffffffffff800 | uVar15 << 3));
            }
            else {
LAB_017d3da8:
              pcVar13 = "<end>";
              if (uVar8 < 0xb) goto LAB_017d3db8;
LAB_017d3e6c:
              pcVar16 = "<unknown>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar23,
                       "%s[%d] expected type %s, found %s of type %s",pcVar12,1,pcVar14,pcVar13,
                       pcVar16);
          }
        }
      }
    }
    else {
      if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
        pbVar23 = *(byte **)(param_1 + 0x10);
        if (pbVar23 < *(byte **)(param_1 + 0x18)) {
          bVar2 = *pbVar23;
          uVar20 = (ushort)bVar2;
          uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
          if ((uVar15 & 1) != 0) {
            if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d3abc;
            uVar20 = CONCAT11(bVar2,pbVar23[1]);
          }
          pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
        }
        else {
LAB_017d3abc:
          pcVar12 = "<end>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar23,"%s found empty stack",pcVar12);
      }
      pbVar23 = *(byte **)(param_1 + 0x10);
      uVar15 = 10;
      if (bVar4 != 10) goto LAB_017d3af8;
    }
    lVar17 = *(long *)(param_1 + 0x4c0);
    bVar4 = *(byte *)(plVar9[2] + *plVar9);
    if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
        (ulong)(lVar17 - *(long *)(param_1 + 0x4b8) >> 4)) {
      pbVar23 = *(byte **)(lVar17 + -0x10);
      bVar2 = *(byte *)(lVar17 + -8);
      uVar15 = (ulong)bVar2;
      *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar17 + -0x10);
      if (bVar2 != bVar4) {
LAB_017d3f5c:
        uVar8 = (uint)uVar15;
        if ((bVar4 != 7 || uVar8 != 8) && (bVar4 != 6 || 2 < uVar8 - 7)) {
          if ((bVar4 != 10) && ((uVar15 != 10 && (bVar4 != 9 || uVar8 != 8)))) {
            pbVar22 = *(byte **)(param_1 + 0x10);
            if (pbVar22 < *(byte **)(param_1 + 0x18)) {
              bVar2 = *pbVar22;
              uVar20 = (ushort)bVar2;
              uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar11 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar22 + 1) goto LAB_017d3ff0;
                uVar20 = CONCAT11(bVar2,pbVar22[1]);
              }
              pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
            }
            else {
LAB_017d3ff0:
              pcVar12 = "<end>";
            }
            if (bVar4 < 10) {
              pcVar14 = (&PTR_s_<stmt>_01cdb038)[(char)bVar4];
            }
            else {
              pcVar14 = "<unknown>";
            }
            if (pbVar23 < *(byte **)(param_1 + 0x18)) {
              bVar4 = *pbVar23;
              uVar20 = (ushort)bVar4;
              uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar11 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d4208;
                uVar20 = CONCAT11(bVar4,pbVar23[1]);
              }
              pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
              if (10 < uVar8) goto LAB_017d42cc;
LAB_017d4218:
              pcVar16 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                  (-(uVar15 >> 7) & 0xfffffffffffff800 | uVar15 << 3));
            }
            else {
LAB_017d4208:
              pcVar13 = "<end>";
              if (uVar8 < 0xb) goto LAB_017d4218;
LAB_017d42cc:
              pcVar16 = "<unknown>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar23,
                       "%s[%d] expected type %s, found %s of type %s",pcVar12,0,pcVar14,pcVar13,
                       pcVar16);
          }
        }
      }
    }
    else {
      if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
        pbVar23 = *(byte **)(param_1 + 0x10);
        if (pbVar23 < *(byte **)(param_1 + 0x18)) {
          bVar2 = *pbVar23;
          uVar20 = (ushort)bVar2;
          uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
          if ((uVar15 & 1) != 0) {
            if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d3f20;
            uVar20 = CONCAT11(bVar2,pbVar23[1]);
          }
          pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
        }
        else {
LAB_017d3f20:
          pcVar12 = "<end>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar23,"%s found empty stack",pcVar12);
      }
      pbVar23 = *(byte **)(param_1 + 0x10);
      uVar15 = 10;
      if (bVar4 != 10) goto LAB_017d3f5c;
    }
    if (((byte)param_1[0x30] & 1) == 0) {
      if ((byte)param_1[0x30] >> 1 == 0) {
LAB_017d4310:
        if ((*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) == '\0') &&
           (param_1[1000] == (Decoder)0x0)) {
          param_1[1000] = (Decoder)0xb;
          if (v8::internal::FLAG_trace_liftoff != '\0') {
            v8::internal::PrintF("[liftoff] unsupported: %s\n","memory.fill");
          }
          v8::internal::wasm::Decoder::errorf
                    (uVar6,(char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                                (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8))),
                     "unsupported liftoff operation: %s","memory.fill");
          uVar8 = 1;
          goto LAB_017d2304;
        }
      }
    }
    else if (*(long *)(param_1 + 0x38) == 0) goto LAB_017d4310;
    uVar8 = 1;
    goto LAB_017d2304;
  case 0xfc0c:
    lVar17 = *(long *)(param_1 + 0x10);
    local_120[0] = 0;
    uVar8 = v8::internal::wasm::Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                      (param_1,(uchar *)(lVar17 + 2),local_120,"elem segment index");
    local_108 = (undefined1 *)0x100000000;
    lVar17 = lVar17 + (ulong)local_120[0];
    pbVar23 = (byte *)(lVar17 + 2);
    uVar15 = (ulong)uVar8;
    if (pbVar23 < *(byte **)(param_1 + 0x18)) {
      uVar7 = *pbVar23 & 0x7f;
      if ((char)*pbVar23 < '\0') {
        uVar7 = v8::internal::wasm::Decoder::
                read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                          (param_1,(uchar *)(lVar17 + 3),(uint *)((ulong)&local_108 | 4),
                           "table index",uVar7);
      }
      else {
        local_108 = (undefined1 *)0x100000000;
      }
    }
    else {
      local_108 = (undefined1 *)0x0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar23,"expected %s","table index");
      uVar7 = 0;
    }
    local_108 = (undefined1 *)CONCAT44(local_108._4_4_,uVar7);
    lVar17 = *(long *)(param_1 + 0x48);
    if ((lVar17 != 0) &&
       (uVar11 = (*(long *)(lVar17 + 0x120) - *(long *)(lVar17 + 0x118) >> 3) * 0x6db6db6db6db6db7,
       uVar15 <= uVar11 && uVar11 - uVar15 != 0)) {
      uVar8 = local_120[0] + local_108._4_4_;
      if ((ulong)(*(long *)(lVar17 + 0xc0) - *(long *)(lVar17 + 0xb8) >> 4) <= (ulong)uVar7) {
        pcVar12 = (char *)(~(ulong)local_108._4_4_ + *(long *)(param_1 + 0x10) + (ulong)uVar8);
        goto LAB_017d2814;
      }
      uVar11 = plVar9[1];
      local_108 = auStack_f0;
      local_f8 = local_70;
      uVar7 = (uint)uVar11;
      uVar15 = (ulong)(int)uVar7;
      if (8 < uVar7) {
        local_100 = local_108;
        v8::base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                  ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)&local_108,uVar15);
      }
      local_100 = local_108 + uVar15 * 0x10;
      if (0 < (int)uVar7) {
        uVar11 = -(uVar11 >> 0x1f & 1) & 0xfffffff000000000 | (uVar11 & 0xffffffff) << 4;
        do {
          uVar7 = uVar7 - 1;
          pcVar12 = "<end>";
          lVar17 = *(long *)(param_1 + 0x4c0);
          bVar4 = *(byte *)(plVar9[2] + *plVar9 + uVar15 + -1);
          if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
              (ulong)(lVar17 - *(long *)(param_1 + 0x4b8) >> 4)) {
            pbVar23 = *(byte **)(lVar17 + -0x10);
            uVar25 = (ulong)*(byte *)(lVar17 + -8);
            *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar17 + -0x10);
          }
          else {
            if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
              pbVar23 = *(byte **)(param_1 + 0x10);
              pcVar14 = pcVar12;
              if (pbVar23 < *(byte **)(param_1 + 0x18)) {
                bVar2 = *pbVar23;
                uVar20 = (ushort)bVar2;
                uVar25 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar25 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d2d6c;
                  uVar20 = CONCAT11(bVar2,pbVar23[1]);
                }
                pcVar14 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
              }
LAB_017d2d6c:
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar23,"%s found empty stack",pcVar14);
            }
            pbVar23 = *(byte **)(param_1 + 0x10);
            uVar25 = 10;
          }
          uVar24 = (uint)uVar25;
          uVar15 = uVar15 - 1;
          if (uVar24 != bVar4) {
            if ((bVar4 != 7 || uVar24 != 8) && (bVar4 != 6 || 2 < uVar24 - 7)) {
              if ((bVar4 != 10) && ((uVar25 != 10 && (bVar4 != 9 || uVar24 != 8)))) {
                pbVar22 = *(byte **)(param_1 + 0x10);
                if (pbVar22 < *(byte **)(param_1 + 0x18)) {
                  bVar2 = *pbVar22;
                  uVar20 = (ushort)bVar2;
                  uVar10 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode();
                  if ((uVar10 & 1) != 0) {
                    pcVar12 = "<end>";
                    if (*(byte **)(param_1 + 0x18) <= pbVar22 + 1) goto LAB_017d2e4c;
                    uVar20 = CONCAT11(bVar2,pbVar22[1]);
                  }
                  pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
                }
LAB_017d2e4c:
                pcVar14 = "<unknown>";
                if (bVar4 < 10) {
                  pcVar14 = (&PTR_s_<stmt>_01cdb038)[(char)bVar4];
                }
                pcVar13 = "<end>";
                if (pbVar23 < *(byte **)(param_1 + 0x18)) {
                  bVar4 = *pbVar23;
                  uVar20 = (ushort)bVar4;
                  uVar10 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                  if ((uVar10 & 1) != 0) {
                    if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d2ed0;
                    uVar20 = CONCAT11(bVar4,pbVar23[1]);
                  }
                  pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
                }
LAB_017d2ed0:
                pcVar16 = "<unknown>";
                if (uVar24 < 0xb) {
                  pcVar16 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                      (-(uVar25 >> 7) & 0xfffffffffffff800 | uVar25 << 3));
                }
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar23,
                           "%s[%d] expected type %s, found %s of type %s",pcVar12,(ulong)uVar7,
                           pcVar14,pcVar13,pcVar16);
              }
            }
          }
          *(byte **)(local_108 + (uVar11 - 0x10)) = pbVar23;
          local_108[uVar11 - 8] = (char)uVar25;
          uVar11 = uVar11 - 0x10;
        } while (0 < (long)uVar15);
      }
      if (((byte)param_1[0x30] & 1) == 0) {
        if ((byte)param_1[0x30] >> 1 == 0) {
LAB_017d33f4:
          if ((*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) == '\0') &&
             (param_1[1000] == (Decoder)0x0)) {
            param_1[1000] = (Decoder)0xb;
            if (v8::internal::FLAG_trace_liftoff != '\0') {
              v8::internal::PrintF("[liftoff] unsupported: %s\n","table.init");
            }
            uVar7 = *(int *)(param_1 + 0x20) + (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
            pcVar12 = "table.init";
LAB_017d345c:
            v8::internal::wasm::Decoder::errorf
                      (uVar6,(char *)(ulong)uVar7,"unsupported liftoff operation: %s",pcVar12);
          }
        }
      }
      else if (*(long *)(param_1 + 0x38) == 0) goto LAB_017d33f4;
LAB_017d3464:
      local_140 = auStack_f0;
      if (local_108 != local_140) {
        free(local_108);
      }
      goto LAB_017d2304;
    }
    lVar17 = *(long *)(param_1 + 0x10);
    pcVar12 = "invalid element segment index: %u";
LAB_017d53e4:
    v8::internal::wasm::Decoder::errorf((uchar *)param_1,(char *)(lVar17 + 2),pcVar12,uVar15);
    break;
  case 0xfc0d:
    uVar7 = v8::internal::wasm::Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                      (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 2),
                       (uint *)((ulong)&local_108 | 4),"elem segment index");
    uVar8 = local_108._4_4_;
    local_108 = (undefined1 *)CONCAT44(local_108._4_4_,uVar7);
    lVar17 = *(long *)(param_1 + 0x48);
    if ((lVar17 == 0) ||
       (uVar15 = (*(long *)(lVar17 + 0x120) - *(long *)(lVar17 + 0x118) >> 3) * 0x6db6db6db6db6db7,
       uVar15 < uVar7 || uVar15 - uVar7 == 0)) {
      lVar17 = *(long *)(param_1 + 0x10);
      pcVar12 = "invalid element segment index: %u";
      goto LAB_017d2800;
    }
    if (((byte)param_1[0x30] & 1) == 0) {
      if ((byte)param_1[0x30] >> 1 != 0) goto LAB_017d2304;
    }
    else if (*(long *)(param_1 + 0x38) != 0) goto LAB_017d2304;
    if ((*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\0') || (param_1[1000] != (Decoder)0x0))
    goto LAB_017d2304;
    param_1[1000] = (Decoder)0xb;
    if (v8::internal::FLAG_trace_liftoff != '\0') {
      v8::internal::PrintF("[liftoff] unsupported: %s\n","elem.drop");
    }
    pcVar14 = (char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                   (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)));
    pcVar12 = "elem.drop";
    goto LAB_017d53a0;
  case 0xfc0e:
    v8::internal::wasm::TableCopyImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
    TableCopyImmediate((TableCopyImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)local_120
                       ,param_1,*(uchar **)(param_1 + 0x10));
    lVar17 = *(long *)(param_1 + 0x48);
    if ((lVar17 == 0) ||
       (uVar15 = *(long *)(lVar17 + 0xc0) - *(long *)(lVar17 + 0xb8) >> 4, uVar15 <= local_118)) {
      pcVar12 = (char *)(*(long *)(param_1 + 0x10) + 1);
    }
    else {
      if (local_120[0] < uVar15) {
        uVar11 = plVar9[1];
        local_108 = auStack_f0;
        local_f8 = local_70;
        uVar8 = (uint)uVar11;
        uVar15 = (ulong)(int)uVar8;
        if (8 < uVar8) {
          local_100 = local_108;
          v8::base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                    ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)&local_108,uVar15);
        }
        local_100 = local_108 + uVar15 * 0x10;
        if (0 < (int)uVar8) {
          uVar11 = -(uVar11 >> 0x1f & 1) & 0xfffffff000000000 | (uVar11 & 0xffffffff) << 4;
          do {
            uVar8 = uVar8 - 1;
            pcVar12 = "<end>";
            lVar17 = *(long *)(param_1 + 0x4c0);
            bVar4 = *(byte *)(plVar9[2] + *plVar9 + uVar15 + -1);
            if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
                (ulong)(lVar17 - *(long *)(param_1 + 0x4b8) >> 4)) {
              pbVar23 = *(byte **)(lVar17 + -0x10);
              uVar25 = (ulong)*(byte *)(lVar17 + -8);
              *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar17 + -0x10);
            }
            else {
              if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
                pbVar23 = *(byte **)(param_1 + 0x10);
                pcVar14 = pcVar12;
                if (pbVar23 < *(byte **)(param_1 + 0x18)) {
                  bVar2 = *pbVar23;
                  uVar20 = (ushort)bVar2;
                  uVar25 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                  if ((uVar25 & 1) != 0) {
                    if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d2990;
                    uVar20 = CONCAT11(bVar2,pbVar23[1]);
                  }
                  pcVar14 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
                }
LAB_017d2990:
                v8::internal::wasm::Decoder::errorf
                          ((uchar *)param_1,(char *)pbVar23,"%s found empty stack",pcVar14);
              }
              pbVar23 = *(byte **)(param_1 + 0x10);
              uVar25 = 10;
            }
            uVar7 = (uint)uVar25;
            uVar15 = uVar15 - 1;
            if (uVar7 != bVar4) {
              if ((bVar4 != 7 || uVar7 != 8) && (bVar4 != 6 || 2 < uVar7 - 7)) {
                if ((bVar4 != 10) && ((uVar25 != 10 && (bVar4 != 9 || uVar7 != 8)))) {
                  pbVar22 = *(byte **)(param_1 + 0x10);
                  if (pbVar22 < *(byte **)(param_1 + 0x18)) {
                    bVar2 = *pbVar22;
                    uVar20 = (ushort)bVar2;
                    uVar10 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode();
                    if ((uVar10 & 1) != 0) {
                      pcVar12 = "<end>";
                      if (*(byte **)(param_1 + 0x18) <= pbVar22 + 1) goto LAB_017d2a70;
                      uVar20 = CONCAT11(bVar2,pbVar22[1]);
                    }
                    pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
                  }
LAB_017d2a70:
                  pcVar14 = "<unknown>";
                  if (bVar4 < 10) {
                    pcVar14 = (&PTR_s_<stmt>_01cdb038)[(char)bVar4];
                  }
                  pcVar13 = "<end>";
                  if (pbVar23 < *(byte **)(param_1 + 0x18)) {
                    bVar4 = *pbVar23;
                    uVar20 = (ushort)bVar4;
                    uVar10 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                    if ((uVar10 & 1) != 0) {
                      if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d2af4;
                      uVar20 = CONCAT11(bVar4,pbVar23[1]);
                    }
                    pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
                  }
LAB_017d2af4:
                  pcVar16 = "<unknown>";
                  if (uVar7 < 0xb) {
                    pcVar16 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                        (-(uVar25 >> 7) & 0xfffffffffffff800 | uVar25 << 3));
                  }
                  v8::internal::wasm::Decoder::errorf
                            ((uchar *)param_1,(char *)pbVar23,
                             "%s[%d] expected type %s, found %s of type %s",pcVar12,(ulong)uVar8,
                             pcVar14,pcVar13,pcVar16);
                }
              }
            }
            *(byte **)(local_108 + (uVar11 - 0x10)) = pbVar23;
            local_108[uVar11 - 8] = (char)uVar25;
            uVar11 = uVar11 - 0x10;
          } while (0 < (long)uVar15);
        }
        uVar8 = local_110;
        if (((byte)param_1[0x30] & 1) == 0) {
          if ((byte)param_1[0x30] >> 1 == 0) {
LAB_017d337c:
            if ((*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) == '\0') &&
               (param_1[1000] == (Decoder)0x0)) {
              param_1[1000] = (Decoder)0xb;
              if (v8::internal::FLAG_trace_liftoff != '\0') {
                v8::internal::PrintF("[liftoff] unsupported: %s\n","table.copy");
              }
              uVar7 = *(int *)(param_1 + 0x20) + (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
              pcVar12 = "table.copy";
              goto LAB_017d345c;
            }
          }
        }
        else if (*(long *)(param_1 + 0x38) == 0) goto LAB_017d337c;
        goto LAB_017d3464;
      }
      pcVar12 = (char *)(*(long *)(param_1 + 0x10) + 2);
    }
LAB_017d2814:
    v8::internal::wasm::Decoder::errorf((uchar *)param_1,pcVar12,"invalid table index: %u");
    break;
  case 0xfc0f:
    pDVar21 = param_1 + 0x10;
    local_108 = (undefined1 *)0x100000000;
    pbVar23 = (byte *)(*(long *)pDVar21 + 2);
    if (pbVar23 < *(byte **)(param_1 + 0x18)) {
      uVar8 = *pbVar23 & 0x7f;
      uVar15 = (ulong)uVar8;
      if ((char)*pbVar23 < '\0') {
        uVar8 = v8::internal::wasm::Decoder::
                read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                          (param_1,(uchar *)(*(long *)pDVar21 + 3),(uint *)((ulong)&local_108 | 4),
                           "table index",uVar8);
        uVar15 = (ulong)uVar8;
      }
      else {
        local_108 = (undefined1 *)0x100000000;
      }
    }
    else {
      local_108 = (undefined1 *)0x0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar23,"expected %s","table index");
      uVar15 = 0;
    }
    uVar8 = local_108._4_4_;
    local_108 = (undefined1 *)CONCAT44(local_108._4_4_,(int)uVar15);
    lVar17 = *(long *)(param_1 + 0x48);
    pbVar23 = *(byte **)(param_1 + 0x10);
    if ((lVar17 != 0) &&
       (uVar15 < (ulong)(*(long *)(lVar17 + 0xc0) - *(long *)(lVar17 + 0xb8) >> 4))) {
      lVar17 = *(long *)(param_1 + 0x4c0);
      bVar4 = *(byte *)(*plVar9 + plVar9[2] + 1);
      if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
          (ulong)(lVar17 - *(long *)(param_1 + 0x4b8) >> 4)) {
        pbVar22 = *(byte **)(lVar17 + -0x10);
        bVar2 = *(byte *)(lVar17 + -8);
        uVar15 = (ulong)bVar2;
        *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar17 + -0x10);
        if (bVar2 != bVar4) {
LAB_017d3694:
          uVar7 = (uint)uVar15;
          if ((bVar4 != 7 || uVar7 != 8) && (bVar4 != 6 || 2 < uVar7 - 7)) {
            if ((bVar4 != 10) && ((uVar15 != 10 && (bVar4 != 9 || uVar7 != 8)))) {
              if (pbVar23 < *(byte **)(param_1 + 0x18)) {
                bVar2 = *pbVar23;
                uVar20 = (ushort)bVar2;
                uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar11 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d3728;
                  uVar20 = CONCAT11(bVar2,pbVar23[1]);
                }
                pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
              }
              else {
LAB_017d3728:
                pcVar12 = "<end>";
              }
              if (bVar4 < 10) {
                pcVar14 = (&PTR_s_<stmt>_01cdb038)[(char)bVar4];
              }
              else {
                pcVar14 = "<unknown>";
              }
              if (pbVar22 < *(byte **)(param_1 + 0x18)) {
                bVar4 = *pbVar22;
                uVar20 = (ushort)bVar4;
                uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar11 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar22 + 1) goto LAB_017d44d0;
                  uVar20 = CONCAT11(bVar4,pbVar22[1]);
                }
                pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
                if (10 < uVar7) goto LAB_017d4594;
LAB_017d44e0:
                pcVar16 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                    (-(uVar15 >> 7) & 0xfffffffffffff800 | uVar15 << 3));
              }
              else {
LAB_017d44d0:
                pcVar13 = "<end>";
                if (uVar7 < 0xb) goto LAB_017d44e0;
LAB_017d4594:
                pcVar16 = "<unknown>";
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar22,
                         "%s[%d] expected type %s, found %s of type %s",pcVar12,1,pcVar14,pcVar13,
                         pcVar16);
            }
          }
        }
      }
      else {
        pbVar22 = pbVar23;
        if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
          if (pbVar23 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar23;
            uVar20 = (ushort)bVar2;
            uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
            if ((uVar15 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d3494;
              uVar20 = CONCAT11(bVar2,pbVar23[1]);
            }
            pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
          }
          else {
LAB_017d3494:
            pcVar12 = "<end>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar23,"%s found empty stack",pcVar12);
          pbVar22 = *(byte **)(param_1 + 0x10);
        }
        uVar15 = 10;
        pbVar23 = pbVar22;
        if (bVar4 != 10) goto LAB_017d3694;
      }
      lVar17 = *(long *)(param_1 + 0x4c0);
      bVar4 = *(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 0xb8) +
                       ((ulong)local_108 & 0xffffffff) * 0x10);
      if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
          (ulong)(lVar17 - *(long *)(param_1 + 0x4b8) >> 4)) {
        pbVar23 = *(byte **)(lVar17 + -0x10);
        bVar2 = *(byte *)(lVar17 + -8);
        uVar15 = (ulong)bVar2;
        *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar17 + -0x10);
        if (bVar2 != bVar4) {
LAB_017d468c:
          uVar7 = (uint)uVar15;
          if ((bVar4 != 7 || uVar7 != 8) && (bVar4 != 6 || 2 < uVar7 - 7)) {
            if ((bVar4 != 10) && ((uVar15 != 10 && (bVar4 != 9 || uVar7 != 8)))) {
              pbVar22 = *(byte **)(param_1 + 0x10);
              if (pbVar22 < *(byte **)(param_1 + 0x18)) {
                bVar2 = *pbVar22;
                uVar20 = (ushort)bVar2;
                uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar11 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar22 + 1) goto LAB_017d4720;
                  uVar20 = CONCAT11(bVar2,pbVar22[1]);
                }
                pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
              }
              else {
LAB_017d4720:
                pcVar12 = "<end>";
              }
              if (bVar4 < 10) {
                pcVar14 = (&PTR_s_<stmt>_01cdb038)[(char)bVar4];
              }
              else {
                pcVar14 = "<unknown>";
              }
              if (pbVar23 < *(byte **)(param_1 + 0x18)) {
                bVar4 = *pbVar23;
                uVar20 = (ushort)bVar4;
                uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar11 & 1) != 0) {
                  if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d4940;
                  uVar20 = CONCAT11(bVar4,pbVar23[1]);
                }
                pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
                if (10 < uVar7) goto LAB_017d4a04;
LAB_017d4950:
                pcVar16 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                    (-(uVar15 >> 7) & 0xfffffffffffff800 | uVar15 << 3));
              }
              else {
LAB_017d4940:
                pcVar13 = "<end>";
                if (uVar7 < 0xb) goto LAB_017d4950;
LAB_017d4a04:
                pcVar16 = "<unknown>";
              }
              v8::internal::wasm::Decoder::errorf
                        ((uchar *)param_1,(char *)pbVar23,
                         "%s[%d] expected type %s, found %s of type %s",pcVar12,0,pcVar14,pcVar13,
                         pcVar16);
            }
          }
        }
      }
      else {
        if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
          pbVar23 = *(byte **)(param_1 + 0x10);
          if (pbVar23 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar23;
            uVar20 = (ushort)bVar2;
            uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
            if ((uVar15 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d4650;
              uVar20 = CONCAT11(bVar2,pbVar23[1]);
            }
            pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
          }
          else {
LAB_017d4650:
            pcVar12 = "<end>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar23,"%s found empty stack",pcVar12);
        }
        pbVar23 = *(byte **)pDVar21;
        uVar15 = 10;
        if (bVar4 != 10) goto LAB_017d468c;
      }
      local_120[0] = CONCAT31(local_120[0]._1_3_,1);
      puVar18 = *(undefined8 **)(param_1 + 0x4c0);
      if (puVar18 < *(undefined8 **)(param_1 + 0x4c8)) {
        uVar19 = *(undefined8 *)(param_1 + 0x10);
        *(undefined1 *)(puVar18 + 1) = 1;
        *puVar18 = uVar19;
        *(long *)(param_1 + 0x4c0) = *(long *)(param_1 + 0x4c0) + 0x10;
        DVar3 = param_1[0x30];
        if (((byte)DVar3 & 1) == 0) goto LAB_017d4a64;
LAB_017d4a88:
        if (*(long *)(param_1 + 0x38) != 0) goto LAB_017d2304;
      }
      else {
        std::__ndk1::
        vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
        ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                  ((vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                    *)(param_1 + 0x4b8),(uchar **)pDVar21,(ValueType *)local_120);
        DVar3 = param_1[0x30];
        if (((byte)DVar3 & 1) != 0) goto LAB_017d4a88;
LAB_017d4a64:
        if ((byte)DVar3 >> 1 != 0) goto LAB_017d2304;
      }
      if ((*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\0') ||
         (param_1[1000] != (Decoder)0x0)) goto LAB_017d2304;
      param_1[1000] = (Decoder)0x6;
      if (v8::internal::FLAG_trace_liftoff != '\0') {
        v8::internal::PrintF("[liftoff] unsupported: %s\n","table.grow");
      }
      pcVar14 = (char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                     (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)));
      pcVar12 = "table.grow";
      goto LAB_017d53a0;
    }
LAB_017d30bc:
    v8::internal::wasm::Decoder::errorf
              ((uchar *)param_1,(char *)pbVar23,"invalid table index: %u",uVar15);
    break;
  case 0xfc10:
    lVar17 = *(long *)(param_1 + 0x10);
    local_108 = (undefined1 *)0x100000000;
    pbVar23 = (byte *)(lVar17 + 2);
    if (pbVar23 < *(byte **)(param_1 + 0x18)) {
      uVar8 = *pbVar23 & 0x7f;
      uVar15 = (ulong)uVar8;
      if ((char)*pbVar23 < '\0') {
        uVar8 = v8::internal::wasm::Decoder::
                read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                          (param_1,(uchar *)(lVar17 + 3),(uint *)((ulong)&local_108 | 4),
                           "table index",uVar8);
        uVar15 = (ulong)uVar8;
      }
      else {
        local_108 = (undefined1 *)0x100000000;
      }
    }
    else {
      local_108 = (undefined1 *)0x0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar23,"expected %s","table index");
      uVar15 = 0;
    }
    uVar8 = local_108._4_4_;
    local_108 = (undefined1 *)CONCAT44(local_108._4_4_,(int)uVar15);
    lVar17 = *(long *)(param_1 + 0x48);
    pbVar23 = *(byte **)(param_1 + 0x10);
    if ((lVar17 == 0) ||
       ((ulong)(*(long *)(lVar17 + 0xc0) - *(long *)(lVar17 + 0xb8) >> 4) <= uVar15))
    goto LAB_017d30bc;
    local_120[0] = CONCAT31(local_120[0]._1_3_,1);
    puVar18 = *(undefined8 **)(param_1 + 0x4c0);
    if (puVar18 < *(undefined8 **)(param_1 + 0x4c8)) {
      *puVar18 = pbVar23;
      *(undefined1 *)(puVar18 + 1) = 1;
      *(long *)(param_1 + 0x4c0) = *(long *)(param_1 + 0x4c0) + 0x10;
      DVar3 = param_1[0x30];
      if (((byte)DVar3 & 1) == 0) goto LAB_017d30a4;
LAB_017d32a4:
      if (*(long *)(param_1 + 0x38) != 0) goto LAB_017d2304;
    }
    else {
      std::__ndk1::
      vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
      ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                ((vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                  *)(param_1 + 0x4b8),(uchar **)(param_1 + 0x10),(ValueType *)local_120);
      DVar3 = param_1[0x30];
      if (((byte)DVar3 & 1) != 0) goto LAB_017d32a4;
LAB_017d30a4:
      if ((byte)DVar3 >> 1 != 0) goto LAB_017d2304;
    }
    if ((*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\0') || (param_1[1000] != (Decoder)0x0))
    goto LAB_017d2304;
    param_1[1000] = (Decoder)0x6;
    if (v8::internal::FLAG_trace_liftoff != '\0') {
      v8::internal::PrintF("[liftoff] unsupported: %s\n","table.size");
    }
    pcVar14 = (char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                   (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)));
    pcVar12 = "table.size";
    goto LAB_017d53a0;
  case 0xfc11:
    local_108 = (undefined1 *)0x100000000;
    pbVar23 = (byte *)(*(long *)(param_1 + 0x10) + 2);
    if (pbVar23 < *(byte **)(param_1 + 0x18)) {
      uVar8 = *pbVar23 & 0x7f;
      uVar15 = (ulong)uVar8;
      if ((char)*pbVar23 < '\0') {
        uVar8 = v8::internal::wasm::Decoder::
                read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                          (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 3),
                           (uint *)((ulong)&local_108 | 4),"table index",uVar8);
        uVar15 = (ulong)uVar8;
      }
      else {
        local_108 = (undefined1 *)0x100000000;
      }
    }
    else {
      local_108 = (undefined1 *)0x0;
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar23,"expected %s","table index");
      uVar15 = 0;
    }
    uVar8 = local_108._4_4_;
    local_108 = (undefined1 *)CONCAT44(local_108._4_4_,(int)uVar15);
    lVar17 = *(long *)(param_1 + 0x48);
    pbVar23 = *(byte **)(param_1 + 0x10);
    if ((lVar17 == 0) ||
       ((ulong)(*(long *)(lVar17 + 0xc0) - *(long *)(lVar17 + 0xb8) >> 4) <= uVar15))
    goto LAB_017d30bc;
    lVar17 = *(long *)(param_1 + 0x4c0);
    bVar4 = *(byte *)(*plVar9 + plVar9[2] + 2);
    if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
        (ulong)(lVar17 - *(long *)(param_1 + 0x4b8) >> 4)) {
      pbVar22 = *(byte **)(lVar17 + -0x10);
      bVar2 = *(byte *)(lVar17 + -8);
      uVar15 = (ulong)bVar2;
      *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar17 + -0x10);
      if (bVar2 != bVar4) {
LAB_017d3768:
        uVar7 = (uint)uVar15;
        if ((bVar4 != 7 || uVar7 != 8) && (bVar4 != 6 || 2 < uVar7 - 7)) {
          if ((bVar4 != 10) && ((uVar15 != 10 && (bVar4 != 9 || uVar7 != 8)))) {
            if (pbVar23 < *(byte **)(param_1 + 0x18)) {
              bVar2 = *pbVar23;
              uVar20 = (ushort)bVar2;
              uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar11 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d37fc;
                uVar20 = CONCAT11(bVar2,pbVar23[1]);
              }
              pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
            }
            else {
LAB_017d37fc:
              pcVar12 = "<end>";
            }
            if (bVar4 < 10) {
              pcVar14 = (&PTR_s_<stmt>_01cdb038)[(char)bVar4];
            }
            else {
              pcVar14 = "<unknown>";
            }
            if (pbVar22 < *(byte **)(param_1 + 0x18)) {
              bVar4 = *pbVar22;
              uVar20 = (ushort)bVar4;
              uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar11 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar22 + 1) goto LAB_017d455c;
                uVar20 = CONCAT11(bVar4,pbVar22[1]);
              }
              pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
              if (10 < uVar7) goto LAB_017d4740;
LAB_017d456c:
              pcVar16 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                  (-(uVar15 >> 7) & 0xfffffffffffff800 | uVar15 << 3));
            }
            else {
LAB_017d455c:
              pcVar13 = "<end>";
              if (uVar7 < 0xb) goto LAB_017d456c;
LAB_017d4740:
              pcVar16 = "<unknown>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar22,
                       "%s[%d] expected type %s, found %s of type %s",pcVar12,2,pcVar14,pcVar13,
                       pcVar16);
          }
        }
      }
    }
    else {
      pbVar22 = pbVar23;
      if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
        if (pbVar23 < *(byte **)(param_1 + 0x18)) {
          bVar2 = *pbVar23;
          uVar20 = (ushort)bVar2;
          uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
          if ((uVar15 & 1) != 0) {
            if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d34a0;
            uVar20 = CONCAT11(bVar2,pbVar23[1]);
          }
          pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
        }
        else {
LAB_017d34a0:
          pcVar12 = "<end>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar23,"%s found empty stack",pcVar12);
        pbVar22 = *(byte **)(param_1 + 0x10);
      }
      uVar15 = 10;
      pbVar23 = pbVar22;
      if (bVar4 != 10) goto LAB_017d3768;
    }
    lVar17 = *(long *)(param_1 + 0x4c0);
    bVar4 = *(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 0xb8) +
                     ((ulong)local_108 & 0xffffffff) * 0x10);
    if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
        (ulong)(lVar17 - *(long *)(param_1 + 0x4b8) >> 4)) {
      pbVar23 = *(byte **)(lVar17 + -0x10);
      bVar2 = *(byte *)(lVar17 + -8);
      uVar15 = (ulong)bVar2;
      *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar17 + -0x10);
      if (bVar2 != bVar4) {
LAB_017d4838:
        uVar7 = (uint)uVar15;
        if ((bVar4 != 7 || uVar7 != 8) && (bVar4 != 6 || 2 < uVar7 - 7)) {
          if ((bVar4 != 10) && ((uVar15 != 10 && (bVar4 != 9 || uVar7 != 8)))) {
            pbVar22 = *(byte **)(param_1 + 0x10);
            if (pbVar22 < *(byte **)(param_1 + 0x18)) {
              bVar2 = *pbVar22;
              uVar20 = (ushort)bVar2;
              uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar11 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar22 + 1) goto LAB_017d48cc;
                uVar20 = CONCAT11(bVar2,pbVar22[1]);
              }
              pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
            }
            else {
LAB_017d48cc:
              pcVar12 = "<end>";
            }
            if (bVar4 < 10) {
              pcVar14 = (&PTR_s_<stmt>_01cdb038)[(char)bVar4];
            }
            else {
              pcVar14 = "<unknown>";
            }
            if (pbVar23 < *(byte **)(param_1 + 0x18)) {
              bVar4 = *pbVar23;
              uVar20 = (ushort)bVar4;
              uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar11 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d49cc;
                uVar20 = CONCAT11(bVar4,pbVar23[1]);
              }
              pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
              if (10 < uVar7) goto LAB_017d4b10;
LAB_017d49dc:
              pcVar16 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                  (-(uVar15 >> 7) & 0xfffffffffffff800 | uVar15 << 3));
            }
            else {
LAB_017d49cc:
              pcVar13 = "<end>";
              if (uVar7 < 0xb) goto LAB_017d49dc;
LAB_017d4b10:
              pcVar16 = "<unknown>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar23,
                       "%s[%d] expected type %s, found %s of type %s",pcVar12,1,pcVar14,pcVar13,
                       pcVar16);
          }
        }
      }
    }
    else {
      if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
        pbVar23 = *(byte **)(param_1 + 0x10);
        if (pbVar23 < *(byte **)(param_1 + 0x18)) {
          bVar2 = *pbVar23;
          uVar20 = (ushort)bVar2;
          uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
          if ((uVar15 & 1) != 0) {
            if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d47fc;
            uVar20 = CONCAT11(bVar2,pbVar23[1]);
          }
          pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
        }
        else {
LAB_017d47fc:
          pcVar12 = "<end>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar23,"%s found empty stack",pcVar12);
      }
      pbVar23 = *(byte **)(param_1 + 0x10);
      uVar15 = 10;
      if (bVar4 != 10) goto LAB_017d4838;
    }
    lVar17 = *(long *)(param_1 + 0x4c0);
    bVar4 = *(byte *)(plVar9[2] + *plVar9);
    if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
        (ulong)(lVar17 - *(long *)(param_1 + 0x4b8) >> 4)) {
      pbVar23 = *(byte **)(lVar17 + -0x10);
      bVar2 = *(byte *)(lVar17 + -8);
      uVar15 = (ulong)bVar2;
      *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar17 + -0x10);
      if (bVar2 != bVar4) {
LAB_017d4c00:
        uVar7 = (uint)uVar15;
        if ((bVar4 != 7 || uVar7 != 8) && (bVar4 != 6 || 2 < uVar7 - 7)) {
          if ((bVar4 != 10) && ((uVar15 != 10 && (bVar4 != 9 || uVar7 != 8)))) {
            pbVar22 = *(byte **)(param_1 + 0x10);
            if (pbVar22 < *(byte **)(param_1 + 0x18)) {
              bVar2 = *pbVar22;
              uVar20 = (ushort)bVar2;
              uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar11 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar22 + 1) goto LAB_017d4c94;
                uVar20 = CONCAT11(bVar2,pbVar22[1]);
              }
              pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
            }
            else {
LAB_017d4c94:
              pcVar12 = "<end>";
            }
            if (bVar4 < 10) {
              pcVar14 = (&PTR_s_<stmt>_01cdb038)[(char)bVar4];
            }
            else {
              pcVar14 = "<unknown>";
            }
            if (pbVar23 < *(byte **)(param_1 + 0x18)) {
              bVar4 = *pbVar23;
              uVar20 = (ushort)bVar4;
              uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar11 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d4d08;
                uVar20 = CONCAT11(bVar4,pbVar23[1]);
              }
              pcVar13 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
              if (10 < uVar7) goto LAB_017d4d40;
LAB_017d4d18:
              pcVar16 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                                  (-(uVar15 >> 7) & 0xfffffffffffff800 | uVar15 << 3));
            }
            else {
LAB_017d4d08:
              pcVar13 = "<end>";
              if (uVar7 < 0xb) goto LAB_017d4d18;
LAB_017d4d40:
              pcVar16 = "<unknown>";
            }
            v8::internal::wasm::Decoder::errorf
                      ((uchar *)param_1,(char *)pbVar23,
                       "%s[%d] expected type %s, found %s of type %s",pcVar12,0,pcVar14,pcVar13,
                       pcVar16);
          }
        }
      }
    }
    else {
      if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
        pbVar23 = *(byte **)(param_1 + 0x10);
        if (pbVar23 < *(byte **)(param_1 + 0x18)) {
          bVar2 = *pbVar23;
          uVar20 = (ushort)bVar2;
          uVar15 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
          if ((uVar15 & 1) != 0) {
            if (*(byte **)(param_1 + 0x18) <= pbVar23 + 1) goto LAB_017d4bc4;
            uVar20 = CONCAT11(bVar2,pbVar23[1]);
          }
          pcVar12 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
        }
        else {
LAB_017d4bc4:
          pcVar12 = "<end>";
        }
        v8::internal::wasm::Decoder::errorf
                  ((uchar *)param_1,(char *)pbVar23,"%s found empty stack",pcVar12);
      }
      pbVar23 = *(byte **)(param_1 + 0x10);
      uVar15 = 10;
      if (bVar4 != 10) goto LAB_017d4c00;
    }
    if (((byte)param_1[0x30] & 1) == 0) {
      if ((byte)param_1[0x30] >> 1 != 0) goto LAB_017d2304;
    }
    else if (*(long *)(param_1 + 0x38) != 0) goto LAB_017d2304;
    if ((*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\0') || (param_1[1000] != (Decoder)0x0))
    goto LAB_017d2304;
    param_1[1000] = (Decoder)0x6;
    if (v8::internal::FLAG_trace_liftoff != '\0') {
      v8::internal::PrintF("[liftoff] unsupported: %s\n","table.fill");
    }
    pcVar14 = (char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                   (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8)));
    pcVar12 = "table.fill";
LAB_017d53a0:
    v8::internal::wasm::Decoder::errorf(uVar6,pcVar14,"unsupported liftoff operation: %s",pcVar12);
    goto LAB_017d2304;
  default:
    goto switchD_017d22d8_default;
  }
LAB_017d2300:
  uVar8 = 0;
LAB_017d2304:
  if (*(long *)(lVar5 + 0x28) == local_70[0]) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

