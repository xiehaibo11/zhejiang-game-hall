
/* v8::internal::StringSearch<unsigned short, unsigned
   short>::SingleCharSearch(v8::internal::StringSearch<unsigned short, unsigned short>*,
   v8::internal::Vector<unsigned short const>, int) */

ulong __thiscall
v8::internal::StringSearch<unsigned_short,unsigned_short>::SingleCharSearch
          (StringSearch<unsigned_short,unsigned_short> *this,long param_1,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  
  iVar2 = *(int *)(this + 0x10);
  uVar3 = **(ushort **)(this + 8);
  uVar1 = (uint)(uVar3 >> 8);
  if ((uint)(uVar3 >> 8) <= (uVar3 & 0xff)) {
    uVar1 = (uint)uVar3;
  }
  while( true ) {
    uVar4 = ((param_3 - iVar2) + 1) - param_4;
    pvVar6 = memchr((void *)(param_1 + (long)param_4 * 2),uVar1 & 0xff,
                    -(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1);
    if (pvVar6 == (void *)0x0) {
      return 0xffffffff;
    }
    uVar8 = ((ulong)pvVar6 & 0xfffffffffffffffe) - param_1;
    uVar7 = uVar8 >> 1;
    if (*(ushort *)(param_1 + ((long)(uVar8 * 0x80000000) >> 0x1f)) == uVar3) break;
    iVar5 = (int)uVar7;
    param_4 = iVar5 + 1;
    if (param_3 - iVar2 <= iVar5) {
      return 0xffffffff;
    }
  }
  return uVar7;
}

