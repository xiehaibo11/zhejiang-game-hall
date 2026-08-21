
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::DecodeNumericOpcode(v8::internal::wasm::WasmOpcode) */

uint __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
DecodeNumericOpcode(WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
                    *this,undefined4 param_2)

{
  uchar *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 *puVar13;
  char *pcVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  ushort uVar20;
  WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
  *pWVar21;
  byte *pbVar22;
  byte *pbVar23;
  char *pcVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
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
  plVar8 = (long *)WasmOpcodes::Signature(param_2);
  if (plVar8 == (long *)0x0) {
switchD_01334c34_default:
    Decoder::error((Decoder *)this,"invalid numeric opcode");
    goto LAB_013372dc;
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
    BuildSimpleOperator(this,param_2,plVar8);
    break;
  case 0xfc08:
    lVar16 = *(long *)(this + 0x10);
    local_108 = (undefined1 *)((ulong)local_108 & 0xffffffff00000000);
    uVar6 = Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                      ((Decoder *)this,(uchar *)(lVar16 + 2),(uint *)&local_108,"data segment index"
                      );
    puVar1 = (uchar *)(lVar16 + ((ulong)local_108 & 0xffffffff) + 2);
    puVar13 = (undefined1 *)(ulong)uVar6;
    if ((*(uchar **)(this + 0x18) < puVar1) || ((int)*(uchar **)(this + 0x18) == (int)puVar1)) {
      Decoder::error((Decoder *)this,puVar1,"memory index");
      lVar16 = *(long *)(this + 0x48);
    }
    else {
      if (*puVar1 != '\0') {
        Decoder::errorf((uchar *)this,(char *)puVar1,"expected memory index 0, found %u");
      }
      lVar16 = *(long *)(this + 0x48);
    }
    if ((lVar16 != 0) && (uVar6 < *(uint *)(lVar16 + 0x4c))) {
      uVar6 = (uint)local_108 + 1;
      if (*(char *)(lVar16 + 0x12) == '\0') {
        pbVar23 = (byte *)(*(long *)(this + 0x10) + (ulong)uVar6 + -1);
        goto LAB_01334f4c;
      }
      lVar16 = *(long *)(this + 0xa8);
      bVar4 = *(byte *)(*plVar8 + plVar8[2] + 2);
      if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
          (ulong)(lVar16 - *(long *)(this + 0xa0) >> 4)) {
        pbVar23 = *(byte **)(lVar16 + -0x10);
        bVar3 = *(byte *)(lVar16 + -8);
        uVar27 = (ulong)bVar3;
        *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar16 + -0x10);
        if (bVar3 != bVar4) {
LAB_01335e60:
          uVar7 = (uint)uVar27;
          if ((bVar4 != 7 || uVar7 != 8) && (bVar4 != 6 || 2 < uVar7 - 7)) {
            if ((bVar4 != 10) && ((uVar27 != 10 && (bVar4 != 9 || uVar7 != 8)))) {
              pbVar22 = *(byte **)(this + 0x10);
              if (pbVar22 < *(byte **)(this + 0x18)) {
                bVar3 = *pbVar22;
                uVar20 = (ushort)bVar3;
                uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar10 & 1) != 0) {
                  if (*(byte **)(this + 0x18) <= pbVar22 + 1) goto LAB_01335ef4;
                  uVar20 = CONCAT11(bVar3,pbVar22[1]);
                }
                pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
              }
              else {
LAB_01335ef4:
                pcVar11 = "<end>";
              }
              if (bVar4 < 10) {
                pcVar24 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
              }
              else {
                pcVar24 = "<unknown>";
              }
              if (pbVar23 < *(byte **)(this + 0x18)) {
                bVar4 = *pbVar23;
                uVar20 = (ushort)bVar4;
                uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar10 & 1) != 0) {
                  if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_01336de4;
                  uVar20 = CONCAT11(bVar4,pbVar23[1]);
                }
                pcVar12 = (char *)WasmOpcodes::OpcodeName(uVar20);
                if (10 < uVar7) goto LAB_01336e1c;
LAB_01336df4:
                pcVar14 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                    (-(uVar27 >> 7) & 0xfffffffffffff800 | uVar27 << 3));
              }
              else {
LAB_01336de4:
                pcVar12 = "<end>";
                if (uVar7 < 0xb) goto LAB_01336df4;
LAB_01336e1c:
                pcVar14 = "<unknown>";
              }
              Decoder::errorf((uchar *)this,(char *)pbVar23,
                              "%s[%d] expected type %s, found %s of type %s",pcVar11,2,pcVar24,
                              pcVar12,pcVar14);
            }
          }
        }
      }
      else {
        if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
          pbVar23 = *(byte **)(this + 0x10);
          if (pbVar23 < *(byte **)(this + 0x18)) {
            bVar3 = *pbVar23;
            uVar20 = (ushort)bVar3;
            uVar27 = WasmOpcodes::IsPrefixOpcode(uVar20);
            if ((uVar27 & 1) != 0) {
              if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_01335ad4;
              uVar20 = CONCAT11(bVar3,pbVar23[1]);
            }
            pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
          }
          else {
LAB_01335ad4:
            pcVar11 = "<end>";
          }
          Decoder::errorf((uchar *)this,(char *)pbVar23,"%s found empty stack",pcVar11);
        }
        pbVar23 = *(byte **)(this + 0x10);
        uVar27 = 10;
        if (bVar4 != 10) goto LAB_01335e60;
      }
      lVar18 = *(long *)(this + 200);
      lVar16 = *(long *)(this + 0xa0);
      lVar17 = *(long *)(this + 0xa8);
      uVar7 = *(uint *)(lVar18 + -0x54);
      bVar4 = *(byte *)(*plVar8 + plVar8[2] + 1);
      goto LAB_01336e60;
    }
    lVar16 = *(long *)(this + 0x10);
    pcVar11 = "invalid data segment index: %u";
LAB_013372cc:
    pbVar23 = (byte *)(lVar16 + 2);
    goto LAB_013372d8;
  case 0xfc09:
    uVar6 = Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                      ((Decoder *)this,(uchar *)(*(long *)(this + 0x10) + 2),
                       (uint *)((ulong)&local_108 | 4),"data segment index");
    local_108 = (undefined1 *)CONCAT44(local_108._4_4_,uVar6);
    puVar13 = (undefined1 *)(ulong)uVar6;
    if ((*(long *)(this + 0x48) != 0) && (uVar6 < *(uint *)(*(long *)(this + 0x48) + 0x4c))) {
LAB_01334fb8:
      uVar6 = local_108._4_4_;
      goto LAB_013372e0;
    }
    lVar16 = *(long *)(this + 0x10);
    pcVar11 = "invalid data segment index: %u";
    goto LAB_013350e8;
  case 0xfc0a:
    lVar16 = *(long *)(this + 0x10);
    puVar1 = (uchar *)(lVar16 + 2);
    if ((*(uchar **)(this + 0x18) < puVar1) || ((int)*(uchar **)(this + 0x18) == (int)puVar1)) {
      Decoder::error((Decoder *)this,puVar1,"memory index");
    }
    else if (*puVar1 != '\0') {
      Decoder::errorf((uchar *)this,(char *)puVar1,"expected memory index 0, found %u");
    }
    puVar1 = (uchar *)(lVar16 + 3);
    if ((*(uchar **)(this + 0x18) < puVar1) || ((int)*(uchar **)(this + 0x18) == (int)puVar1)) {
      Decoder::error((Decoder *)this,puVar1,"memory index");
    }
    else if (*puVar1 != '\0') {
      Decoder::errorf((uchar *)this,(char *)puVar1,"expected memory index 0, found %u");
    }
    pbVar23 = *(byte **)(this + 0x10);
    if ((*(long *)(this + 0x48) != 0) && (*(char *)(*(long *)(this + 0x48) + 0x12) != '\0')) {
      lVar16 = *(long *)(this + 0xa8);
      bVar4 = *(byte *)(*plVar8 + plVar8[2] + 2);
      if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
          (ulong)(lVar16 - *(long *)(this + 0xa0) >> 4)) {
        pbVar22 = *(byte **)(lVar16 + -0x10);
        bVar3 = *(byte *)(lVar16 + -8);
        uVar27 = (ulong)bVar3;
        *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar16 + -0x10);
        if (bVar3 != bVar4) {
LAB_01335be8:
          uVar6 = (uint)uVar27;
          if ((bVar4 != 7 || uVar6 != 8) && (bVar4 != 6 || 2 < uVar6 - 7)) {
            if ((bVar4 != 10) && ((uVar27 != 10 && (bVar4 != 9 || uVar6 != 8)))) {
              if (pbVar23 < *(byte **)(this + 0x18)) {
                bVar3 = *pbVar23;
                uVar20 = (ushort)bVar3;
                uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar10 & 1) != 0) {
                  if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_01335c7c;
                  uVar20 = CONCAT11(bVar3,pbVar23[1]);
                }
                pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
              }
              else {
LAB_01335c7c:
                pcVar11 = "<end>";
              }
              if (bVar4 < 10) {
                pcVar24 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
              }
              else {
                pcVar24 = "<unknown>";
              }
              if (pbVar22 < *(byte **)(this + 0x18)) {
                bVar4 = *pbVar22;
                uVar20 = (ushort)bVar4;
                uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar10 & 1) != 0) {
                  if (*(byte **)(this + 0x18) <= pbVar22 + 1) goto LAB_01335ff4;
                  uVar20 = CONCAT11(bVar4,pbVar22[1]);
                }
                pcVar12 = (char *)WasmOpcodes::OpcodeName(uVar20);
                if (10 < uVar6) goto LAB_013361c8;
