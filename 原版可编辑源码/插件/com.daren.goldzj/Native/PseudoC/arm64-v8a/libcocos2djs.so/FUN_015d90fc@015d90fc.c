
undefined4 FUN_015d90fc(Decoder *param_1,ulong param_2,int param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  Decoder DVar5;
  undefined1 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  Zone *this;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  byte *pbVar17;
  ushort uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  
  if (*(char *)(*(long *)(param_1 + 0x48) + 0x12) == '\0') {
    v8::internal::wasm::Decoder::error
              (param_1,(uchar *)(*(long *)(param_1 + 0x10) + -1),"memory instruction with no memory"
              );
    return 0;
  }
  param_2 = param_2 & 0xff;
  v8::internal::wasm::MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
  MemoryAccessImmediate
            ((MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_60,
             param_1,(uchar *)(*(long *)(param_1 + 0x10) + (long)param_3),
             (uint)(byte)(&DAT_01a541f8)[param_2]);
  lVar14 = *(long *)(param_1 + 0xb8);
  uVar13 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
  uVar12 = (lVar14 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
  if (uVar12 < uVar13 || uVar12 - uVar13 == 0) {
    if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) == '\x02') {
      uVar16 = 0;
      goto LAB_015d9320;
    }
    pbVar17 = *(byte **)(param_1 + 0x10);
    if (pbVar17 < *(byte **)(param_1 + 0x18)) {
      bVar3 = *pbVar17;
      uVar18 = (ushort)bVar3;
      uVar12 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar18);
      if ((uVar12 & 1) != 0) {
        if (*(byte **)(param_1 + 0x18) <= pbVar17 + 1) goto LAB_015d923c;
        uVar18 = CONCAT11(bVar3,pbVar17[1]);
      }
      pcVar7 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar18);
    }
    else {
LAB_015d923c:
      pcVar7 = "<end>";
    }
    v8::internal::wasm::Decoder::errorf
              ((uchar *)param_1,(char *)pbVar17,"%s found empty stack",pcVar7);
    uVar16 = 0;
    goto LAB_015d9320;
  }
  pbVar17 = *(byte **)(lVar14 + -0x18);
  bVar3 = *(byte *)(lVar14 + -0x10);
  uVar16 = *(undefined8 *)(lVar14 + -8);
  *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar14 + -0x18);
  if ((bVar3 == 1) || (bVar3 == 10)) goto LAB_015d9320;
  pbVar1 = *(byte **)(param_1 + 0x10);
  if (pbVar1 < *(byte **)(param_1 + 0x18)) {
    bVar4 = *pbVar1;
    uVar18 = (ushort)bVar4;
    uVar12 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar18);
    if ((uVar12 & 1) != 0) {
      if (*(byte **)(param_1 + 0x18) <= pbVar1 + 1) goto LAB_015d9248;
      uVar18 = CONCAT11(bVar4,pbVar1[1]);
    }
    pcVar7 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar18);
  }
  else {
LAB_015d9248:
    pcVar7 = "<end>";
  }
  if (pbVar17 < *(byte **)(param_1 + 0x18)) {
    bVar4 = *pbVar17;
    uVar18 = (ushort)bVar4;
    uVar12 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar18);
    if ((uVar12 & 1) != 0) {
      if (*(byte **)(param_1 + 0x18) <= pbVar17 + 1) goto LAB_015d92c0;
      uVar18 = CONCAT11(bVar4,pbVar17[1]);
    }
    pcVar8 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar18);
  }
  else {
LAB_015d92c0:
    pcVar8 = "<end>";
  }
  if (bVar3 < 10) {
    pcVar9 = (&PTR_s_<stmt>_01cc9910)[(char)bVar3];
  }
  else {
    pcVar9 = "<unknown>";
  }
  v8::internal::wasm::Decoder::errorf
            ((uchar *)param_1,(char *)pbVar17,"%s[%d] expected type %s, found %s of type %s",pcVar7,
             0,"i32",pcVar8,pcVar9);
LAB_015d9320:
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  uVar6 = (&DAT_01a54207)[param_2];
  if (puVar2 < *(undefined8 **)(param_1 + 0xc0)) {
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    *(undefined1 *)(puVar2 + 1) = uVar6;
    puVar2[2] = 0;
    *puVar2 = uVar10;
    puVar19 = *(undefined8 **)(param_1 + 0xb8);
    *(undefined8 **)(param_1 + 0xb8) = puVar19 + 3;
    DVar5 = param_1[0x30];
  }
  else {
    lVar14 = (long)puVar2 - *(long *)(param_1 + 0xb0) >> 3;
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
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    puVar19 = (undefined8 *)(lVar11 + lVar14 * 8);
    *(undefined1 *)(puVar19 + 1) = uVar6;
    puVar19[2] = 0;
    *puVar19 = uVar10;
    lVar14 = *(long *)(param_1 + 0xb0);
    puVar2 = puVar19;
    for (lVar15 = *(long *)(param_1 + 0xb8); lVar15 != lVar14; lVar15 = lVar15 + -0x18) {
      uVar20 = *(undefined8 *)(lVar15 + -0x10);
      uVar10 = *(undefined8 *)(lVar15 + -0x18);
      puVar2[-1] = *(undefined8 *)(lVar15 + -8);
      puVar2[-2] = uVar20;
      puVar2[-3] = uVar10;
      puVar2 = puVar2 + -3;
    }
    *(undefined8 **)(param_1 + 0xb0) = puVar2;
    *(undefined8 **)(param_1 + 0xb8) = puVar19 + 3;
    *(ulong *)(param_1 + 0xc0) = lVar11 + uVar12 * 0x18;
    DVar5 = param_1[0x30];
  }
  if (((byte)DVar5 & 1) == 0) {
    if ((byte)DVar5 >> 1 != 0) {
      return local_58;
    }
  }
  else if (*(long *)(param_1 + 0x38) != 0) {
    return local_58;
  }
  if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) == '\0') {
    uVar16 = v8::internal::compiler::WasmGraphBuilder::LoadMem
                       (*(WasmGraphBuilder **)(param_1 + 0x80),uVar6,
                        *(undefined2 *)(v8::internal::wasm::LoadType::kMemType + param_2 * 2),uVar16
                        ,uStack_5c,local_60,*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
    uVar16 = FUN_015ddc44(param_1 + 0x78,param_1,uVar16);
    puVar19[2] = uVar16;
  }
  return local_58;
}

