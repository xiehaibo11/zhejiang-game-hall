
/* v8::internal::wasm::ModuleDecoder::StartDecoding(v8::internal::Counters*,
   v8::internal::AccountingAllocator*, v8::internal::wasm::ModuleOrigin) */

void __thiscall
v8::internal::wasm::ModuleDecoder::StartDecoding
          (ModuleDecoder *this,Counters *param_1,AccountingAllocator *param_2,
          ModuleDecoderImpl param_4)

{
  undefined4 uVar1;
  char cVar2;
  ModuleDecoderImpl *this_00;
  long *plVar3;
  
  this_00 = operator_new(0x98);
  *(undefined4 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined4 *)(this_00 + 0x20) = 0;
  cVar2 = FLAG_assume_asmjs_origin;
  *(undefined ***)this_00 = &PTR__ModuleDecoderImpl_01cc9e28;
  *(undefined8 *)(this_00 + 8) = 0;
  uVar1 = *(undefined4 *)this;
  this_00[0x68] = (ModuleDecoderImpl)0x1;
  if (cVar2 != '\0') {
    param_4 = (ModuleDecoderImpl)0x1;
  }
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined4 *)(this_00 + 0x6c) = 0;
  *(undefined4 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined4 *)(this_00 + 0x48) = uVar1;
  this_00[0x90] = param_4;
  plVar3 = *(long **)(this + 8);
  *(ModuleDecoderImpl **)(this + 8) = this_00;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
    this_00 = *(ModuleDecoderImpl **)(this + 8);
  }
  ModuleDecoderImpl::StartDecoding(this_00,param_1,param_2);
  return;
}