LAB_01336004:
                pcVar14 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                    (-(uVar27 >> 7) & 0xfffffffffffff800 | uVar27 << 3));
              }
              else {
LAB_01335ff4:
                pcVar12 = "<end>";
                if (uVar6 < 0xb) goto LAB_01336004;
LAB_013361c8:
                pcVar14 = "<unknown>";
              }
              Decoder::errorf((uchar *)this,(char *)pbVar22,
                              "%s[%d] expected type %s, found %s of type %s",pcVar11,2,pcVar24,
                              pcVar12,pcVar14);
            }
          }
        }
      }
      else {
        pbVar22 = pbVar23;
        if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
          if (pbVar23 < *(byte **)(this + 0x18)) {
            bVar3 = *pbVar23;
            uVar20 = (ushort)bVar3;
            uVar27 = WasmOpcodes::IsPrefixOpcode(uVar20);
            if ((uVar27 & 1) != 0) {
              if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_01335ab0;
              uVar20 = CONCAT11(bVar3,pbVar23[1]);
            }
            pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
          }
          else {
LAB_01335ab0:
            pcVar11 = "<end>";
          }
          Decoder::errorf((uchar *)this,(char *)pbVar23,"%s found empty stack",pcVar11);
          pbVar22 = *(byte **)(this + 0x10);
        }
        uVar27 = 10;
        pbVar23 = pbVar22;
        if (bVar4 != 10) goto LAB_01335be8;
      }
      lVar16 = *(long *)(this + 0xa8);
      bVar4 = *(byte *)(*plVar8 + plVar8[2] + 1);
      if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
          (ulong)(lVar16 - *(long *)(this + 0xa0) >> 4)) {
        pbVar23 = *(byte **)(lVar16 + -0x10);
        bVar3 = *(byte *)(lVar16 + -8);
        uVar27 = (ulong)bVar3;
        *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar16 + -0x10);
        if (bVar3 != bVar4) {
LAB_013362b0:
          uVar6 = (uint)uVar27;
          if ((bVar4 != 7 || uVar6 != 8) && (bVar4 != 6 || 2 < uVar6 - 7)) {
            if ((bVar4 != 10) && ((uVar27 != 10 && (bVar4 != 9 || uVar6 != 8)))) {
              pbVar22 = *(byte **)(this + 0x10);
              if (pbVar22 < *(byte **)(this + 0x18)) {
                bVar3 = *pbVar22;
                uVar20 = (ushort)bVar3;
                uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar10 & 1) != 0) {
                  if (*(byte **)(this + 0x18) <= pbVar22 + 1) goto LAB_01336344;
                  uVar20 = CONCAT11(bVar3,pbVar22[1]);
                }
                pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
              }
              else {
LAB_01336344:
                pcVar11 = "<end>";
              }
              if (bVar4 < 10) {
                pcVar24 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
              }
              else {
                pcVar24 = "<unknown>";
              }
              if (pbVar23 < *(byte **)(this + 0x18)) {
                bVar4 = *pbVar23;
                uVar20 = (ushort)bVar4;
                uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar10 & 1) != 0) {
                  if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_01336444;
                  uVar20 = CONCAT11(bVar4,pbVar23[1]);
                }
                pcVar12 = (char *)WasmOpcodes::OpcodeName(uVar20);
                if (10 < uVar6) goto LAB_01336620;
LAB_01336454:
                pcVar14 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                    (-(uVar27 >> 7) & 0xfffffffffffff800 | uVar27 << 3));
              }
              else {
LAB_01336444:
                pcVar12 = "<end>";
                if (uVar6 < 0xb) goto LAB_01336454;
LAB_01336620:
                pcVar14 = "<unknown>";
              }
              Decoder::errorf((uchar *)this,(char *)pbVar23,
                              "%s[%d] expected type %s, found %s of type %s",pcVar11,1,pcVar24,
                              pcVar12,pcVar14);
            }
          }
        }
      }
      else {
        if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
          pbVar23 = *(byte **)(this + 0x10);
          if (pbVar23 < *(byte **)(this + 0x18)) {
            bVar3 = *pbVar23;
            uVar20 = (ushort)bVar3;
            uVar27 = WasmOpcodes::IsPrefixOpcode(uVar20);
            if ((uVar27 & 1) != 0) {
              if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_01336274;
              uVar20 = CONCAT11(bVar3,pbVar23[1]);
            }
            pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
          }
          else {
LAB_01336274:
            pcVar11 = "<end>";
          }
          Decoder::errorf((uchar *)this,(char *)pbVar23,"%s found empty stack",pcVar11);
        }
        pbVar23 = *(byte **)(this + 0x10);
        uVar27 = 10;
        if (bVar4 != 10) goto LAB_013362b0;
      }
      lVar16 = *(long *)(this + 0xa8);
      bVar4 = *(byte *)(plVar8[2] + *plVar8);
      if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
          (ulong)(lVar16 - *(long *)(this + 0xa0) >> 4)) {
        pbVar23 = *(byte **)(lVar16 + -0x10);
        bVar3 = *(byte *)(lVar16 + -8);
        uVar27 = (ulong)bVar3;
        *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar16 + -0x10);
        if (bVar3 != bVar4) {
LAB_01336708:
          uVar7 = (uint)uVar27;
          uVar6 = 2;
          if ((bVar4 == 7 && uVar7 == 8) || (bVar4 == 6 && uVar7 - 7 < 3)) goto LAB_013372e0;
          uVar6 = 2;
          if ((bVar4 == 10) || ((uVar27 == 10 || (bVar4 == 9 && uVar7 == 8)))) goto LAB_013372e0;
          pbVar22 = *(byte **)(this + 0x10);
          if (pbVar22 < *(byte **)(this + 0x18)) {
            bVar3 = *pbVar22;
            uVar20 = (ushort)bVar3;
            uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
            if ((uVar10 & 1) != 0) {
              if (*(byte **)(this + 0x18) <= pbVar22 + 1) goto LAB_013367a4;
              uVar20 = CONCAT11(bVar3,pbVar22[1]);
            }
            pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
          }
          else {
LAB_013367a4:
            pcVar11 = "<end>";
          }
          if (bVar4 < 10) {
            pcVar24 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
          }
          else {
            pcVar24 = "<unknown>";
          }
          if (pbVar23 < *(byte **)(this + 0x18)) {
            bVar4 = *pbVar23;
            uVar20 = (ushort)bVar4;
            uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
            if ((uVar10 & 1) != 0) {
              if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_013368a4;
              uVar20 = CONCAT11(bVar4,pbVar23[1]);
            }
            pcVar12 = (char *)WasmOpcodes::OpcodeName(uVar20);
            if (10 < uVar7) goto LAB_01336920;
LAB_013368b4:
            pcVar14 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                (-(uVar27 >> 7) & 0xfffffffffffff800 | uVar27 << 3));
          }
          else {
LAB_013368a4:
            pcVar12 = "<end>";
            if (uVar7 < 0xb) goto LAB_013368b4;
LAB_01336920:
            pcVar14 = "<unknown>";
          }
          Decoder::errorf((uchar *)this,(char *)pbVar23,
                          "%s[%d] expected type %s, found %s of type %s",pcVar11,0,pcVar24,pcVar12,
                          pcVar14);
          uVar6 = 2;
          goto LAB_013372e0;
        }
      }
      else {
        if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
          pbVar23 = *(byte **)(this + 0x10);
          if (pbVar23 < *(byte **)(this + 0x18)) {
            bVar3 = *pbVar23;
            uVar20 = (ushort)bVar3;
            uVar27 = WasmOpcodes::IsPrefixOpcode(uVar20);
            if ((uVar27 & 1) != 0) {
              if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_013366cc;
              uVar20 = CONCAT11(bVar3,pbVar23[1]);
            }
            pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
          }
          else {
LAB_013366cc:
            pcVar11 = "<end>";
          }
          Decoder::errorf((uchar *)this,(char *)pbVar23,"%s found empty stack",pcVar11);
        }
        pbVar23 = *(byte **)(this + 0x10);
        uVar27 = 10;
        if (bVar4 != 10) goto LAB_01336708;
      }
      uVar6 = 2;
      goto LAB_013372e0;
    }
