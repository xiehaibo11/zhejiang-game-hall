
/* v8::internal::StringSearch<unsigned short, unsigned
   char>::BoyerMooreSearch(v8::internal::StringSearch<unsigned short, unsigned char>*,
   v8::internal::Vector<unsigned char const>, int) */

int __thiscall
v8::internal::StringSearch<unsigned_short,unsigned_char>::BoyerMooreSearch
          (StringSearch<unsigned_short,unsigned_char> *this,long param_1,int param_3,int param_4)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  iVar6 = (int)*(long *)(this + 0x10);
  if (param_4 <= param_3 - iVar6) {
    lVar1 = *(long *)this;
    lVar8 = (long)iVar6 + -1;
    iVar7 = (int)lVar8;
    uVar3 = *(ushort *)(*(long *)(this + 8) + (long)iVar7 * 2);
    do {
      bVar2 = *(byte *)(param_1 + param_4 + lVar8);
      if (uVar3 == bVar2) {
        if (iVar6 < 1) {
          return param_4;
        }
        lVar9 = *(long *)(this + 0x10) << 0x20;
        lVar10 = (long)iVar6;
        iVar4 = iVar6;
        while( true ) {
          iVar4 = iVar4 + -1;
          bVar2 = *(byte *)(param_1 + -1 + (long)param_4 + lVar10);
          if (*(ushort *)(*(long *)(this + 8) + -2 + lVar10 * 2) != (ushort)bVar2) break;
          lVar10 = lVar10 + -1;
          lVar9 = lVar9 + -0x100000000;
          if (lVar10 < 1) {
            return param_4;
          }
        }
        if (iVar4 < *(int *)(this + 0x20)) {
          iVar5 = iVar7 - *(int *)(lVar1 + (ulong)(byte)uVar3 * 4 + 0xba2c);
        }
        else {
          iVar5 = *(int *)(lVar1 + (long)*(int *)(this + 0x20) * -4 + 0xbe2c + (lVar9 >> 0x1e));
          iVar4 = iVar4 - *(int *)(lVar1 + (ulong)bVar2 * 4 + 0xba2c);
          if (iVar5 <= iVar4) {
            iVar5 = iVar4;
          }
        }
      }
      else {
        iVar5 = iVar7 - *(int *)(lVar1 + (ulong)bVar2 * 4 + 0xba2c);
      }
      param_4 = iVar5 + param_4;
    } while (param_4 <= param_3 - iVar6);
  }
  return -1;
}

