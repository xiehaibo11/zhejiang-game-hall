
undefined4 FUN_015dff48(Decoder *param_1,ulong param_2,undefined4 param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  Decoder DVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  Zone *this;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  byte *pbVar16;
  ushort uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  
  if (*(char *)(*(long *)(param_1 + 0x48) + 0x12) == '\0') {
    v8::internal::wasm::Decoder::error
              (param_1,(uchar *)(*(long *)(param_1 + 0x10) + -1),"memory instruction with no memory"
              );
    return 0;
  }
  v8::internal::wasm::MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
  MemoryAccessImmediate
            ((MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_60,
             param_1,(uchar *)(*(long *)(param_1 + 0x10) + 1),
             (uint)(byte)(&DAT_01a541f8)[param_2 & 0xff]);
  lVar13 = *(long *)(param_1 + 0xb8);
  uVar12 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
  uVar11 = (lVar13 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
  if (uVar11 < uVar12 || uVar11 - uVar12 == 0) {
    if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) == '\x02') {
      uVar15 = 0;
      goto LAB_015e0170;
    }
    pbVar16 = *(byte **)(param_1 + 0x10);
    if (pbVar16 < *(byte **)(param_1 + 0x18)) {
      bVar3 = *pbVar16;
      uVar17 = (ushort)bVar3;
      uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar17);
      if ((uVar11 & 1) != 0) {
        if (*(byte **)(param_1 + 0x18) <= pbVar16 + 1) goto LAB_015e008c;
        uVar17 = CONCAT11(bVar3,pbVar16[1]);
      }
      pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar17);
    }
    else {
LAB_015e008c:
      pcVar6 = "<end>";
    }
    v8::internal::wasm::Decoder::errorf
              ((uchar *)param_1,(char *)pbVar16,"%s found empty stack",pcVar6);
    uVar15 = 0;
    goto LAB_015e0170;
  }
  pbVar16 = *(byte **)(lVar13 + -0x18);
  bVar3 = *(byte *)(lVar13 + -0x10);
  uVar15 = *(undefined8 *)(lVar13 + -8);
  *(undefined8 **)(param_1 + 0xb8) = (undefined8 *)(lVar13 + -0x18);
  if ((bVar3 == 1) || (bVar3 == 10)) goto LAB_015e0170;
  pbVar1 = *(byte **)(param_1 + 0x10);
  if (pbVar1 < *(byte **)(param_1 + 0x18)) {
    bVar4 = *pbVar1;
    uVar17 = (ushort)bVar4;
    uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar17);
    if ((uVar11 & 1) != 0) {
      if (*(byte **)(param_1 + 0x18) <= pbVar1 + 1) goto LAB_015e0098;
      uVar17 = CONCAT11(bVar4,pbVar1[1]);
    }
    pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar17);
  }
  else {
LAB_015e0098:
    pcVar6 = "<end>";
  }
  if (pbVar16 < *(byte **)(param_1 + 0x18)) {
    bVar4 = *pbVar16;
    uVar17 = (ushort)bVar4;
    uVar11 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar17);
    if ((uVar11 & 1) != 0) {
      if (*(byte **)(param_1 + 0x18) <= pbVar16 + 1) goto LAB_015e0110;
      uVar17 = CONCAT11(bVar4,pbVar16[1]);
    }
    pcVar7 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar17);
  }
  else {
LAB_015e0110:
    pcVar7 = "<end>";
  }
  if (bVar3 < 10) {
    pcVar8 = (&PTR_s_<stmt>_01cc9910)[(char)bVar3];
  }
  else {
    pcVar8 = "<unknown>";
  }
  v8::internal::wasm::Decoder::errorf
            ((uchar *)param_1,(char *)pbVar16,"%s[%d] expected type %s, found %s of type %s",pcVar6,
             0,"i32",pcVar7,pcVar8);
LAB_015e0170:
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar2 < *(undefined8 **)(param_1 + 0xc0)) {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    *(undefined1 *)(puVar2 + 1) = 5;
    puVar2[2] = 0;
    *puVar2 = uVar9;
    puVar18 = *(undefined8 **)(param_1 + 0xb8);
    *(undefined8 **)(param_1 + 0xb8) = puVar18 + 3;
    DVar5 = param_1[0x30];
  }
  else {
    lVar13 = (long)puVar2 - *(long *)(param_1 + 0xb0) >> 3;
    uVar11 = lVar13 * -0x5555555555555555 + 1;
    if (0x5555555 < uVar11) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar10 = (long)*(undefined8 **)(param_1 + 0xc0) - *(long *)(param_1 + 0xb0) >> 3;
    uVar12 = lVar10 * 0x5555555555555556;
    if (uVar11 <= uVar12) {
      uVar11 = uVar12;
    }
    if (0x2aaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
      uVar11 = 0x5555555;
    }
    if (uVar11 == 0) {
      lVar10 = 0;
    }
    else {
      this = *(Zone **)(param_1 + 200);
      uVar12 = uVar11 * 0x18;
      lVar10 = *(long *)(this + 0x10);
      if (uVar12 < (ulong)(*(long *)(this + 0x18) - lVar10) ||
          uVar12 - (*(long *)(this + 0x18) - lVar10) == 0) {
        *(ulong *)(this + 0x10) = lVar10 + uVar12;
      }
      else {
        lVar10 = v8::internal::Zone::NewExpand(this,uVar12);
      }
    }
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    puVar18 = (undefined8 *)(lVar10 + lVar13 * 8);
    *(undefined1 *)(puVar18 + 1) = 5;
    puVar18[2] = 0;
    *puVar18 = uVar9;
    lVar13 = *(long *)(param_1 + 0xb0);
    puVar2 = puVar18;
    for (lVar14 = *(long *)(param_1 + 0xb8); lVar14 != lVar13; lVar14 = lVar14 + -0x18) {
      uVar19 = *(undefined8 *)(lVar14 + -0x10);
      uVar9 = *(undefined8 *)(lVar14 + -0x18);
      puVar2[-1] = *(undefined8 *)(lVar14 + -8);
      puVar2[-2] = uVar19;
      puVar2[-3] = uVar9;
      puVar2 = puVar2 + -3;
    }
    *(undefined8 **)(param_1 + 0xb0) = puVar2;
    *(undefined8 **)(param_1 + 0xb8) = puVar18 + 3;
    *(ulong *)(param_1 + 0xc0) = lVar10 + uVar11 * 0x18;
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
    uVar15 = v8::internal::compiler::WasmGraphBuilder::LoadTransform
                       (*(WasmGraphBuilder **)(param_1 + 0x80),
                        *(undefined2 *)
                         (v8::internal::wasm::LoadType::kMemType + (param_2 & 0xff) * 2),param_3,
                        uVar15,uStack_5c,local_60,*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
    uVar15 = FUN_015ddc44(param_1 + 0x78,param_1,uVar15);
    puVar18[2] = uVar15;
  }
  return local_58;
}

