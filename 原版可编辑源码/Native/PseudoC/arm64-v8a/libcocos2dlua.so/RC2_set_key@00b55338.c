
void RC2_set_key(RC2_KEY *key,int len,uchar *data,int bits)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  uchar *puVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  char cVar11;
  ulong uVar12;
  long lVar13;
  uchar *puVar14;
  uint *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  iVar2 = len;
  if (0x7f < len) {
    iVar2 = 0x80;
  }
  iVar3 = 0x400;
  if (0 < bits) {
    iVar3 = bits;
  }
  if (0x3ff < iVar3) {
    iVar3 = 0x400;
  }
  *(undefined1 *)key->data = 0;
  if (0 < len) {
    uVar8 = (ulong)iVar2;
    uVar4 = uVar8;
    if ((long)uVar8 < 2) {
      uVar4 = 1;
    }
    if (uVar4 < 0x20) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar4 & 0x7fffffffffffffe0;
      if (uVar12 != 0) {
        uVar16 = uVar8;
        if ((long)uVar8 < 2) {
          uVar16 = 1;
        }
        if ((key < (RC2_KEY *)(data + uVar16)) && (data < (uchar *)((long)key->data + uVar16))) {
          uVar12 = 0;
        }
        else {
          puVar14 = data + 0x10;
          puVar15 = key->data + 4;
          uVar16 = uVar12;
          do {
            puVar5 = puVar14 + -8;
            uVar17 = *(undefined8 *)(puVar14 + -0x10);
            uVar19 = *(undefined8 *)(puVar14 + 8);
            uVar18 = *(undefined8 *)puVar14;
            puVar14 = puVar14 + 0x20;
            uVar16 = uVar16 - 0x20;
            *(undefined8 *)(puVar15 + -2) = *(undefined8 *)puVar5;
            *(undefined8 *)((RC2_KEY *)(puVar15 + -4))->data = uVar17;
            *(undefined8 *)(puVar15 + 2) = uVar19;
            *(undefined8 *)puVar15 = uVar18;
            puVar15 = puVar15 + 8;
          } while (uVar16 != 0);
          if (uVar4 == uVar12) goto LAB_00b553f0;
        }
      }
    }
    do {
      *(uchar *)((long)key->data + uVar12) = data[uVar12];
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)uVar8);
  }
LAB_00b553f0:
  if (len < 0x80) {
    cVar11 = *(char *)((long)key->data + (long)iVar2 + -1);
    lVar9 = 0;
    do {
      pcVar1 = (char *)((long)key->data + lVar9);
      lVar13 = lVar9 + (iVar2 + 1);
      lVar9 = lVar9 + 1;
      cVar11 = (&DAT_013ed44c)[(byte)(cVar11 + *pcVar1)];
      *(char *)((long)key->data + lVar13 + -1) = cVar11;
    } while ((iVar2 + 1) + lVar9 + -2 < 0x7f);
  }
  lVar9 = (long)((ulong)(iVar3 + 7U) << 0x20) >> 0x23;
  lVar13 = 0x80 - lVar9;
  bVar7 = (&DAT_013ed44c)[0xffU >> (ulong)(-iVar3 & 7) & (uint)*(byte *)((long)key + lVar13)];
  *(byte *)((long)key + lVar13) = bVar7;
  if ((int)lVar13 != 0) {
    lVar13 = (long)(int)lVar13 + -1;
    lVar10 = 0;
    do {
      bVar7 = (&DAT_013ed44c)[*(byte *)((long)key->data + lVar10 + lVar9 + lVar13) ^ bVar7];
      *(byte *)((long)key->data + lVar10 + lVar13) = bVar7;
      lVar10 = lVar10 + -1;
    } while (((int)(iVar3 + 7U) >> 3) + -0x80 != (int)lVar10);
  }
  lVar13 = 0;
  lVar9 = 0xfc;
  do {
    lVar6 = lVar13 + 0x7e;
    lVar10 = lVar13 + 0x7f;
    lVar13 = lVar13 + -2;
    *(uint *)((long)key->data + lVar9) = (uint)*(ushort *)((long)key->data + lVar6);
    lVar9 = lVar9 + -4;
  } while (1 < lVar10);
  return;
}

