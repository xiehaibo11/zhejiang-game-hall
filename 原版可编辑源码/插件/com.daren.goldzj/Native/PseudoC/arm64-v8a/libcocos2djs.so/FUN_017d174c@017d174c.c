
undefined4 FUN_017d174c(Decoder *param_1,ulong param_2,int param_3)

{
  LiftoffAssembler *pLVar1;
  SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *this;
  uint uVar2;
  ulong *puVar3;
  byte *pbVar4;
  byte bVar5;
  Decoder DVar6;
  byte bVar7;
  undefined4 uVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 *puVar12;
  char *pcVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  int iVar18;
  ulong uVar19;
  byte *pbVar20;
  ushort uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
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
  bVar7 = (&DAT_01a63d5c)[param_2];
  v8::internal::wasm::MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
  MemoryAccessImmediate
            (aMStack_80,param_1,(uchar *)(*(long *)(param_1 + 0x10) + (long)param_3),(uint)bVar7);
  lVar14 = *(long *)(param_1 + 0x4c0);
  if ((ulong)(lVar14 - *(long *)(param_1 + 0x4b8) >> 4) <=
      (ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc)) {
    if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) == '\x02') goto LAB_017d1970;
    pbVar20 = *(byte **)(param_1 + 0x10);
    if (pbVar20 < *(byte **)(param_1 + 0x18)) {
      bVar5 = *pbVar20;
      uVar21 = (ushort)bVar5;
      uVar16 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar21);
      if ((uVar16 & 1) != 0) {
        if (*(byte **)(param_1 + 0x18) <= pbVar20 + 1) goto LAB_017d1898;
        uVar21 = CONCAT11(bVar5,pbVar20[1]);
      }
      pcVar10 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar21);
    }
    else {
LAB_017d1898:
      pcVar10 = "<end>";
    }
    v8::internal::wasm::Decoder::errorf
              ((uchar *)param_1,(char *)pbVar20,"%s found empty stack",pcVar10);
    goto LAB_017d1970;
  }
  pbVar20 = *(byte **)(lVar14 + -0x10);
  uVar16 = *(ulong *)(lVar14 + -8);
  *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar14 + -0x10);
  if ((((uint)uVar16 & 0xff) == 1) || (uVar16 = uVar16 & 0xff, uVar16 == 10)) goto LAB_017d1970;
  pbVar4 = *(byte **)(param_1 + 0x10);
  if (pbVar4 < *(byte **)(param_1 + 0x18)) {
    bVar5 = *pbVar4;
    uVar21 = (ushort)bVar5;
    uVar9 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar21);
    if ((uVar9 & 1) != 0) {
      if (*(byte **)(param_1 + 0x18) <= pbVar4 + 1) goto LAB_017d188c;
      uVar21 = CONCAT11(bVar5,pbVar4[1]);
    }
    pcVar10 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar21);
  }
  else {
LAB_017d188c:
    pcVar10 = "<end>";
  }
  if (pbVar20 < *(byte **)(param_1 + 0x18)) {
    bVar5 = *pbVar20;
    uVar21 = (ushort)bVar5;
    uVar9 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar21);
    if ((uVar9 & 1) != 0) {
      if (*(byte **)(param_1 + 0x18) <= pbVar20 + 1) goto LAB_017d18e8;
      uVar21 = CONCAT11(bVar5,pbVar20[1]);
    }
    pcVar11 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar21);
    if ((uint)uVar16 < 0xb) goto LAB_017d18f8;
LAB_017d1944:
    pcVar13 = "<unknown>";
  }
  else {
LAB_017d18e8:
    pcVar11 = "<end>";
    if (10 < (uint)uVar16) goto LAB_017d1944;
LAB_017d18f8:
    pcVar13 = *(char **)((long)&PTR_s_<stmt>_01cdb138 +
                        (-(uVar16 >> 7) & 0xfffffffffffff800 | uVar16 << 3));
  }
  v8::internal::wasm::Decoder::errorf
            ((uchar *)param_1,(char *)pbVar20,"%s[%d] expected type %s, found %s of type %s",pcVar10
             ,0,"i32",pcVar11,pcVar13);
