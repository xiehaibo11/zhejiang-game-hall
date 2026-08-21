
/* v8::internal::StringSearch<unsigned short, unsigned
   char>::BoyerMooreHorspoolSearch(v8::internal::StringSearch<unsigned short, unsigned char>*,
   v8::internal::Vector<unsigned char const>, int) */

ulong __thiscall
v8::internal::StringSearch<unsigned_short,unsigned_char>::BoyerMooreHorspoolSearch
          (StringSearch<unsigned_short,unsigned_char> *this,long param_1,undefined8 param_3,
          uint param_4)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  
  iVar5 = *(int *)(this + 0x10);
  iVar10 = (int)((long)iVar5 + -1);
  uVar4 = *(ushort *)(*(long *)(this + 8) + (long)iVar10 * 2);
  iVar11 = -iVar5;
  iVar2 = *(int *)(*(long *)this + (ulong)(byte)uVar4 * 4 + 0xba2c);
  iVar6 = (int)param_3 - iVar5;
  while ((int)param_4 <= iVar6) {
    while( true ) {
      bVar3 = *(byte *)(param_1 + (long)(int)param_4 + (long)iVar5 + -1);
      if (uVar4 == bVar3) break;
      iVar7 = iVar10 - *(int *)(*(long *)this + (ulong)bVar3 * 4 + 0xba2c);
      param_4 = iVar7 + param_4;
      iVar11 = (iVar11 - iVar7) + 1;
      if (iVar6 < (int)param_4) goto LAB_0113aa2c;
    }
    if (iVar5 + -2 < 0) goto LAB_0113aa30;
    iVar11 = (iVar2 - iVar5) + 3 + iVar11;
    lVar9 = (long)(iVar5 + -2);
    while (*(ushort *)(*(long *)(this + 8) + lVar9 * 2) ==
           (ushort)*(byte *)(param_1 + (int)param_4 + lVar9)) {
      iVar11 = iVar11 + 1;
      bVar1 = lVar9 < 1;
      lVar9 = lVar9 + -1;
      if (bVar1) goto LAB_0113aa30;
    }
    param_4 = param_4 + (iVar10 - iVar2);
    if (0 < iVar11) {
      PopulateBoyerMooreTable(this);
      *(code **)(this + 0x18) = BoyerMooreSearch;
      uVar8 = BoyerMooreSearch(this,param_1,param_3,param_4);
      return uVar8;
    }
  }
LAB_0113aa2c:
  param_4 = 0xffffffff;
LAB_0113aa30:
  return (ulong)param_4;
}