LAB_01334f48:
    pbVar23 = pbVar23 + 2;
LAB_01334f4c:
    Decoder::errorf((uchar *)this,(char *)pbVar23,"memory instruction with no memory");
    break;
  case 0xfc0b:
    puVar1 = (uchar *)(*(long *)(this + 0x10) + 2);
    if ((*(uchar **)(this + 0x18) < puVar1) || ((int)*(uchar **)(this + 0x18) == (int)puVar1)) {
      Decoder::error((Decoder *)this,puVar1,"memory index");
    }
    else if (*puVar1 != '\0') {
      Decoder::errorf((uchar *)this,(char *)puVar1,"expected memory index 0, found %u");
    }
    pbVar23 = *(byte **)(this + 0x10);
    if ((*(long *)(this + 0x48) == 0) || (*(char *)(*(long *)(this + 0x48) + 0x12) == '\0'))
    goto LAB_01334f48;
    lVar16 = *(long *)(this + 0xa8);
    bVar4 = *(byte *)(*plVar8 + plVar8[2] + 2);
    if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
        (ulong)(lVar16 - *(long *)(this + 0xa0) >> 4)) {
      pbVar22 = *(byte **)(lVar16 + -0x10);
      bVar3 = *(byte *)(lVar16 + -8);
      uVar27 = (ulong)bVar3;
      *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar16 + -0x10);
      if (bVar3 != bVar4) {
LAB_01335b14:
        uVar6 = (uint)uVar27;
        if ((bVar4 != 7 || uVar6 != 8) && (bVar4 != 6 || 2 < uVar6 - 7)) {
          if ((bVar4 != 10) && ((uVar27 != 10 && (bVar4 != 9 || uVar6 != 8)))) {
            if (pbVar23 < *(byte **)(this + 0x18)) {
              bVar3 = *pbVar23;
              uVar20 = (ushort)bVar3;
              uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar10 & 1) != 0) {
                if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_01335ba8;
                uVar20 = CONCAT11(bVar3,pbVar23[1]);
              }
              pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
            }
            else {
LAB_01335ba8:
              pcVar11 = "<end>";
            }
            if (bVar4 < 10) {
              pcVar24 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
            }
            else {
              pcVar24 = "<unknown>";
            }
            if (pbVar22 < *(byte **)(this + 0x18)) {
              bVar4 = *pbVar22;
              uVar20 = (ushort)bVar4;
              uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar10 & 1) != 0) {
                if (*(byte **)(this + 0x18) <= pbVar22 + 1) goto LAB_01335f68;
                uVar20 = CONCAT11(bVar4,pbVar22[1]);
              }
              pcVar12 = (char *)WasmOpcodes::OpcodeName(uVar20);
              if (10 < uVar6) goto LAB_0133602c;
LAB_01335f78:
              pcVar14 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                  (-(uVar27 >> 7) & 0xfffffffffffff800 | uVar27 << 3));
            }
            else {
LAB_01335f68:
              pcVar12 = "<end>";
              if (uVar6 < 0xb) goto LAB_01335f78;
LAB_0133602c:
              pcVar14 = "<unknown>";
            }
            Decoder::errorf((uchar *)this,(char *)pbVar22,
                            "%s[%d] expected type %s, found %s of type %s",pcVar11,2,pcVar24,pcVar12
                            ,pcVar14);
          }
        }
      }
    }
    else {
      pbVar22 = pbVar23;
      if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
        if (pbVar23 < *(byte **)(this + 0x18)) {
          bVar3 = *pbVar23;
          uVar20 = (ushort)bVar3;
          uVar27 = WasmOpcodes::IsPrefixOpcode(uVar20);
          if ((uVar27 & 1) != 0) {
            if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_01335aa4;
            uVar20 = CONCAT11(bVar3,pbVar23[1]);
          }
          pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
        }
        else {
LAB_01335aa4:
          pcVar11 = "<end>";
        }
        Decoder::errorf((uchar *)this,(char *)pbVar23,"%s found empty stack",pcVar11);
        pbVar22 = *(byte **)(this + 0x10);
      }
      uVar27 = 10;
      pbVar23 = pbVar22;
      if (bVar4 != 10) goto LAB_01335b14;
    }
    lVar16 = *(long *)(this + 0xa8);
    bVar4 = *(byte *)(*plVar8 + plVar8[2] + 1);
    if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
        (ulong)(lVar16 - *(long *)(this + 0xa0) >> 4)) {
      pbVar23 = *(byte **)(lVar16 + -0x10);
      bVar3 = *(byte *)(lVar16 + -8);
      uVar27 = (ulong)bVar3;
      *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar16 + -0x10);
      if (bVar3 != bVar4) {
LAB_01336114:
        uVar6 = (uint)uVar27;
        if ((bVar4 != 7 || uVar6 != 8) && (bVar4 != 6 || 2 < uVar6 - 7)) {
          if ((bVar4 != 10) && ((uVar27 != 10 && (bVar4 != 9 || uVar6 != 8)))) {
            pbVar22 = *(byte **)(this + 0x10);
            if (pbVar22 < *(byte **)(this + 0x18)) {
              bVar3 = *pbVar22;
              uVar20 = (ushort)bVar3;
              uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar10 & 1) != 0) {
                if (*(byte **)(this + 0x18) <= pbVar22 + 1) goto LAB_013361a8;
                uVar20 = CONCAT11(bVar3,pbVar22[1]);
              }
              pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
            }
            else {
LAB_013361a8:
              pcVar11 = "<end>";
            }
            if (bVar4 < 10) {
              pcVar24 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
            }
            else {
              pcVar24 = "<unknown>";
            }
            if (pbVar23 < *(byte **)(this + 0x18)) {
              bVar4 = *pbVar23;
              uVar20 = (ushort)bVar4;
              uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar10 & 1) != 0) {
                if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_013363b8;
                uVar20 = CONCAT11(bVar4,pbVar23[1]);
              }
              pcVar12 = (char *)WasmOpcodes::OpcodeName(uVar20);
              if (10 < uVar6) goto LAB_0133647c;
