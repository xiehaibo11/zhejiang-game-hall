
/* v8::internal::StringSearch<unsigned char, unsigned
   short>::InitialSearch(v8::internal::StringSearch<unsigned char, unsigned short>*,
   v8::internal::Vector<unsigned short const>, int) */

ulong __thiscall
v8::internal::StringSearch<unsigned_char,unsigned_short>::InitialSearch
          (StringSearch<unsigned_char,unsigned_short> *this,long param_1,undefined8 param_3,
          int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  byte *pbVar11;
  
  iVar9 = (int)*(undefined8 *)(this + 0x10);
  iVar2 = (int)param_3 - iVar9;
  if (param_4 <= iVar2) {
    pbVar11 = *(byte **)(this + 8);
    iVar6 = iVar9 * -4 + -10;
    do {
      if (-1 < iVar6) {
        iVar2 = *(int *)(this + 0x20);
        lVar8 = (long)iVar2;
        lVar10 = *(long *)this;
        if (iVar2 == 0) {
          memset((void *)(lVar10 + 0xba2c),0xff,0x400);
        }
        else {
          iVar6 = iVar2 + -1;
          *(ulong *)(lVar10 + 0xba34) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xba2c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xba44) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xba3c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xba54) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xba4c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xba64) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xba5c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xba74) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xba6c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xba84) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xba7c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xba94) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xba8c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbaa4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xba9c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbab4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbaac) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbac4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbabc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbad4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbacc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbae4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbadc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbaf4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbaec) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbb04) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbafc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbb14) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbb0c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbb24) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbb1c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbb34) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbb2c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbb44) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbb3c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbb54) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbb4c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbb64) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbb5c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbb74) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbb6c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbb84) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbb7c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbb94) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbb8c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbba4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbb9c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbbb4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbbac) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbbc4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbbbc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbbd4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbbcc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbbe4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbbdc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbbf4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbbec) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbc04) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbbfc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbc14) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbc0c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbc24) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbc1c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbc34) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbc2c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbc44) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbc3c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbc54) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbc4c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbc64) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbc5c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbc74) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbc6c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbc84) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbc7c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbc94) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbc8c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbca4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbc9c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbcb4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbcac) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbcc4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbcbc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbcd4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbccc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbce4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbcdc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbcf4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbcec) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbd04) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbcfc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbd14) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbd0c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbd24) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbd1c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbd34) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbd2c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbd44) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbd3c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbd54) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbd4c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbd64) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbd5c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbd74) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbd6c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbd84) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbd7c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbd94) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbd8c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbda4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbd9c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbdb4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbdac) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbdc4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbdbc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbdd4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbdcc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbde4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbddc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbdf4) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbdec) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbe04) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbdfc) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbe14) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbe0c) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbe24) = CONCAT44(iVar6,iVar6);
          *(ulong *)(lVar10 + 0xbe1c) = CONCAT44(iVar6,iVar6);
        }
        if (iVar2 < iVar9 + -1) {
          do {
            *(int *)(lVar10 + (ulong)*(byte *)(*(long *)(this + 8) + lVar8) * 4 + 0xba2c) =
                 (int)lVar8;
            lVar8 = lVar8 + 1;
          } while (iVar9 + -1 != lVar8);
        }
        *(code **)(this + 0x18) = BoyerMooreHorspoolSearch;
        uVar7 = BoyerMooreHorspoolSearch(this,param_1,param_3,param_4);
        return uVar7;
      }
      bVar1 = *pbVar11;
      while( true ) {
        uVar3 = (iVar2 + 1) - param_4;
        pvVar4 = memchr((void *)(param_1 + (long)param_4 * 2),(uint)bVar1,
                        -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1);
        if (pvVar4 == (void *)0x0) {
          return 0xffffffff;
        }
        uVar7 = ((ulong)pvVar4 & 0xfffffffffffffffe) - param_1;
        iVar5 = (int)(uVar7 >> 1);
        if (*(ushort *)(param_1 + ((long)(uVar7 * 0x80000000) >> 0x1f)) == (ushort)bVar1) break;
        param_4 = iVar5 + 1;
        if (iVar2 <= iVar5) {
          return 0xffffffff;
        }
      }
      if (iVar5 == -1) {
        return 0xffffffff;
      }
      lVar8 = 1;
      do {
        if (*(ushort *)(param_1 + ((long)(uVar7 * 0x80000000) >> 0x1f) + lVar8 * 2) !=
            (ushort)pbVar11[lVar8]) break;
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar9);
      if ((int)lVar8 == iVar9) {
        return uVar7 >> 1 & 0xffffffff;
      }
      iVar6 = iVar6 + 1 + (int)lVar8;
      param_4 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return 0xffffffff;
}

