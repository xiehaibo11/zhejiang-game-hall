
undefined4 FUN_017d1c80(Decoder *param_1,ulong param_2,int param_3)

{
  LiftoffAssembler *pLVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  Decoder DVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  ushort uVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> aMStack_80 [4];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  ulong local_68;
  
  if (*(char *)(*(long *)(param_1 + 0x48) + 0x12) == '\0') {
    v8::internal::wasm::Decoder::error
              (param_1,(uchar *)(*(long *)(param_1 + 0x10) + -1),"memory instruction with no memory"
              );
    return 0;
  }
  param_2 = param_2 & 0xff;
  bVar6 = (&DAT_01a63d7a)[param_2];
  v8::internal::wasm::MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
  MemoryAccessImmediate
            (aMStack_80,param_1,(uchar *)(*(long *)(param_1 + 0x10) + (long)param_3),(uint)bVar6);
  lVar13 = *(long *)(param_1 + 0x4c0);
  bVar7 = (&DAT_01a63d84)[param_2];
  if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
      (ulong)(lVar13 - *(long *)(param_1 + 0x4b8) >> 4)) {
    pbVar15 = *(byte **)(lVar13 + -0x10);
    uVar14 = *(ulong *)(lVar13 + -8);
    *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar13 + -0x10);
    if (((uint)bVar7 != ((uint)uVar14 & 0xff)) && (uVar14 = uVar14 & 0xff, uVar14 != 10)) {
      pbVar3 = *(byte **)(param_1 + 0x10);
      if (pbVar3 < *(byte **)(param_1 + 0x18)) {
        bVar4 = *pbVar3;
        uVar16 = (ushort)bVar4;
        uVar9 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar16);
        if ((uVar9 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar3 + 1) goto LAB_017d1dc8;
          uVar16 = CONCAT11(bVar4,pbVar3[1]);
        }
        pcVar10 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar16);
      }
      else {
LAB_017d1dc8:
        pcVar10 = "<end>";
      }
      puVar18 = (&PTR_s_<stmt>_01cdb038)[(char)bVar7];
      if (pbVar15 < *(byte **)(param_1 + 0x18)) {
        bVar4 = *pbVar15;
        uVar16 = (ushort)bVar4;
        uVar9 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar16);
        if ((uVar9 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar15 + 1) goto LAB_017d1e30;
          uVar16 = CONCAT11(bVar4,pbVar15[1]);
        }
        pcVar11 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar16);
        if ((uint)uVar14 < 0xb) goto LAB_017d1e40;
LAB_017d1e8c:
        pcVar12 = "<unknown>";
      }
      else {
LAB_017d1e30:
        pcVar11 = "<end>";
        if (10 < (uint)uVar14) goto LAB_017d1e8c;
LAB_017d1e40:
        pcVar12 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                            (-(uVar14 >> 7) & 0xfffffffffffff800 | uVar14 << 3));
      }
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar15,"%s[%d] expected type %s, found %s of type %s",
                 pcVar10,1,puVar18,pcVar11,pcVar12);
    }
  }
  else if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
    pbVar15 = *(byte **)(param_1 + 0x10);
    if (pbVar15 < *(byte **)(param_1 + 0x18)) {
      bVar4 = *pbVar15;
      uVar16 = (ushort)bVar4;
      uVar14 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar16);
      if ((uVar14 & 1) != 0) {
        if (*(byte **)(param_1 + 0x18) <= pbVar15 + 1) goto LAB_017d1dd4;
        uVar16 = CONCAT11(bVar4,pbVar15[1]);
      }
      pcVar10 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar16);
    }
    else {
LAB_017d1dd4:
      pcVar10 = "<end>";
    }
    v8::internal::wasm::Decoder::errorf
              ((uchar *)param_1,(char *)pbVar15,"%s found empty stack",pcVar10);
  }
  lVar13 = *(long *)(param_1 + 0x4c0);
  if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
      (ulong)(lVar13 - *(long *)(param_1 + 0x4b8) >> 4)) {
    pbVar15 = *(byte **)(lVar13 + -0x10);
    uVar14 = *(ulong *)(lVar13 + -8);
    *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar13 + -0x10);
    if ((((uint)uVar14 & 0xff) != 1) && (uVar14 = uVar14 & 0xff, uVar14 != 10)) {
      pbVar3 = *(byte **)(param_1 + 0x10);
      if (pbVar3 < *(byte **)(param_1 + 0x18)) {
        bVar4 = *pbVar3;
        uVar16 = (ushort)bVar4;
        uVar9 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar16);
        if ((uVar9 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar3 + 1) goto LAB_017d1f78;
          uVar16 = CONCAT11(bVar4,pbVar3[1]);
        }
        pcVar10 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar16);
      }
      else {
LAB_017d1f78:
        pcVar10 = "<end>";
      }
      if (pbVar15 < *(byte **)(param_1 + 0x18)) {
        bVar4 = *pbVar15;
        uVar16 = (ushort)bVar4;
        uVar9 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar16);
        if ((uVar9 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar15 + 1) goto LAB_017d1fd4;
          uVar16 = CONCAT11(bVar4,pbVar15[1]);
        }
        pcVar11 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar16);
        if ((uint)uVar14 < 0xb) goto LAB_017d1fe4;
