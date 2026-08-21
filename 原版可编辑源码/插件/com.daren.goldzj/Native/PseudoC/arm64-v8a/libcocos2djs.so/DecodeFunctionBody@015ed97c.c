
/* v8::internal::wasm::ModuleDecoder::DecodeFunctionBody(unsigned int, unsigned int, unsigned int,
   bool) */

void __thiscall
v8::internal::wasm::ModuleDecoder::DecodeFunctionBody
          (ModuleDecoder *this,uint param_1,uint param_2,uint param_3,bool param_4)

{
  WasmFunction *pWVar1;
  ModuleDecoderImpl *this_00;
  WasmModule *pWVar2;
  undefined8 local_20;
  long lStack_18;
  
  this_00 = *(ModuleDecoderImpl **)(this + 8);
  pWVar1 = (WasmFunction *)
           (*(long *)(*(long *)(this_00 + 0x50) + 0x88) +
           (ulong)(*(int *)(*(long *)(this_00 + 0x50) + 0x3c) + param_1) * 0x20);
  *(ulong *)(pWVar1 + 0x10) = CONCAT44(param_2,param_3);
  if (param_4) {
    local_20 = *(undefined8 *)(this_00 + 8);
    lStack_18 = (long)(*(int *)(this_00 + 0x18) - (int)local_20);
    pWVar2 = *(WasmModule **)(this_00 + 0x50);
    ModuleDecoderImpl::VerifyFunctionBody
              (this_00,*(AccountingAllocator **)(*(long *)pWVar2 + 0x20),
               *(int *)(pWVar2 + 0x3c) + param_1,(ModuleWireBytes *)&local_20,pWVar2,pWVar1);
  }
  return;
}