LAB_013363c8:
              pcVar14 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                  (-(uVar27 >> 7) & 0xfffffffffffff800 | uVar27 << 3));
            }
            else {
LAB_013363b8:
              pcVar12 = "<end>";
              if (uVar6 < 0xb) goto LAB_013363c8;
LAB_0133647c:
              pcVar14 = "<unknown>";
            }
            Decoder::errorf((uchar *)this,(char *)pbVar23,
                            "%s[%d] expected type %s, found %s of type %s",pcVar11,1,pcVar24,pcVar12
                            ,pcVar14);
          }
        }
      }
    }
    else {
      if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
        pbVar23 = *(byte **)(this + 0x10);
        if (pbVar23 < *(byte **)(this + 0x18)) {
          bVar3 = *pbVar23;
          uVar20 = (ushort)bVar3;
          uVar27 = WasmOpcodes::IsPrefixOpcode(uVar20);
          if ((uVar27 & 1) != 0) {
            if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_013360d8;
            uVar20 = CONCAT11(bVar3,pbVar23[1]);
          }
          pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
        }
        else {
LAB_013360d8:
          pcVar11 = "<end>";
        }
        Decoder::errorf((uchar *)this,(char *)pbVar23,"%s found empty stack",pcVar11);
      }
      pbVar23 = *(byte **)(this + 0x10);
      uVar27 = 10;
      if (bVar4 != 10) goto LAB_01336114;
    }
    lVar16 = *(long *)(this + 0xa8);
    bVar4 = *(byte *)(plVar8[2] + *plVar8);
    if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
        (ulong)(lVar16 - *(long *)(this + 0xa0) >> 4)) {
      pbVar23 = *(byte **)(lVar16 + -0x10);
      bVar3 = *(byte *)(lVar16 + -8);
      uVar27 = (ulong)bVar3;
      *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar16 + -0x10);
      if (bVar3 != bVar4) {
LAB_01336564:
        uVar7 = (uint)uVar27;
        uVar6 = 1;
        if ((bVar4 == 7 && uVar7 == 8) || (bVar4 == 6 && uVar7 - 7 < 3)) goto LAB_013372e0;
        uVar6 = 1;
        if ((bVar4 == 10) || ((uVar27 == 10 || (bVar4 == 9 && uVar7 == 8)))) goto LAB_013372e0;
        pbVar22 = *(byte **)(this + 0x10);
        if (pbVar22 < *(byte **)(this + 0x18)) {
          bVar3 = *pbVar22;
          uVar20 = (ushort)bVar3;
          uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
          if ((uVar10 & 1) != 0) {
            if (*(byte **)(this + 0x18) <= pbVar22 + 1) goto LAB_01336600;
            uVar20 = CONCAT11(bVar3,pbVar22[1]);
          }
          pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
        }
        else {
LAB_01336600:
          pcVar11 = "<end>";
        }
        if (bVar4 < 10) {
          pcVar24 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
        }
        else {
          pcVar24 = "<unknown>";
        }
        if (pbVar23 < *(byte **)(this + 0x18)) {
          bVar4 = *pbVar23;
          uVar20 = (ushort)bVar4;
          uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
          if ((uVar10 & 1) != 0) {
            if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_01336818;
            uVar20 = CONCAT11(bVar4,pbVar23[1]);
          }
          pcVar12 = (char *)WasmOpcodes::OpcodeName(uVar20);
          if (10 < uVar7) goto LAB_013368dc;
LAB_01336828:
          pcVar14 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                              (-(uVar27 >> 7) & 0xfffffffffffff800 | uVar27 << 3));
        }
        else {
LAB_01336818:
          pcVar12 = "<end>";
          if (uVar7 < 0xb) goto LAB_01336828;
LAB_013368dc:
          pcVar14 = "<unknown>";
        }
        Decoder::errorf((uchar *)this,(char *)pbVar23,"%s[%d] expected type %s, found %s of type %s"
                        ,pcVar11,0,pcVar24,pcVar12,pcVar14);
        uVar6 = 1;
        goto LAB_013372e0;
      }
    }
    else {
      if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
        pbVar23 = *(byte **)(this + 0x10);
        if (pbVar23 < *(byte **)(this + 0x18)) {
          bVar3 = *pbVar23;
          uVar20 = (ushort)bVar3;
          uVar27 = WasmOpcodes::IsPrefixOpcode(uVar20);
          if ((uVar27 & 1) != 0) {
            if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_01336528;
            uVar20 = CONCAT11(bVar3,pbVar23[1]);
          }
          pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
        }
        else {
LAB_01336528:
          pcVar11 = "<end>";
        }
        Decoder::errorf((uchar *)this,(char *)pbVar23,"%s found empty stack",pcVar11);
      }
      pbVar23 = *(byte **)(this + 0x10);
      uVar27 = 10;
      if (bVar4 != 10) goto LAB_01336564;
    }
    uVar6 = 1;
    goto LAB_013372e0;
  case 0xfc0c:
    lVar16 = *(long *)(this + 0x10);
    local_120[0] = 0;
    uVar6 = Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                      ((Decoder *)this,(uchar *)(lVar16 + 2),local_120,"elem segment index");
    local_108 = (undefined1 *)0x100000000;
    lVar16 = lVar16 + (ulong)local_120[0];
    pbVar23 = (byte *)(lVar16 + 2);
    puVar13 = (undefined1 *)(ulong)uVar6;
    if (pbVar23 < *(byte **)(this + 0x18)) {
      uVar7 = *pbVar23 & 0x7f;
      if ((char)*pbVar23 < '\0') {
        uVar7 = Decoder::
                read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                          ((Decoder *)this,(uchar *)(lVar16 + 3),(uint *)((ulong)&local_108 | 4),
                           "table index",uVar7);
      }
      else {
        local_108 = (undefined1 *)0x100000000;
      }
    }
    else {
      local_108 = (undefined1 *)0x0;
      Decoder::errorf((uchar *)this,(char *)pbVar23,"expected %s","table index");
      uVar7 = 0;
    }
    local_108 = (undefined1 *)CONCAT44(local_108._4_4_,uVar7);
    lVar16 = *(long *)(this + 0x48);
    if ((lVar16 == 0) ||
       (puVar15 = (undefined1 *)
                  ((*(long *)(lVar16 + 0x120) - *(long *)(lVar16 + 0x118) >> 3) * 0x6db6db6db6db6db7
                  ), puVar15 < puVar13 || (long)puVar15 - (long)puVar13 == 0)) {
      lVar16 = *(long *)(this + 0x10);
      pcVar11 = "invalid element segment index: %u";
      goto LAB_013372cc;
    }
    uVar6 = local_120[0] + local_108._4_4_;
    if ((ulong)uVar7 < (ulong)(*(long *)(lVar16 + 0xc0) - *(long *)(lVar16 + 0xb8) >> 4)) {
      uVar10 = plVar8[1];
      local_108 = auStack_f0;
      local_f8 = local_70;
      uVar7 = (uint)uVar10;
      uVar27 = (ulong)(int)uVar7;
      if (8 < uVar7) {
        local_100 = local_108;
        base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                  ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)&local_108,uVar27);
      }
      local_100 = local_108 + uVar27 * 0x10;
      if (0 < (int)uVar7) {
        uVar10 = -(uVar10 >> 0x1f & 1) & 0xfffffff000000000 | (uVar10 & 0xffffffff) << 4;
        do {
          uVar7 = uVar7 - 1;
          pcVar11 = "<end>";
          lVar16 = *(long *)(this + 0xa8);
          bVar4 = *(byte *)(plVar8[2] + *plVar8 + uVar27 + -1);
          if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
              (ulong)(lVar16 - *(long *)(this + 0xa0) >> 4)) {
            pbVar23 = *(byte **)(lVar16 + -0x10);
            uVar26 = (ulong)*(byte *)(lVar16 + -8);
            *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar16 + -0x10);
          }
          else {
            if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
              pbVar23 = *(byte **)(this + 0x10);
              pcVar24 = pcVar11;
              if (pbVar23 < *(byte **)(this + 0x18)) {
                bVar3 = *pbVar23;
                uVar20 = (ushort)bVar3;
                uVar26 = WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar26 & 1) != 0) {
                  if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_0133562c;
                  uVar20 = CONCAT11(bVar3,pbVar23[1]);
                }
                pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar20);
              }
