
/* v8::internal::compiler::EscapeAnalysisReducer::EscapeAnalysisReducer(v8::internal::compiler::AdvancedReducer::Editor*,
   v8::internal::compiler::JSGraph*, v8::internal::compiler::EscapeAnalysisResult,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::EscapeAnalysisReducer::EscapeAnalysisReducer
          (EscapeAnalysisReducer *this,undefined8 param_1,undefined8 *param_2,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  
  *(undefined8 **)(this + 0x10) = param_2;
  *(undefined8 *)(this + 0x18) = param_4;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = param_5;
  *(undefined ***)this = &PTR__EscapeAnalysisReducer_01ccced8;
  *(undefined8 *)(this + 8) = param_1;
  uVar1 = *param_2;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x40) = uVar1;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x58) = param_5;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = param_5;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x78) = 0x3f800000;
  std::__ndk1::
  __hash_table<v8::internal::compiler::Node*,v8::internal::compiler::NodeHashCache::NodeHashCode,v8::internal::compiler::NodeHashCache::NodeEquals,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
  ::rehash((__hash_table<v8::internal::compiler::Node*,v8::internal::compiler::NodeHashCache::NodeHashCode,v8::internal::compiler::NodeHashCache::NodeEquals,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
            *)(this + 0x48),100);
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = param_5;
  *(undefined8 *)(this + 0xb0) = param_5;
  *(undefined8 *)(this + 0xb8) = 0;
  *(EscapeAnalysisReducer **)(this + 0xa0) = this + 0xa8;
  *(undefined8 *)(this + 0xc0) = param_5;
  return;
}

