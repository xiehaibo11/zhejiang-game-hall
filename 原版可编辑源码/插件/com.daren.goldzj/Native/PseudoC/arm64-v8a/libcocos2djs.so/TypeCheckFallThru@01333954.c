
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::TypeCheckFallThru() */

undefined8 __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
TypeCheckFallThru(WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
                  *this)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  Merge *pMVar4;
  long lVar5;
  
  lVar5 = *(long *)(this + 200);
  pMVar4 = (Merge *)(lVar5 + -0x20);
  uVar1 = *(uint *)pMVar4;
  uVar2 = (int)((ulong)(*(long *)(this + 0xa8) - *(long *)(this + 0xa0)) >> 4) -
          *(int *)(lVar5 + -0x54);
  if (*(char *)(lVar5 + -0x48) == '\0') {
    if (uVar2 == uVar1) {
      if (uVar1 != 0) {
        uVar3 = TypeCheckMergeValues(this,(ControlBase *)(lVar5 + -0x58),pMVar4);
        return uVar3;
      }
      return 1;
    }
  }
  else if ((int)uVar2 <= (int)uVar1) {
    uVar3 = TypeCheckUnreachableMerge(this,pMVar4,false);
    return uVar3;
  }
  Decoder::errorf((uchar *)this,*(char **)(this + 0x10),
                  "expected %u elements on the stack for fallthru to @%d, found %u",(ulong)uVar1,
                  (ulong)(uint)(*(int *)(lVar5 + -0x50) - *(int *)(this + 8)));
  return 0;
}