LAB_0133562c:
              Decoder::errorf((uchar *)this,(char *)pbVar23,"%s found empty stack",pcVar24);
            }
            pbVar23 = *(byte **)(this + 0x10);
            uVar26 = 10;
          }
          uVar25 = (uint)uVar26;
          uVar27 = uVar27 - 1;
          if (uVar25 != bVar4) {
            if ((bVar4 != 7 || uVar25 != 8) && (bVar4 != 6 || 2 < uVar25 - 7)) {
              if ((bVar4 != 10) && ((uVar26 != 10 && (bVar4 != 9 || uVar25 != 8)))) {
                pbVar22 = *(byte **)(this + 0x10);
                if (pbVar22 < *(byte **)(this + 0x18)) {
                  bVar3 = *pbVar22;
                  uVar20 = (ushort)bVar3;
                  uVar9 = WasmOpcodes::IsPrefixOpcode();
                  if ((uVar9 & 1) != 0) {
                    pcVar11 = "<end>";
                    if (*(byte **)(this + 0x18) <= pbVar22 + 1) goto LAB_0133570c;
                    uVar20 = CONCAT11(bVar3,pbVar22[1]);
                  }
                  pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
                }
LAB_0133570c:
                pcVar24 = "<unknown>";
                if (bVar4 < 10) {
                  pcVar24 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
                }
                pcVar12 = "<end>";
                if (pbVar23 < *(byte **)(this + 0x18)) {
                  bVar4 = *pbVar23;
                  uVar20 = (ushort)bVar4;
                  uVar9 = WasmOpcodes::IsPrefixOpcode(uVar20);
                  if ((uVar9 & 1) != 0) {
                    if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_01335790;
                    uVar20 = CONCAT11(bVar4,pbVar23[1]);
                  }
                  pcVar12 = (char *)WasmOpcodes::OpcodeName(uVar20);
                }
LAB_01335790:
                pcVar14 = "<unknown>";
                if (uVar25 < 0xb) {
                  pcVar14 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                      (-(uVar26 >> 7) & 0xfffffffffffff800 | uVar26 << 3));
                }
                Decoder::errorf((uchar *)this,(char *)pbVar23,
                                "%s[%d] expected type %s, found %s of type %s",pcVar11,(ulong)uVar7,
                                pcVar24,pcVar12,pcVar14);
              }
            }
          }
          *(byte **)(local_108 + (uVar10 - 0x10)) = pbVar23;
          local_108[uVar10 - 8] = (char)uVar26;
          uVar10 = uVar10 - 0x10;
        } while (0 < (long)uVar27);
      }
LAB_013357c0:
      if (local_108 != auStack_f0) {
        free(local_108);
      }
      goto LAB_013372e0;
    }
    pbVar23 = (byte *)(~(ulong)local_108._4_4_ + *(long *)(this + 0x10) + (ulong)uVar6);
    puVar13 = local_108;
    goto LAB_013350f8;
  case 0xfc0d:
    uVar6 = Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                      ((Decoder *)this,(uchar *)(*(long *)(this + 0x10) + 2),
                       (uint *)((ulong)&local_108 | 4),"elem segment index");
    local_108 = (undefined1 *)CONCAT44(local_108._4_4_,uVar6);
    lVar16 = *(long *)(this + 0x48);
    puVar13 = (undefined1 *)(ulong)uVar6;
    if ((lVar16 != 0) &&
       (puVar15 = (undefined1 *)
                  ((*(long *)(lVar16 + 0x120) - *(long *)(lVar16 + 0x118) >> 3) * 0x6db6db6db6db6db7
                  ), puVar13 <= puVar15 && (long)puVar15 - (long)puVar13 != 0)) goto LAB_01334fb8;
    lVar16 = *(long *)(this + 0x10);
    pcVar11 = "invalid element segment index: %u";
LAB_013350e8:
    pbVar23 = (byte *)(lVar16 + 2);
LAB_013372d8:
    Decoder::errorf((uchar *)this,(char *)pbVar23,pcVar11,puVar13);
    break;
  case 0xfc0e:
    TableCopyImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::TableCopyImmediate
              ((TableCopyImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)local_120,
               (Decoder *)this,*(uchar **)(this + 0x10));
    lVar16 = *(long *)(this + 0x48);
    if ((lVar16 == 0) ||
       (puVar13 = (undefined1 *)(*(long *)(lVar16 + 0xc0) - *(long *)(lVar16 + 0xb8) >> 4),
       puVar13 <= (undefined1 *)(ulong)local_118)) {
      pbVar23 = (byte *)(*(long *)(this + 0x10) + 1);
      puVar13 = (undefined1 *)(ulong)local_118;
    }
    else {
      if ((undefined1 *)(ulong)local_120[0] < puVar13) {
        uVar10 = plVar8[1];
        local_108 = auStack_f0;
        local_f8 = local_70;
        uVar7 = (uint)uVar10;
        uVar27 = (ulong)(int)uVar7;
        if (8 < uVar7) {
          local_100 = local_108;
          base::SmallVector<v8::internal::wasm::ValueBase,8ul>::Grow
                    ((SmallVector<v8::internal::wasm::ValueBase,8ul> *)&local_108,uVar27);
        }
        local_100 = local_108 + uVar27 * 0x10;
        uVar6 = local_110;
        if (0 < (int)uVar7) {
          uVar10 = -(uVar10 >> 0x1f & 1) & 0xfffffff000000000 | (uVar10 & 0xffffffff) << 4;
          do {
            uVar7 = uVar7 - 1;
            pcVar11 = "<end>";
            lVar16 = *(long *)(this + 0xa8);
            bVar4 = *(byte *)(plVar8[2] + *plVar8 + uVar27 + -1);
            if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
                (ulong)(lVar16 - *(long *)(this + 0xa0) >> 4)) {
              pbVar23 = *(byte **)(lVar16 + -0x10);
              uVar26 = (ulong)*(byte *)(lVar16 + -8);
              *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar16 + -0x10);
            }
            else {
              if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
                pbVar23 = *(byte **)(this + 0x10);
                pcVar24 = pcVar11;
                if (pbVar23 < *(byte **)(this + 0x18)) {
                  bVar3 = *pbVar23;
                  uVar20 = (ushort)bVar3;
                  uVar26 = WasmOpcodes::IsPrefixOpcode(uVar20);
                  if ((uVar26 & 1) != 0) {
                    if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_01335264;
                    uVar20 = CONCAT11(bVar3,pbVar23[1]);
                  }
                  pcVar24 = (char *)WasmOpcodes::OpcodeName(uVar20);
                }
LAB_01335264:
                Decoder::errorf((uchar *)this,(char *)pbVar23,"%s found empty stack",pcVar24);
              }
              pbVar23 = *(byte **)(this + 0x10);
              uVar26 = 10;
            }
            uVar25 = (uint)uVar26;
            uVar27 = uVar27 - 1;
            if (uVar25 != bVar4) {
              if ((bVar4 != 7 || uVar25 != 8) && (bVar4 != 6 || 2 < uVar25 - 7)) {
                if ((bVar4 != 10) && ((uVar26 != 10 && (bVar4 != 9 || uVar25 != 8)))) {
                  pbVar22 = *(byte **)(this + 0x10);
                  if (pbVar22 < *(byte **)(this + 0x18)) {
                    bVar3 = *pbVar22;
                    uVar20 = (ushort)bVar3;
                    uVar9 = WasmOpcodes::IsPrefixOpcode();
                    if ((uVar9 & 1) != 0) {
                      pcVar11 = "<end>";
                      if (*(byte **)(this + 0x18) <= pbVar22 + 1) goto LAB_01335344;
                      uVar20 = CONCAT11(bVar3,pbVar22[1]);
                    }
                    pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
                  }
LAB_01335344:
                  pcVar24 = "<unknown>";
                  if (bVar4 < 10) {
                    pcVar24 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
                  }
                  pcVar12 = "<end>";
                  if (pbVar23 < *(byte **)(this + 0x18)) {
                    bVar4 = *pbVar23;
                    uVar20 = (ushort)bVar4;
                    uVar9 = WasmOpcodes::IsPrefixOpcode(uVar20);
                    if ((uVar9 & 1) != 0) {
                      if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_013353c8;
                      uVar20 = CONCAT11(bVar4,pbVar23[1]);
                    }
                    pcVar12 = (char *)WasmOpcodes::OpcodeName(uVar20);
                  }
LAB_013353c8:
                  pcVar14 = "<unknown>";
                  if (uVar25 < 0xb) {
                    pcVar14 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                        (-(uVar26 >> 7) & 0xfffffffffffff800 | uVar26 << 3));
                  }
                  Decoder::errorf((uchar *)this,(char *)pbVar23,
                                  "%s[%d] expected type %s, found %s of type %s",pcVar11,
                                  (ulong)uVar7,pcVar24,pcVar12,pcVar14);
                }
              }
            }
            *(byte **)(local_108 + (uVar10 - 0x10)) = pbVar23;
            local_108[uVar10 - 8] = (char)uVar26;
            uVar10 = uVar10 - 0x10;
          } while (0 < (long)uVar27);
        }
        goto LAB_013357c0;
      }
      pbVar23 = (byte *)(*(long *)(this + 0x10) + 2);
      puVar13 = (undefined1 *)(ulong)local_120[0];
    }
