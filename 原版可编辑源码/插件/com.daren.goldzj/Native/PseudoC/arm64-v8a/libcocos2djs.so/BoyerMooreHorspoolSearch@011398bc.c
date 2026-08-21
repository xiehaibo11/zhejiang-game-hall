
/* v8::internal::StringSearch<unsigned char, unsigned
   char>::BoyerMooreHorspoolSearch(v8::internal::StringSearch<unsigned char, unsigned char>*,
   v8::internal::Vector<unsigned char const>, int) */

ulong __thiscall
v8::internal::StringSearch<unsigned_char,unsigned_char>::BoyerMooreHorspoolSearch
          (StringSearch<unsigned_char,unsigned_char> *this,long param_1,undefined8 param_3,
          uint param_4)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  
  iVar5 = *(int *)(this + 0x10);
  bVar3 = *(byte *)(*(long *)(this + 8) + (long)iVar5 + -1);
  iVar11 = -iVar5;
  iVar2 = *(int *)(*(long *)this + (ulong)bVar3 * 4 + 0xba2c);
  iVar6 = (int)param_3 - iVar5;
  iVar10 = (int)((long)iVar5 + -1);
  while ((int)param_4 <= iVar6) {
    while( true ) {
      bVar4 = *(byte *)(param_1 + (long)(int)param_4 + (long)iVar10);
      if (bVar3 == bVar4) break;
      iVar7 = iVar10 - *(int *)(*(long *)this + (ulong)bVar4 * 4 + 0xba2c);
      param_4 = iVar7 + param_4;
      iVar11 = (iVar11 - iVar7) + 1;
      if (iVar6 < (int)param_4) goto LAB_011399c8;
    }
    if (iVar5 + -2 < 0) goto LAB_011399cc;
    iVar11 = (iVar2 - iVar5) + 3 + iVar11;
    lVar9 = (long)(iVar5 + -2);
    while (*(char *)(*(long *)(this + 8) + lVar9) == *(char *)(param_1 + (int)param_4 + lVar9)) {
      iVar11 = iVar11 + 1;
      bVar1 = lVar9 < 1;
      lVar9 = lVar9 + -1;
      if (bVar1) goto LAB_011399cc;
    }
    param_4 = param_4 + (iVar10 - iVar2);
    if (0 < iVar11) {
      PopulateBoyerMooreTable(this);
      *(code **)(this + 0x18) = BoyerMooreSearch;
      uVar8 = BoyerMooreSearch(this,param_1,param_3,param_4);
      return uVar8;
    }
  }
LAB_011399c8:
  param_4 = 0xffffffff;
LAB_011399cc:
  return (ulong)param_4;
}

