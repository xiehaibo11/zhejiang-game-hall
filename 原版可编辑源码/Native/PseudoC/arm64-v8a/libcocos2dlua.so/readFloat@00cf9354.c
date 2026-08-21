
/* cocosbuilder::CCBReader::readFloat() */

float __thiscall cocosbuilder::CCBReader::readFloat(CCBReader *this)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  
  lVar10 = *(long *)(this + 0x38);
  iVar8 = *(int *)(this + 0x40);
  uVar4 = *(undefined1 *)(lVar10 + iVar8);
  uVar9 = (long)iVar8 + 1;
  *(int *)(this + 0x40) = (int)uVar9;
  fVar15 = 0.0;
  switch(uVar4) {
  case 0:
    break;
  case 1:
    return 1.0;
  case 2:
    return -1.0;
  case 3:
    return 0.5;
  case 4:
    uVar12 = *(uint *)(this + 0x44);
    uVar11 = 0xffffffffffffffff;
    do {
      bVar5 = *(byte *)(lVar10 + (int)uVar9);
      uVar6 = uVar12 & 0x1f;
      *(uint *)(this + 0x44) = uVar12 + 1;
      bVar1 = 6 < (int)uVar12;
      uVar12 = uVar12 + 1;
      if (bVar1) {
        uVar12 = 0;
        uVar2 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar2;
        *(uint *)(this + 0x40) = uVar2;
        *(undefined4 *)(this + 0x44) = 0;
      }
      iVar8 = (int)uVar9;
      uVar11 = uVar11 + 1;
    } while ((1 << (ulong)uVar6 & (uint)bVar5) == 0);
    if ((int)uVar11 == 0) {
      uVar11 = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      uVar14 = uVar11;
      do {
        bVar5 = *(byte *)(lVar10 + (int)uVar9);
        uVar6 = uVar12 & 0x1f;
        uVar14 = uVar14 - 1;
        *(uint *)(this + 0x44) = uVar12 + 1;
        bVar1 = 6 < (int)uVar12;
        uVar12 = uVar12 + 1;
        if (bVar1) {
          uVar12 = 0;
          uVar2 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar2;
          *(uint *)(this + 0x40) = uVar2;
          *(undefined4 *)(this + 0x44) = 0;
        }
        iVar8 = (int)uVar9;
        uVar3 = 0;
        if ((1 << (ulong)uVar6 & (uint)bVar5) != 0) {
          uVar3 = 1L << (uVar14 & 0x3f);
        }
        uVar13 = uVar3 | uVar13;
      } while (0 < (long)uVar14);
    }
    uVar13 = uVar13 | 1L << (uVar11 & 0x3f);
    uVar9 = uVar13;
    if ((long)uVar13 < 0) {
      uVar9 = uVar13 + 1;
    }
    lVar10 = 2;
    if ((uint)uVar13 == ((uint)uVar9 & 0xfffffffe)) {
      lVar10 = -2;
    }
    iVar7 = 0;
    if (lVar10 != 0) {
      iVar7 = (int)((long)uVar13 / lVar10);
    }
    if (uVar12 != 0) {
      *(int *)(this + 0x40) = iVar8 + 1;
      *(undefined4 *)(this + 0x44) = 0;
    }
    return (float)iVar7;
  default:
    fVar15 = *(float *)(lVar10 + uVar9);
    *(int *)(this + 0x40) = iVar8 + 5;
  }
  return fVar15;
}