LAB_013350f8:
    pcVar11 = "invalid table index: %u";
    goto LAB_013372d8;
  case 0xfc0f:
    pWVar21 = this + 0x10;
    local_108 = (undefined1 *)0x100000000;
    pbVar23 = (byte *)(*(long *)pWVar21 + 2);
    if (pbVar23 < *(byte **)(this + 0x18)) {
      uVar6 = *pbVar23 & 0x7f;
      puVar13 = (undefined1 *)(ulong)uVar6;
      if ((char)*pbVar23 < '\0') {
        uVar6 = Decoder::
                read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                          ((Decoder *)this,(uchar *)(*(long *)pWVar21 + 3),
                           (uint *)((ulong)&local_108 | 4),"table index",uVar6);
        puVar13 = (undefined1 *)(ulong)uVar6;
      }
      else {
        local_108 = (undefined1 *)0x100000000;
      }
    }
    else {
      local_108 = (undefined1 *)0x0;
      Decoder::errorf((uchar *)this,(char *)pbVar23,"expected %s","table index");
      puVar13 = (undefined1 *)0x0;
    }
    uVar6 = local_108._4_4_;
    local_108 = (undefined1 *)CONCAT44(local_108._4_4_,(int)puVar13);
    lVar16 = *(long *)(this + 0x48);
    pbVar23 = *(byte **)(this + 0x10);
    if ((lVar16 == 0) ||
       ((undefined1 *)(*(long *)(lVar16 + 0xc0) - *(long *)(lVar16 + 0xb8) >> 4) <= puVar13)) {
      pcVar11 = "invalid table index: %u";
      goto LAB_013372d8;
    }
    bVar4 = *(byte *)(*plVar8 + plVar8[2] + 1);
    lVar16 = *(long *)(this + 0xa8);
    if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
        (ulong)(lVar16 - *(long *)(this + 0xa0) >> 4)) {
      pbVar22 = *(byte **)(lVar16 + -0x10);
      bVar3 = *(byte *)(lVar16 + -8);
      uVar27 = (ulong)bVar3;
      *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar16 + -0x10);
      if (bVar3 != bVar4) {
LAB_01335cbc:
        uVar7 = (uint)uVar27;
        if ((bVar4 != 7 || uVar7 != 8) && (bVar4 != 6 || 2 < uVar7 - 7)) {
          if ((bVar4 != 10) && ((uVar27 != 10 && (bVar4 != 9 || uVar7 != 8)))) {
            if (pbVar23 < *(byte **)(this + 0x18)) {
              bVar3 = *pbVar23;
              uVar20 = (ushort)bVar3;
              uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar10 & 1) != 0) {
                if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_01335d50;
                uVar20 = CONCAT11(bVar3,pbVar23[1]);
              }
              pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
            }
            else {
LAB_01335d50:
              pcVar11 = "<end>";
            }
            if (bVar4 < 10) {
              pcVar24 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
            }
            else {
              pcVar24 = "<unknown>";
            }
            if (pbVar22 < *(byte **)(this + 0x18)) {
              bVar4 = *pbVar22;
              uVar20 = (ushort)bVar4;
              uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar10 & 1) != 0) {
                if (*(byte **)(this + 0x18) <= pbVar22 + 1) goto LAB_013369b8;
                uVar20 = CONCAT11(bVar4,pbVar22[1]);
              }
              pcVar12 = (char *)WasmOpcodes::OpcodeName(uVar20);
              if (10 < uVar7) goto LAB_01336a7c;
LAB_013369c8:
              pcVar14 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                  (-(uVar27 >> 7) & 0xfffffffffffff800 | uVar27 << 3));
            }
            else {
LAB_013369b8:
              pcVar12 = "<end>";
              if (uVar7 < 0xb) goto LAB_013369c8;
LAB_01336a7c:
              pcVar14 = "<unknown>";
            }
            Decoder::errorf((uchar *)this,(char *)pbVar22,
                            "%s[%d] expected type %s, found %s of type %s",pcVar11,1,pcVar24,pcVar12
                            ,pcVar14);
          }
        }
      }
    }
    else {
      pbVar22 = pbVar23;
      if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
        if (pbVar23 < *(byte **)(this + 0x18)) {
          bVar3 = *pbVar23;
          uVar20 = (ushort)bVar3;
          uVar27 = WasmOpcodes::IsPrefixOpcode(uVar20);
          if ((uVar27 & 1) != 0) {
            if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_01335abc;
            uVar20 = CONCAT11(bVar3,pbVar23[1]);
          }
          pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
        }
        else {
LAB_01335abc:
          pcVar11 = "<end>";
        }
        Decoder::errorf((uchar *)this,(char *)pbVar23,"%s found empty stack",pcVar11);
        pbVar22 = *(byte **)(this + 0x10);
      }
      uVar27 = 10;
      pbVar23 = pbVar22;
      if (bVar4 != 10) goto LAB_01335cbc;
    }
    lVar16 = *(long *)(this + 0xa8);
    bVar4 = *(byte *)(*(long *)(*(long *)(this + 0x48) + 0xb8) +
                     ((ulong)local_108 & 0xffffffff) * 0x10);
    if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
        (ulong)(lVar16 - *(long *)(this + 0xa0) >> 4)) {
      pbVar23 = *(byte **)(lVar16 + -0x10);
      bVar3 = *(byte *)(lVar16 + -8);
      uVar27 = (ulong)bVar3;
      *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar16 + -0x10);
      if (bVar3 != bVar4) {
LAB_01336b68:
        uVar7 = (uint)uVar27;
        if ((bVar4 != 7 || uVar7 != 8) && (bVar4 != 6 || 2 < uVar7 - 7)) {
          if ((bVar4 != 10) && ((uVar27 != 10 && (bVar4 != 9 || uVar7 != 8)))) {
            pbVar22 = *(byte **)(this + 0x10);
            if (pbVar22 < *(byte **)(this + 0x18)) {
              bVar3 = *pbVar22;
              uVar20 = (ushort)bVar3;
              uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar10 & 1) != 0) {
                if (*(byte **)(this + 0x18) <= pbVar22 + 1) goto LAB_01336bfc;
                uVar20 = CONCAT11(bVar3,pbVar22[1]);
              }
              pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
            }
            else {
LAB_01336bfc:
              pcVar11 = "<end>";
            }
            if (bVar4 < 10) {
              pcVar24 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
            }
            else {
              pcVar24 = "<unknown>";
            }
            if (pbVar23 < *(byte **)(this + 0x18)) {
              bVar4 = *pbVar23;
              uVar20 = (ushort)bVar4;
              uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar10 & 1) != 0) {
                if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_01336cd0;
                uVar20 = CONCAT11(bVar4,pbVar23[1]);
              }
              pcVar12 = (char *)WasmOpcodes::OpcodeName(uVar20);
              if (10 < uVar7) goto LAB_01336d08;
