
/* v8::internal::StringSearch<unsigned char, unsigned
   short>::BoyerMooreSearch(v8::internal::StringSearch<unsigned char, unsigned short>*,
   v8::internal::Vector<unsigned short const>, int) */

int __thiscall
v8::internal::StringSearch<unsigned_char,unsigned_short>::BoyerMooreSearch
          (StringSearch<unsigned_char,unsigned_short> *this,long param_1,int param_3,int param_4)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  
  iVar5 = (int)*(long *)(this + 0x10);
  if (param_4 <= param_3 - iVar5) {
    lVar1 = *(long *)this;
    lVar7 = (long)iVar5 + -1;
    bVar2 = *(byte *)(*(long *)(this + 8) + lVar7);
    do {
      iVar6 = (int)lVar7;
      uVar3 = *(ushort *)(param_1 + (long)(param_4 + iVar6) * 2);
      if (uVar3 == bVar2) {
        if (iVar5 < 1) {
          return param_4;
        }
        lVar8 = *(long *)(this + 0x10) << 0x20;
        lVar10 = (long)iVar5;
        iVar4 = iVar5;
        while( true ) {
          iVar4 = iVar4 + -1;
          uVar3 = *(ushort *)(param_1 + -2 + (long)param_4 * 2 + lVar10 * 2);
          if (uVar3 != *(byte *)(*(long *)(this + 8) + -1 + lVar10)) break;
          lVar10 = lVar10 + -1;
          lVar8 = lVar8 + -0x100000000;
          if (lVar10 < 1) {
            return param_4;
          }
        }
        if (iVar4 < *(int *)(this + 0x20)) {
          iVar4 = *(int *)(lVar1 + (ulong)bVar2 * 4 + 0xba2c);
          goto LAB_0113a4fc;
        }
        iVar6 = *(int *)(lVar1 + (long)*(int *)(this + 0x20) * -4 + 0xbe2c + (lVar8 >> 0x1e));
        if (uVar3 < 0x100) {
          iVar9 = *(int *)(lVar1 + (ulong)uVar3 * 4 + 0xba2c);
        }
        else {
          iVar9 = -1;
        }
        if (iVar6 <= iVar4 - iVar9) {
          iVar6 = iVar4 - iVar9;
        }
      }
      else {
        if (uVar3 < 0x100) {
          iVar4 = *(int *)(lVar1 + (ulong)uVar3 * 4 + 0xba2c);
        }
        else {
          iVar4 = -1;
        }
LAB_0113a4fc:
        iVar6 = iVar6 - iVar4;
      }
      param_4 = iVar6 + param_4;
    } while (param_4 <= param_3 - iVar5);
  }
  return -1;
}

