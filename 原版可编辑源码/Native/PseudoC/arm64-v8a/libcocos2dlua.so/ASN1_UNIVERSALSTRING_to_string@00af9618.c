
int ASN1_UNIVERSALSTRING_to_string(ASN1_UNIVERSALSTRING *s)

{
  uchar *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uchar *puVar7;
  uchar *puVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  
  if (s->type != 0x1c) {
    return 0;
  }
  uVar9 = s->length;
  if ((uVar9 & 3) != 0) {
    return 0;
  }
  puVar7 = s->data;
  if ((int)uVar9 < 1) {
    if (0 < (int)uVar9) {
      return 0;
    }
  }
  else {
    lVar10 = 0;
    do {
      puVar8 = puVar7 + lVar10;
      if (((*puVar8 != '\0') || (puVar8[1] != '\0')) || (puVar8[2] != '\0')) break;
      lVar10 = lVar10 + 4;
    } while ((int)lVar10 < (int)uVar9);
    if ((int)lVar10 < (int)uVar9) {
      return 0;
    }
  }
  puVar8 = puVar7;
  if (3 < (int)uVar9) {
    puVar8 = puVar7 + 1;
    *puVar7 = puVar7[3];
    if (7 < s->length) {
      lVar10 = 7;
      puVar7 = puVar8;
      do {
        puVar1 = s->data + lVar10;
        lVar10 = lVar10 + 4;
        puVar8 = puVar7 + 1;
        *puVar7 = *puVar1;
        puVar7 = puVar8;
      } while (lVar10 < s->length);
    }
  }
  *puVar8 = '\0';
  iVar2 = s->length;
  pbVar11 = s->data;
  iVar6 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar6 = iVar2;
  }
  iVar6 = iVar6 >> 2;
  s->length = iVar6;
  if (pbVar11 == (byte *)0x0) {
    iVar6 = 0x13;
  }
  else {
    uVar9 = (uint)*pbVar11;
    if (*pbVar11 == 0) {
      bVar5 = false;
    }
    else {
      bVar4 = false;
      bVar5 = false;
      if (iVar2 < 4) {
        iVar6 = -1;
      }
      do {
        pbVar11 = pbVar11 + 1;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        if (((9 < (uVar9 - 0x30 & 0xff)) && (0x19 < ((uVar9 & 0xffffffdf) - 0x41 & 0xff))) &&
           ((0x3f < uVar9 || ((1L << ((ulong)uVar9 & 0x3f) & 0xa400fb8100000000U) == 0)))) {
          bVar5 = true;
        }
        cVar3 = (char)uVar9;
        uVar9 = (uint)*pbVar11;
        if (cVar3 < '\0') {
          bVar4 = true;
        }
      } while (uVar9 != 0);
      if (bVar4) {
        iVar6 = 0x14;
        goto LAB_00af97ac;
      }
    }
    iVar6 = 0x13;
    if (bVar5) {
      iVar6 = 0x16;
    }
  }
LAB_00af97ac:
  s->type = iVar6;
  return 1;
}