LAB_01336ce0:
              pcVar14 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                  (-(uVar27 >> 7) & 0xfffffffffffff800 | uVar27 << 3));
            }
            else {
LAB_01336cd0:
              pcVar12 = "<end>";
              if (uVar7 < 0xb) goto LAB_01336ce0;
LAB_01336d08:
              pcVar14 = "<unknown>";
            }
            Decoder::errorf((uchar *)this,(char *)pbVar23,
                            "%s[%d] expected type %s, found %s of type %s",pcVar11,0,pcVar24,pcVar12
                            ,pcVar14);
          }
        }
      }
    }
    else {
      if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
        pbVar23 = *(byte **)(this + 0x10);
        if (pbVar23 < *(byte **)(this + 0x18)) {
          bVar3 = *pbVar23;
          uVar20 = (ushort)bVar3;
          uVar27 = WasmOpcodes::IsPrefixOpcode(uVar20);
          if ((uVar27 & 1) != 0) {
            if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_01336b2c;
            uVar20 = CONCAT11(bVar3,pbVar23[1]);
          }
          pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
        }
        else {
LAB_01336b2c:
          pcVar11 = "<end>";
        }
        Decoder::errorf((uchar *)this,(char *)pbVar23,"%s found empty stack",pcVar11);
      }
      pbVar23 = *(byte **)pWVar21;
      uVar27 = 10;
      if (bVar4 != 10) goto LAB_01336b68;
    }
    local_120[0] = CONCAT31(local_120[0]._1_3_,1);
    puVar2 = *(undefined8 **)(this + 0xa8);
    if (*(undefined8 **)(this + 0xb0) <= puVar2) {
      std::__ndk1::
      vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
      ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                ((vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                  *)(this + 0xa0),(uchar **)pWVar21,(ValueType *)local_120);
      goto LAB_013372e0;
    }
    uVar19 = *(undefined8 *)(this + 0x10);
    *(undefined1 *)(puVar2 + 1) = 1;
    *puVar2 = uVar19;
    goto LAB_01336d54;
  case 0xfc10:
    lVar16 = *(long *)(this + 0x10);
    local_108 = (undefined1 *)0x100000000;
    pbVar23 = (byte *)(lVar16 + 2);
    if (pbVar23 < *(byte **)(this + 0x18)) {
      uVar7 = *pbVar23 & 0x7f;
      if ((char)*pbVar23 < '\0') {
        uVar7 = Decoder::
                read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                          ((Decoder *)this,(uchar *)(lVar16 + 3),(uint *)((ulong)&local_108 | 4),
                           "table index",uVar7);
      }
      else {
        local_108 = (undefined1 *)0x100000000;
      }
    }
    else {
      local_108 = (undefined1 *)0x0;
      Decoder::errorf((uchar *)this,(char *)pbVar23,"expected %s","table index");
      uVar7 = 0;
    }
    uVar6 = local_108._4_4_;
    local_108 = (undefined1 *)CONCAT44(local_108._4_4_,uVar7);
    lVar16 = *(long *)(this + 0x48);
    pbVar23 = *(byte **)(this + 0x10);
    if ((lVar16 == 0) ||
       ((ulong)(*(long *)(lVar16 + 0xc0) - *(long *)(lVar16 + 0xb8) >> 4) <= (ulong)uVar7)) {
      pcVar11 = "invalid table index: %u";
      puVar13 = (undefined1 *)(ulong)uVar7;
      goto LAB_013372d8;
    }
    local_120[0] = CONCAT31(local_120[0]._1_3_,1);
    puVar2 = *(undefined8 **)(this + 0xa8);
    if (*(undefined8 **)(this + 0xb0) <= puVar2) {
      std::__ndk1::
      vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
      ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                ((vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                  *)(this + 0xa0),(uchar **)(this + 0x10),(ValueType *)local_120);
      goto LAB_013372e0;
    }
    *puVar2 = pbVar23;
    *(undefined1 *)(puVar2 + 1) = 1;
LAB_01336d54:
    *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + 0x10;
    goto LAB_013372e0;
  case 0xfc11:
    local_108 = (undefined1 *)0x100000000;
    pbVar23 = (byte *)(*(long *)(this + 0x10) + 2);
    if (pbVar23 < *(byte **)(this + 0x18)) {
      uVar6 = *pbVar23 & 0x7f;
      puVar13 = (undefined1 *)(ulong)uVar6;
      if ((char)*pbVar23 < '\0') {
        uVar6 = Decoder::
                read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                          ((Decoder *)this,(uchar *)(*(long *)(this + 0x10) + 3),
                           (uint *)((ulong)&local_108 | 4),"table index",uVar6);
        puVar13 = (undefined1 *)(ulong)uVar6;
      }
      else {
        local_108 = (undefined1 *)0x100000000;
      }
    }
    else {
      local_108 = (undefined1 *)0x0;
      Decoder::errorf((uchar *)this,(char *)pbVar23,"expected %s","table index");
      puVar13 = (undefined1 *)0x0;
    }
    uVar6 = local_108._4_4_;
    local_108 = (undefined1 *)CONCAT44(local_108._4_4_,(int)puVar13);
    lVar16 = *(long *)(this + 0x48);
    pbVar23 = *(byte **)(this + 0x10);
    if ((lVar16 == 0) ||
       ((undefined1 *)(*(long *)(lVar16 + 0xc0) - *(long *)(lVar16 + 0xb8) >> 4) <= puVar13)) {
      pcVar11 = "invalid table index: %u";
      goto LAB_013372d8;
    }
    lVar16 = *(long *)(this + 0xa8);
    bVar4 = *(byte *)(*plVar8 + plVar8[2] + 2);
    if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
        (ulong)(lVar16 - *(long *)(this + 0xa0) >> 4)) {
      pbVar22 = *(byte **)(lVar16 + -0x10);
      bVar3 = *(byte *)(lVar16 + -8);
      uVar27 = (ulong)bVar3;
      *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar16 + -0x10);
      if (bVar3 != bVar4) {
LAB_01335d90:
        uVar7 = (uint)uVar27;
        if ((bVar4 != 7 || uVar7 != 8) && (bVar4 != 6 || 2 < uVar7 - 7)) {
          if ((bVar4 != 10) && ((uVar27 != 10 && (bVar4 != 9 || uVar7 != 8)))) {
            if (pbVar23 < *(byte **)(this + 0x18)) {
              bVar3 = *pbVar23;
              uVar20 = (ushort)bVar3;
              uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar10 & 1) != 0) {
                if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_01335e24;
                uVar20 = CONCAT11(bVar3,pbVar23[1]);
              }
              pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
            }
            else {
LAB_01335e24:
              pcVar11 = "<end>";
            }
            if (bVar4 < 10) {
              pcVar24 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
            }
            else {
              pcVar24 = "<unknown>";
            }
            if (pbVar22 < *(byte **)(this + 0x18)) {
              bVar4 = *pbVar22;
              uVar20 = (ushort)bVar4;
              uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar10 & 1) != 0) {
                if (*(byte **)(this + 0x18) <= pbVar22 + 1) goto LAB_01336a44;
                uVar20 = CONCAT11(bVar4,pbVar22[1]);
              }
              pcVar12 = (char *)WasmOpcodes::OpcodeName(uVar20);
              if (10 < uVar7) goto LAB_01336c1c;
