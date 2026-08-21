
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::TypeCheckBrTable(std::__ndk1::vector<v8::internal::wasm::ValueType,
   std::__ndk1::allocator<v8::internal::wasm::ValueType> > const&) */

bool __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
TypeCheckBrTable(WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
                 *this,vector *param_1)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  ushort uVar17;
  char *pcVar18;
  long lVar19;
  
  lVar13 = *(long *)(this + 200);
  lVar12 = *(long *)param_1;
  uVar11 = *(long *)(param_1 + 8) - lVar12;
  iVar15 = (int)uVar11;
  if (*(char *)(lVar13 + -0x48) == '\0') {
    if ((int)((ulong)(*(long *)(this + 0xa8) - *(long *)(this + 0xa0)) >> 4) -
        *(int *)(lVar13 + -0x54) < iVar15) {
      Decoder::errorf((uchar *)this,*(char **)(this + 0x10),
                      "expected %u elements on the stack for branch to @%d, found %u",
                      uVar11 & 0xffffffff,
                      (ulong)(uint)(*(int *)(lVar13 + -0x50) - *(int *)(this + 8)));
      return false;
    }
    if (0 < iVar15) {
      uVar7 = 0;
      pbVar14 = (byte *)(*(long *)(this + 0xa8) + (long)iVar15 * -0x10 + 8);
      do {
        bVar2 = *pbVar14;
        bVar4 = *(byte *)(lVar12 + uVar7);
        if (bVar4 != bVar2) {
          iVar15 = (int)(char)bVar2;
          if (((iVar15 != 8 || bVar4 != 9) && (2 < (iVar15 - 7U & 0xff) || bVar4 != 6)) &&
             (iVar15 != 8 || bVar4 != 7)) {
            if (bVar4 < 0xb) {
              pcVar8 = (&PTR_s_<stmt>_01cc3d60)[(char)bVar4];
            }
            else {
              pcVar8 = "<unknown>";
            }
            if (bVar2 < 0xb) {
              pcVar9 = (&PTR_s_<stmt>_01cc3d60)[(char)bVar2];
            }
            else {
              pcVar9 = "<unknown>";
            }
            Decoder::errorf((uchar *)this,*(char **)(this + 0x10),
                            "type error in merge[%u] (expected %s, got %s)",uVar7,pcVar8,pcVar9);
            return false;
          }
        }
        uVar7 = uVar7 + 1;
        pbVar14 = pbVar14 + 0x10;
      } while ((uVar11 & 0xffffffff) != uVar7);
    }
  }
  else if (0 < iVar15) {
    lVar19 = 0;
    do {
      pcVar8 = "<end>";
      lVar1 = *(long *)(this + 0xa8);
      bVar2 = *(byte *)(lVar12 + lVar19);
      if ((ulong)*(uint *)(lVar13 + -0x54) < (ulong)(lVar1 - *(long *)(this + 0xa0) >> 4)) {
        pcVar9 = *(char **)(lVar1 + -0x10);
        bVar4 = *(byte *)(lVar1 + -8);
        uVar7 = (ulong)bVar4;
        *(undefined8 **)(this + 0xa8) = (undefined8 *)(lVar1 + -0x10);
        if (bVar4 != bVar2) {
LAB_013340bc:
          uVar16 = (uint)uVar7;
          if ((bVar2 != 7 || uVar16 != 8) && (bVar2 != 6 || 2 < uVar16 - 7)) {
            if ((bVar2 != 10) && ((uVar7 != 10 && (bVar2 != 9 || uVar16 != 8)))) {
              pbVar14 = *(byte **)(this + 0x10);
              if (pbVar14 < *(byte **)(this + 0x18)) {
                bVar4 = *pbVar14;
                uVar17 = (ushort)bVar4;
                uVar5 = WasmOpcodes::IsPrefixOpcode(uVar17);
                if ((uVar5 & 1) != 0) {
                  pcVar8 = "<end>";
                  if (*(byte **)(this + 0x18) <= pbVar14 + 1) goto LAB_01334170;
                  uVar17 = CONCAT11(bVar4,pbVar14[1]);
                }
                pcVar8 = (char *)WasmOpcodes::OpcodeName(uVar17);
              }
LAB_01334170:
              pcVar18 = "<unknown>";
              if (bVar2 < 10) {
                pcVar18 = (&PTR_s_<stmt>_01cc3d10)[(char)bVar2];
              }
              pcVar6 = "<end>";
              if (pcVar9 < *(char **)(this + 0x18)) {
                cVar3 = *pcVar9;
                uVar5 = WasmOpcodes::IsPrefixOpcode(cVar3);
                if ((uVar5 & 1) == 0) {
                  pcVar6 = (char *)WasmOpcodes::OpcodeName(cVar3);
                }
                else {
                  pcVar6 = "<end>";
                  if (pcVar9 + 1 < *(char **)(this + 0x18)) {
                    pcVar6 = (char *)WasmOpcodes::OpcodeName(CONCAT11(cVar3,pcVar9[1]));
                  }
                }
              }
              pcVar10 = "<unknown>";
              if (uVar16 < 0xb) {
                pcVar10 = *(char **)((long)&PTR_s_<stmt>_01cc3d60 +
                                    (-(uVar7 >> 7) & 0xfffffffffffff800 | uVar7 << 3));
              }
              Decoder::errorf((uchar *)this,pcVar9,"%s[%d] expected type %s, found %s of type %s",
                              pcVar8,(ulong)((int)lVar19 + 1),pcVar18,pcVar6,pcVar10);
            }
          }
        }
      }
      else {
        if (*(char *)(lVar13 + -0x48) != '\x02') {
          pbVar14 = *(byte **)(this + 0x10);
          pcVar9 = pcVar8;
          if (pbVar14 < *(byte **)(this + 0x18)) {
            bVar4 = *pbVar14;
            uVar17 = (ushort)bVar4;
            uVar7 = WasmOpcodes::IsPrefixOpcode(uVar17);
            if ((uVar7 & 1) != 0) {
              if (*(byte **)(this + 0x18) <= pbVar14 + 1) goto LAB_01334098;
              uVar17 = CONCAT11(bVar4,pbVar14[1]);
            }
            pcVar9 = (char *)WasmOpcodes::OpcodeName(uVar17);
          }
LAB_01334098:
          Decoder::errorf((uchar *)this,(char *)pbVar14,"%s found empty stack",pcVar9);
        }
        pcVar9 = *(char **)(this + 0x10);
        uVar7 = 10;
        if (bVar2 != 10) goto LAB_013340bc;
      }
      if ((uVar11 & 0xffffffff) - 1 == lVar19) break;
      lVar12 = *(long *)param_1;
      lVar13 = *(long *)(this + 200);
      lVar19 = lVar19 + 1;
    } while( true );
  }
  if (((byte)this[0x30] & 1) == 0) {
    uVar11 = (ulong)((byte)this[0x30] >> 1);
  }
  else {
    uVar11 = *(ulong *)(this + 0x38);
  }
  return uVar11 == 0;
}

