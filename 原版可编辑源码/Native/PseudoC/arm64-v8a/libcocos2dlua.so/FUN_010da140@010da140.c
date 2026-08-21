
long FUN_010da140(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  uVar4 = *(uint *)(param_1 + 0x234);
  lVar7 = 0xffffffff;
  if ((uVar4 >> 0xf == 0) && (*(ulong *)(param_1 + 0x240) >> 0xf == 0)) {
    if (*(char *)(param_1 + 0x2ac) != '\0') {
      bVar5 = *(byte *)(param_1 + 0x2b2);
      lVar7 = 0;
      iVar6 = *(int *)(param_1 + 0x230) + -1;
      iVar8 = 0;
      if ((ulong)bVar5 < 8) {
        do {
          iVar9 = 9 - iVar8;
          uVar1 = iVar8 - 1;
          do {
            uVar10 = uVar1;
            uVar1 = uVar10 + 1;
            if (6 < (int)uVar1) {
              return lVar7;
            }
            uVar3 = iVar9 + -2 >> 1;
            if ((int)uVar1 < 2) {
              uVar3 = 3;
            }
            uVar3 = (iVar6 + (1 << (ulong)(uVar3 & 0x1f))) -
                    ((uVar1 & 1) << (ulong)(3U - ((int)(uVar10 + 2) >> 1) & 0x1f) & 7) >>
                    (ulong)(uVar3 & 0x1f);
            iVar9 = iVar9 + -1;
          } while (uVar3 == 0);
          uVar2 = iVar9 >> 1;
          if ((int)uVar1 < 3) {
            uVar2 = 3;
          }
          lVar7 = lVar7 + (((ulong)uVar3 * (ulong)bVar5 + 7 >> 3) + 1) *
                          (ulong)(((uVar4 - 1) + (1 << (ulong)(uVar2 & 0x1f))) -
                                  ((uVar1 & 1 ^ 1) << (ulong)(3U - ((int)uVar1 >> 1) & 0x1f) & 7) >>
                                 (ulong)(uVar2 & 0x1f));
          iVar8 = uVar10 + 2;
        } while( true );
      }
      do {
        iVar9 = 9 - iVar8;
        uVar1 = iVar8 - 1;
        do {
          uVar10 = uVar1;
          uVar1 = uVar10 + 1;
          if (6 < (int)uVar1) {
            return lVar7;
          }
          uVar3 = iVar9 + -2 >> 1;
          if ((int)uVar1 < 2) {
            uVar3 = 3;
          }
          uVar3 = (iVar6 + (1 << (ulong)(uVar3 & 0x1f))) -
                  ((uVar1 & 1) << (ulong)(3U - ((int)(uVar10 + 2) >> 1) & 0x1f) & 7) >>
                  (ulong)(uVar3 & 0x1f);
          iVar9 = iVar9 + -1;
        } while (uVar3 == 0);
        uVar2 = iVar9 >> 1;
        if ((int)uVar1 < 3) {
          uVar2 = 3;
        }
        lVar7 = lVar7 + ((ulong)(bVar5 >> 3) * (ulong)uVar3 + 1) *
                        (ulong)(((uVar4 - 1) + (1 << (ulong)(uVar2 & 0x1f))) -
                                ((uVar1 & 1 ^ 1) << (ulong)(3U - ((int)uVar1 >> 1) & 0x1f) & 7) >>
                               (ulong)(uVar2 & 0x1f));
        iVar8 = uVar10 + 2;
      } while( true );
    }
    lVar7 = (*(ulong *)(param_1 + 0x240) + 1) * (ulong)uVar4;
  }
  return lVar7;
}

