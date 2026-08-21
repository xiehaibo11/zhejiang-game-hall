
undefined8 FUN_015df848(Decoder *param_1,int param_2,byte param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  Decoder DVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char *pcVar10;
  Zone *this;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ushort uVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  undefined8 uVar20;
  uint uVar21;
  undefined8 uVar22;
  byte *local_a8;
  byte local_a0;
  undefined4 local_9f;
  undefined3 uStack_9b;
  undefined8 local_98;
  byte *local_90;
  undefined1 local_88;
  undefined4 local_87;
  undefined3 uStack_83;
  undefined8 local_80;
  undefined4 local_78;
  undefined3 uStack_74;
  undefined4 uStack_70;
  undefined3 uStack_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pbVar18 = (byte *)(*(long *)(param_1 + 0x10) + 2);
  if ((*(byte **)(param_1 + 0x18) < pbVar18) || ((int)*(byte **)(param_1 + 0x18) == (int)pbVar18)) {
    v8::internal::wasm::Decoder::error(param_1,pbVar18,"lane");
    uVar19 = 0;
  }
  else {
    uVar19 = (ulong)*pbVar18;
  }
  uVar21 = param_2 - 0xfd05;
  if ((0x12 < uVar21) || ((0x6db77U >> (ulong)(uVar21 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if (*(uint *)(&DAT_01a54234 + (long)(int)uVar21 * 4) <= (uint)uVar19) {
    v8::internal::wasm::Decoder::error
              (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 2),"invalid lane index");
    goto LAB_015dfed8;
  }
  pbVar18 = *(byte **)(param_1 + 0x10);
  local_80 = 0;
  local_a0 = 10;
  local_88 = 10;
  local_98 = 0;
  lVar14 = *(long *)(param_1 + 0xb8);
  uVar13 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
  uVar12 = (lVar14 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
  local_a8 = pbVar18;
  local_90 = pbVar18;
  if (uVar12 < uVar13 || uVar12 - uVar13 == 0) {
    pbVar17 = pbVar18;
    if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
      if (pbVar18 < *(byte **)(param_1 + 0x18)) {
        bVar2 = *pbVar18;
        uVar16 = (ushort)bVar2;
        uVar12 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar16);
        if ((uVar12 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar18 + 1) goto LAB_015df9b0;
          uVar16 = CONCAT11(bVar2,pbVar18[1]);
        }
        pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar16);
      }
      else {
LAB_015df9b0:
        pcVar6 = "<end>";
      }
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar18,"%s found empty stack",pcVar6);
      pbVar17 = *(byte **)(param_1 + 0x10);
    }
    uVar20 = 0;
    uVar21 = 10;
    pbVar18 = pbVar17;
    if (param_3 != 10) goto LAB_015df9f4;
  }
  else {
    pbVar17 = *(byte **)(lVar14 + -0x18);
    local_78 = *(undefined4 *)(lVar14 + -0xf);
    bVar2 = *(byte *)(lVar14 + -0x10);
    uVar21 = (uint)bVar2;
    uStack_6c = (undefined3)((uint)*(undefined4 *)(lVar14 + -0xc) >> 8);
    uVar20 = *(undefined8 *)(lVar14 + -8);
    *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar14 + -0x18);
    uStack_74 = uStack_6c;
    uStack_70 = local_78;
    if (bVar2 != param_3) {
LAB_015df9f4:
      if ((param_3 != 7 || uVar21 != 8) && (param_3 != 6 || 2 < uVar21 - 7)) {
        if ((param_3 != 10) && ((uVar21 != 10 && (param_3 != 9 || uVar21 != 8)))) {
          if (pbVar18 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar18;
            uVar16 = (ushort)bVar2;
            uVar12 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar16);
            if ((uVar12 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar18 + 1) goto LAB_015dfa90;
              uVar16 = CONCAT11(bVar2,pbVar18[1]);
            }
            pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar16);
          }
          else {
LAB_015dfa90:
            pcVar6 = "<end>";
          }
          if (param_3 < 10) {
            pcVar7 = (&PTR_s_<stmt>_01cc9818)[(char)param_3];
          }
          else {
            pcVar7 = "<unknown>";
          }
          if (pbVar17 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar17;
            uVar16 = (ushort)bVar2;
            uVar12 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar16);
            if ((uVar12 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar17 + 1) goto LAB_015dfb08;
              uVar16 = CONCAT11(bVar2,pbVar17[1]);
            }
            pcVar10 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar16);
            if (10 < uVar21) goto LAB_015dfb40;
LAB_015dfb18:
            pcVar9 = (&PTR_s_<stmt>_01cc9868)[(char)uVar21];
          }
          else {
LAB_015dfb08:
            pcVar10 = "<end>";
            if (uVar21 < 0xb) goto LAB_015dfb18;
LAB_015dfb40:
            pcVar9 = "<unknown>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar17,"%s[%d] expected type %s, found %s of type %s"
                     ,pcVar6,1,pcVar7,pcVar10,pcVar9);
        }
      }
    }
  }
  local_88 = (undefined1)uVar21;
  local_87 = local_78;
  uStack_83 = uStack_74;
  lVar14 = *(long *)(param_1 + 0xb8);
  uVar13 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
  uVar12 = (lVar14 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
  local_90 = pbVar17;
  local_80 = uVar20;
  if (uVar12 < uVar13 || uVar12 - uVar13 == 0) {
    if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
      pbVar18 = *(byte **)(param_1 + 0x10);
      if (pbVar18 < *(byte **)(param_1 + 0x18)) {
        bVar2 = *pbVar18;
        uVar16 = (ushort)bVar2;
        uVar12 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar16);
        if ((uVar12 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar18 + 1) goto LAB_015dfc6c;
          uVar16 = CONCAT11(bVar2,pbVar18[1]);
        }
        pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar16);
      }
      else {
LAB_015dfc6c:
        pcVar6 = "<end>";
      }
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar18,"%s found empty stack",pcVar6);
    }
    pbVar18 = *(byte **)(param_1 + 0x10);
    uVar20 = 0;
    bVar2 = 10;
  }
  else {
    pbVar18 = *(byte **)(lVar14 + -0x18);
    local_78 = *(undefined4 *)(lVar14 + -0xf);
    bVar2 = *(byte *)(lVar14 + -0x10);
    uStack_6c = (undefined3)((uint)*(undefined4 *)(lVar14 + -0xc) >> 8);
    uVar20 = *(undefined8 *)(lVar14 + -8);
    *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar14 + -0x18);
    uStack_74 = uStack_6c;
    uStack_70 = local_78;
    if ((bVar2 != 5) && (bVar2 != 10)) {
      pbVar17 = *(byte **)(param_1 + 0x10);
      if (pbVar17 < *(byte **)(param_1 + 0x18)) {
        bVar3 = *pbVar17;
        uVar16 = (ushort)bVar3;
        uVar12 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar16);
        if ((uVar12 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar17 + 1) goto LAB_015dfc78;
          uVar16 = CONCAT11(bVar3,pbVar17[1]);
        }
        pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar16);
      }
      else {
LAB_015dfc78:
        pcVar6 = "<end>";
      }
      if (pbVar18 < *(byte **)(param_1 + 0x18)) {
        bVar3 = *pbVar18;
        uVar16 = (ushort)bVar3;
        uVar12 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar16);
        if ((uVar12 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar18 + 1) goto LAB_015dfcf8;
          uVar16 = CONCAT11(bVar3,pbVar18[1]);
        }
        pcVar7 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar16);
        if (9 < bVar2) goto LAB_015dfd2c;
