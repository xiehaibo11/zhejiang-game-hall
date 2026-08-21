
int ASN1_get_object(uchar **pp,long *plength,int *ptag,int *pclass,long omax)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  
  if (omax != 0) {
    pbVar3 = *pp;
    lVar6 = omax + -1;
    pbVar4 = pbVar3 + 1;
    bVar1 = *pbVar3;
    uVar10 = bVar1 & 0x1f;
    uVar8 = (ulong)uVar10;
    if (uVar10 == 0x1f) {
      if (lVar6 != 0) {
        uVar8 = 0;
        lVar6 = omax + -2;
        pbVar5 = pbVar4;
        do {
          pbVar4 = pbVar5 + 1;
          uVar8 = (ulong)*pbVar5 & 0x7f | uVar8 << 7;
          if (-1 < (char)*pbVar5) goto LAB_00aebdc8;
        } while ((lVar6 != 0) && (lVar6 = lVar6 + -1, pbVar5 = pbVar4, (long)uVar8 < 0x1000000));
      }
    }
    else {
LAB_00aebdc8:
      if (lVar6 != 0) {
        *ptag = (int)uVar8;
        *pclass = bVar1 & 0xc0;
        if (0 < lVar6) {
          bVar2 = *pbVar4;
          uVar10 = bVar1 & 0x20;
                    /* try { // try from 00aebde8 to 00bebec3 has its CatchHandler @ 00aebaec */
          if (bVar2 == 0x80) {
            *plength = 0;
            if ((bVar1 & 0x20) == 0) goto LAB_00aebe98;
            uVar8 = 0;
            pbVar5 = pbVar4 + 1;
            uVar11 = 1;
          }
          else {
            uVar8 = (ulong)(bVar2 & 0x7f);
            pbVar5 = pbVar4 + 1;
            if ((char)bVar2 < '\0') {
              if (lVar6 <= (long)(uVar8 + 1)) goto LAB_00aebe98;
              if ((bVar2 & 0x7f) != 0) {
                pbVar4 = pbVar4 + 2;
                uVar7 = uVar8;
LAB_00aebe30:
                uVar8 = (ulong)*pbVar5;
                if (uVar8 == 0) goto code_r0x00aebe38;
                if (8 < uVar7) goto LAB_00aebe98;
                if (uVar7 != 0) {
                  if (uVar7 != 1) {
                    uVar9 = 1;
                    do {
                      uVar9 = uVar9 + 1;
                      uVar8 = (ulong)*pbVar4 | uVar8 << 8;
                      pbVar4 = pbVar4 + 1;
                    } while (uVar7 != uVar9);
                  }
                  if ((long)uVar8 < 0) goto LAB_00aebe98;
                  pbVar5 = pbVar5 + uVar7;
                  goto LAB_00aebe4c;
                }
              }
LAB_00aebe48:
              uVar8 = 0;
            }
LAB_00aebe4c:
            uVar11 = 0;
            *plength = uVar8;
          }
          if ((long)(pbVar3 + (omax - (long)pbVar5)) < (long)uVar8) {
            ERR_put_error(0xd,0x72,0x9b,"crypto/asn1/asn1_lib.c",0x5b);
            uVar10 = uVar10 | 0x80;
          }
          *pp = pbVar5;
          return uVar10 | uVar11;
        }
      }
    }
  }
LAB_00aebe98:
                    /* catch() { ... } // from try @ 00aebc48 with catch @ 00aebeac */
                    /* catch() { ... } // from try @ 00aebcb4 with catch @ 00aebeb0 */
  ERR_put_error(0xd,0x72,0x7b,"crypto/asn1/asn1_lib.c",0x65);
                    /* try { // try from 00aebec4 to 00bec0eb has its CatchHandler @ 00aebec4
                       catch() { ... } // from try @ 00aebec4 with catch @ 00aebec4
                       catch() { ... } // from try @ 00aec144 with catch @ 00aebec4 */
  return 0x80;
code_r0x00aebe38:
  pbVar5 = pbVar5 + 1;
  uVar7 = uVar7 - 1;
  pbVar4 = pbVar4 + 1;
  if (uVar7 == 0) goto LAB_00aebe48;
  goto LAB_00aebe30;
}

