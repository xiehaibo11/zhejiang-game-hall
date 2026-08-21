
/* v8::internal::StringSearch<unsigned char, unsigned
   char>::BoyerMooreSearch(v8::internal::StringSearch<unsigned char, unsigned char>*,
   v8::internal::Vector<unsigned char const>, int) */

int __thiscall
v8::internal::StringSearch<unsigned_char,unsigned_char>::BoyerMooreSearch
          (StringSearch<unsigned_char,unsigned_char> *this,long param_1,int param_3,int param_4)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  iVar5 = (int)*(long *)(this + 0x10);
  if (param_4 <= param_3 - iVar5) {
    lVar1 = *(long *)this;
    lVar7 = (long)iVar5 + -1;
    bVar2 = *(byte *)(*(long *)(this + 8) + lVar7);
    do {
      iVar6 = (int)lVar7;
      bVar3 = *(byte *)(param_1 + (long)param_4 + (long)iVar6);
      if (bVar2 == bVar3) {
        if (iVar5 < 1) {
          return param_4;
        }
        lVar8 = *(long *)(this + 0x10) << 0x20;
        lVar9 = (long)iVar5;
        iVar4 = iVar5;
        while( true ) {
          iVar4 = iVar4 + -1;
          bVar3 = *(byte *)(param_1 + -1 + (long)param_4 + lVar9);
          if (*(byte *)(*(long *)(this + 8) + -1 + lVar9) != bVar3) break;
          lVar9 = lVar9 + -1;
          lVar8 = lVar8 + -0x100000000;
          if (lVar9 < 1) {
            return param_4;
          }
        }
        if (iVar4 < *(int *)(this + 0x20)) {
          iVar6 = iVar6 - *(int *)(lVar1 + (ulong)bVar2 * 4 + 0xba2c);
        }
        else {
          iVar6 = *(int *)(lVar1 + (long)*(int *)(this + 0x20) * -4 + 0xbe2c + (lVar8 >> 0x1e));
          iVar4 = iVar4 - *(int *)(lVar1 + (ulong)bVar3 * 4 + 0xba2c);
          if (iVar6 <= iVar4) {
            iVar6 = iVar4;
          }
        }
      }
      else {
        iVar6 = iVar6 - *(int *)(lVar1 + (ulong)bVar3 * 4 + 0xba2c);
      }
      param_4 = iVar6 + param_4;
    } while (param_4 <= param_3 - iVar5);
  }
  return -1;
}

