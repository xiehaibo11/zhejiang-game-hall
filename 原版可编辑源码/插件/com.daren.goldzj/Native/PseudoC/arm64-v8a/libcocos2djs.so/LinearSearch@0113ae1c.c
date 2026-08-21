
/* v8::internal::StringSearch<unsigned short, unsigned
   short>::LinearSearch(v8::internal::StringSearch<unsigned short, unsigned short>*,
   v8::internal::Vector<unsigned short const>, int) */

ulong __thiscall
v8::internal::StringSearch<unsigned_short,unsigned_short>::LinearSearch
          (StringSearch<unsigned_short,unsigned_short> *this,long param_1,int param_3,int param_4)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ushort *puVar10;
  
  uVar7 = *(undefined8 *)(this + 0x10);
  param_3 = param_3 - (int)uVar7;
  if (param_4 <= param_3) {
    puVar10 = *(ushort **)(this + 8);
    uVar2 = *puVar10;
    uVar1 = (uint)(uVar2 >> 8);
    if ((uint)(uVar2 >> 8) <= (uVar2 & 0xff)) {
      uVar1 = (uint)uVar2;
    }
    do {
      while( true ) {
        uVar3 = (param_3 + 1) - param_4;
        pvVar5 = memchr((void *)(param_1 + (long)param_4 * 2),uVar1 & 0xff,
                        -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1);
        if (pvVar5 == (void *)0x0) {
          return 0xffffffff;
        }
        uVar8 = ((ulong)pvVar5 & 0xfffffffffffffffe) - param_1;
        uVar6 = uVar8 >> 1;
        iVar4 = (int)uVar6;
        if (*(ushort *)(param_1 + ((long)(uVar8 * 0x80000000) >> 0x1f)) != uVar2) break;
        if (iVar4 == -1) {
          return 0xffffffff;
        }
        param_4 = iVar4 + 1;
        lVar9 = 0;
        while (puVar10[lVar9 + 1] == *(ushort *)(param_1 + (long)param_4 * 2 + lVar9 * 2)) {
          lVar9 = lVar9 + 1;
          if ((int)uVar7 + -1 <= lVar9) {
            return uVar6;
          }
        }
        if (param_3 <= iVar4) {
          return 0xffffffff;
        }
      }
      param_4 = iVar4 + 1;
    } while (iVar4 < param_3);
  }
  return 0xffffffff;
}