LAB_017d2040:
        pcVar12 = "<unknown>";
      }
      else {
LAB_017d1fd4:
        pcVar11 = "<end>";
        if (10 < (uint)uVar14) goto LAB_017d2040;
LAB_017d1fe4:
        pcVar12 = *(char **)((long)&PTR_s_<stmt>_01cdb138 +
                            (-(uVar14 >> 7) & 0xfffffffffffff800 | uVar14 << 3));
      }
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar15,"%s[%d] expected type %s, found %s of type %s",
                 pcVar10,0,"i32",pcVar11,pcVar12);
    }
  }
  else if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
    pbVar15 = *(byte **)(param_1 + 0x10);
    if (pbVar15 < *(byte **)(param_1 + 0x18)) {
      bVar4 = *pbVar15;
      uVar16 = (ushort)bVar4;
      uVar14 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar16);
      if ((uVar14 & 1) != 0) {
        if (*(byte **)(param_1 + 0x18) <= pbVar15 + 1) goto LAB_017d1f84;
        uVar16 = CONCAT11(bVar4,pbVar15[1]);
      }
      pcVar10 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar16);
    }
    else {
LAB_017d1f84:
      pcVar10 = "<end>";
    }
    v8::internal::wasm::Decoder::errorf
              ((uchar *)param_1,(char *)pbVar15,"%s found empty stack",pcVar10);
    DVar5 = param_1[0x30];
    goto joined_r0x017d201c;
  }
  DVar5 = param_1[0x30];
joined_r0x017d201c:
  if (((byte)DVar5 & 1) == 0) {
    if ((byte)DVar5 >> 1 != 0) {
      return local_78;
    }
  }
  else if (*(long *)(param_1 + 0x38) != 0) {
    return local_78;
  }
  if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) == '\0') {
    pLVar1 = (LiftoffAssembler *)(param_1 + 0x78);
    uVar14 = FUN_017d5c40(pLVar1,param_1,(long)(char)bVar7 & 0xffffffff,"store");
    if ((uVar14 & 1) != 0) {
      uVar14 = v8::internal::wasm::LiftoffAssembler::PopToRegister(pLVar1,0);
      uVar19 = 1L << (uVar14 & 0x3f);
      uVar9 = v8::internal::wasm::LiftoffAssembler::PopToRegister(pLVar1,uVar19);
      uVar17 = uVar9 & 0xff | 0x4000000000;
      local_68 = 1L << (uVar9 & 0x3f) | uVar19;
      uVar9 = FUN_017e1d50(pLVar1,param_1,1 << (ulong)(bVar6 & 0x1f),local_7c,uVar17,0);
      if ((uVar9 & 1) == 0) {
        local_6c = local_7c;
        auVar21 = FUN_017e202c(pLVar1,uVar17,0,&local_6c,&local_68);
        uVar9 = local_68;
        uVar17 = auVar21._0_8_;
        uVar2 = ~(uint)local_68 & (*(uint *)(param_1 + 0x2b8) ^ 0xffffffff);
        if ((uVar2 & 0x13f8ffff) == 0) {
          uVar19 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister
                             (pLVar1,0x13f8ffff,local_68);
        }
        else {
          uVar19 = ((ulong)uVar2 & 0x2a8aaaa) >> 1 | ((ulong)uVar2 & 0x11505555) << 1;
          uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
          uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
          uVar19 = LZCOUNT((uVar19 >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar20 = uVar19 & 0xff | 0x4000000000;
        local_68 = 1L << (uVar19 & 0x3f) | uVar9;
        v8::internal::wasm::LiftoffAssembler::LoadFromInstance(pLVar1,uVar20,0,0xb,8);
        uVar8 = local_6c;
        uVar9 = auVar21._8_8_ & 0xffffffff;
        lVar13 = 0;
        if (v8::internal::FLAG_trace_wasm_memory != '\0') {
          lVar13 = 1L << (uVar17 & 0x3f);
        }
        local_70 = 0;
        v8::internal::wasm::LiftoffAssembler::Store
                  (pLVar1,uVar20,0,uVar17,uVar9,local_6c,uVar14 & 0xff,param_2,lVar13,&local_70,1);
        if (*(char *)(*(long *)(param_1 + 0x3d8) + 8) != '\0') {
          FUN_017da05c(pLVar1,*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8),1,local_70);
        }
        if (v8::internal::FLAG_trace_wasm_memory != '\0') {
          FUN_017e2334(pLVar1,1,(&DAT_01a63d8e)[param_2],uVar17,uVar9,uVar8,
                       *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
        }
      }
    }
  }
  return local_78;
}

