
/* v8::internal::NEONFormatDecoder::SetFormatMaps(v8::internal::NEONFormatMap const*,
   v8::internal::NEONFormatMap const*, v8::internal::NEONFormatMap const*) */

void __thiscall
v8::internal::NEONFormatDecoder::SetFormatMaps
          (NEONFormatDecoder *this,NEONFormatMap *param_1,NEONFormatMap *param_2,
          NEONFormatMap *param_3)

{
  NEONFormatMap *pNVar1;
  
  pNVar1 = param_1;
  if (param_2 != (NEONFormatMap *)0x0) {
    pNVar1 = param_2;
  }
  *(NEONFormatMap **)(this + 8) = param_1;
  *(NEONFormatMap **)(this + 0x10) = pNVar1;
  if (param_3 != (NEONFormatMap *)0x0) {
    pNVar1 = param_3;
  }
  *(NEONFormatMap **)(this + 0x18) = pNVar1;
  return;
}

