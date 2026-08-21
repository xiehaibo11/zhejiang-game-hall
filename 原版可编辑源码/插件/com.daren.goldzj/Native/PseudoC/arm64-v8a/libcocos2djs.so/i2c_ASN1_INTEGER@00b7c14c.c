
int i2c_ASN1_INTEGER(ASN1_INTEGER *a,uchar **pp)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uchar *puVar6;
  uchar *puVar7;
  byte *pbVar8;
  ulong __n;
  byte bVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uchar uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar4 = a->length;
  pbVar8 = a->data;
  uVar2 = a->type & 0x100;
  __n = (ulong)(int)uVar4;
  if (pbVar8 != (byte *)0x0 && __n != 0) {
    bVar9 = *pbVar8;
    uVar3 = 0;
    if (bVar9 != 0 || uVar4 != 1) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      uVar15 = (ulong)((char)bVar9 < '\0');
LAB_00b7c2b4:
      uVar13 = '\0';
      uVar1 = uVar15 + __n;
    }
    else {
      if (bVar9 < 0x81) {
        uVar15 = 0;
        uVar1 = __n;
        if (1 < uVar4) {
          if (bVar9 != 0x80) goto LAB_00b7c2b4;
          uVar15 = 1;
          do {
            if (pbVar8[uVar15] != 0) goto LAB_00b7c1dc;
            uVar15 = uVar15 + 1;
          } while (uVar15 < __n);
        }
        goto joined_r0x00b7c2fc;
      }
LAB_00b7c1dc:
      uVar13 = 0xff;
      uVar15 = 1;
      uVar1 = __n + 1;
    }
    iVar5 = (int)uVar15;
  }
  else {
    uVar1 = 1;
    uVar3 = uVar2;
joined_r0x00b7c2fc:
    iVar5 = 0;
    uVar13 = '\0';
  }
  if (pp == (uchar **)0x0) goto LAB_00b7c314;
  puVar6 = *pp;
  puVar7 = puVar6;
  if (iVar5 != 0) {
    puVar7 = puVar6 + 1;
    *puVar6 = uVar13;
  }
  if (pbVar8 != (byte *)0x0 && __n != 0) {
    if (uVar3 == 0) {
      memcpy(puVar7,pbVar8,__n);
    }
    else {
      pbVar11 = pbVar8 + (__n - 1);
      bVar9 = *pbVar11;
      puVar6 = puVar7 + __n;
      if ((1 < uVar4) && (bVar9 == 0)) {
        do {
          uVar15 = __n;
          puVar7[uVar15 - 1] = '\0';
          bVar9 = pbVar8[uVar15 - 2];
          __n = uVar15 - 1;
          if (__n < 2) break;
        } while (bVar9 == 0);
        pbVar11 = pbVar8 + (uVar15 - 2);
        puVar6 = puVar7 + __n;
      }
      uVar15 = __n - 1;
      pbVar8 = puVar6 + -1;
      *pbVar8 = ~bVar9 + 1;
      if (uVar15 != 0) {
        if (0x1f < uVar15) {
          uVar10 = uVar15 & 0x1f;
          lVar14 = uVar15 - uVar10;
          if ((lVar14 != 0) && ((pbVar11 <= puVar6 + -__n || (pbVar8 <= pbVar11 + (1 - __n))))) {
            lVar16 = (uVar10 + 1) - __n;
            pbVar8 = pbVar8 + lVar16;
            pbVar12 = pbVar11 + -0x10;
            puVar7 = puVar6 + -0x21;
            do {
              uVar20 = *(undefined8 *)(pbVar12 + -8);
              uVar19 = *(undefined8 *)(pbVar12 + -0x10);
              uVar18 = *(undefined8 *)(pbVar12 + 8);
              uVar17 = *(undefined8 *)pbVar12;
              lVar14 = lVar14 + -0x20;
              pbVar12 = pbVar12 + -0x20;
              *(ulong *)(puVar7 + 8) =
                   CONCAT17(~(byte)((ulong)uVar20 >> 0x38),
                            CONCAT16(~(byte)((ulong)uVar20 >> 0x30),
                                     CONCAT15(~(byte)((ulong)uVar20 >> 0x28),
                                              CONCAT14(~(byte)((ulong)uVar20 >> 0x20),
                                                       CONCAT13(~(byte)((ulong)uVar20 >> 0x18),
                                                                CONCAT12(~(byte)((ulong)uVar20 >>
                                                                                0x10),
                                                                         CONCAT11(~(byte)((ulong)
                                                  uVar20 >> 8),~(byte)uVar20)))))));
              *(ulong *)puVar7 =
                   CONCAT17(~(byte)((ulong)uVar19 >> 0x38),
                            CONCAT16(~(byte)((ulong)uVar19 >> 0x30),
                                     CONCAT15(~(byte)((ulong)uVar19 >> 0x28),
                                              CONCAT14(~(byte)((ulong)uVar19 >> 0x20),
                                                       CONCAT13(~(byte)((ulong)uVar19 >> 0x18),
                                                                CONCAT12(~(byte)((ulong)uVar19 >>
                                                                                0x10),
                                                                         CONCAT11(~(byte)((ulong)
                                                  uVar19 >> 8),~(byte)uVar19)))))));
              *(ulong *)(puVar7 + 0x18) =
                   CONCAT17(~(byte)((ulong)uVar18 >> 0x38),
                            CONCAT16(~(byte)((ulong)uVar18 >> 0x30),
                                     CONCAT15(~(byte)((ulong)uVar18 >> 0x28),
                                              CONCAT14(~(byte)((ulong)uVar18 >> 0x20),
                                                       CONCAT13(~(byte)((ulong)uVar18 >> 0x18),
                                                                CONCAT12(~(byte)((ulong)uVar18 >>
                                                                                0x10),
                                                                         CONCAT11(~(byte)((ulong)
                                                  uVar18 >> 8),~(byte)uVar18)))))));
              *(ulong *)(puVar7 + 0x10) =
                   CONCAT17(~(byte)((ulong)uVar17 >> 0x38),
                            CONCAT16(~(byte)((ulong)uVar17 >> 0x30),
                                     CONCAT15(~(byte)((ulong)uVar17 >> 0x28),
                                              CONCAT14(~(byte)((ulong)uVar17 >> 0x20),
                                                       CONCAT13(~(byte)((ulong)uVar17 >> 0x18),
                                                                CONCAT12(~(byte)((ulong)uVar17 >>
                                                                                0x10),
                                                                         CONCAT11(~(byte)((ulong)
                                                  uVar17 >> 8),~(byte)uVar17)))))));
              puVar7 = puVar7 + -0x20;
            } while (lVar14 != 0);
            uVar15 = uVar10;
            pbVar11 = pbVar11 + lVar16;
            if (uVar10 == 0) goto LAB_00b7c308;
          }
        }
        do {
          pbVar8 = pbVar8 + -1;
          uVar15 = uVar15 - 1;
          *pbVar8 = ~pbVar11[-1];
          pbVar11 = pbVar11 + -1;
        } while (uVar15 != 0);
      }
    }
  }
  else {
    *puVar7 = '\0';
  }
LAB_00b7c308:
  *pp = *pp + uVar1;
LAB_00b7c314:
  return (int)uVar1;
}

