
/* v8::internal::StringSearch<unsigned short, unsigned
   char>::SingleCharSearch(v8::internal::StringSearch<unsigned short, unsigned char>*,
   v8::internal::Vector<unsigned char const>, int) */

long __thiscall
v8::internal::StringSearch<unsigned_short,unsigned_char>::SingleCharSearch
          (StringSearch<unsigned_short,unsigned_char> *this,long param_1,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  
  uVar3 = **(ushort **)(this + 8);
  if (uVar3 < 0x100) {
    iVar2 = *(int *)(this + 0x10);
    uVar6 = (uint)uVar3;
    uVar1 = (uint)(uVar3 >> 8);
    if ((uint)(uVar3 >> 8) <= (uVar6 & 0xff)) {
      uVar1 = uVar6;
    }
    do {
      pvVar5 = memchr((void *)(param_1 + param_4),uVar1 & 0xff,
                      (long)(((param_3 - iVar2) + 1) - param_4));
      if (pvVar5 == (void *)0x0) {
        return 0xffffffff;
      }
      iVar4 = (int)((long)pvVar5 - param_1);
      if ((uint)*(byte *)(param_1 + iVar4) == (uVar6 & 0xff)) {
        return (long)pvVar5 - param_1;
      }
      param_4 = iVar4 + 1;
    } while (iVar4 < param_3 - iVar2);
  }
  return 0xffffffff;
}

