
undefined4 FUN_017e3610(Decoder *param_1,ulong param_2)

{
  byte *pbVar1;
  byte bVar2;
  Decoder DVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ushort uVar13;
  MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> aMStack_50 [8];
  undefined4 local_48;
  ValueType local_44 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x48) + 0x12) == '\0') {
    v8::internal::wasm::Decoder::error
              (param_1,(uchar *)(*(long *)(param_1 + 0x10) + -1),"memory instruction with no memory"
              );
    return 0;
  }
  v8::internal::wasm::MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::
  MemoryAccessImmediate
            (aMStack_50,param_1,(uchar *)(*(long *)(param_1 + 0x10) + 1),
             (uint)(byte)(&DAT_01a63d5c)[param_2 & 0xff]);
  lVar8 = *(long *)(param_1 + 0x4c0);
  if ((ulong)(lVar8 - *(long *)(param_1 + 0x4b8) >> 4) <=
      (ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc)) {
    if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) == '\x02') goto LAB_017e3828;
    pbVar12 = *(byte **)(param_1 + 0x10);
    if (pbVar12 < *(byte **)(param_1 + 0x18)) {
      bVar2 = *pbVar12;
      uVar13 = (ushort)bVar2;
      uVar9 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar13);
      if ((uVar9 & 1) != 0) {
        if (*(byte **)(param_1 + 0x18) <= pbVar12 + 1) goto LAB_017e3744;
        uVar13 = CONCAT11(bVar2,pbVar12[1]);
      }
      pcVar5 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar13);
    }
    else {
LAB_017e3744:
      pcVar5 = "<end>";
    }
    v8::internal::wasm::Decoder::errorf
              ((uchar *)param_1,(char *)pbVar12,"%s found empty stack",pcVar5);
    goto LAB_017e3828;
  }
  pbVar12 = *(byte **)(lVar8 + -0x10);
  uVar9 = *(ulong *)(lVar8 + -8);
  *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar8 + -0x10);
  if ((((uint)uVar9 & 0xff) == 1) || (uVar9 = uVar9 & 0xff, uVar9 == 10)) goto LAB_017e3828;
  pbVar1 = *(byte **)(param_1 + 0x10);
  if (pbVar1 < *(byte **)(param_1 + 0x18)) {
    bVar2 = *pbVar1;
    uVar13 = (ushort)bVar2;
    uVar4 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar13);
    if ((uVar4 & 1) != 0) {
      if (*(byte **)(param_1 + 0x18) <= pbVar1 + 1) goto LAB_017e3750;
      uVar13 = CONCAT11(bVar2,pbVar1[1]);
    }
    pcVar5 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar13);
  }
  else {
LAB_017e3750:
    pcVar5 = "<end>";
  }
  if (pbVar12 < *(byte **)(param_1 + 0x18)) {
    bVar2 = *pbVar12;
    uVar13 = (ushort)bVar2;
    uVar4 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar13);
    if ((uVar4 & 1) != 0) {
      if (*(byte **)(param_1 + 0x18) <= pbVar12 + 1) goto LAB_017e37c4;
      uVar13 = CONCAT11(bVar2,pbVar12[1]);
    }
    pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar13);
    if ((uint)uVar9 < 0xb) goto LAB_017e37d4;
LAB_017e37fc:
    pcVar7 = "<unknown>";
  }
  else {
LAB_017e37c4:
    pcVar6 = "<end>";
    if (10 < (uint)uVar9) goto LAB_017e37fc;
LAB_017e37d4:
    pcVar7 = *(char **)((long)&PTR_s_<stmt>_01cdb138 +
                       (-(uVar9 >> 7) & 0xfffffffffffff800 | uVar9 << 3));
  }
  v8::internal::wasm::Decoder::errorf
            ((uchar *)param_1,(char *)pbVar12,"%s[%d] expected type %s, found %s of type %s",pcVar5,
             0,"i32",pcVar6,pcVar7);
LAB_017e3828:
  local_44[0] = 5;
  puVar10 = *(undefined8 **)(param_1 + 0x4c0);
  if (puVar10 < *(undefined8 **)(param_1 + 0x4c8)) {
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    *(undefined1 *)(puVar10 + 1) = 5;
    *puVar10 = uVar11;
    *(long *)(param_1 + 0x4c0) = *(long *)(param_1 + 0x4c0) + 0x10;
    DVar3 = param_1[0x30];
  }
  else {
    std::__ndk1::
    vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
    ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
              ((vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                *)(param_1 + 0x4b8),(uchar **)(param_1 + 0x10),local_44);
    DVar3 = param_1[0x30];
  }
  if (((byte)DVar3 & 1) == 0) {
    if ((byte)DVar3 >> 1 != 0) {
      return local_48;
    }
  }
  else if (*(long *)(param_1 + 0x38) != 0) {
    return local_48;
  }
  if ((*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) == '\0') && (param_1[1000] == (Decoder)0x0)) {
    param_1[1000] = (Decoder)0x5;
    if (v8::internal::FLAG_trace_liftoff != '\0') {
      v8::internal::PrintF("[liftoff] unsupported: %s\n","simd");
    }
    v8::internal::wasm::Decoder::errorf
              ((uint)param_1,
               (char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                    (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8))),
               "unsupported liftoff operation: %s","simd");
  }
  return local_48;
}

