
bool FUN_015de97c(uchar *param_1,uint *param_2,uint param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  Zone *this;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  byte *pbVar18;
  uint uVar19;
  ushort uVar20;
  char *pcVar21;
  long lVar22;
  undefined8 uVar23;
  
  uVar3 = *param_2;
  if (0 < (int)uVar3) {
    lVar22 = (ulong)(uVar3 - 1) * 0x18;
    uVar9 = (ulong)uVar3;
    uVar17 = uVar3 - 1;
    do {
      puVar13 = param_2 + 2;
      if ((int)uVar9 != 1) {
        puVar13 = (uint *)(*(long *)(param_2 + 2) + lVar22);
      }
      lVar10 = *(long *)(param_1 + 0xb8);
      bVar5 = (byte)puVar13[2];
      uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
      uVar15 = (lVar10 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
      if (uVar15 < uVar9 || uVar15 - uVar9 == 0) {
        if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
          pbVar18 = *(byte **)(param_1 + 0x10);
          pcVar6 = "<end>";
          if (pbVar18 < *(byte **)(param_1 + 0x18)) {
            bVar4 = *pbVar18;
            uVar20 = (ushort)bVar4;
            uVar9 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
            if ((uVar9 & 1) != 0) {
              pcVar6 = "<end>";
              if (*(byte **)(param_1 + 0x18) <= pbVar18 + 1) goto LAB_015dea8c;
              uVar20 = CONCAT11(bVar4,pbVar18[1]);
            }
            pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
          }
LAB_015dea8c:
          v8::internal::wasm::Decoder::errorf(param_1,(char *)pbVar18,"%s found empty stack",pcVar6)
          ;
        }
        pbVar18 = *(byte **)(param_1 + 0x10);
        uVar19 = 10;
        if (bVar5 != 10) goto LAB_015deaac;
      }
      else {
        pbVar18 = *(byte **)(lVar10 + -0x18);
        bVar4 = *(byte *)(lVar10 + -0x10);
        uVar19 = (uint)bVar4;
        *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar10 + -0x18);
        if (bVar4 != bVar5) {
LAB_015deaac:
          if ((bVar5 != 7 || uVar19 != 8) && (bVar5 != 6 || 2 < uVar19 - 7)) {
            if ((bVar5 != 10) && ((uVar19 != 10 && (bVar5 != 9 || uVar19 != 8)))) {
              pbVar1 = *(byte **)(param_1 + 0x10);
              pcVar6 = "<end>";
              if (pbVar1 < *(byte **)(param_1 + 0x18)) {
                bVar4 = *pbVar1;
                uVar20 = (ushort)bVar4;
                uVar9 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar9 & 1) != 0) {
                  pcVar6 = "<end>";
                  if (*(byte **)(param_1 + 0x18) <= pbVar1 + 1) goto LAB_015deb64;
                  uVar20 = CONCAT11(bVar4,pbVar1[1]);
                }
                pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
              }
LAB_015deb64:
              pcVar21 = "<unknown>";
              if (bVar5 < 10) {
                pcVar21 = (&PTR_s_<stmt>_01cc9818)[(char)bVar5];
              }
              pcVar7 = "<end>";
              if (pbVar18 < *(byte **)(param_1 + 0x18)) {
                bVar5 = *pbVar18;
                uVar20 = (ushort)bVar5;
                uVar9 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar20);
                if ((uVar9 & 1) != 0) {
                  pcVar7 = "<end>";
                  if (*(byte **)(param_1 + 0x18) <= pbVar18 + 1) goto LAB_015debec;
                  uVar20 = CONCAT11(bVar5,pbVar18[1]);
                }
                pcVar7 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar20);
              }
LAB_015debec:
              pcVar8 = "<unknown>";
              if (uVar19 < 0xb) {
                pcVar8 = (&PTR_s_<stmt>_01cc9868)[(char)uVar19];
              }
              v8::internal::wasm::Decoder::errorf
                        (param_1,(char *)pbVar18,"%s[%d] expected type %s, found %s of type %s",
                         pcVar6,(ulong)((param_3 & 1) + uVar17),pcVar21,pcVar7,pcVar8);
            }
          }
        }
      }
      if ((int)uVar17 < 1) goto LAB_015dec4c;
      uVar9 = (ulong)*param_2;
      lVar22 = lVar22 + -0x18;
      uVar17 = uVar17 - 1;
    } while( true );
  }
