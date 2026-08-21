
/* v8::internal::NEONFormatDecoder::GetVectorFormat(int) */

undefined4 __thiscall
v8::internal::NEONFormatDecoder::GetVectorFormat(NEONFormatDecoder *this,int param_1)

{
  byte bVar1;
  uchar *puVar2;
  
  puVar2 = *(uchar **)(this + (long)param_1 * 8 + 8);
  bVar1 = PickBits(this,puVar2);
  return *(undefined4 *)(&DAT_019f3970 + (ulong)*(uint *)(puVar2 + (ulong)bVar1 * 4 + 8) * 4);
}

