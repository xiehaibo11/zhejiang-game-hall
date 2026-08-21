
/* v8::internal::StringSearch<unsigned char, unsigned
   char>::LinearSearch(v8::internal::StringSearch<unsigned char, unsigned char>*,
   v8::internal::Vector<unsigned char const>, int) */

long __thiscall
v8::internal::StringSearch<unsigned_char,unsigned_char>::LinearSearch
          (StringSearch<unsigned_char,unsigned_char> *this,long param_1,int param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  
  uVar4 = *(undefined8 *)(this + 0x10);
  param_3 = param_3 - (int)uVar4;
  if ((int)param_4 <= param_3) {
    pbVar6 = *(byte **)(this + 8);
    bVar1 = *pbVar6;
    do {
      while( true ) {
        pvVar3 = memchr((void *)(param_1 + (int)param_4),(uint)bVar1,
                        (long)((param_3 + 1) - (int)param_4));
        if (pvVar3 == (void *)0x0) {
          return 0xffffffff;
        }
        iVar2 = (int)((long)pvVar3 - param_1);
        if (*(byte *)(param_1 + iVar2) != bVar1) break;
        if (iVar2 == -1) {
          return 0xffffffff;
        }
        param_4 = (long)iVar2 + 1;
        lVar5 = 0;
        while (pbVar6[lVar5 + 1] == *(byte *)(param_1 + param_4 + lVar5)) {
          lVar5 = lVar5 + 1;
          if ((int)uVar4 + -1 <= lVar5) {
            return (long)pvVar3 - param_1;
          }
        }
        if (param_3 <= iVar2) {
          return 0xffffffff;
        }
      }
      param_4 = (ulong)(iVar2 + 1);
    } while (iVar2 < param_3);
  }
  return 0xffffffff;
}

