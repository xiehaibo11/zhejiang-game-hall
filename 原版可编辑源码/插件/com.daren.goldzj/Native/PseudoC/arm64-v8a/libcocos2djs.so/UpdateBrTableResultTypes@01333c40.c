
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::UpdateBrTableResultTypes(std::__ndk1::vector<v8::internal::wasm::ValueType,
   std::__ndk1::allocator<v8::internal::wasm::ValueType> >*, unsigned int, unsigned char const*,
   int) */

undefined4 __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
UpdateBrTableResultTypes
          (WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
           *this,vector *param_1,uint param_2,uchar *param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  
  lVar10 = *(long *)(this + 200) + (ulong)param_2 * -0x58;
  puVar2 = (uint *)(lVar10 + -0x40);
  if (*(char *)(lVar10 + -0x58) != '\x03') {
    puVar2 = (uint *)(lVar10 + -0x20);
  }
  lVar10 = *(long *)param_1;
  uVar13 = *puVar2;
  uVar5 = (ulong)uVar13;
  if (uVar13 != (uint)(*(long *)(param_1 + 8) - lVar10)) {
    Decoder::errorf((uchar *)this,(char *)param_3,
                    "inconsistent arity in br_table target %u (previous was %zu, this one is %u)",
                    (ulong)(uint)param_4,*(long *)(param_1 + 8) - lVar10);
    return 0;
  }
  if (0 < (int)uVar13) {
    uVar9 = 0;
    puVar8 = puVar2 + 2;
    while( true ) {
      bVar4 = *(byte *)(lVar10 + uVar9);
      puVar11 = puVar8;
      if (uVar13 != 1) {
        puVar11 = (uint *)(*(long *)puVar8 + uVar9 * 0x10);
      }
      bVar3 = (byte)puVar11[2];
      uVar1 = (uint)bVar4;
      uVar12 = (uint)bVar3;
      if ((*(uint *)(this + 0x50) >> 5 & 1) == 0) {
        if (uVar1 != uVar12) {
          if (uVar1 < 0xb) {
            pcVar7 = (&PTR_s_<stmt>_01cc3d60)[(char)bVar4];
          }
          else {
            pcVar7 = "<unknown>";
          }
          if (uVar13 != 1) {
            puVar8 = (uint *)(*(long *)puVar8 + (uVar9 & 0xffffffff) * 0x10);
          }
          if ((ulong)(long)(char)puVar8[2] < 0xb) {
            pcVar6 = (&PTR_s_<stmt>_01cc3d60)[(char)puVar8[2]];
          }
          else {
            pcVar6 = "<unknown>";
          }
          Decoder::errorf((uchar *)this,(char *)param_3,
                          "inconsistent type in br_table target %u (previous was %s, this one is %s)"
                          ,(ulong)(uint)param_4,pcVar7,pcVar6);
          return 0;
        }
      }
      else {
        uVar13 = (uint)bVar3;
        bVar14 = bVar4;
        if ((((uVar1 != uVar13) && (bVar14 = 10, uVar1 < 10)) &&
            ((1 << (ulong)(uVar1 & 0x1f) & 0x2c0U) != 0)) &&
           ((bVar14 = 10, uVar13 < 10 && ((1 << (ulong)(uVar13 & 0x1f) & 0x2c0U) != 0)))) {
          bVar14 = bVar4;
          if ((2 < uVar1 - 7 || uVar12 != 6) && (uVar1 != 8 || uVar12 != 7)) {
            if ((uVar1 == 8) && (uVar12 == 9)) {
              bVar14 = 8;
            }
            else {
              bVar14 = bVar3;
              if ((uVar1 != 9 || uVar12 != 8) &&
                  ((uVar1 != 7 || uVar12 != 8) && (uVar1 != 6 || 2 < uVar12 - 7))) {
                bVar14 = 8;
              }
            }
          }
        }
        *(byte *)(lVar10 + uVar9) = bVar14;
      }
      uVar9 = uVar9 + 1;
      if (uVar9 == uVar5) break;
      lVar10 = *(long *)param_1;
      uVar13 = *puVar2;
    }
  }
  return 1;
}

