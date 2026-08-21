
/* v8::internal::NEONFormatDecoder::NEONFormatDecoder(v8::internal::Instruction const*,
   v8::internal::NEONFormatMap const*, v8::internal::NEONFormatMap const*) */

void __thiscall
v8::internal::NEONFormatDecoder::NEONFormatDecoder
          (NEONFormatDecoder *this,Instruction *param_1,NEONFormatMap *param_2,
          NEONFormatMap *param_3)

{
  NEONFormatMap *pNVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)param_1;
  pNVar1 = param_2;
  if (param_3 != (NEONFormatMap *)0x0) {
    pNVar1 = param_3;
  }
  *(NEONFormatMap **)(this + 8) = param_2;
  *(NEONFormatMap **)(this + 0x10) = pNVar1;
  *(undefined4 *)this = uVar2;
  *(NEONFormatMap **)(this + 0x18) = pNVar1;
  return;
}

