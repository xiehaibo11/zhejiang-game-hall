
/* v8::internal::NEONFormatDecoder::NEONFormatDecoder(v8::internal::Instruction const*) */

void __thiscall
v8::internal::NEONFormatDecoder::NEONFormatDecoder(NEONFormatDecoder *this,Instruction *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined1 **)(this + 8) = IntegerFormatMap()::map;
  *(undefined1 **)(this + 0x10) = IntegerFormatMap()::map;
  *(undefined1 **)(this + 0x18) = IntegerFormatMap()::map;
  return;
}

