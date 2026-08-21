
/* v8::internal::StringSearch<unsigned char, unsigned
   short>::SingleCharSearch(v8::internal::StringSearch<unsigned char, unsigned short>*,
   v8::internal::Vector<unsigned short const>, int) */

ulong __thiscall
v8::internal::StringSearch<unsigned_char,unsigned_short>::SingleCharSearch
          (StringSearch<unsigned_char,unsigned_short> *this,long param_1,int param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  
  iVar1 = *(int *)(this + 0x10);
  bVar2 = **(byte **)(this + 8);
  while( true ) {
    uVar3 = ((param_3 - iVar1) + 1) - param_4;
    pvVar5 = memchr((void *)(param_1 + (long)param_4 * 2),(uint)bVar2,
                    -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1);
    if (pvVar5 == (void *)0x0) {
      return 0xffffffff;
    }
    uVar7 = ((ulong)pvVar5 & 0xfffffffffffffffe) - param_1;
    uVar6 = uVar7 >> 1;
    if (*(ushort *)(param_1 + ((long)(uVar7 * 0x80000000) >> 0x1f)) == (ushort)bVar2) break;
    iVar4 = (int)uVar6;
    param_4 = iVar4 + 1;
    if (param_3 - iVar1 <= iVar4) {
      return 0xffffffff;
    }
  }
  return uVar6;
}

