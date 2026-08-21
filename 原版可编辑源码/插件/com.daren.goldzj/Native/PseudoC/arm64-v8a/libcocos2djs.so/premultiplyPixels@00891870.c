
/* cocos2d::premultiplyPixels(unsigned char const*, unsigned char*, unsigned int, unsigned int,
   unsigned int, unsigned int) */

void cocos2d::premultiplyPixels
               (uchar *param_1,uchar *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uchar *puVar1;
  uchar *puVar2;
  ushort *puVar3;
  uchar uVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  pvVar6 = DAT_01d36d30;
  if (DAT_01d36d30 == (void *)0x0) {
    pvVar6 = malloc(0x10000);
    lVar7 = 0;
    pvVar8 = pvVar6;
    DAT_01d36d30 = pvVar6;
    do {
      lVar9 = 0;
      lVar13 = 3;
      iVar12 = 2;
      iVar10 = 0;
      iVar11 = 1;
      do {
        iVar5 = (int)lVar7;
        auVar14._0_8_ = CONCAT44(iVar11 * iVar5 + 0xfe,iVar10 * iVar5 + 0xfe);
        auVar14._8_4_ = iVar12 * iVar5 + 0xfe;
        auVar14._12_4_ = (int)lVar13 * iVar5 + 0xfe;
        auVar16._0_8_ = CONCAT44((iVar11 + 4) * iVar5 + 0xfe,(iVar10 + 4) * iVar5 + 0xfe);
        auVar16._8_4_ = (iVar12 + 4) * iVar5 + 0xfe;
        auVar16._12_4_ = (int)((lVar13 + 4) * lVar7) + 0xfe;
        auVar15 = NEON_umull(auVar14._0_8_,0x8080808180808081,4);
        auVar17 = NEON_umull(auVar16._0_8_,0x8080808180808081,4);
        *(ulong *)((long)pvVar8 + lVar9) =
             CONCAT44(CONCAT13((char)(auVar16._8_8_ / 0xff00000000),
                               CONCAT12((char)((auVar16._8_8_ & 0xffffffff) / 0xff),
                                        CONCAT11((char)(auVar17._12_4_ >> 7),
                                                 (char)(auVar17._4_4_ >> 7)))),
                      CONCAT13((char)(auVar14._8_8_ / 0xff00000000),
                               CONCAT12((char)((auVar14._8_8_ & 0xffffffff) / 0xff),
                                        CONCAT11((char)(auVar15._12_4_ >> 7),
                                                 (char)(auVar15._4_4_ >> 7)))));
        lVar9 = lVar9 + 8;
        iVar12 = iVar12 + 8;
        lVar13 = lVar13 + 8;
        iVar10 = iVar10 + 8;
        iVar11 = iVar11 + 8;
      } while (lVar9 != 0x100);
      lVar7 = lVar7 + 1;
      pvVar8 = (void *)((long)pvVar8 + 0x100);
    } while (lVar7 != 0x100);
  }
  if (param_3 == 0x190a) {
    iVar12 = param_5 * param_4 * 2;
    if (0 < iVar12) {
      lVar7 = 0;
      do {
        puVar3 = (ushort *)(param_1 + lVar7);
        puVar1 = param_2 + lVar7;
        lVar7 = lVar7 + 2;
        *puVar1 = *(uchar *)((long)pvVar6 + (ulong)*puVar3);
        puVar1[1] = *(uchar *)((long)puVar3 + 1);
      } while (lVar7 < iVar12);
    }
  }
  else if ((param_3 == 0x1908) && (iVar12 = param_5 * param_4 * 4, 0 < iVar12)) {
    lVar7 = 0;
    do {
      puVar1 = param_1 + lVar7;
      uVar4 = puVar1[3];
      puVar2 = param_2 + lVar7;
      lVar7 = lVar7 + 4;
      *puVar2 = *(uchar *)((long)pvVar6 + (ulong)CONCAT11(uVar4,*puVar1));
      puVar2[1] = *(uchar *)((long)pvVar6 + (ulong)CONCAT11(uVar4,puVar1[1]));
      puVar2[2] = *(uchar *)((long)pvVar6 + (ulong)CONCAT11(uVar4,puVar1[2]));
      puVar2[3] = puVar1[3];
    } while (lVar7 < iVar12);
  }
  return;
}

