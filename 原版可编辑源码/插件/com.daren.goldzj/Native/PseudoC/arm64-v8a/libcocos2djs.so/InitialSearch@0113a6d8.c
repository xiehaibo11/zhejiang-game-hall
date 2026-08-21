
/* v8::internal::StringSearch<unsigned short, unsigned
   char>::InitialSearch(v8::internal::StringSearch<unsigned short, unsigned char>*,
   v8::internal::Vector<unsigned char const>, int) */

ulong __thiscall
v8::internal::StringSearch<unsigned_short,unsigned_char>::InitialSearch
          (StringSearch<unsigned_short,unsigned_char> *this,long param_1,undefined8 param_3,
          int param_4)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ushort *puVar11;
  
  iVar9 = (int)*(undefined8 *)(this + 0x10);
  iVar3 = (int)param_3 - iVar9;
  if (param_4 <= iVar3) {
    puVar11 = *(ushort **)(this + 8);
    iVar7 = iVar9 * -4 + -10;
    do {
      if (-1 < iVar7) {
        iVar3 = *(int *)(this + 0x20);
        lVar8 = (long)iVar3;
        lVar10 = *(long *)this;
        if (iVar3 == 0) {
          memset((void *)(lVar10 + 0xba2c),0xff,0x400);
        }
        else {
          iVar7 = iVar3 + -1;
          *(ulong *)(lVar10 + 0xba34) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xba2c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xba44) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xba3c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xba54) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xba4c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xba64) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xba5c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xba74) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xba6c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xba84) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xba7c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xba94) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xba8c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbaa4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xba9c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbab4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbaac) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbac4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbabc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbad4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbacc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbae4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbadc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbaf4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbaec) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbb04) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbafc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbb14) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbb0c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbb24) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbb1c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbb34) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbb2c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbb44) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbb3c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbb54) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbb4c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbb64) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbb5c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbb74) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbb6c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbb84) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbb7c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbb94) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbb8c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbba4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbb9c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbbb4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbbac) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbbc4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbbbc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbbd4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbbcc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbbe4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbbdc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbbf4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbbec) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbc04) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbbfc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbc14) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbc0c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbc24) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbc1c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbc34) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbc2c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbc44) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbc3c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbc54) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbc4c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbc64) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbc5c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbc74) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbc6c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbc84) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbc7c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbc94) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbc8c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbca4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbc9c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbcb4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbcac) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbcc4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbcbc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbcd4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbccc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbce4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbcdc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbcf4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbcec) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbd04) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbcfc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbd14) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbd0c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbd24) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbd1c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbd34) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbd2c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbd44) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbd3c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbd54) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbd4c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbd64) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbd5c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbd74) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbd6c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbd84) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbd7c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbd94) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbd8c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbda4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbd9c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbdb4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbdac) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbdc4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbdbc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbdd4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbdcc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbde4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbddc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbdf4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbdec) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbe04) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbdfc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbe14) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbe0c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbe24) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar10 + 0xbe1c) = CONCAT44(iVar7,iVar7);
        }
        if (iVar3 < iVar9 + -1) {
          do {
            *(int *)(lVar10 + (ulong)*(byte *)(*(long *)(this + 8) + lVar8 * 2) * 4 + 0xba2c) =
                 (int)lVar8;
            lVar8 = lVar8 + 1;
          } while (iVar9 + -1 != lVar8);
        }
        *(code **)(this + 0x18) = BoyerMooreHorspoolSearch;
        uVar5 = BoyerMooreHorspoolSearch(this,param_1,param_3,param_4);
        return uVar5;
      }
      uVar2 = *puVar11;
      uVar1 = (uint)(uVar2 >> 8);
      if ((uint)(uVar2 >> 8) <= (uVar2 & 0xff)) {
        uVar1 = (uint)uVar2;
      }
      while( true ) {
        pvVar4 = memchr((void *)(param_1 + param_4),uVar1 & 0xff,(long)((iVar3 + 1) - param_4));
        if (pvVar4 == (void *)0x0) {
          return 0xffffffff;
        }
        iVar6 = (int)((long)pvVar4 - param_1);
        if ((ushort)*(byte *)(param_1 + iVar6) == (uVar2 & 0xff)) break;
        param_4 = iVar6 + 1;
        if (iVar3 <= iVar6) {
          return 0xffffffff;
        }
      }
      if (iVar6 == -1) {
        return 0xffffffff;
      }
      lVar8 = 1;
      do {
        if (puVar11[lVar8] != (ushort)*(byte *)(param_1 + iVar6 + lVar8)) break;
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar9);
      if ((int)lVar8 == iVar9) {
        return (long)pvVar4 - param_1 & 0xffffffff;
      }
      param_4 = iVar6 + 1;
      iVar7 = iVar7 + 1 + (int)lVar8;
    } while (iVar6 < iVar3);
  }
  return 0xffffffff;
}

