
/* v8::internal::StringSearch<unsigned char, unsigned
   short>::LinearSearch(v8::internal::StringSearch<unsigned char, unsigned short>*,
   v8::internal::Vector<unsigned short const>, int) */

ulong __thiscall
v8::internal::StringSearch<unsigned_char,unsigned_short>::LinearSearch
          (StringSearch<unsigned_char,unsigned_short> *this,long param_1,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  
  uVar6 = *(undefined8 *)(this + 0x10);
  param_3 = param_3 - (int)uVar6;
  if (param_4 <= param_3) {
    pbVar9 = *(byte **)(this + 8);
    bVar1 = *pbVar9;
    do {
      while( true ) {
        uVar2 = (param_3 + 1) - param_4;
        pvVar4 = memchr((void *)(param_1 + (long)param_4 * 2),(uint)bVar1,
                        -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1);
        if (pvVar4 == (void *)0x0) {
          return 0xffffffff;
        }
        uVar7 = ((ulong)pvVar4 & 0xfffffffffffffffe) - param_1;
        uVar5 = uVar7 >> 1;
        iVar3 = (int)uVar5;
        if (*(ushort *)(param_1 + ((long)(uVar7 * 0x80000000) >> 0x1f)) != (ushort)bVar1) break;
        if (iVar3 == -1) {
          return 0xffffffff;
        }
        param_4 = iVar3 + 1;
        lVar8 = 0;
        while (*(ushort *)(param_1 + (long)param_4 * 2 + lVar8 * 2) == (ushort)pbVar9[lVar8 + 1]) {
          lVar8 = lVar8 + 1;
          if ((int)uVar6 + -1 <= lVar8) {
            return uVar5;
          }
        }
        if (param_3 <= iVar3) {
          return 0xffffffff;
        }
      }
      param_4 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return 0xffffffff;
}

