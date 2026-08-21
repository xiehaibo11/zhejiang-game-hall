
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::TypeCheckReturn() */

undefined8 __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
TypeCheckReturn(WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
                *this)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  
  uVar7 = **(ulong **)(this + 0x60);
  iVar6 = (int)uVar7;
  if (iVar6 != 0) {
    if ((int)((ulong)(*(long *)(this + 0xa8) - *(long *)(this + 0xa0)) >> 4) -
        *(int *)(*(long *)(this + 200) + -0x54) < iVar6) {
      Decoder::errorf((uchar *)this,*(char **)(this + 0x10),
                      "expected %u elements on the stack for return, found %u",uVar7 & 0xffffffff);
      return 0;
    }
    if (0 < iVar6) {
      uVar3 = 0;
      pbVar8 = (byte *)(*(long *)(this + 0xa8) + (long)iVar6 * -0x10 + 8);
      do {
        bVar2 = *(byte *)((*(ulong **)(this + 0x60))[2] + uVar3);
        bVar1 = *pbVar8;
        if (bVar2 != bVar1) {
          iVar6 = (int)(char)bVar1;
          if (((bVar2 != 9 || iVar6 != 8) && (bVar2 != 7 || iVar6 != 8)) &&
             (bVar2 != 6 || 2 < (iVar6 - 7U & 0xff))) {
            if (bVar2 < 0xb) {
              pcVar4 = (&PTR_s_<stmt>_01cc3d60)[(char)bVar2];
            }
            else {
              pcVar4 = "<unknown>";
            }
            if (bVar1 < 0xb) {
              pcVar5 = (&PTR_s_<stmt>_01cc3d60)[(char)bVar1];
            }
            else {
              pcVar5 = "<unknown>";
            }
            Decoder::errorf((uchar *)this,*(char **)(this + 0x10),
                            "type error in return[%u] (expected %s, got %s)",uVar3,pcVar4,pcVar5);
            return 0;
          }
        }
        uVar3 = uVar3 + 1;
        pbVar8 = pbVar8 + 0x10;
      } while ((uVar7 & 0xffffffff) != uVar3);
    }
  }
  return 1;
}

