
/* v8::internal::StringSearch<unsigned short, unsigned
   char>::LinearSearch(v8::internal::StringSearch<unsigned short, unsigned char>*,
   v8::internal::Vector<unsigned char const>, int) */

long __thiscall
v8::internal::StringSearch<unsigned_short,unsigned_char>::LinearSearch
          (StringSearch<unsigned_short,unsigned_char> *this,long param_1,int param_3,ulong param_4)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  ushort *puVar7;
  
  uVar5 = *(undefined8 *)(this + 0x10);
  param_3 = param_3 - (int)uVar5;
  if ((int)param_4 <= param_3) {
    puVar7 = *(ushort **)(this + 8);
    uVar2 = *puVar7;
    uVar1 = (uint)(uVar2 >> 8);
    if ((uint)(uVar2 >> 8) <= (uVar2 & 0xff)) {
      uVar1 = (uint)uVar2;
    }
    do {
      while( true ) {
        pvVar4 = memchr((void *)(param_1 + (int)param_4),uVar1 & 0xff,
                        (long)((param_3 + 1) - (int)param_4));
        if (pvVar4 == (void *)0x0) {
          return 0xffffffff;
        }
        iVar3 = (int)((long)pvVar4 - param_1);
        if ((ushort)*(byte *)(param_1 + iVar3) != (uVar2 & 0xff)) break;
        if (iVar3 == -1) {
          return 0xffffffff;
        }
        param_4 = (long)iVar3 + 1;
        lVar6 = 0;
        while (puVar7[lVar6 + 1] == (ushort)*(byte *)(param_1 + param_4 + lVar6)) {
          lVar6 = lVar6 + 1;
          if ((int)uVar5 + -1 <= lVar6) {
            return (long)pvVar4 - param_1;
          }
        }
        if (param_3 <= iVar3) {
          return 0xffffffff;
        }
      }
      param_4 = (ulong)(iVar3 + 1);
    } while (iVar3 < param_3);
  }
  return 0xffffffff;
}

