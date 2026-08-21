
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::TypeCheckMergeValues(v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase>*,
   v8::internal::wasm::Merge<v8::internal::wasm::ValueBase>*) */

undefined8 __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
TypeCheckMergeValues
          (WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
           *this,ControlBase *param_1,Merge *param_2)

{
  uint uVar1;
  Merge MVar2;
  Merge MVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  int iVar8;
  Merge *pMVar9;
  
  uVar1 = *(uint *)param_2;
  if (uVar1 != 0) {
    lVar7 = 0;
    uVar4 = 0;
    do {
      pMVar9 = param_2 + 8;
      if (uVar1 != 1) {
        pMVar9 = (Merge *)(*(long *)(param_2 + 8) + lVar7);
      }
      MVar3 = *(Merge *)(*(long *)(this + 0xa8) + (ulong)uVar1 * -0x10 + 8 + lVar7);
      MVar2 = pMVar9[8];
      if (MVar2 != MVar3) {
        iVar8 = (int)(char)MVar3;
        if (((iVar8 != 8 || MVar2 != (Merge)0x9) && (MVar2 != (Merge)0x6 || 2 < (iVar8 - 7U & 0xff))
            ) && (iVar8 != 8 || MVar2 != (Merge)0x7)) {
          if ((byte)MVar2 < 0xb) {
            pcVar5 = (&PTR_s_<stmt>_01cc3d60)[(char)MVar2];
          }
          else {
            pcVar5 = "<unknown>";
          }
          if ((byte)MVar3 < 0xb) {
            pcVar6 = (&PTR_s_<stmt>_01cc3d60)[(char)MVar3];
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

