
undefined8 FUN_017e2d30(Decoder *param_1,int param_2,undefined1 param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  Decoder DVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  byte *pbVar14;
  ushort uVar15;
  undefined1 local_34 [4];
  
  pbVar14 = (byte *)(*(long *)(param_1 + 0x10) + 2);
  if (*(byte **)(param_1 + 0x18) < pbVar14 || (int)*(byte **)(param_1 + 0x18) == (int)pbVar14) {
    v8::internal::wasm::Decoder::error(param_1,pbVar14,"lane");
    uVar9 = 0;
  }
  else {
    uVar9 = (uint)*pbVar14;
  }
  uVar1 = param_2 - 0xfd05;
  if ((0x12 < uVar1) || ((0x6db77U >> (ulong)(uVar1 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if (*(uint *)(&DAT_01a63e3c + (long)(int)uVar1 * 4) <= uVar9) {
    v8::internal::wasm::Decoder::error
              (param_1,(uchar *)(*(long *)(param_1 + 0x10) + 2),"invalid lane index");
    return 1;
  }
  lVar10 = *(long *)(param_1 + 0x4c0);
  if ((ulong)(lVar10 - *(long *)(param_1 + 0x4b8) >> 4) <=
      (ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc)) {
    if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) == '\x02') goto LAB_017e2f70;
    pbVar14 = *(byte **)(param_1 + 0x10);
    if (pbVar14 < *(byte **)(param_1 + 0x18)) {
      bVar3 = *pbVar14;
      uVar15 = (ushort)bVar3;
      uVar12 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar15);
      if ((uVar12 & 1) != 0) {
        if (*(byte **)(param_1 + 0x18) <= pbVar14 + 1) goto LAB_017e2e98;
        uVar15 = CONCAT11(bVar3,pbVar14[1]);
      }
      pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar15);
    }
    else {
LAB_017e2e98:
      pcVar6 = "<end>";
    }
    v8::internal::wasm::Decoder::errorf
              ((uchar *)param_1,(char *)pbVar14,"%s found empty stack",pcVar6);
    goto LAB_017e2f70;
  }
  pbVar14 = *(byte **)(lVar10 + -0x10);
  uVar12 = *(ulong *)(lVar10 + -8);
  *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar10 + -0x10);
  if ((((uint)uVar12 & 0xff) == 5) || (uVar12 = uVar12 & 0xff, uVar12 == 10)) goto LAB_017e2f70;
  pbVar2 = *(byte **)(param_1 + 0x10);
  if (pbVar2 < *(byte **)(param_1 + 0x18)) {
    bVar3 = *pbVar2;
    uVar15 = (ushort)bVar3;
    uVar5 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar15);
    if ((uVar5 & 1) != 0) {
      if (*(byte **)(param_1 + 0x18) <= pbVar2 + 1) goto LAB_017e2e8c;
      uVar15 = CONCAT11(bVar3,pbVar2[1]);
    }
    pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar15);
  }
  else {
LAB_017e2e8c:
    pcVar6 = "<end>";
  }
  if (pbVar14 < *(byte **)(param_1 + 0x18)) {
    bVar3 = *pbVar14;
    uVar15 = (ushort)bVar3;
    uVar5 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar15);
    if ((uVar5 & 1) != 0) {
      if (*(byte **)(param_1 + 0x18) <= pbVar14 + 1) goto LAB_017e2ee8;
      uVar15 = CONCAT11(bVar3,pbVar14[1]);
    }
    pcVar7 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar15);
    if (10 < (uint)uVar12) goto LAB_017e2f44;
LAB_017e2ef8:
    pcVar8 = *(char **)((long)&PTR_s_<stmt>_01cdb0e0 +
                       (-(uVar12 >> 7) & 0xfffffffffffff800 | uVar12 << 3));
  }
  else {
LAB_017e2ee8:
    pcVar7 = "<end>";
    if ((uint)uVar12 < 0xb) goto LAB_017e2ef8;
LAB_017e2f44:
    pcVar8 = "<unknown>";
  }
  v8::internal::wasm::Decoder::errorf
            ((uchar *)param_1,(char *)pbVar14,"%s[%d] expected type %s, found %s of type %s",pcVar6,
             0,&DAT_018ce057,pcVar7,pcVar8);
LAB_017e2f70:
  puVar11 = *(undefined8 **)(param_1 + 0x4c0);
  local_34[0] = param_3;
  if (puVar11 < *(undefined8 **)(param_1 + 0x4c8)) {
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    *(undefined1 *)(puVar11 + 1) = param_3;
    *puVar11 = uVar13;
    *(long *)(param_1 + 0x4c0) = *(long *)(param_1 + 0x4c0) + 0x10;
    DVar4 = param_1[0x30];
  }
  else {
    std::__ndk1::
    vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
    ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
              ((vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                *)(param_1 + 0x4b8),(uchar **)(param_1 + 0x10),local_34);
    DVar4 = param_1[0x30];
  }
  if (((byte)DVar4 & 1) == 0) {
    if ((byte)DVar4 >> 1 != 0) {
      return 1;
    }
  }
  else if (*(long *)(param_1 + 0x38) != 0) {
    return 1;
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
  return 1;
}