LAB_017d1970:
  bVar5 = (&DAT_01a63d6b)[param_2];
  local_68 = CONCAT71(local_68._1_7_,bVar5);
  puVar15 = *(undefined8 **)(param_1 + 0x4c0);
  if (puVar15 < *(undefined8 **)(param_1 + 0x4c8)) {
    uVar17 = *(undefined8 *)(param_1 + 0x10);
    *(byte *)(puVar15 + 1) = bVar5;
    *puVar15 = uVar17;
    *(long *)(param_1 + 0x4c0) = *(long *)(param_1 + 0x4c0) + 0x10;
    DVar6 = param_1[0x30];
  }
  else {
    std::__ndk1::
    vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
    ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
              ((vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                *)(param_1 + 0x4b8),(uchar **)(param_1 + 0x10),(ValueType *)&local_68);
    DVar6 = param_1[0x30];
  }
  if (((byte)DVar6 & 1) == 0) {
    if ((byte)DVar6 >> 1 != 0) {
      return local_78;
    }
  }
  else if (*(long *)(param_1 + 0x38) != 0) {
    return local_78;
  }
  if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) == '\0') {
    pLVar1 = (LiftoffAssembler *)(param_1 + 0x78);
    uVar16 = FUN_017d5c40(pLVar1,param_1,bVar5,"load");
    if ((uVar16 & 1) != 0) {
      uVar16 = v8::internal::wasm::LiftoffAssembler::PopToRegister(pLVar1,0);
      uVar9 = uVar16 & 0xff | 0x4000000000;
      local_68 = 1L << (uVar16 & 0x3f);
      uVar16 = FUN_017e1d50(pLVar1,param_1,1 << (ulong)(bVar7 & 0x1f),local_7c,uVar9,0);
      if ((uVar16 & 1) == 0) {
        local_6c = local_7c;
        auVar25 = FUN_017e202c(pLVar1,uVar9,0,&local_6c,&local_68);
        uVar16 = local_68;
        uVar2 = ~(uint)local_68 & (*(uint *)(param_1 + 0x2b8) ^ 0xffffffff);
        if ((uVar2 & 0x13f8ffff) == 0) {
          uVar9 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister(pLVar1,0x13f8ffff,local_68)
          ;
        }
        else {
          uVar9 = ((ulong)uVar2 & 0x2a8aaaa) >> 1 | ((ulong)uVar2 & 0x11505555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = LZCOUNT((uVar9 >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10) << 0x20);
        }
        uVar24 = uVar9 & 0xff | 0x4000000000;
        uVar16 = 1L << (uVar9 & 0x3f) | uVar16;
        local_68 = uVar16;
        v8::internal::wasm::LiftoffAssembler::LoadFromInstance(pLVar1,uVar24,0,0xb,8);
        puVar3 = &DAT_01a634d8;
        if (1 < bVar5 - 3) {
          puVar3 = &DAT_01a634d0;
        }
        uVar9 = *puVar3 & (uVar16 ^ 0xffffffffffffffff) &
                (*(ulong *)(param_1 + 0x2b8) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          uVar9 = v8::internal::wasm::LiftoffAssembler::SpillOneRegister(pLVar1,*puVar3,uVar16);
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20);
        }
        uVar8 = local_6c;
        uVar19 = uVar9 & 0xff;
        uVar22 = 1L << (uVar9 & 0x3f);
        uVar23 = auVar25._8_8_ & 0xffffffff;
        local_68 = uVar22 | uVar16;
        local_70 = 0;
        v8::internal::wasm::LiftoffAssembler::Load
                  (pLVar1,uVar19,uVar24,0,auVar25._0_8_,uVar23,local_6c,param_2,local_68,&local_70,1
                  );
        if (*(char *)(*(long *)(param_1 + 0x3d8) + 8) != '\0') {
          FUN_017da05c(pLVar1,*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8),1,local_70);
        }
        this = (SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)(param_1 + 0x240);
        *(ulong *)(param_1 + 0x2b8) = *(ulong *)(param_1 + 0x2b8) | uVar22;
        *(int *)(this + uVar19 * 4 + 0x80) = *(int *)(this + uVar19 * 4 + 0x80) + 1;
        puVar12 = *(undefined1 **)(param_1 + 0x248);
        if (puVar12 == *(undefined1 **)(param_1 + 0x240)) {
          iVar18 = 8;
        }
        else {
          iVar18 = *(int *)(puVar12 + -4) + 8;
        }
        if (puVar12 == *(undefined1 **)(param_1 + 0x250)) {
          puVar12 = (undefined1 *)
                    v8::base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
                              (this);
        }
        puVar12[1] = bVar5;
        puVar12[4] = (char)uVar9;
        *(int *)(puVar12 + 8) = iVar18;
        *puVar12 = 1;
        *(undefined1 **)(param_1 + 0x248) = puVar12 + 0xc;
        if (v8::internal::FLAG_trace_wasm_memory != '\0') {
          FUN_017e2334(pLVar1,0,*(undefined2 *)
                                 (v8::internal::wasm::LoadType::kMemType + param_2 * 2),
                       auVar25._0_8_,uVar23,uVar8,*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
        }
      }
    }
  }
  return local_78;
}

