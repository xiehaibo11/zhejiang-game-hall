
/* v8::internal::StringSearch<unsigned short, unsigned
   short>::BoyerMooreSearch(v8::internal::StringSearch<unsigned short, unsigned short>*,
   v8::internal::Vector<unsigned short const>, int) */

int __thiscall
v8::internal::StringSearch<unsigned_short,unsigned_short>::BoyerMooreSearch
          (StringSearch<unsigned_short,unsigned_short> *this,long param_1,int param_3,int param_4)

{
  long lVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  iVar8 = (int)*(long *)(this + 0x10);
  if (param_4 <= param_3 - iVar8) {
    lVar1 = *(long *)this;
    iVar4 = iVar8 + -1;
    sVar2 = *(short *)(*(long *)(this + 8) + (long)iVar4 * 2);
    do {
      sVar3 = *(short *)(param_1 + (long)(param_4 + iVar4) * 2);
      if (sVar2 == sVar3) {
        if (iVar8 < 1) {
          return param_4;
        }
        lVar7 = *(long *)(this + 0x10) << 0x20;
        lVar9 = (long)iVar8;
        iVar5 = iVar4;
        while (sVar3 = *(short *)(param_1 + -2 + (long)param_4 * 2 + lVar9 * 2),
              *(short *)(*(long *)(this + 8) + -2 + lVar9 * 2) == sVar3) {
          lVar9 = lVar9 + -1;
          lVar7 = lVar7 + -0x100000000;
          iVar5 = iVar5 + -1;
          if (lVar9 < 1) {
            return param_4;
          }
        }
        if (iVar5 < *(int *)(this + 0x20)) {
          iVar6 = iVar4 - *(int *)(lVar1 + (ulong)(byte)sVar2 * 4 + 0xba2c);
        }
        else {
          iVar6 = *(int *)(lVar1 + (long)*(int *)(this + 0x20) * -4 + 0xbe2c + (lVar7 >> 0x1e));
          iVar5 = iVar5 - *(int *)(lVar1 + (ulong)(byte)sVar3 * 4 + 0xba2c);
          if (iVar6 <= iVar5) {
            iVar6 = iVar5;
          }
        }
      }
      else {
        iVar6 = iVar4 - *(int *)(lVar1 + (ulong)(byte)sVar3 * 4 + 0xba2c);
      }
      param_4 = iVar6 + param_4;
    } while (param_4 <= param_3 - iVar8);
  }
  return -1;
}

