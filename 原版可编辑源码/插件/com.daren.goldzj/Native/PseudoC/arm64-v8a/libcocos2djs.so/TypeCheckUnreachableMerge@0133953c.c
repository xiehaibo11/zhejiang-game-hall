
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::TypeCheckUnreachableMerge(v8::internal::wasm::Merge<v8::internal::wasm::ValueBase>&,
   bool) */

bool __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
TypeCheckUnreachableMerge
          (WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
           *this,Merge *param_1,bool param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  Merge MVar5;
  byte bVar6;
  Merge MVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  Merge *pMVar12;
  undefined8 uVar13;
  int iVar14;
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  ushort uVar18;
  char *pcVar19;
  long lVar20;
  Merge local_64 [4];
  
  uVar4 = *(uint *)param_1;
  uVar15 = (ulong)(uVar4 - 1);
  if (0 < (int)uVar4) {
    lVar20 = uVar15 << 4;
    uVar11 = (ulong)uVar4;
    do {
      pcVar8 = "<end>";
      pMVar12 = param_1 + 8;
      if ((int)uVar11 != 1) {
        pMVar12 = (Merge *)(*(long *)(param_1 + 8) + lVar20);
      }
      lVar3 = *(long *)(this + 0xa8);
      MVar7 = pMVar12[8];
      iVar14 = (int)uVar15;
      if ((ulong)*(uint *)(*(long *)(this + 200) + -0x54) <
          (ulong)(lVar3 - *(long *)(this + 0xa0) >> 4)) {
        pbVar16 = *(byte **)(lVar3 + -0x10);
        MVar5 = *(Merge *)(lVar3 + -8);
        uVar15 = (ulong)(byte)MVar5;
        *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar3 + -0x10);
        if (MVar5 != MVar7) {
LAB_01339654:
          uVar17 = (uint)uVar15;
          if ((MVar7 != (Merge)0x7 || uVar17 != 8) && (MVar7 != (Merge)0x6 || 2 < uVar17 - 7)) {
            if ((MVar7 != (Merge)0xa) && ((uVar15 != 10 && (MVar7 != (Merge)0x9 || uVar17 != 8)))) {
              pbVar1 = *(byte **)(this + 0x10);
              if (pbVar1 < *(byte **)(this + 0x18)) {
                bVar6 = *pbVar1;
                uVar18 = (ushort)bVar6;
                uVar11 = WasmOpcodes::IsPrefixOpcode(uVar18);
                if ((uVar11 & 1) != 0) {
                  pcVar8 = "<end>";
                  if (*(byte **)(this + 0x18) <= pbVar1 + 1) goto LAB_01339704;
                  uVar18 = CONCAT11(bVar6,pbVar1[1]);
                }
                pcVar8 = (char *)WasmOpcodes::OpcodeName(uVar18);
              }
LAB_01339704:
              pcVar19 = "<unknown>";
              if ((byte)MVar7 < 10) {
                pcVar19 = (&PTR_s_<stmt>_01cc3d10)[(char)MVar7];
              }
              pcVar9 = "<end>";
              if (pbVar16 < *(byte **)(this + 0x18)) {
                bVar6 = *pbVar16;
                uVar18 = (ushort)bVar6;
                uVar11 = WasmOpcodes::IsPrefixOpcode(uVar18);
                if ((uVar11 & 1) != 0) {
                  pcVar9 = "<end>";
                  if (*(byte **)(this + 0x18) <= pbVar16 + 1) goto LAB_0133978c;
                  uVar18 = CONCAT11(bVar6,pbVar16[1]);
                }
                pcVar9 = (char *)WasmOpcodes::OpcodeName(uVar18);
              }
LAB_0133978c:
              pcVar10 = "<unknown>";
              if (uVar17 < 0xb) {
                pcVar10 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                    (-(uVar15 >> 7) & 0xfffffffffffff800 | uVar15 << 3));
              }
              Decoder::errorf((uchar *)this,(char *)pbVar16,
                              "%s[%d] expected type %s, found %s of type %s",pcVar8,
                              (ulong)((uint)param_2 + iVar14),pcVar19,pcVar9,pcVar10);
            }
          }
        }
      }
      else {
        if (*(char *)(*(long *)(this + 200) + -0x48) != '\x02') {
          pbVar16 = *(byte **)(this + 0x10);
          pcVar19 = pcVar8;
          if (pbVar16 < *(byte **)(this + 0x18)) {
            bVar6 = *pbVar16;
            uVar18 = (ushort)bVar6;
            uVar15 = WasmOpcodes::IsPrefixOpcode(uVar18);
            if ((uVar15 & 1) != 0) {
              if (*(byte **)(this + 0x18) <= pbVar16 + 1) goto LAB_01339634;
              uVar18 = CONCAT11(bVar6,pbVar16[1]);
            }
            pcVar19 = (char *)WasmOpcodes::OpcodeName(uVar18);
          }
LAB_01339634:
          Decoder::errorf((uchar *)this,(char *)pbVar16,"%s found empty stack",pcVar19);
        }
        pbVar16 = *(byte **)(this + 0x10);
        uVar15 = 10;
        if (MVar7 != (Merge)0xa) goto LAB_01339654;
      }
      uVar15 = (ulong)(iVar14 - 1);
      if (iVar14 < 1) goto LAB_013397ec;
      uVar11 = (ulong)*(uint *)param_1;
      lVar20 = lVar20 + -0x10;
    } while( true );
  }
LAB_01339874:
  if (((byte)this[0x30] & 1) == 0) {
    uVar15 = (ulong)((byte)this[0x30] >> 1);
  }
  else {
    uVar15 = *(ulong *)(this + 0x38);
  }
  return uVar15 == 0;
LAB_013397ec:
  if (0 < (int)uVar4) {
    lVar20 = 0;
    do {
      pMVar12 = param_1 + 8;
      if (*(int *)param_1 != 1) {
        pMVar12 = (Merge *)(*(long *)(param_1 + 8) + lVar20);
      }
      local_64[0] = pMVar12[8];
      puVar2 = *(undefined8 **)(this + 0xa8);
      if (puVar2 < *(undefined8 **)(this + 0xb0)) {
        uVar13 = *(undefined8 *)(this + 0x10);
        *(Merge *)(puVar2 + 1) = local_64[0];
        *puVar2 = uVar13;
        *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + 0x10;
      }
      else {
        std::__ndk1::
        vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
        ::__emplace_back_slow_path<unsigned_char_const*&,v8::internal::wasm::ValueType&>
                  ((vector<v8::internal::wasm::ValueBase,v8::internal::ZoneAllocator<v8::internal::wasm::ValueBase>>
                    *)(this + 0xa0),(uchar **)(this + 0x10),local_64);
      }
      lVar20 = lVar20 + 0x10;
    } while ((ulong)uVar4 * 0x10 - lVar20 != 0);
  }
  goto LAB_01339874;
}

