
/* cocosbuilder::CCBReader::readInt(bool) */

ulong __thiscall cocosbuilder::CCBReader::readInt(CCBReader *this,bool param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  
  iVar7 = *(int *)(this + 0x40);
  uVar8 = *(uint *)(this + 0x44);
  uVar6 = 0xffffffffffffffff;
  do {
    bVar4 = *(byte *)(*(long *)(this + 0x38) + (long)iVar7);
    uVar5 = uVar8 & 0x1f;
    *(uint *)(this + 0x44) = uVar8 + 1;
    bVar1 = 6 < (int)uVar8;
    uVar8 = uVar8 + 1;
    if (bVar1) {
      uVar8 = 0;
      iVar7 = iVar7 + 1;
      *(int *)(this + 0x40) = iVar7;
      *(undefined4 *)(this + 0x44) = 0;
    }
    uVar6 = uVar6 + 1;
  } while ((1 << (ulong)uVar5 & (uint)bVar4) == 0);
  if ((int)uVar6 == 0) {
    uVar6 = 0;
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    uVar10 = uVar6;
    do {
      uVar10 = uVar10 - 1;
      bVar4 = *(byte *)(*(long *)(this + 0x38) + (long)iVar7);
      uVar5 = uVar8 & 0x1f;
      *(uint *)(this + 0x44) = uVar8 + 1;
      bVar1 = 6 < (int)uVar8;
      uVar8 = uVar8 + 1;
      if (bVar1) {
        uVar8 = 0;
        iVar7 = iVar7 + 1;
        *(int *)(this + 0x40) = iVar7;
        *(undefined4 *)(this + 0x44) = 0;
      }
      uVar3 = 0;
      if ((1 << (ulong)uVar5 & (uint)bVar4) != 0) {
        uVar3 = 1L << (uVar10 & 0x3f);
      }
      uVar9 = uVar3 | uVar9;
    } while (0 < (long)uVar10);
  }
  uVar9 = uVar9 | 1L << (uVar6 & 0x3f);
  if (param_1) {
    uVar6 = uVar9;
    if ((long)uVar9 < 0) {
      uVar6 = uVar9 + 1;
    }
    lVar2 = 2;
    if ((uint)uVar9 == ((uint)uVar6 & 0xfffffffe)) {
      lVar2 = -2;
    }
    uVar6 = 0;
    if (lVar2 != 0) {
      uVar6 = (long)uVar9 / lVar2;
    }
  }
  else {
    uVar6 = (ulong)((uint)uVar9 - 1);
  }
  if (uVar8 != 0) {
    *(int *)(this + 0x40) = iVar7 + 1;
    *(undefined4 *)(this + 0x44) = 0;
  }
  return uVar6 & 0xffffffff;
}