LAB_01336a54:
              pcVar14 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                  (-(uVar27 >> 7) & 0xfffffffffffff800 | uVar27 << 3));
            }
            else {
LAB_01336a44:
              pcVar12 = "<end>";
              if (uVar7 < 0xb) goto LAB_01336a54;
LAB_01336c1c:
              pcVar14 = "<unknown>";
            }
            Decoder::errorf((uchar *)this,(char *)pbVar22,
                            "%s[%d] expected type %s, found %s of type %s",pcVar11,2,pcVar24,pcVar12
                            ,pcVar14);
          }
        }
      }
    }
    else {
      pbVar22 = pbVar23;
      if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
        if (pbVar23 < *(byte **)(this + 0x18)) {
          bVar3 = *pbVar23;
          uVar20 = (ushort)bVar3;
          uVar27 = WasmOpcodes::IsPrefixOpcode(uVar20);
          if ((uVar27 & 1) != 0) {
            if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_01335ac8;
            uVar20 = CONCAT11(bVar3,pbVar23[1]);
          }
          pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
        }
        else {
LAB_01335ac8:
          pcVar11 = "<end>";
        }
        Decoder::errorf((uchar *)this,(char *)pbVar23,"%s found empty stack",pcVar11);
        pbVar22 = *(byte **)(this + 0x10);
      }
      uVar27 = 10;
      pbVar23 = pbVar22;
      if (bVar4 != 10) goto LAB_01335d90;
    }
    lVar18 = *(long *)(this + 200);
    lVar16 = *(long *)(this + 0xa0);
    lVar17 = *(long *)(this + 0xa8);
    uVar7 = *(uint *)(lVar18 + -0x54);
    bVar4 = *(byte *)(*(long *)(*(long *)(this + 0x48) + 0xb8) +
                     ((ulong)local_108 & 0xffffffff) * 0x10);
LAB_01336e60:
    if ((ulong)uVar7 < (ulong)(lVar17 - lVar16 >> 4)) {
      pbVar23 = *(byte **)(lVar17 + -0x10);
      bVar3 = *(byte *)(lVar17 + -8);
      uVar27 = (ulong)bVar3;
      *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar17 + -0x10);
      if (bVar3 != bVar4) {
LAB_01336f04:
        uVar7 = (uint)uVar27;
        if ((bVar4 != 7 || uVar7 != 8) && (bVar4 != 6 || 2 < uVar7 - 7)) {
          if ((bVar4 != 10) && ((uVar27 != 10 && (bVar4 != 9 || uVar7 != 8)))) {
            pbVar22 = *(byte **)(this + 0x10);
            if (pbVar22 < *(byte **)(this + 0x18)) {
              bVar3 = *pbVar22;
              uVar20 = (ushort)bVar3;
              uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar10 & 1) != 0) {
                if (*(byte **)(this + 0x18) <= pbVar22 + 1) goto LAB_01336f98;
                uVar20 = CONCAT11(bVar3,pbVar22[1]);
              }
              pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
            }
            else {
LAB_01336f98:
              pcVar11 = "<end>";
            }
            if (bVar4 < 10) {
              pcVar24 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
            }
            else {
              pcVar24 = "<unknown>";
            }
            if (pbVar23 < *(byte **)(this + 0x18)) {
              bVar4 = *pbVar23;
              uVar20 = (ushort)bVar4;
              uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar10 & 1) != 0) {
                if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_0133700c;
                uVar20 = CONCAT11(bVar4,pbVar23[1]);
              }
              pcVar12 = (char *)WasmOpcodes::OpcodeName(uVar20);
              if (10 < uVar7) goto LAB_01337044;
LAB_0133701c:
              pcVar14 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                  (-(uVar27 >> 7) & 0xfffffffffffff800 | uVar27 << 3));
            }
            else {
LAB_0133700c:
              pcVar12 = "<end>";
              if (uVar7 < 0xb) goto LAB_0133701c;
LAB_01337044:
              pcVar14 = "<unknown>";
            }
            Decoder::errorf((uchar *)this,(char *)pbVar23,
                            "%s[%d] expected type %s, found %s of type %s",pcVar11,1,pcVar24,pcVar12
                            ,pcVar14);
          }
        }
      }
    }
    else {
      if (*(char *)(lVar18 + -0x48) != '\x02') {
        pbVar23 = *(byte **)(this + 0x10);
        if (pbVar23 < *(byte **)(this + 0x18)) {
          bVar3 = *pbVar23;
          uVar20 = (ushort)bVar3;
          uVar27 = WasmOpcodes::IsPrefixOpcode(uVar20);
          if ((uVar27 & 1) != 0) {
            if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_01336ec8;
            uVar20 = CONCAT11(bVar3,pbVar23[1]);
          }
          pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
        }
        else {
LAB_01336ec8:
          pcVar11 = "<end>";
        }
        Decoder::errorf((uchar *)this,(char *)pbVar23,"%s found empty stack",pcVar11);
      }
      pbVar23 = *(byte **)(this + 0x10);
      uVar27 = 10;
      if (bVar4 != 10) goto LAB_01336f04;
    }
    lVar16 = *(long *)(this + 0xa8);
    bVar4 = *(byte *)(plVar8[2] + *plVar8);
    if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
        (ulong)(lVar16 - *(long *)(this + 0xa0) >> 4)) {
      pbVar23 = *(byte **)(lVar16 + -0x10);
      bVar3 = *(byte *)(lVar16 + -8);
      uVar27 = (ulong)bVar3;
      *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar16 + -0x10);
      if (bVar3 == bVar4) goto LAB_013372e0;
    }
    else {
      if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
        pbVar23 = *(byte **)(this + 0x10);
        if (pbVar23 < *(byte **)(this + 0x18)) {
          bVar3 = *pbVar23;
          uVar20 = (ushort)bVar3;
          uVar27 = WasmOpcodes::IsPrefixOpcode(uVar20);
          if ((uVar27 & 1) != 0) {
            if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_013370ec;
            uVar20 = CONCAT11(bVar3,pbVar23[1]);
          }
          pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
        }
        else {
LAB_013370ec:
          pcVar11 = "<end>";
        }
        Decoder::errorf((uchar *)this,(char *)pbVar23,"%s found empty stack",pcVar11);
      }
      pbVar23 = *(byte **)(this + 0x10);
      uVar27 = 10;
      if (bVar4 == 10) goto LAB_013372e0;
    }
    uVar7 = (uint)uVar27;
    if ((bVar4 == 7 && uVar7 == 8) || (bVar4 == 6 && uVar7 - 7 < 3)) goto LAB_013372e0;
    if ((bVar4 == 10) || ((uVar27 == 10 || (bVar4 == 9 && uVar7 == 8)))) goto LAB_013372e0;
    pbVar22 = *(byte **)(this + 0x10);
    if (pbVar22 < *(byte **)(this + 0x18)) {
      bVar3 = *pbVar22;
      uVar20 = (ushort)bVar3;
      uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
      if ((uVar10 & 1) != 0) {
        if (*(byte **)(this + 0x18) <= pbVar22 + 1) goto LAB_013371bc;
        uVar20 = CONCAT11(bVar3,pbVar22[1]);
      }
      pcVar11 = (char *)WasmOpcodes::OpcodeName(uVar20);
    }
    else {
LAB_013371bc:
      pcVar11 = "<end>";
    }
    if (bVar4 < 10) {
      pcVar24 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar4];
    }
    else {
      pcVar24 = "<unknown>";
    }
    if (pbVar23 < *(byte **)(this + 0x18)) {
      bVar4 = *pbVar23;
      uVar20 = (ushort)bVar4;
      uVar10 = WasmOpcodes::IsPrefixOpcode(uVar20);
      if ((uVar10 & 1) != 0) {
        if (*(byte **)(this + 0x18) <= pbVar23 + 1) goto LAB_01337230;
        uVar20 = CONCAT11(bVar4,pbVar23[1]);
      }
      pcVar12 = (char *)WasmOpcodes::OpcodeName(uVar20);
      if (10 < uVar7) goto LAB_01337268;
LAB_01337240:
      pcVar14 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                          (-(uVar27 >> 7) & 0xfffffffffffff800 | uVar27 << 3));
    }
    else {
LAB_01337230:
      pcVar12 = "<end>";
      if (uVar7 < 0xb) goto LAB_01337240;
LAB_01337268:
      pcVar14 = "<unknown>";
    }
    Decoder::errorf((uchar *)this,(char *)pbVar23,"%s[%d] expected type %s, found %s of type %s",
                    pcVar11,0,pcVar24,pcVar12,pcVar14);
    goto LAB_013372e0;
  default:
    goto switchD_01334c34_default;
  }
LAB_013372dc:
  uVar6 = 0;
LAB_013372e0:
  if (*(long *)(lVar5 + 0x28) == local_70[0]) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

