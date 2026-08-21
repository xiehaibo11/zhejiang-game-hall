
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::TypeCheckBranch(v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase>*,
   bool) */

undefined4 __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
TypeCheckBranch(WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
                *this,ControlBase *param_1,bool param_2)

{
  Merge *pMVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  pMVar1 = (Merge *)(param_1 + 0x18);
  if (*param_1 != (ControlBase)0x3) {
    pMVar1 = (Merge *)(param_1 + 0x38);
  }
  if (*(char *)(*(long *)(this + 200) + -0x48) != '\0') {
    uVar3 = TypeCheckUnreachableMerge(this,pMVar1,param_2);
    uVar4 = 1;
    if ((uVar3 & 1) == 0) {
      uVar4 = 2;
    }
    return uVar4;
  }
  uVar2 = *(uint *)pMVar1;
  if (uVar2 == 0) {
    return 0;
  }
  if ((uint)((int)((ulong)(*(long *)(this + 0xa8) - *(long *)(this + 0xa0)) >> 4) -
            *(int *)(*(long *)(this + 200) + -0x54)) < uVar2) {
    Decoder::errorf((uchar *)this,*(char **)(this + 0x10),
                    "expected %u elements on the stack for br to @%d, found %u",(ulong)uVar2,
                    (ulong)(uint)(*(int *)(param_1 + 8) - *(int *)(this + 8)));
    return 2;
  }
  uVar3 = TypeCheckMergeValues(this,param_1,pMVar1);
  uVar4 = 0;
  if ((uVar3 & 1) == 0) {
    uVar4 = 2;
  }
  return uVar4;
}

