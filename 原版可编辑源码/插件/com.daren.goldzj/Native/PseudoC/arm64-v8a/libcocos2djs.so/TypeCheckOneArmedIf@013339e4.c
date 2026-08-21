
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::TypeCheckOneArmedIf(v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase>*)
    */

undefined8 __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
TypeCheckOneArmedIf(WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
                    *this,ControlBase *param_1)

{
  uint uVar1;
  ControlBase CVar2;
  ControlBase CVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  int iVar8;
  ControlBase *pCVar9;
  ControlBase *pCVar10;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    lVar7 = 0;
    uVar4 = 0;
    do {
      pCVar9 = param_1 + 0x20;
      if (uVar1 != 1) {
        pCVar9 = (ControlBase *)(*(long *)(param_1 + 0x20) + lVar7);
      }
      pCVar10 = param_1 + 0x40;
      if (*(int *)(param_1 + 0x38) != 1) {
        pCVar10 = (ControlBase *)(*(long *)(param_1 + 0x40) + lVar7);
      }
      CVar2 = pCVar9[8];
      CVar3 = pCVar10[8];
      if (CVar3 != CVar2) {
        iVar8 = (int)(char)CVar2;
        if (((iVar8 != 8 || CVar3 != (ControlBase)0x9) &&
            (CVar3 != (ControlBase)0x6 || 2 < (iVar8 - 7U & 0xff))) &&
           (iVar8 != 8 || CVar3 != (ControlBase)0x7)) {
          if ((byte)CVar3 < 0xb) {
            pcVar5 = (&PTR_s_<stmt>_01cc3d60)[(char)CVar3];
          }
          else {
            pcVar5 = "<unknown>";
          }
          if ((byte)CVar2 < 0xb) {
            pcVar6 = (&PTR_s_<stmt>_01cc3d60)[(char)CVar2];
          }
          else {
            pcVar6 = "<unknown>";
          }
          Decoder::errorf((uchar *)this,*(char **)(this + 0x10),
                          "type error in merge[%u] (expected %s, got %s)",uVar4,pcVar5,pcVar6);
          return 0;
        }
      }
      uVar4 = uVar4 + 1;
      lVar7 = lVar7 + 0x10;
    } while (uVar4 < uVar1);
  }
  return 1;
}

