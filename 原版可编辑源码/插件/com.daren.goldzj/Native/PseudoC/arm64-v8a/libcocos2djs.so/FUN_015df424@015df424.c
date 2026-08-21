
undefined8 FUN_015df424(Decoder *param_1,int param_2,undefined1 param_3)

{
  uint uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  Decoder DVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  Zone *this;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ushort uVar16;
  ulong uVar17;
  long lVar18;
  byte *pbVar19;
  undefined8 uVar20;
  byte *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  byte *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  pbVar19 = (byte *)(*(long *)(param_1 + 0x10) + 2);
  if ((*(byte **)(param_1 + 0x18) < pbVar19) || ((int)*(byte **)(param_1 + 0x18) == (int)pbVar19)) {
    v8::internal::wasm::Decoder::error(param_1,pbVar19,"lane");
    uVar17 = 0;
  }
  else {
    uVar17 = (ulong)*pbVar19;
  }
  uVar1 = param_2 - 0xfd05;
  if ((0x12 < uVar1) || ((0x6db77U >> (ulong)(uVar1 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if (*(uint *)(&DAT_01a54234 + (long)(int)uVar1 * 4) <= (uint)uVar17) {
    v8::internal::wasm::Decoder::error
              (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 2),"invalid lane index");
    return 1;
  }
  lVar18 = *(long *)(param_1 + 0xb8);
  uVar14 = (ulong)*(uint *)(*(long *)(param_1 + 0xd8) + -0x84);
  uVar13 = (lVar18 - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
  if (uVar13 < uVar14 || uVar13 - uVar14 == 0) {
    if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) != '\x02') {
      pbVar19 = *(byte **)(param_1 + 0x10);
      if (pbVar19 < *(byte **)(param_1 + 0x18)) {
        bVar5 = *pbVar19;
        uVar16 = (ushort)bVar5;
        uVar13 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar16);
        if ((uVar13 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar19 + 1) goto LAB_015df5a0;
          uVar16 = CONCAT11(bVar5,pbVar19[1]);
        }
        pcVar7 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar16);
      }
      else {
LAB_015df5a0:
        pcVar7 = "<end>";
      }
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar19,"%s found empty stack",pcVar7);
    }
    local_90 = *(byte **)(param_1 + 0x10);
    uStack_88 = CONCAT71(uStack_88._1_7_,10);
    local_80 = 0;
    goto LAB_015df694;
  }
  local_80 = *(undefined8 *)(lVar18 + -8);
  uStack_88 = *(undefined8 *)(lVar18 + -0x10);
  pbVar19 = *(byte **)(lVar18 + -0x18);
  *(long *)(param_1 + 0xb8) = lVar18 + -0x18;
  bVar5 = (byte)uStack_88;
  local_90 = pbVar19;
  local_70 = pbVar19;
  uStack_68 = uStack_88;
  local_60 = local_80;
  if (((byte)uStack_88 == 5) || ((byte)uStack_88 == 10)) goto LAB_015df694;
  pbVar2 = *(byte **)(param_1 + 0x10);
  lVar18 = (long)(char)(byte)uStack_88;
  if (pbVar2 < *(byte **)(param_1 + 0x18)) {
    bVar4 = *pbVar2;
    uVar16 = (ushort)bVar4;
    uVar13 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar16);
    if ((uVar13 & 1) != 0) {
      if (*(byte **)(param_1 + 0x18) <= pbVar2 + 1) goto LAB_015df5ac;
      uVar16 = CONCAT11(bVar4,pbVar2[1]);
    }
    pcVar7 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar16);
  }
  else {
LAB_015df5ac:
    pcVar7 = "<end>";
  }
  if (pbVar19 < *(byte **)(param_1 + 0x18)) {
    bVar4 = *pbVar19;
    uVar16 = (ushort)bVar4;
    uVar13 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar16);
    if ((uVar13 & 1) != 0) {
      if (*(byte **)(param_1 + 0x18) <= pbVar19 + 1) goto LAB_015df634;
      uVar16 = CONCAT11(bVar4,pbVar19[1]);
    }
    pcVar8 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar16);
  }
  else {
LAB_015df634:
    pcVar8 = "<end>";
  }
  if (bVar5 < 10) {
    pcVar10 = (&PTR_s_<stmt>_01cc98c0)[lVar18];
  }
  else {
    pcVar10 = "<unknown>";
  }
  v8::internal::wasm::Decoder::errorf
            ((uchar *)param_1,(char *)pbVar19,"%s[%d] expected type %s, found %s of type %s",pcVar7,
             0,&DAT_018ce057,pcVar8,pcVar10);
LAB_015df694:
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar3 < *(undefined8 **)(param_1 + 0xc0)) {
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    *(undefined1 *)(puVar3 + 1) = param_3;
    puVar3[2] = 0;
    *puVar3 = uVar11;
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 0x18;
    DVar6 = param_1[0x30];
  }
  else {
    lVar18 = (long)puVar3 - *(long *)(param_1 + 0xb0) >> 3;
    uVar13 = lVar18 * -0x5555555555555555 + 1;
    if (0x5555555 < uVar13) {
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
      this = *(Zone **)(param_1 + 200);
      uVar14 = uVar13 * 0x18;
      lVar12 = *(long *)(this + 0x10);
      if (uVar14 < (ulong)(*(long *)(this + 0x18) - lVar12) ||
          uVar14 - (*(long *)(this + 0x18) - lVar12) == 0) {
        *(ulong *)(this + 0x10) = lVar12 + uVar14;
      }
      else {
        lVar12 = v8::internal::Zone::NewExpand(this,uVar14);
      }
    }
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    puVar9 = (undefined8 *)(lVar12 + lVar18 * 8);
    *(undefined1 *)(puVar9 + 1) = param_3;
    puVar9[2] = 0;
    *puVar9 = uVar11;
    lVar18 = *(long *)(param_1 + 0xb0);
    puVar3 = puVar9;
    for (lVar15 = *(long *)(param_1 + 0xb8); lVar15 != lVar18; lVar15 = lVar15 + -0x18) {
      uVar20 = *(undefined8 *)(lVar15 + -0x10);
      uVar11 = *(undefined8 *)(lVar15 + -0x18);
      puVar3[-1] = *(undefined8 *)(lVar15 + -8);
      puVar3[-2] = uVar20;
      puVar3[-3] = uVar11;
      puVar3 = puVar3 + -3;
    }
    *(undefined8 **)(param_1 + 0xb0) = puVar3;
    *(undefined8 **)(param_1 + 0xb8) = puVar9 + 3;
    *(ulong *)(param_1 + 0xc0) = lVar12 + uVar13 * 0x18;
    DVar6 = param_1[0x30];
  }
  if (((byte)DVar6 & 1) == 0) {
    if ((byte)DVar6 >> 1 != 0) {
      return 1;
    }
  }
  else if (*(long *)(param_1 + 0x38) != 0) {
    return 1;
  }
  if (*(char *)(*(long *)(param_1 + 0xd8) + -0x78) == '\0') {
    FUN_015e032c(param_1 + 0x78,param_1,param_2,uVar17 | 0x100000000,&local_90,1);
  }
  return 1;
}