LAB_015dedc0:
  if ((param_1[0x30] & 1) == 0) {
    uVar9 = (ulong)(param_1[0x30] >> 1);
  }
  else {
    uVar9 = *(ulong *)(param_1 + 0x38);
  }
  return uVar9 == 0;
LAB_015dec4c:
  if (0 < (int)uVar3) {
    uVar9 = 0;
    do {
      puVar13 = param_2 + 2;
      if (*param_2 != 1) {
        puVar13 = (uint *)(*(long *)(param_2 + 2) + uVar9 * 0x18);
      }
      puVar2 = *(undefined8 **)(param_1 + 0xb8);
      uVar17 = puVar13[2];
      if (puVar2 < *(undefined8 **)(param_1 + 0xc0)) {
        uVar12 = *(undefined8 *)(param_1 + 0x10);
        *(char *)(puVar2 + 1) = (char)uVar17;
        puVar2[2] = 0;
        *puVar2 = uVar12;
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 0x18;
      }
      else {
        lVar22 = (long)puVar2 - *(long *)(param_1 + 0xb0) >> 3;
        uVar15 = lVar22 * -0x5555555555555555 + 1;
        if (0x5555555 < uVar15) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar10 = (long)*(undefined8 **)(param_1 + 0xc0) - *(long *)(param_1 + 0xb0) >> 3;
        uVar14 = lVar10 * 0x5555555555555556;
        if (uVar15 <= uVar14) {
          uVar15 = uVar14;
        }
        if (0x2aaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
          uVar15 = 0x5555555;
        }
        if (uVar15 == 0) {
          lVar10 = 0;
        }
        else {
          this = *(Zone **)(param_1 + 200);
          uVar14 = uVar15 * 0x18;
          lVar10 = *(long *)(this + 0x10);
          if (uVar14 < (ulong)(*(long *)(this + 0x18) - lVar10) ||
              uVar14 - (*(long *)(this + 0x18) - lVar10) == 0) {
            *(ulong *)(this + 0x10) = lVar10 + uVar14;
          }
          else {
            lVar10 = v8::internal::Zone::NewExpand(this,uVar14);
          }
        }
        uVar12 = *(undefined8 *)(param_1 + 0x10);
        puVar11 = (undefined8 *)(lVar10 + lVar22 * 8);
        *(char *)(puVar11 + 1) = (char)uVar17;
        puVar11[2] = 0;
        *puVar11 = uVar12;
        lVar22 = *(long *)(param_1 + 0xb0);
        puVar2 = puVar11;
        for (lVar16 = *(long *)(param_1 + 0xb8); lVar16 != lVar22; lVar16 = lVar16 + -0x18) {
          uVar23 = *(undefined8 *)(lVar16 + -0x10);
          uVar12 = *(undefined8 *)(lVar16 + -0x18);
          puVar2[-1] = *(undefined8 *)(lVar16 + -8);
          puVar2[-2] = uVar23;
          puVar2[-3] = uVar12;
          puVar2 = puVar2 + -3;
        }
        *(undefined8 **)(param_1 + 0xb0) = puVar2;
        *(undefined8 **)(param_1 + 0xb8) = puVar11 + 3;
        *(ulong *)(param_1 + 0xc0) = lVar10 + uVar15 * 0x18;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar3);
  }
  goto LAB_015dedc0;
}

