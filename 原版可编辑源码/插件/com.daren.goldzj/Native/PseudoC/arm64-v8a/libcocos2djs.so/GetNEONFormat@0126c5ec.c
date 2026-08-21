
/* v8::internal::NEONFormatDecoder::GetNEONFormat(v8::internal::NEONFormatMap const*) */

undefined4 __thiscall
v8::internal::NEONFormatDecoder::GetNEONFormat(NEONFormatDecoder *this,NEONFormatMap *param_1)

{
  byte bVar1;
  
  bVar1 = PickBits(this,(uchar *)param_1);
  return *(undefined4 *)(param_1 + (ulong)bVar1 * 4 + 8);
}