LAB_015dfd08:
        pcVar10 = (&PTR_s_<stmt>_01cc98c0)[(char)bVar2];
      }
      else {
LAB_015dfcf8:
        pcVar7 = "<end>";
        if (bVar2 < 10) goto LAB_015dfd08;
LAB_015dfd2c:
        pcVar10 = "<unknown>";
      }
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar18,"%s[%d] expected type %s, found %s of type %s",
                 pcVar6,0,&DAT_018ce057,pcVar7,pcVar10);
    }
  }
  local_a0 = bVar2;
  local_9f = local_78;
  uStack_9b = uStack_74;
  puVar1 = *(undefined8 **)(param_1 + 0xb8);
  local_a8 = pbVar18;
  local_98 = uVar20;
  if (puVar1 < *(undefined8 **)(param_1 + 0xc0)) {
    uVar20 = *(undefined8 *)(param_1 + 0x10);
    *(undefined1 *)(puVar1 + 1) = 5;
    puVar1[2] = 0;
    *puVar1 = uVar20;
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 0x18;
    DVar4 = param_1[0x30];
    if (((byte)DVar4 & 1) == 0) goto LAB_015dfda8;
LAB_015dfea8:
    if (*(long *)(param_1 + 0x38) != 0) goto LAB_015dfed8;
  }
  else {
    lVar14 = (long)puVar1 - *(long *)(param_1 + 0xb0) >> 3;
    uVar12 = lVar14 * -0x5555555555555555 + 1;
    if (0x5555555 < uVar12) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar11 = (long)*(undefined8 **)(param_1 + 0xc0) - *(long *)(param_1 + 0xb0) >> 3;
    uVar13 = lVar11 * 0x5555555555555556;
    if (uVar12 <= uVar13) {
      uVar12 = uVar13;
    }
    if (0x2aaaaa9 < (ulong)(lVar11 * -0x5555555555555555)) {
      uVar12 = 0x5555555;
    }
    if (uVar12 == 0) {
      lVar11 = 0;
    }
    else {
      this = *(Zone **)(param_1 + 200);
      uVar13 = uVar12 * 0x18;
      lVar11 = *(long *)(this + 0x10);
      if (uVar13 < (ulong)(*(long *)(this + 0x18) - lVar11) ||
          uVar13 - (*(long *)(this + 0x18) - lVar11) == 0) {
        *(ulong *)(this + 0x10) = lVar11 + uVar13;
      }
      else {
        lVar11 = v8::internal::Zone::NewExpand(this,uVar13);
      }
    }
    uVar20 = *(undefined8 *)(param_1 + 0x10);
    puVar8 = (undefined8 *)(lVar11 + lVar14 * 8);
    *(undefined1 *)(puVar8 + 1) = 5;
    puVar8[2] = 0;
    *puVar8 = uVar20;
    lVar14 = *(long *)(param_1 + 0xb0);
    puVar1 = puVar8;
    for (lVar15 = *(long *)(param_1 + 0xb8); lVar15 != lVar14; lVar15 = lVar15 + -0x18) {
      uVar22 = *(undefined8 *)(lVar15 + -0x10);
      uVar20 = *(undefined8 *)(lVar15 + -0x18);
      puVar1[-1] = *(undefined8 *)(lVar15 + -8);
      puVar1[-2] = uVar22;
      puVar1[-3] = uVar20;
      puVar1 = puVar1 + -3;
    }
    *(undefined8 **)(param_1 + 0xb0) = puVar1;
    *(undefined8 **)(param_1 + 0xb8) = puVar8 + 3;
    *(ulong *)(param_1 + 0xc0) = lVar11 + uVar12 * 0x18;
    DVar4 = param_1[0x30];
    if (((byte)DVar4 & 1) != 0) goto LAB_015dfea8;
LAB_015dfda8:
    if ((byte)DVar4 >> 1 != 0) goto LAB_015dfed8;
  }
  if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) == '\0') {
    FUN_015e032c(param_1 + 0x78,param_1,param_2,uVar19 | 0x100000000,&local_a8,2);
  }
LAB_015dfed8:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

