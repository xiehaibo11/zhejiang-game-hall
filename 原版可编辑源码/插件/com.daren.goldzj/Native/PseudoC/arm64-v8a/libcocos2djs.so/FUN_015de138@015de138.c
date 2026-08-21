
/* WARNING: Type propagation algorithm not settling */

void FUN_015de138(uchar *param_1,undefined4 param_2,char param_3,byte param_4,byte param_5)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  Zone *this;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  byte *pbVar17;
  ushort uVar18;
  uint uVar19;
  undefined8 uVar20;
  
  lVar11 = *(long *)(param_1 + 0xb8);
  uVar10 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
  uVar9 = (lVar11 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
  if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
    if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
      pbVar17 = *(byte **)(param_1 + 0x10);
      if (pbVar17 < *(byte **)(param_1 + 0x18)) {
        bVar2 = *pbVar17;
        uVar18 = (ushort)bVar2;
        uVar9 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar18);
        if ((uVar9 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar17 + 1) goto LAB_015de1f0;
          uVar18 = CONCAT11(bVar2,pbVar17[1]);
        }
        pcVar4 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar18);
      }
      else {
LAB_015de1f0:
        pcVar4 = "<end>";
      }
      v8::internal::wasm::Decoder::errorf(param_1,(char *)pbVar17,"%s found empty stack",pcVar4);
    }
    pbVar17 = *(byte **)(param_1 + 0x10);
    uVar13 = 0;
    uVar19 = 10;
    if (param_5 != 10) goto LAB_015de230;
  }
  else {
    pbVar17 = *(byte **)(lVar11 + -0x18);
    bVar2 = *(byte *)(lVar11 + -0x10);
    uVar19 = (uint)bVar2;
    uVar13 = *(undefined8 *)(lVar11 + -8);
    *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar11 + -0x18);
    if (bVar2 != param_5) {
LAB_015de230:
      if ((param_5 != 7 || uVar19 != 8) && (param_5 != 6 || 2 < uVar19 - 7)) {
        if ((param_5 != 10) && ((uVar19 != 10 && (param_5 != 9 || uVar19 != 8)))) {
          pbVar1 = *(byte **)(param_1 + 0x10);
          if (pbVar1 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar1;
            uVar18 = (ushort)bVar2;
            uVar9 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar18);
            if ((uVar9 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar1 + 1) goto LAB_015de2cc;
              uVar18 = CONCAT11(bVar2,pbVar1[1]);
            }
            pcVar4 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar18);
          }
          else {
LAB_015de2cc:
            pcVar4 = "<end>";
          }
          if (param_5 < 10) {
            pcVar14 = (&PTR_s_<stmt>_01cc9818)[(char)param_5];
          }
          else {
            pcVar14 = "<unknown>";
          }
          if (pbVar17 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar17;
            uVar18 = (ushort)bVar2;
            uVar9 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar18);
            if ((uVar9 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar17 + 1) goto LAB_015de344;
              uVar18 = CONCAT11(bVar2,pbVar17[1]);
            }
            pcVar5 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar18);
            if (uVar19 < 0xb) goto LAB_015de354;
LAB_015de37c:
            pcVar6 = "<unknown>";
          }
          else {
LAB_015de344:
            pcVar5 = "<end>";
            if (10 < uVar19) goto LAB_015de37c;
LAB_015de354:
            pcVar6 = (&PTR_s_<stmt>_01cc9868)[(char)uVar19];
          }
          v8::internal::wasm::Decoder::errorf
                    (param_1,(char *)pbVar17,"%s[%d] expected type %s, found %s of type %s",pcVar4,1
                     ,pcVar14,pcVar5,pcVar6);
        }
      }
    }
  }
  lVar11 = *(long *)(param_1 + 0xb8);
  uVar10 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
  uVar9 = (lVar11 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
  if (uVar9 < uVar10 || uVar9 - uVar10 == 0) {
    if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
      pbVar17 = *(byte **)(param_1 + 0x10);
      if (pbVar17 < *(byte **)(param_1 + 0x18)) {
        bVar2 = *pbVar17;
        uVar18 = (ushort)bVar2;
        uVar9 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar18);
        if ((uVar9 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar17 + 1) goto LAB_015de42c;
          uVar18 = CONCAT11(bVar2,pbVar17[1]);
        }
        pcVar4 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar18);
      }
      else {
LAB_015de42c:
        pcVar4 = "<end>";
      }
      v8::internal::wasm::Decoder::errorf(param_1,(char *)pbVar17,"%s found empty stack",pcVar4);
    }
    pbVar17 = *(byte **)(param_1 + 0x10);
    uVar16 = 0;
    uVar19 = 10;
    if (param_4 == 10) goto LAB_015de5e0;
  }
  else {
    pbVar17 = *(byte **)(lVar11 + -0x18);
    bVar2 = *(byte *)(lVar11 + -0x10);
    uVar19 = (uint)bVar2;
    uVar16 = *(undefined8 *)(lVar11 + -8);
    *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar11 + -0x18);
    if (bVar2 == param_4) goto LAB_015de5e0;
  }
  if ((param_4 == 7 && uVar19 == 8) || (param_4 == 6 && uVar19 - 7 < 3)) goto LAB_015de5e0;
  if ((param_4 == 10) || ((uVar19 == 10 || (param_4 == 9 && uVar19 == 8)))) goto LAB_015de5e0;
  pbVar1 = *(byte **)(param_1 + 0x10);
  if (pbVar1 < *(byte **)(param_1 + 0x18)) {
    bVar2 = *pbVar1;
    uVar18 = (ushort)bVar2;
    uVar9 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar18);
    if ((uVar9 & 1) != 0) {
      if (*(byte **)(param_1 + 0x18) <= pbVar1 + 1) goto LAB_015de508;
      uVar18 = CONCAT11(bVar2,pbVar1[1]);
    }
    pcVar4 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar18);
  }
  else {
LAB_015de508:
    pcVar4 = "<end>";
  }
  if (param_4 < 10) {
    pcVar14 = (&PTR_s_<stmt>_01cc9818)[(char)param_4];
  }
  else {
    pcVar14 = "<unknown>";
  }
  if (pbVar17 < *(byte **)(param_1 + 0x18)) {
    bVar2 = *pbVar17;
    uVar18 = (ushort)bVar2;
    uVar9 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar18);
    if ((uVar9 & 1) != 0) {
      if (*(byte **)(param_1 + 0x18) <= pbVar17 + 1) goto LAB_015de580;
      uVar18 = CONCAT11(bVar2,pbVar17[1]);
    }
    pcVar5 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar18);
    if (uVar19 < 0xb) goto LAB_015de590;
