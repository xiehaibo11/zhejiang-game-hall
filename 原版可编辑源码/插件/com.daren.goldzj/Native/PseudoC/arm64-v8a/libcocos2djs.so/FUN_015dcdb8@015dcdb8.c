
void FUN_015dcdb8(uchar *param_1,undefined4 param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined8 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  Zone *pZVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  ushort uVar20;
  char *pcVar21;
  uint uVar22;
  undefined8 uVar23;
  
  if (param_3[1] == 2) {
    lVar15 = *(long *)(param_1 + 0xb8);
    uVar14 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
    bVar4 = *(byte *)(*param_3 + param_3[2] + 1);
    uVar13 = (lVar15 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
    if (uVar13 < uVar14 || uVar13 - uVar14 == 0) {
      if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
        pbVar18 = *(byte **)(param_1 + 0x10);
        if (pbVar18 < *(byte **)(param_1 + 0x18)) {
          bVar2 = *pbVar18;
          uVar20 = (ushort)bVar2;
          uVar13 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
          if ((uVar13 & 1) != 0) {
            if (*(byte **)(param_1 + 0x18) <= pbVar18 + 1) goto LAB_015dcf2c;
            uVar20 = CONCAT11(bVar2,pbVar18[1]);
          }
          pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
        }
        else {
LAB_015dcf2c:
          pcVar6 = "<end>";
        }
        v8::internal::wasm::Decoder::errorf(param_1,(char *)pbVar18,"%s found empty stack",pcVar6);
      }
      pbVar18 = *(byte **)(param_1 + 0x10);
      uVar17 = 0;
      uVar22 = 10;
      if (bVar4 != 10) goto LAB_015dd040;
    }
    else {
      pbVar18 = *(byte **)(lVar15 + -0x18);
      bVar2 = *(byte *)(lVar15 + -0x10);
      uVar22 = (uint)bVar2;
      uVar17 = *(undefined8 *)(lVar15 + -8);
      *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar15 + -0x18);
      if (bVar2 != bVar4) {
LAB_015dd040:
        if ((bVar4 != 7 || uVar22 != 8) && (bVar4 != 6 || 2 < uVar22 - 7)) {
          if ((bVar4 != 10) && ((uVar22 != 10 && (bVar4 != 9 || uVar22 != 8)))) {
            pbVar1 = *(byte **)(param_1 + 0x10);
            if (pbVar1 < *(byte **)(param_1 + 0x18)) {
              bVar2 = *pbVar1;
              uVar20 = (ushort)bVar2;
              uVar13 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar13 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar1 + 1) goto LAB_015dd0d4;
                uVar20 = CONCAT11(bVar2,pbVar1[1]);
              }
              pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
            }
            else {
LAB_015dd0d4:
              pcVar6 = "<end>";
            }
            if (bVar4 < 10) {
              pcVar21 = (&PTR_s_<stmt>_01cc9818)[(char)bVar4];
            }
            else {
              pcVar21 = "<unknown>";
            }
            if (pbVar18 < *(byte **)(param_1 + 0x18)) {
              bVar4 = *pbVar18;
              uVar20 = (ushort)bVar4;
              uVar13 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar13 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar18 + 1) goto LAB_015dd3a8;
                uVar20 = CONCAT11(bVar4,pbVar18[1]);
              }
              pcVar7 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
              if (uVar22 < 0xb) goto LAB_015dd3b8;
LAB_015dd3e0:
              pcVar8 = "<unknown>";
            }
            else {
LAB_015dd3a8:
              pcVar7 = "<end>";
              if (10 < uVar22) goto LAB_015dd3e0;
LAB_015dd3b8:
              pcVar8 = (&PTR_s_<stmt>_01cc9868)[(char)uVar22];
            }
            v8::internal::wasm::Decoder::errorf
                      (param_1,(char *)pbVar18,"%s[%d] expected type %s, found %s of type %s",pcVar6
                       ,1,pcVar21,pcVar7,pcVar8);
          }
        }
      }
    }
    lVar15 = *(long *)(param_1 + 0xb8);
    bVar4 = *(byte *)(param_3[2] + *param_3);
    uVar13 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
    uVar14 = (lVar15 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
    if (uVar14 < uVar13 || uVar14 - uVar13 == 0) {
      if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
        pbVar18 = *(byte **)(param_1 + 0x10);
        if (pbVar18 < *(byte **)(param_1 + 0x18)) {
          bVar2 = *pbVar18;
          uVar20 = (ushort)bVar2;
          uVar13 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
          if ((uVar13 & 1) != 0) {
            if (*(byte **)(param_1 + 0x18) <= pbVar18 + 1) goto LAB_015dd49c;
            uVar20 = CONCAT11(bVar2,pbVar18[1]);
          }
          pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
        }
        else {
LAB_015dd49c:
          pcVar6 = "<end>";
        }
        v8::internal::wasm::Decoder::errorf(param_1,(char *)pbVar18,"%s found empty stack",pcVar6);
      }
      pbVar18 = *(byte **)(param_1 + 0x10);
      uVar9 = 0;
      uVar22 = 10;
      if (bVar4 != 10) goto LAB_015dd4dc;
    }
    else {
      pbVar18 = *(byte **)(lVar15 + -0x18);
      bVar2 = *(byte *)(lVar15 + -0x10);
      uVar22 = (uint)bVar2;
      uVar9 = *(undefined8 *)(lVar15 + -8);
      *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar15 + -0x18);
      if (bVar2 != bVar4) {
LAB_015dd4dc:
        if ((bVar4 != 7 || uVar22 != 8) && (bVar4 != 6 || 2 < uVar22 - 7)) {
          if ((bVar4 != 10) && ((uVar22 != 10 && (bVar4 != 9 || uVar22 != 8)))) {
            pbVar1 = *(byte **)(param_1 + 0x10);
            if (pbVar1 < *(byte **)(param_1 + 0x18)) {
              bVar2 = *pbVar1;
              uVar20 = (ushort)bVar2;
              uVar13 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar13 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar1 + 1) goto LAB_015dd570;
                uVar20 = CONCAT11(bVar2,pbVar1[1]);
              }
              pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
            }
            else {
LAB_015dd570:
              pcVar6 = "<end>";
            }
            if (bVar4 < 10) {
              pcVar21 = (&PTR_s_<stmt>_01cc9818)[(char)bVar4];
            }
            else {
              pcVar21 = "<unknown>";
            }
            if (pbVar18 < *(byte **)(param_1 + 0x18)) {
              bVar4 = *pbVar18;
              uVar20 = (ushort)bVar4;
              uVar13 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
              if ((uVar13 & 1) != 0) {
                if (*(byte **)(param_1 + 0x18) <= pbVar18 + 1) goto LAB_015dd5e4;
                uVar20 = CONCAT11(bVar4,pbVar18[1]);
              }
              pcVar7 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
              if (uVar22 < 0xb) goto LAB_015dd5f4;
LAB_015dd61c:
              pcVar8 = "<unknown>";
            }
            else {
LAB_015dd5e4:
              pcVar7 = "<end>";
              if (10 < uVar22) goto LAB_015dd61c;
LAB_015dd5f4:
              pcVar8 = (&PTR_s_<stmt>_01cc9868)[(char)uVar22];
            }
            v8::internal::wasm::Decoder::errorf
                      (param_1,(char *)pbVar18,"%s[%d] expected type %s, found %s of type %s",pcVar6
                       ,0,pcVar21,pcVar7,pcVar8);
          }
        }
      }
    }
    if (*param_3 == 0) {
      puVar19 = (undefined8 *)0x0;
      bVar4 = param_1[0x30];
joined_r0x015dd698:
      if ((bVar4 & 1) == 0) {
        uVar13 = (ulong)(bVar4 >> 1);
      }
      else {
        uVar13 = *(ulong *)(param_1 + 0x38);
      }
      if (uVar13 != 0) {
        return;
      }
      if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\0') {
        return;
      }
      uVar17 = v8::internal::compiler::WasmGraphBuilder::Binop
                         (*(WasmGraphBuilder **)(param_1 + 0x80),param_2,uVar9,uVar17,
                          *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
      uVar17 = FUN_015ddc44(param_1 + 0x78,param_1,uVar17);
      if (puVar19 == (undefined8 *)0x0) {
        return;
      }
      puVar19[2] = uVar17;
      return;
    }
    puVar19 = *(undefined8 **)(param_1 + 0xb8);
    uVar3 = *(undefined1 *)param_3[2];
    if (puVar19 < *(undefined8 **)(param_1 + 0xc0)) {
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      *(undefined1 *)(puVar19 + 1) = uVar3;
      puVar19[2] = 0;
      *puVar19 = uVar11;
      puVar19 = *(undefined8 **)(param_1 + 0xb8);
      *(undefined8 **)(param_1 + 0xb8) = puVar19 + 3;
      bVar4 = param_1[0x30];
      goto joined_r0x015dd698;
    }
    lVar15 = (long)puVar19 - *(long *)(param_1 + 0xb0) >> 3;
    uVar13 = lVar15 * -0x5555555555555555 + 1;
    if (uVar13 < 0x5555556) {
      lVar12 = (long)*(undefined8 **)(param_1 + 0xc0) - *(long *)(param_1 + 0xb0) >> 3;
      uVar14 = lVar12 * 0x5555555555555556;
      if (uVar13 <= uVar14) {
        uVar13 = uVar14;
      }
      if (0x2aaaaa9 < (ulong)(lVar12 * -0x5555555555555555)) {
        uVar13 = 0x5555555;
      }
      if (uVar13 == 0) {
        lVar12 = 0;
      }
      else {
        pZVar10 = *(Zone **)(param_1 + 200);
        uVar14 = uVar13 * 0x18;
        lVar12 = *(long *)(pZVar10 + 0x10);
        if (uVar14 < (ulong)(*(long *)(pZVar10 + 0x18) - lVar12) ||
            uVar14 - (*(long *)(pZVar10 + 0x18) - lVar12) == 0) {
          *(ulong *)(pZVar10 + 0x10) = lVar12 + uVar14;
        }
        else {
          lVar12 = v8::internal::Zone::NewExpand(pZVar10,uVar14);
        }
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      puVar19 = (undefined8 *)(lVar12 + lVar15 * 8);
      *(undefined1 *)(puVar19 + 1) = uVar3;
      puVar19[2] = 0;
      *puVar19 = uVar11;
      lVar15 = *(long *)(param_1 + 0xb0);
      puVar5 = puVar19;
      for (lVar16 = *(long *)(param_1 + 0xb8); lVar16 != lVar15; lVar16 = lVar16 + -0x18) {
        uVar23 = *(undefined8 *)(lVar16 + -0x10);
        uVar11 = *(undefined8 *)(lVar16 + -0x18);
        puVar5[-1] = *(undefined8 *)(lVar16 + -8);
        puVar5[-2] = uVar23;
        puVar5[-3] = uVar11;
        puVar5 = puVar5 + -3;
      }
      *(undefined8 **)(param_1 + 0xb0) = puVar5;
      *(undefined8 **)(param_1 + 0xb8) = puVar19 + 3;
      *(ulong *)(param_1 + 0xc0) = lVar12 + uVar13 * 0x18;
      bVar4 = param_1[0x30];
      goto joined_r0x015dd698;
    }
    goto LAB_015dd820;
  }
  if (param_3[1] != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  lVar15 = *(long *)(param_1 + 0xb8);
  bVar4 = *(byte *)(param_3[2] + *param_3);
  uVar13 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
  uVar14 = (lVar15 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
  if (uVar14 < uVar13 || uVar14 - uVar13 == 0) {
    if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
      pbVar18 = *(byte **)(param_1 + 0x10);
      if (pbVar18 < *(byte **)(param_1 + 0x18)) {
        bVar2 = *pbVar18;
        uVar20 = (ushort)bVar2;
        uVar13 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
        if ((uVar13 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar18 + 1) goto LAB_015dcf20;
          uVar20 = CONCAT11(bVar2,pbVar18[1]);
        }
        pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
      }
      else {
LAB_015dcf20:
        pcVar6 = "<end>";
      }
      v8::internal::wasm::Decoder::errorf(param_1,(char *)pbVar18,"%s found empty stack",pcVar6);
    }
    pbVar18 = *(byte **)(param_1 + 0x10);
    uVar17 = 0;
    uVar22 = 10;
    if (bVar4 != 10) goto LAB_015dcf6c;
  }
  else {
    pbVar18 = *(byte **)(lVar15 + -0x18);
    bVar2 = *(byte *)(lVar15 + -0x10);
    uVar22 = (uint)bVar2;
    uVar17 = *(undefined8 *)(lVar15 + -8);
    *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar15 + -0x18);
    if (bVar2 != bVar4) {
LAB_015dcf6c:
      if ((bVar4 != 7 || uVar22 != 8) && (bVar4 != 6 || 2 < uVar22 - 7)) {
        if ((bVar4 != 10) && ((uVar22 != 10 && (bVar4 != 9 || uVar22 != 8)))) {
          pbVar1 = *(byte **)(param_1 + 0x10);
          if (pbVar1 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar1;
            uVar20 = (ushort)bVar2;
            uVar13 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
            if ((uVar13 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar1 + 1) goto LAB_015dd000;
              uVar20 = CONCAT11(bVar2,pbVar1[1]);
            }
            pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
          }
          else {
LAB_015dd000:
            pcVar6 = "<end>";
          }
          if (bVar4 < 10) {
            pcVar21 = (&PTR_s_<stmt>_01cc9818)[(char)bVar4];
          }
          else {
            pcVar21 = "<unknown>";
          }
          if (pbVar18 < *(byte **)(param_1 + 0x18)) {
            bVar4 = *pbVar18;
            uVar20 = (ushort)bVar4;
            uVar13 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
            if ((uVar13 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar18 + 1) goto LAB_015dd148;
              uVar20 = CONCAT11(bVar4,pbVar18[1]);
            }
            pcVar7 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
            if (uVar22 < 0xb) goto LAB_015dd158;
LAB_015dd180:
            pcVar8 = "<unknown>";
          }
          else {
LAB_015dd148:
            pcVar7 = "<end>";
            if (10 < uVar22) goto LAB_015dd180;
LAB_015dd158:
            pcVar8 = (&PTR_s_<stmt>_01cc9868)[(char)uVar22];
          }
          v8::internal::wasm::Decoder::errorf
                    (param_1,(char *)pbVar18,"%s[%d] expected type %s, found %s of type %s",pcVar6,0
                     ,pcVar21,pcVar7,pcVar8);
        }
      }
    }
  }
  if (*param_3 == 0) {
    puVar19 = (undefined8 *)0x0;
    bVar4 = param_1[0x30];
  }
  else {
    puVar19 = *(undefined8 **)(param_1 + 0xb8);
    uVar3 = *(undefined1 *)param_3[2];
    if (puVar19 < *(undefined8 **)(param_1 + 0xc0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      *(undefined1 *)(puVar19 + 1) = uVar3;
      puVar19[2] = 0;
      *puVar19 = uVar9;
      puVar19 = *(undefined8 **)(param_1 + 0xb8);
      *(undefined8 **)(param_1 + 0xb8) = puVar19 + 3;
      bVar4 = param_1[0x30];
    }
    else {
      lVar15 = (long)puVar19 - *(long *)(param_1 + 0xb0) >> 3;
      uVar13 = lVar15 * -0x5555555555555555 + 1;
      if (0x5555555 < uVar13) {
LAB_015dd820:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar12 = (long)*(undefined8 **)(param_1 + 0xc0) - *(long *)(param_1 + 0xb0) >> 3;
      uVar14 = lVar12 * 0x5555555555555556;
      if (uVar13 <= uVar14) {
        uVar13 = uVar14;
      }
      if (0x2aaaaa9 < (ulong)(lVar12 * -0x5555555555555555)) {
        uVar13 = 0x5555555;
      }
      if (uVar13 == 0) {
        lVar12 = 0;
      }
      else {
        pZVar10 = *(Zone **)(param_1 + 200);
        uVar14 = uVar13 * 0x18;
        lVar12 = *(long *)(pZVar10 + 0x10);
        if (uVar14 < (ulong)(*(long *)(pZVar10 + 0x18) - lVar12) ||
            uVar14 - (*(long *)(pZVar10 + 0x18) - lVar12) == 0) {
          *(ulong *)(pZVar10 + 0x10) = lVar12 + uVar14;
        }
        else {
          lVar12 = v8::internal::Zone::NewExpand(pZVar10,uVar14);
        }
      }
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      puVar19 = (undefined8 *)(lVar12 + lVar15 * 8);
      *(undefined1 *)(puVar19 + 1) = uVar3;
      puVar19[2] = 0;
      *puVar19 = uVar9;
      lVar15 = *(long *)(param_1 + 0xb0);
      puVar5 = puVar19;
      for (lVar16 = *(long *)(param_1 + 0xb8); lVar16 != lVar15; lVar16 = lVar16 + -0x18) {
        uVar11 = *(undefined8 *)(lVar16 + -0x10);
        uVar9 = *(undefined8 *)(lVar16 + -0x18);
        puVar5[-1] = *(undefined8 *)(lVar16 + -8);
        puVar5[-2] = uVar11;
        puVar5[-3] = uVar9;
        puVar5 = puVar5 + -3;
      }
      *(undefined8 **)(param_1 + 0xb0) = puVar5;
      *(undefined8 **)(param_1 + 0xb8) = puVar19 + 3;
      *(ulong *)(param_1 + 0xc0) = lVar12 + uVar13 * 0x18;
      bVar4 = param_1[0x30];
    }
  }
  if ((bVar4 & 1) == 0) {
    uVar13 = (ulong)(bVar4 >> 1);
  }
  else {
    uVar13 = *(ulong *)(param_1 + 0x38);
  }
  if ((uVar13 == 0) && (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) == '\0')) {
    uVar17 = v8::internal::compiler::WasmGraphBuilder::Unop
                       (*(WasmGraphBuilder **)(param_1 + 0x80),param_2,uVar17,
                        *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
    uVar17 = FUN_015ddc44(param_1 + 0x78,param_1,uVar17);
    puVar19[2] = uVar17;
  }
  return;
}

