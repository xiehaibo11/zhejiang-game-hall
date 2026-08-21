
/* v8::internal::NEONFormatDecoder::GetSubstitute(int,
   v8::internal::NEONFormatDecoder::SubstitutionMode) */

undefined * __thiscall
v8::internal::NEONFormatDecoder::GetSubstitute(NEONFormatDecoder *this,int param_1,int param_3)

{
  undefined **ppuVar1;
  byte bVar2;
  uchar *puVar3;
  
  puVar3 = *(uchar **)(this + (long)param_1 * 8 + 8);
  bVar2 = PickBits(this,puVar3);
  ppuVar1 = &PTR_s_undefined_019b2fcb_0x53_01cbcf50;
  if (param_3 != 1) {
    ppuVar1 = &PTR_s_undefined_019b2fcb_0x53_01cbcfb8;
  }
  return ppuVar1[*(uint *)(puVar3 + (ulong)bVar2 * 4 + 8)];
}

