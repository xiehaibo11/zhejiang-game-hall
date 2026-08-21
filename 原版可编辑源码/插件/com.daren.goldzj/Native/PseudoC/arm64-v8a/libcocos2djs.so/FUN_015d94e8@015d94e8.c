
undefined4 FUN_015d94e8(Decoder *param_1,ulong param_2,int param_3)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  Decoder DVar5;
  byte bVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  undefined8 uVar14;
  ushort uVar15;
  undefined *puVar16;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  
  if (*(char *)(*(long *)(param_1 + 0x48) + 0x12) == '\0') {
    v8::internal::wasm::Decoder::error
              (param_1,(uchar *)(*(long *)(param_1 + 0x10) + -1),"memory instruction with no memory"
              );
    return 0;
  }
  param_2 = param_2 & 0xff;
  v8::internal::wasm::MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
  MemoryAccessImmediate
            ((MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_70,
             param_1,(uchar *)(*(long *)(param_1 + 0x10) + (long)param_3),
             (uint)(byte)(&DAT_01a54216)[param_2]);
  lVar2 = *(long *)(param_1 + 0xb8);
  bVar6 = (&DAT_01a54220)[param_2];
  uVar11 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
  uVar10 = (lVar2 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
  if (uVar10 < uVar11 || uVar10 - uVar11 == 0) {
    if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) == '\x02') {
      uVar12 = 0;
    }
    else {
      pbVar13 = *(byte **)(param_1 + 0x10);
      if (pbVar13 < *(byte **)(param_1 + 0x18)) {
        bVar3 = *pbVar13;
        uVar15 = (ushort)bVar3;
        uVar10 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar15);
        if ((uVar10 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar13 + 1) goto LAB_015d9644;
          uVar15 = CONCAT11(bVar3,pbVar13[1]);
        }
        pcVar7 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar15);
      }
      else {
LAB_015d9644:
        pcVar7 = "<end>";
      }
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar13,"%s found empty stack",pcVar7);
      uVar12 = 0;
    }
  }
  else {
    pbVar13 = *(byte **)(lVar2 + -0x18);
    bVar3 = *(byte *)(lVar2 + -0x10);
    uVar12 = *(undefined8 *)(lVar2 + -8);
    *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar2 + -0x18);
    if ((bVar3 != bVar6) && (bVar3 != 10)) {
      pbVar1 = *(byte **)(param_1 + 0x10);
      if (pbVar1 < *(byte **)(param_1 + 0x18)) {
        bVar4 = *pbVar1;
        uVar15 = (ushort)bVar4;
        uVar10 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar15);
        if ((uVar10 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar1 + 1) goto LAB_015d9638;
          uVar15 = CONCAT11(bVar4,pbVar1[1]);
        }
        pcVar7 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar15);
      }
      else {
LAB_015d9638:
        pcVar7 = "<end>";
      }
      puVar16 = (&PTR_s_<stmt>_01cc9818)[(char)bVar6];
      if (pbVar13 < *(byte **)(param_1 + 0x18)) {
        bVar4 = *pbVar13;
        uVar15 = (ushort)bVar4;
        uVar10 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar15);
        if ((uVar10 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar13 + 1) goto LAB_015d96a0;
          uVar15 = CONCAT11(bVar4,pbVar13[1]);
        }
        pcVar8 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar15);
      }
      else {
LAB_015d96a0:
        pcVar8 = "<end>";
      }
      if (bVar3 < 10) {
        pcVar9 = (&PTR_s_<stmt>_01cc9818)[(char)bVar3];
      }
      else {
        pcVar9 = "<unknown>";
      }
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar13,"%s[%d] expected type %s, found %s of type %s",
                 pcVar7,1,puVar16,pcVar8,pcVar9);
    }
  }
  lVar2 = *(long *)(param_1 + 0xb8);
  uVar11 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
  uVar10 = (lVar2 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
  if (uVar10 < uVar11 || uVar10 - uVar11 == 0) {
    if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
      pbVar13 = *(byte **)(param_1 + 0x10);
      if (pbVar13 < *(byte **)(param_1 + 0x18)) {
        bVar3 = *pbVar13;
        uVar15 = (ushort)bVar3;
        uVar10 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar15);
        if ((uVar10 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar13 + 1) goto LAB_015d97fc;
          uVar15 = CONCAT11(bVar3,pbVar13[1]);
        }
        pcVar7 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar15);
      }
      else {
LAB_015d97fc:
        pcVar7 = "<end>";
      }
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar13,"%s found empty stack",pcVar7);
      uVar14 = 0;
      DVar5 = param_1[0x30];
      goto joined_r0x015d983c;
    }
    uVar14 = 0;
  }
  else {
    pbVar13 = *(byte **)(lVar2 + -0x18);
    bVar3 = *(byte *)(lVar2 + -0x10);
    uVar14 = *(undefined8 *)(lVar2 + -8);
    *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar2 + -0x18);
    if ((bVar3 != 1) && (bVar3 != 10)) {
      pbVar1 = *(byte **)(param_1 + 0x10);
      if (pbVar1 < *(byte **)(param_1 + 0x18)) {
        bVar4 = *pbVar1;
        uVar15 = (ushort)bVar4;
        uVar10 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar15);
        if ((uVar10 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar1 + 1) goto LAB_015d9808;
          uVar15 = CONCAT11(bVar4,pbVar1[1]);
        }
        pcVar7 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar15);
      }
      else {
LAB_015d9808:
        pcVar7 = "<end>";
      }
      if (pbVar13 < *(byte **)(param_1 + 0x18)) {
        bVar4 = *pbVar13;
        uVar15 = (ushort)bVar4;
        uVar10 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar15);
        if ((uVar10 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar13 + 1) goto LAB_015d9900;
          uVar15 = CONCAT11(bVar4,pbVar13[1]);
        }
        pcVar8 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar15);
      }
      else {
LAB_015d9900:
        pcVar8 = "<end>";
      }
      if (bVar3 < 10) {
        pcVar9 = (&PTR_s_<stmt>_01cc9910)[(char)bVar3];
      }
      else {
        pcVar9 = "<unknown>";
      }
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar13,"%s[%d] expected type %s, found %s of type %s",
                 pcVar7,0,"i32",pcVar8,pcVar9);
      DVar5 = param_1[0x30];
      goto joined_r0x015d983c;
    }
  }
  DVar5 = param_1[0x30];
joined_r0x015d983c:
  if (((byte)DVar5 & 1) == 0) {
    uVar10 = (ulong)((byte)DVar5 >> 1);
  }
  else {
    uVar10 = *(ulong *)(param_1 + 0x38);
  }
  if ((uVar10 == 0) && (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) == '\0')) {
    uVar12 = v8::internal::compiler::WasmGraphBuilder::StoreMem
                       (*(undefined8 *)(param_1 + 0x80),(&DAT_01a5422a)[param_2],uVar14,uStack_6c,
                        local_70,uVar12,*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8),
                        (long)(char)bVar6 & 0xffffffff);
    FUN_015ddc44(param_1 + 0x78,param_1,uVar12);
  }
  return local_68;
}

