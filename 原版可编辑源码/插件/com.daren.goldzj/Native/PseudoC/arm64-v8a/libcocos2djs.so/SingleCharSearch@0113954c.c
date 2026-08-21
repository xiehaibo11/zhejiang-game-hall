
/* v8::internal::StringSearch<unsigned char, unsigned
   char>::SingleCharSearch(v8::internal::StringSearch<unsigned char, unsigned char>*,
   v8::internal::Vector<unsigned char const>, int) */

long __thiscall
v8::internal::StringSearch<unsigned_char,unsigned_char>::SingleCharSearch
          (StringSearch<unsigned_char,unsigned_char> *this,long param_1,int param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  
  iVar1 = *(int *)(this + 0x10);
  bVar2 = **(byte **)(this + 8);
  while( true ) {
    pvVar4 = memchr((void *)(param_1 + param_4),(uint)bVar2,
                    (long)(((param_3 - iVar1) + 1) - param_4));
    if (pvVar4 == (void *)0x0) {
      return 0xffffffff;
    }
    iVar3 = (int)((long)pvVar4 - param_1);
    if (*(byte *)(param_1 + iVar3) == bVar2) break;
    param_4 = iVar3 + 1;
    if (param_3 - iVar1 <= iVar3) {
      return 0xffffffff;
    }
  }
  return (long)pvVar4 - param_1;
}

