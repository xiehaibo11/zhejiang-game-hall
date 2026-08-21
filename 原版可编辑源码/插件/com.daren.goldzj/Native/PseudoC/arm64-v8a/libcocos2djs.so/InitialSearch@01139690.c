
/* v8::internal::StringSearch<unsigned char, unsigned
   char>::InitialSearch(v8::internal::StringSearch<unsigned char, unsigned char>*,
   v8::internal::Vector<unsigned char const>, int) */

ulong __thiscall
v8::internal::StringSearch<unsigned_char,unsigned_char>::InitialSearch
          (StringSearch<unsigned_char,unsigned_char> *this,long param_1,undefined8 param_3,
          int param_4)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  byte *pbVar10;
  
  iVar8 = (int)*(undefined8 *)(this + 0x10);
  iVar2 = (int)param_3 - iVar8;
  if (param_4 <= iVar2) {
    pbVar10 = *(byte **)(this + 8);
    iVar6 = iVar8 * -4 + -10;
    do {
      if (-1 < iVar6) {
        iVar2 = *(int *)(this + 0x20);
        lVar7 = (long)iVar2;
        lVar9 = *(long *)this;
        if (iVar2 == 0) {
          memset((void *)(lVar9 + 0xba2c),0xff,0x400);
        }
        else {
          iVar6 = iVar2 + -1;
          *(ulong *)(lVar9 + 0xba34) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xba2c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xba44) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xba3c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xba54) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xba4c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xba64) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xba5c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xba74) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xba6c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xba84) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xba7c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xba94) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xba8c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbaa4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xba9c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbab4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbaac) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbac4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbabc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbad4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbacc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbae4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbadc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbaf4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbaec) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbb04) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbafc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbb14) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbb0c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbb24) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbb1c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbb34) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbb2c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbb44) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbb3c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbb54) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbb4c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbb64) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbb5c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbb74) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbb6c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbb84) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbb7c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbb94) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbb8c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbba4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbb9c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbbb4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbbac) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbbc4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbbbc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbbd4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbbcc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbbe4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbbdc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbbf4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbbec) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbc04) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbbfc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbc14) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbc0c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbc24) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbc1c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbc34) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbc2c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbc44) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbc3c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbc54) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbc4c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbc64) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbc5c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbc74) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbc6c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbc84) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbc7c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbc94) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbc8c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbca4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbc9c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbcb4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbcac) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbcc4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbcbc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbcd4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbccc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbce4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbcdc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbcf4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbcec) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbd04) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbcfc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbd14) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbd0c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbd24) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbd1c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbd34) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbd2c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbd44) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbd3c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbd54) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbd4c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbd64) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbd5c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbd74) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbd6c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbd84) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbd7c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbd94) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbd8c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbda4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbd9c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbdb4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbdac) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbdc4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbdbc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbdd4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbdcc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbde4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbddc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbdf4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbdec) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbe04) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbdfc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbe14) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbe0c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbe24) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar9 + 0xbe1c) = CONCAT44(iVar6,iVar6);
        }
        if (iVar2 < iVar8 + -1) {
          do {
            *(int *)(lVar9 + (ulong)*(byte *)(*(long *)(this + 8) + lVar7) * 4 + 0xba2c) =
                 (int)lVar7;
            lVar7 = lVar7 + 1;
          } while (iVar8 + -1 != lVar7);
        }
        *(code **)(this + 0x18) = BoyerMooreHorspoolSearch;
        uVar4 = BoyerMooreHorspoolSearch(this,param_1,param_3,param_4);
        return uVar4;
      }
      bVar1 = *pbVar10;
      while( true ) {
        pvVar3 = memchr((void *)(param_1 + param_4),(uint)bVar1,(long)((iVar2 + 1) - param_4));
        if (pvVar3 == (void *)0x0) {
          return 0xffffffff;
        }
        iVar5 = (int)((long)pvVar3 - param_1);
        if (*(byte *)(param_1 + iVar5) == bVar1) break;
        param_4 = iVar5 + 1;
        if (iVar2 <= iVar5) {
          return 0xffffffff;
        }
      }
      if (iVar5 == -1) {
        return 0xffffffff;
      }
      lVar7 = 1;
      do {
        if (pbVar10[lVar7] != *(byte *)(param_1 + iVar5 + lVar7)) break;
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar8);
      if ((int)lVar7 == iVar8) {
        return (long)pvVar3 - param_1 & 0xffffffff;
      }
      iVar6 = iVar6 + 1 + (int)lVar7;
      param_4 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return 0xffffffff;
}

