
/* v8::internal::NEONFormatDecoder::Substitute(char const*,
   v8::internal::NEONFormatDecoder::SubstitutionMode,
   v8::internal::NEONFormatDecoder::SubstitutionMode,
   v8::internal::NEONFormatDecoder::SubstitutionMode) */

NEONFormatDecoder * __thiscall
v8::internal::NEONFormatDecoder::Substitute
          (NEONFormatDecoder *this,undefined8 param_1,int param_3,int param_4,int param_5)

{
  undefined **ppuVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  
  puVar5 = *(uchar **)(this + 8);
  bVar2 = PickBits(this,puVar5);
  puVar6 = *(uchar **)(this + 0x10);
  ppuVar1 = &PTR_s_undefined_019b2fcb_0x53_01cbcf50;
  if (param_3 != 1) {
    ppuVar1 = &PTR_s_undefined_019b2fcb_0x53_01cbcfb8;
  }
  puVar4 = ppuVar1[*(uint *)(puVar5 + (ulong)bVar2 * 4 + 8)];
  bVar2 = PickBits(this,puVar6);
  puVar5 = *(uchar **)(this + 0x18);
  ppuVar1 = &PTR_s_undefined_019b2fcb_0x53_01cbcf50;
  if (param_4 != 1) {
    ppuVar1 = &PTR_s_undefined_019b2fcb_0x53_01cbcfb8;
  }
  puVar3 = ppuVar1[*(uint *)(puVar6 + (ulong)bVar2 * 4 + 8)];
  bVar2 = PickBits(this,puVar5);
  ppuVar1 = &PTR_s_undefined_019b2fcb_0x53_01cbcf50;
  if (param_5 != 1) {
    ppuVar1 = &PTR_s_undefined_019b2fcb_0x53_01cbcfb8;
  }
  FUN_0126c46c(this + 0x20,0x40,0x40,param_1,puVar4,puVar3,
               ppuVar1[*(uint *)(puVar5 + (ulong)bVar2 * 4 + 8)]);
  return this + 0x20;
}

