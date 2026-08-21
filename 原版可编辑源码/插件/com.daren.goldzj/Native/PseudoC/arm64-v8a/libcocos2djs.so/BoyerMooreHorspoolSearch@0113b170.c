
/* v8::internal::StringSearch<unsigned short, unsigned
   short>::BoyerMooreHorspoolSearch(v8::internal::StringSearch<unsigned short, unsigned short>*,
   v8::internal::Vector<unsigned short const>, int) */

ulong __thiscall
v8::internal::StringSearch<unsigned_short,unsigned_short>::BoyerMooreHorspoolSearch
          (StringSearch<unsigned_short,unsigned_short> *this,long param_1,undefined8 param_3,
          uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  
  iVar2 = *(int *)(this + 0x10);
  iVar6 = iVar2 + -1;
  sVar4 = *(short *)(*(long *)(this + 8) + (long)iVar6 * 2);
  iVar11 = -iVar2;
  iVar3 = *(int *)(*(long *)this + (ulong)(byte)sVar4 * 4 + 0xba2c);
  iVar7 = (int)param_3 - iVar2;
  while ((int)param_4 <= iVar7) {
    while (sVar5 = *(short *)(param_1 + (long)(int)(param_4 + iVar6) * 2), sVar4 != sVar5) {
      iVar8 = iVar6 - *(int *)(*(long *)this + (ulong)(byte)sVar5 * 4 + 0xba2c);
      param_4 = iVar8 + param_4;
      iVar11 = (iVar11 - iVar8) + 1;
      if (iVar7 < (int)param_4) goto LAB_0113b27c;
    }
    if (iVar2 + -2 < 0) goto LAB_0113b280;
    iVar11 = (iVar3 - iVar2) + 3 + iVar11;
    lVar10 = (long)(iVar2 + -2);
    while (*(short *)(*(long *)(this + 8) + lVar10 * 2) ==
           *(short *)(param_1 + (long)(int)param_4 * 2 + lVar10 * 2)) {
      iVar11 = iVar11 + 1;
      bVar1 = lVar10 < 1;
      lVar10 = lVar10 + -1;
      if (bVar1) goto LAB_0113b280;
    }
    param_4 = param_4 + (iVar6 - iVar3);
    if (0 < iVar11) {
      PopulateBoyerMooreTable(this);
      *(code **)(this + 0x18) = BoyerMooreSearch;
      uVar9 = BoyerMooreSearch(this,param_1,param_3,param_4);
      return uVar9;
    }
  }
LAB_0113b27c:
  param_4 = 0xffffffff;
LAB_0113b280:
  return (ulong)param_4;
}

