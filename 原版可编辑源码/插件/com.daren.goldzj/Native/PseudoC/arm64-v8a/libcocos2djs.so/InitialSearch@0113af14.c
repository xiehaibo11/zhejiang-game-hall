
/* v8::internal::StringSearch<unsigned short, unsigned
   short>::InitialSearch(v8::internal::StringSearch<unsigned short, unsigned short>*,
   v8::internal::Vector<unsigned short const>, int) */

ulong __thiscall
v8::internal::StringSearch<unsigned_short,unsigned_short>::InitialSearch
          (StringSearch<unsigned_short,unsigned_short> *this,long param_1,undefined8 param_3,
          int param_4)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  ushort *puVar12;
  
  iVar10 = (int)*(undefined8 *)(this + 0x10);
  iVar3 = (int)param_3 - iVar10;
  if (param_4 <= iVar3) {
    puVar12 = *(ushort **)(this + 8);
    iVar7 = iVar10 * -4 + -10;
    do {
      if (-1 < iVar7) {
        iVar3 = *(int *)(this + 0x20);
        lVar9 = (long)iVar3;
        lVar11 = *(long *)this;
        if (iVar3 == 0) {
          memset((void *)(lVar11 + 0xba2c),0xff,0x400);
        }
        else {
          iVar7 = iVar3 + -1;
          *(ulong *)(lVar11 + 0xba34) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xba2c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xba44) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xba3c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xba54) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xba4c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xba64) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xba5c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xba74) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xba6c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xba84) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xba7c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xba94) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xba8c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbaa4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xba9c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbab4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbaac) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbac4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbabc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbad4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbacc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbae4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbadc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbaf4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbaec) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbb04) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbafc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbb14) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbb0c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbb24) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbb1c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbb34) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbb2c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbb44) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbb3c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbb54) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbb4c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbb64) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbb5c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbb74) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbb6c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbb84) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbb7c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbb94) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbb8c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbba4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbb9c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbbb4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbbac) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbbc4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbbbc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbbd4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbbcc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbbe4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbbdc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbbf4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbbec) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbc04) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbbfc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbc14) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbc0c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbc24) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbc1c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbc34) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbc2c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbc44) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbc3c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbc54) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbc4c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbc64) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbc5c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbc74) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbc6c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbc84) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbc7c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbc94) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbc8c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbca4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbc9c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbcb4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbcac) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbcc4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbcbc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbcd4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbccc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbce4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbcdc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbcf4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbcec) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbd04) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbcfc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbd14) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbd0c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbd24) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbd1c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbd34) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbd2c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbd44) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbd3c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbd54) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbd4c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbd64) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbd5c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbd74) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbd6c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbd84) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbd7c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbd94) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbd8c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbda4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbd9c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbdb4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbdac) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbdc4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbdbc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbdd4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbdcc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbde4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbddc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbdf4) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbdec) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbe04) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbdfc) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbe14) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbe0c) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbe24) = CONCAT44(iVar7,iVar7);
          *(ulong *)(lVar11 + 0xbe1c) = CONCAT44(iVar7,iVar7);
        }
        if (iVar3 < iVar10 + -1) {
          do {
            *(int *)(lVar11 + (ulong)*(byte *)(*(long *)(this + 8) + lVar9 * 2) * 4 + 0xba2c) =
                 (int)lVar9;
            lVar9 = lVar9 + 1;
          } while (iVar10 + -1 != lVar9);
        }
        *(code **)(this + 0x18) = BoyerMooreHorspoolSearch;
        uVar8 = BoyerMooreHorspoolSearch(this,param_1,param_3,param_4);
        return uVar8;
      }
      uVar2 = *puVar12;
      uVar1 = (uint)(uVar2 >> 8);
      if ((uint)(uVar2 >> 8) <= (uVar2 & 0xff)) {
        uVar1 = (uint)uVar2;
      }
      while( true ) {
        uVar4 = (iVar3 + 1) - param_4;
        pvVar5 = memchr((void *)(param_1 + (long)param_4 * 2),uVar1 & 0xff,
                        -(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1);
        if (pvVar5 == (void *)0x0) {
          return 0xffffffff;
        }
        uVar8 = ((ulong)pvVar5 & 0xfffffffffffffffe) - param_1;
        iVar6 = (int)(uVar8 >> 1);
        if (*(ushort *)(param_1 + ((long)(uVar8 * 0x80000000) >> 0x1f)) == uVar2) break;
        param_4 = iVar6 + 1;
        if (iVar3 <= iVar6) {
          return 0xffffffff;
        }
      }
      if (iVar6 == -1) {
        return 0xffffffff;
      }
      lVar9 = 1;
      do {
        if (puVar12[lVar9] !=
            *(ushort *)(param_1 + ((long)(uVar8 * 0x80000000) >> 0x1f) + lVar9 * 2)) break;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar10);
      if ((int)lVar9 == iVar10) {
        return uVar8 >> 1 & 0xffffffff;
      }
      param_4 = iVar6 + 1;
      iVar7 = iVar7 + 1 + (int)lVar9;
    } while (iVar6 < iVar3);
  }
  return 0xffffffff;
}

