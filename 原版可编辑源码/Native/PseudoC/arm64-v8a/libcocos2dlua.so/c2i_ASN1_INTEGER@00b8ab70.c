
/* WARNING: Type propagation algorithm not settling */

ASN1_INTEGER * c2i_ASN1_INTEGER(ASN1_INTEGER **a,uchar **pp,long length)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ASN1_INTEGER *str;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if (length == 0) {
    ERR_put_error(0xd,0xe2,0xde,"crypto/asn1/a_int.c",0x98);
    return (ASN1_INTEGER *)0x0;
  }
  if (length == 1) {
    iVar4 = 1;
  }
  else {
    pbVar5 = *pp;
    bVar2 = *pbVar5;
    lVar10 = length;
    if ((bVar2 == 0xff) || (bVar2 == 0)) {
      if ((bVar2 & 0x80) == (pbVar5[1] & 0x80)) {
        ERR_put_error(0xd,0xe2,0xdd,"crypto/asn1/a_int.c",0xae);
        return (ASN1_INTEGER *)0x0;
      }
      if ((bVar2 & 0x80) == 0) {
LAB_00b8ac48:
        lVar10 = length + -1;
        goto joined_r0x00b8ac50;
      }
      uVar9 = 1;
      do {
        if (pbVar5[uVar9] != 0) break;
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)length);
      if (uVar9 != length) goto LAB_00b8ac48;
    }
    else {
joined_r0x00b8ac50:
      if (lVar10 == 0) {
        return (ASN1_INTEGER *)0x0;
      }
    }
    iVar4 = (int)lVar10;
  }
  if ((a == (ASN1_INTEGER **)0x0) || (str = *a, str == (ASN1_INTEGER *)0x0)) {
    str = ASN1_INTEGER_new();
    if (str == (ASN1_INTEGER *)0x0) {
      return (ASN1_INTEGER *)0x0;
    }
    str->type = 2;
  }
  iVar4 = ASN1_STRING_set(str,(void *)0x0,iVar4);
  if (iVar4 == 0) {
    ERR_put_error(0xd,0xc2,0x41,"crypto/asn1/a_int.c",0x151);
    if ((a == (ASN1_INTEGER **)0x0) || (*a != str)) {
      ASN1_INTEGER_free(str);
    }
    return (ASN1_INTEGER *)0x0;
  }
  pbVar6 = *pp;
  pbVar5 = str->data;
  bVar2 = *pbVar6;
  if (length - 1U == 0) {
    if (pbVar5 != (byte *)0x0) {
      bVar8 = bVar2;
      if ((bVar2 & 0x80) != 0) {
        bVar8 = (bVar2 ^ 0xff) + 1;
      }
      *pbVar5 = bVar8;
    }
  }
  else {
    if ((bVar2 == 0xff) || (bVar2 == 0)) {
      if ((bVar2 & 0x80) == (pbVar6[1] & 0x80)) {
        ERR_put_error(0xd,0xe2,0xdd,"crypto/asn1/a_int.c",0xae);
        goto joined_r0x00b8aea0;
      }
      bVar3 = true;
      lVar10 = 1;
    }
    else {
      bVar3 = false;
      lVar10 = 0;
    }
    if ((bVar2 & 0x80) == 0) {
      if (pbVar5 != (byte *)0x0) {
        memcpy(pbVar5,pbVar6 + lVar10,length - lVar10);
      }
      goto LAB_00b8aeb0;
    }
    if (bVar3) {
      uVar9 = 1;
      do {
        if (pbVar6[uVar9] != 0) break;
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)length);
      if (uVar9 == length) {
        if (pbVar5 != (byte *)0x0) {
          *pbVar5 = 1;
          memset(pbVar5 + 1,0,length - 1U);
        }
        goto joined_r0x00b8aea0;
      }
    }
    if (pbVar5 != (byte *)0x0) {
      lVar14 = length - lVar10;
      bVar3 = lVar14 != 0;
      pbVar11 = pbVar6 + lVar10 + lVar14 + -1;
      bVar8 = *pbVar11;
      pbVar13 = pbVar5 + lVar14;
      if ((lVar14 != 0) && (bVar8 == 0)) {
        lVar15 = 0;
        do {
          pbVar5[lVar15 + (length - lVar10) + -1] = 0;
          bVar8 = pbVar6[lVar15 + length + -2];
          lVar1 = lVar14 + lVar15;
          bVar3 = lVar1 != 1;
          lVar15 = lVar15 + -1;
          if (lVar1 == 1) break;
        } while (bVar8 == 0);
        pbVar13 = pbVar5 + lVar15 + (length - lVar10);
        pbVar11 = pbVar6 + lVar15 + length + -1;
        lVar14 = lVar14 + lVar15;
      }
      pbVar5 = pbVar13 + -1;
      *pbVar5 = ~bVar8 + 1;
      if (!bVar3) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: i != 0","crypto/asn1/a_int.c",0xd4);
      }
      uVar9 = lVar14 - 1;
      if (uVar9 != 0) {
        if (0x1f < uVar9) {
          uVar7 = uVar9 & 0x1f;
          lVar10 = uVar9 - uVar7;
          if ((lVar10 != 0) &&
             ((pbVar11 <= pbVar13 + -lVar14 || (pbVar5 <= pbVar11 + (1 - lVar14))))) {
            lVar14 = (uVar7 + 1) - lVar14;
            pbVar5 = pbVar5 + lVar14;
            pbVar12 = pbVar11 + -0x10;
            pbVar6 = pbVar13 + -0x21;
            do {
              uVar19 = *(undefined8 *)(pbVar12 + -8);
              uVar18 = *(undefined8 *)(pbVar12 + -0x10);
              uVar17 = *(undefined8 *)(pbVar12 + 8);
              uVar16 = *(undefined8 *)pbVar12;
              lVar10 = lVar10 + -0x20;
              pbVar12 = pbVar12 + -0x20;
              *(ulong *)(pbVar6 + 8) =
                   CONCAT17(~(byte)((ulong)uVar19 >> 0x38),
                            CONCAT16(~(byte)((ulong)uVar19 >> 0x30),
                                     CONCAT15(~(byte)((ulong)uVar19 >> 0x28),
                                              CONCAT14(~(byte)((ulong)uVar19 >> 0x20),
                                                       CONCAT13(~(byte)((ulong)uVar19 >> 0x18),
                                                                CONCAT12(~(byte)((ulong)uVar19 >>
                                                                                0x10),
                                                                         CONCAT11(~(byte)((ulong)
                                                  uVar19 >> 8),~(byte)uVar19)))))));
              *(ulong *)pbVar6 =
                   CONCAT17(~(byte)((ulong)uVar18 >> 0x38),
                            CONCAT16(~(byte)((ulong)uVar18 >> 0x30),
                                     CONCAT15(~(byte)((ulong)uVar18 >> 0x28),
                                              CONCAT14(~(byte)((ulong)uVar18 >> 0x20),
                                                       CONCAT13(~(byte)((ulong)uVar18 >> 0x18),
                                                                CONCAT12(~(byte)((ulong)uVar18 >>
                                                                                0x10),
                                                                         CONCAT11(~(byte)((ulong)
                                                  uVar18 >> 8),~(byte)uVar18)))))));
              *(ulong *)(pbVar6 + 0x18) =
                   CONCAT17(~(byte)((ulong)uVar17 >> 0x38),
                            CONCAT16(~(byte)((ulong)uVar17 >> 0x30),
                                     CONCAT15(~(byte)((ulong)uVar17 >> 0x28),
                                              CONCAT14(~(byte)((ulong)uVar17 >> 0x20),
                                                       CONCAT13(~(byte)((ulong)uVar17 >> 0x18),
                                                                CONCAT12(~(byte)((ulong)uVar17 >>
                                                                                0x10),
                                                                         CONCAT11(~(byte)((ulong)
                                                  uVar17 >> 8),~(byte)uVar17)))))));
              *(ulong *)(pbVar6 + 0x10) =
                   CONCAT17(~(byte)((ulong)uVar16 >> 0x38),
                            CONCAT16(~(byte)((ulong)uVar16 >> 0x30),
                                     CONCAT15(~(byte)((ulong)uVar16 >> 0x28),
                                              CONCAT14(~(byte)((ulong)uVar16 >> 0x20),
                                                       CONCAT13(~(byte)((ulong)uVar16 >> 0x18),
                                                                CONCAT12(~(byte)((ulong)uVar16 >>
                                                                                0x10),
                                                                         CONCAT11(~(byte)((ulong)
                                                  uVar16 >> 8),~(byte)uVar16)))))));
              pbVar6 = pbVar6 + -0x20;
            } while (lVar10 != 0);
            uVar9 = uVar7;
            pbVar11 = pbVar11 + lVar14;
            if (uVar7 == 0) goto joined_r0x00b8aea0;
          }
        }
        do {
          pbVar5 = pbVar5 + -1;
          uVar9 = uVar9 - 1;
          *pbVar5 = ~pbVar11[-1];
          pbVar11 = pbVar11 + -1;
        } while (uVar9 != 0);
      }
    }
  }
joined_r0x00b8aea0:
  if ((bVar2 & 0x80) != 0) {
    str->type = str->type | 0x100;
  }
LAB_00b8aeb0:
  *pp = *pp + length;
  if (a != (ASN1_INTEGER **)0x0) {
    *a = str;
    return str;
  }
  return str;
}

