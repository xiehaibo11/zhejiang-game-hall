
undefined8 FUN_017e3084(Decoder *param_1,int param_2,byte param_3)

{
  uint uVar1;
  byte bVar2;
  Decoder DVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  Decoder *pDVar12;
  ushort uVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  ulong uVar17;
  ValueType local_34 [4];
  
  pDVar12 = param_1 + 0x10;
  pbVar15 = (byte *)(*(long *)pDVar12 + 2);
  if (*(byte **)(param_1 + 0x18) < pbVar15 || (int)*(byte **)(param_1 + 0x18) == (int)pbVar15) {
    v8::internal::wasm::Decoder::error(param_1,pbVar15,"lane");
    uVar16 = 0;
  }
  else {
    uVar16 = (uint)*pbVar15;
  }
  uVar1 = param_2 - 0xfd05;
  if ((0x12 < uVar1) || ((0x6db77U >> (ulong)(uVar1 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pbVar15 = *(byte **)pDVar12;
  if (*(uint *)(&DAT_01a63e3c + (long)(int)uVar1 * 4) <= uVar16) {
    v8::internal::wasm::Decoder::error(param_1,pbVar15 + 2,"invalid lane index");
    return 1;
  }
  lVar9 = *(long *)(param_1 + 0x4c0);
  if ((ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc) <
      (ulong)(lVar9 - *(long *)(param_1 + 0x4b8) >> 4)) {
    pbVar14 = *(byte **)(lVar9 + -0x10);
    bVar2 = *(byte *)(lVar9 + -8);
    uVar17 = (ulong)bVar2;
    *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar9 + -0x10);
    if (bVar2 != param_3) {
LAB_017e31dc:
      uVar16 = (uint)uVar17;
      if ((param_3 != 7 || uVar16 != 8) && (param_3 != 6 || 2 < uVar16 - 7)) {
        if ((param_3 != 10) && ((uVar17 != 10 && (param_3 != 9 || uVar16 != 8)))) {
          if (pbVar15 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar15;
            uVar13 = (ushort)bVar2;
            uVar4 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar13);
            if ((uVar4 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar15 + 1) goto LAB_017e3278;
              uVar13 = CONCAT11(bVar2,pbVar15[1]);
            }
            pcVar5 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar13);
          }
          else {
LAB_017e3278:
            pcVar5 = "<end>";
          }
          if (param_3 < 10) {
            pcVar6 = (&PTR_s_<stmt>_01cdb038)[(char)param_3];
          }
          else {
            pcVar6 = "<unknown>";
          }
          if (pbVar14 < *(byte **)(param_1 + 0x18)) {
            bVar2 = *pbVar14;
            uVar13 = (ushort)bVar2;
            uVar4 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar13);
            if ((uVar4 & 1) != 0) {
              if (*(byte **)(param_1 + 0x18) <= pbVar14 + 1) goto LAB_017e32f0;
              uVar13 = CONCAT11(bVar2,pbVar14[1]);
            }
            pcVar8 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar13);
            if (10 < uVar16) goto LAB_017e3328;
LAB_017e3300:
            pcVar7 = *(char **)((long)&PTR_s_<stmt>_01cdb088 +
                               (-(uVar17 >> 7) & 0xfffffffffffff800 | uVar17 << 3));
          }
          else {
LAB_017e32f0:
            pcVar8 = "<end>";
            if (uVar16 < 0xb) goto LAB_017e3300;
LAB_017e3328:
            pcVar7 = "<unknown>";
          }
          v8::internal::wasm::Decoder::errorf
                    ((uchar *)param_1,(char *)pbVar14,"%s[%d] expected type %s, found %s of type %s"
                     ,pcVar5,1,pcVar6,pcVar8,pcVar7);
        }
      }
    }
  }
  else {
    pbVar14 = pbVar15;
    if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) != '\x02') {
      if (pbVar15 < *(byte **)(param_1 + 0x18)) {
        bVar2 = *pbVar15;
        uVar13 = (ushort)bVar2;
        uVar17 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar13);
        if ((uVar17 & 1) != 0) {
          if (*(byte **)(param_1 + 0x18) <= pbVar15 + 1) goto LAB_017e319c;
          uVar13 = CONCAT11(bVar2,pbVar15[1]);
        }
        pcVar5 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar13);
      }
      else {
LAB_017e319c:
        pcVar5 = "<end>";
      }
      v8::internal::wasm::Decoder::errorf
                ((uchar *)param_1,(char *)pbVar15,"%s found empty stack",pcVar5);
      pbVar14 = *(byte **)(param_1 + 0x10);
    }
    uVar17 = 10;
    pbVar15 = pbVar14;
    if (param_3 != 10) goto LAB_017e31dc;
  }
  lVar9 = *(long *)(param_1 + 0x4c0);
  if ((ulong)(lVar9 - *(long *)(param_1 + 0x4b8) >> 4) <=
      (ulong)*(uint *)(*(long *)(param_1 + 0x4e0) + -0x1dc)) {
    if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) == '\x02') goto LAB_017e34f8;
    pbVar15 = *(byte **)(param_1 + 0x10);
    if (pbVar15 < *(byte **)(param_1 + 0x18)) {
      bVar2 = *pbVar15;
      uVar13 = (ushort)bVar2;
      uVar17 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar13);
      if ((uVar17 & 1) != 0) {
        if (*(byte **)(param_1 + 0x18) <= pbVar15 + 1) goto LAB_017e3420;
        uVar13 = CONCAT11(bVar2,pbVar15[1]);
      }
      pcVar5 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar13);
    }
    else {
LAB_017e3420:
      pcVar5 = "<end>";
    }
    v8::internal::wasm::Decoder::errorf
              ((uchar *)param_1,(char *)pbVar15,"%s found empty stack",pcVar5);
    goto LAB_017e34f8;
  }
  pbVar15 = *(byte **)(lVar9 + -0x10);
  uVar17 = *(ulong *)(lVar9 + -8);
  *(undefined8 **)(param_1 + 0x4c0) = (undefined8 *)(lVar9 + -0x10);
  if ((((uint)uVar17 & 0xff) == 5) || (uVar17 = uVar17 & 0xff, uVar17 == 10)) goto LAB_017e34f8;
  pbVar14 = *(byte **)(param_1 + 0x10);
  if (pbVar14 < *(byte **)(param_1 + 0x18)) {
    bVar2 = *pbVar14;
    uVar13 = (ushort)bVar2;
    uVar4 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar13);
    if ((uVar4 & 1) != 0) {
      if (*(byte **)(param_1 + 0x18) <= pbVar14 + 1) goto LAB_017e3414;
      uVar13 = CONCAT11(bVar2,pbVar14[1]);
    }
    pcVar5 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar13);
  }
  else {
LAB_017e3414:
    pcVar5 = "<end>";
  }
  if (pbVar15 < *(byte **)(param_1 + 0x18)) {
    bVar2 = *pbVar15;
    uVar13 = (ushort)bVar2;
    uVar4 = v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(uVar13);
    if ((uVar4 & 1) != 0) {
      if (*(byte **)(param_1 + 0x18) <= pbVar15 + 1) goto LAB_017e3470;
      uVar13 = CONCAT11(bVar2,pbVar15[1]);
    }
    pcVar6 = (char *)v8::internal::wasm::WasmOpcodes::OpcodeName(uVar13);
    if (10 < (uint)uVar17) goto LAB_017e34cc;
LAB_017e3480:
    pcVar8 = *(char **)((long)&PTR_s_<stmt>_01cdb0e0 +
                       (-(uVar17 >> 7) & 0xfffffffffffff800 | uVar17 << 3));
  }
  else {
LAB_017e3470:
    pcVar6 = "<end>";
    if ((uint)uVar17 < 0xb) goto LAB_017e3480;
LAB_017e34cc:
    pcVar8 = "<unknown>";
  }
  v8::internal::wasm::Decoder::errorf
            ((uchar *)param_1,(char *)pbVar15,"%s[%d] expected type %s, found %s of type %s",pcVar5,
             0,&DAT_018ce057,pcVar6,pcVar8);
LAB_017e34f8:
  local_34[0] = 5;
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
                *)(param_1 + 0x4b8),(uchar **)pDVar12,local_34);
    DVar3 = param_1[0x30];
  }
  if (((byte)DVar3 & 1) == 0) {
    if ((byte)DVar3 >> 1 != 0) {
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

