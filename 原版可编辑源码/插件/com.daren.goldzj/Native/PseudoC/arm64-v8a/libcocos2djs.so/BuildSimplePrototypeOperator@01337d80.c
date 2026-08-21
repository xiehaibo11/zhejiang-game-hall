
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::BuildSimplePrototypeOperator(v8::internal::wasm::WasmOpcode)
    */

void __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
BuildSimplePrototypeOperator
          (WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
           *this,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = WasmOpcodes::IsSignExtensionOpcode(param_2);
  if ((uVar1 & 1) != 0) {
    if (((byte)this[0x51] >> 3 & 1) == 0) {
      Decoder::error((Decoder *)this,"Invalid opcode (enable with --experimental-wasm-se)");
    }
    else {
      **(uint **)(this + 0x58) = **(uint **)(this + 0x58) | 0x800;
    }
  }
  uVar1 = WasmOpcodes::IsAnyRefOpcode(param_2);
  if ((uVar1 & 1) != 0) {
    if (((byte)this[0x50] >> 5 & 1) == 0) {
      Decoder::error((Decoder *)this,"Invalid opcode (enable with --experimental-wasm-anyref)");
    }
    else {
      **(uint **)(this + 0x58) = **(uint **)(this + 0x58) | 0x20;
    }
  }
  uVar2 = WasmOpcodes::Signature(param_2);
  BuildSimpleOperator(this,param_2,uVar2);
  return;
}

