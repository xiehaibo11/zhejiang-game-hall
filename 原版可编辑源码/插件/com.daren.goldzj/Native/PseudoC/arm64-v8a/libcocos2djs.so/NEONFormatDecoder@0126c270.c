
/* v8::internal::NEONFormatDecoder::NEONFormatDecoder(v8::internal::Instruction const*,
   v8::internal::NEONFormatMap const*) */

void __thiscall
v8::internal::NEONFormatDecoder::NEONFormatDecoder
          (NEONFormatDecoder *this,Instruction *param_1,NEONFormatMap *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)param_1;
  *(NEONFormatMap **)(this + 8) = param_2;
  *(NEONFormatMap **)(this + 0x10) = param_2;
  *(NEONFormatMap **)(this + 0x18) = param_2;
  *(undefined4 *)this = uVar1;
  return;
}

