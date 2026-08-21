
/* v8::internal::NEONFormatDecoder::SetFormatMap(unsigned int, v8::internal::NEONFormatMap const*)
    */

void __thiscall
v8::internal::NEONFormatDecoder::SetFormatMap
          (NEONFormatDecoder *this,uint param_1,NEONFormatMap *param_2)

{
  *(NEONFormatMap **)(this + (ulong)param_1 * 8 + 8) = param_2;
  return;
}

