
int EVP_DecodeBlock(uchar *t,uchar *f,int n)

{
  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  
  uVar5 = (uint)(char)*f;
  if (-1 < (char)*f) {
    do {
      iVar2 = n + -1;
      if ((n < 1) || ((uVar5 & 0xff) != 9 && (uVar5 & 0xff) != 0x20)) break;
      f = f + 1;
      uVar5 = (uint)(char)*f;
      n = iVar2;
    } while (-1 < (int)uVar5);
  }
  uVar3 = (long)n;
  do {
    uVar6 = uVar3;
    if ((long)uVar6 < 4) break;
    uVar3 = uVar6 - 1;
  } while (((&DAT_013fc5ee)[f[uVar6 - 1]] | 0x13) == 0xf3);
  if ((uVar6 & 3) != 0) {
    return -1;
  }
  if ((int)uVar6 < 1) {
    return 0;
  }
  lVar7 = 0;
  lVar4 = 0;
  do {
    if ((char)uVar5 < '\0') {
      uVar5 = 0xff;
      bVar9 = f[lVar7 + 1];
      if ((char)bVar9 < '\0') goto LAB_00bda444;
LAB_00bda42c:
      uVar8 = (uint)(byte)(&DAT_013fc5ee)[bVar9];
    }
    else {
      uVar5 = (uint)(byte)(&DAT_013fc5ee)[uVar5 & 0xff];
      bVar9 = f[lVar7 + 1];
      if (-1 < (char)bVar9) goto LAB_00bda42c;
LAB_00bda444:
      uVar8 = 0xff;
    }
    if ((char)f[lVar7 + 2] < '\0') {
      uVar10 = 0xff;
      bVar9 = f[lVar7 + 3];
      if ((char)bVar9 < '\0') goto LAB_00bda47c;
LAB_00bda464:
      bVar9 = (&DAT_013fc5ee)[bVar9];
    }
    else {
      uVar10 = (uint)(byte)(&DAT_013fc5ee)[f[lVar7 + 2]];
      bVar9 = f[lVar7 + 3];
      if (-1 < (char)bVar9) goto LAB_00bda464;
LAB_00bda47c:
      bVar9 = 0xff;
    }
    if ((char)((byte)uVar8 | (byte)uVar5 | (byte)uVar10 | bVar9) < '\0') {
      return -1;
    }
    pbVar1 = t + lVar4;
    *pbVar1 = (byte)((uVar8 << 0xc) >> 0x10) | (byte)((uVar5 << 0x12) >> 0x10);
    pbVar1[1] = (byte)((uVar10 << 6) >> 8) | (byte)((uVar8 << 0xc) >> 8);
    pbVar1[2] = (byte)(uVar10 << 6) | bVar9;
    if ((int)uVar6 <= (int)lVar7 + 4) {
      return (int)lVar4 + 3;
    }
    uVar5 = (uint)f[lVar7 + 4];
    lVar4 = lVar4 + 3;
    lVar7 = lVar7 + 4;
  } while( true );
}

