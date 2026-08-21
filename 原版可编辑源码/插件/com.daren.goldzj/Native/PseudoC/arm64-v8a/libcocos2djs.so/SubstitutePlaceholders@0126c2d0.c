
/* v8::internal::NEONFormatDecoder::SubstitutePlaceholders(char const*) */

NEONFormatDecoder * __thiscall
v8::internal::NEONFormatDecoder::SubstitutePlaceholders(NEONFormatDecoder *this,char *param_1)

{
  byte bVar1;
  uchar *puVar2;
  undefined *puVar3;
  uchar *puVar4;
  undefined *puVar5;
  
  puVar2 = *(uchar **)(this + 8);
  bVar1 = PickBits(this,puVar2);
  puVar4 = *(uchar **)(this + 0x10);
  puVar3 = (&PTR_s_undefined_019b2fcb_0x53_01cbcfb8)[*(uint *)(puVar2 + (ulong)bVar1 * 4 + 8)];
  bVar1 = PickBits(this,puVar4);
  puVar2 = *(uchar **)(this + 0x18);
  puVar5 = (&PTR_s_undefined_019b2fcb_0x53_01cbcfb8)[*(uint *)(puVar4 + (ulong)bVar1 * 4 + 8)];
  bVar1 = PickBits(this,puVar2);
  FUN_0126c46c(this + 0x20,0x40,0x40,param_1,puVar3,puVar5,
               (&PTR_s_undefined_019b2fcb_0x53_01cbcfb8)[*(uint *)(puVar2 + (ulong)bVar1 * 4 + 8)]);
  return this + 0x20;
}