LAB_015de5b8:
    pcVar6 = "<unknown>";
  }
  else {
LAB_015de580:
    pcVar5 = "<end>";
    if (10 < uVar19) goto LAB_015de5b8;
LAB_015de590:
    pcVar6 = (&PTR_s_<stmt>_01cc9868)[(char)uVar19];
  }
  v8::internal::wasm::Decoder::errorf
            (param_1,(char *)pbVar17,"%s[%d] expected type %s, found %s of type %s",pcVar4,0,pcVar14
             ,pcVar5,pcVar6);
LAB_015de5e0:
  if (param_3 == '\0') {
    puVar15 = (undefined8 *)0x0;
    bVar2 = param_1[0x30];
  }
  else {
    puVar15 = *(undefined8 **)(param_1 + 0xb8);
    if (puVar15 < *(undefined8 **)(param_1 + 0xc0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      *(char *)(puVar15 + 1) = param_3;
      puVar15[2] = 0;
      *puVar15 = uVar7;
      puVar15 = *(undefined8 **)(param_1 + 0xb8);
      *(undefined8 **)(param_1 + 0xb8) = puVar15 + 3;
      bVar2 = param_1[0x30];
    }
    else {
      lVar11 = (long)puVar15 - *(long *)(param_1 + 0xb0) >> 3;
      uVar9 = lVar11 * -0x5555555555555555 + 1;
      if (0x5555555 < uVar9) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar8 = (long)*(undefined8 **)(param_1 + 0xc0) - *(long *)(param_1 + 0xb0) >> 3;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar9 <= uVar10) {
        uVar9 = uVar10;
      }
      if (0x2aaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar9 = 0x5555555;
      }
      if (uVar9 == 0) {
        lVar8 = 0;
      }
      else {
        this = *(Zone **)(param_1 + 200);
        uVar10 = uVar9 * 0x18;
        lVar8 = *(long *)(this + 0x10);
        if (uVar10 < (ulong)(*(long *)(this + 0x18) - lVar8) ||
            uVar10 - (*(long *)(this + 0x18) - lVar8) == 0) {
          *(ulong *)(this + 0x10) = lVar8 + uVar10;
        }
        else {
          lVar8 = v8::internal::Zone::NewExpand(this,uVar10);
        }
      }
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      puVar15 = (undefined8 *)(lVar8 + lVar11 * 8);
      *(char *)(puVar15 + 1) = param_3;
      puVar15[2] = 0;
      *puVar15 = uVar7;
      lVar11 = *(long *)(param_1 + 0xb0);
      puVar3 = puVar15;
      for (lVar12 = *(long *)(param_1 + 0xb8); lVar12 != lVar11; lVar12 = lVar12 + -0x18) {
        uVar20 = *(undefined8 *)(lVar12 + -0x10);
        uVar7 = *(undefined8 *)(lVar12 + -0x18);
        puVar3[-1] = *(undefined8 *)(lVar12 + -8);
        puVar3[-2] = uVar20;
        puVar3[-3] = uVar7;
        puVar3 = puVar3 + -3;
      }
      *(undefined8 **)(param_1 + 0xb0) = puVar3;
      *(undefined8 **)(param_1 + 0xb8) = puVar15 + 3;
      *(ulong *)(param_1 + 0xc0) = lVar8 + uVar9 * 0x18;
      bVar2 = param_1[0x30];
    }
  }
  if ((bVar2 & 1) == 0) {
    uVar9 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar9 = *(ulong *)(param_1 + 0x38);
  }
  if ((uVar9 == 0) && (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) == '\0')) {
    uVar13 = v8::internal::compiler::WasmGraphBuilder::Binop
                       (*(WasmGraphBuilder **)(param_1 + 0x80),param_2,uVar16,uVar13,
                        *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
    uVar13 = FUN_015ddc44(param_1 + 0x78,param_1,uVar13);
    if (puVar15 != (undefined8 *)0x0) {
      puVar15[2] = uVar13;
    }
  }
  return;
}

