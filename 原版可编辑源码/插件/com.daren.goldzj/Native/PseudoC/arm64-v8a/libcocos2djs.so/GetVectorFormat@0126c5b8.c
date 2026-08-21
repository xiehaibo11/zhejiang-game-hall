
/* v8::internal::NEONFormatDecoder::GetVectorFormat(v8::internal::NEONFormatMap const*) */

undefined4 __thiscall
v8::internal::NEONFormatDecoder::GetVectorFormat(NEONFormatDecoder *this,NEONFormatMap *param_1)

{
  byte bVar1;
  
  bVar1 = PickBits(this,(uchar *)param_1);
  return *(undefined4 *)(&DAT_019f3970 + (ulong)*(uint *)(param_1 + (ulong)bVar1 * 4 + 8) * 4);
}

