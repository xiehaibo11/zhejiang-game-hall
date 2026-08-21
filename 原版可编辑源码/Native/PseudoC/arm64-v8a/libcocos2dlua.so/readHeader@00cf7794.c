
/* cocosbuilder::CCBReader::readHeader() */

undefined8 __thiscall cocosbuilder::CCBReader::readHeader(CCBReader *this)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  CCBReader CVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  
  lVar7 = *(long *)(this + 0x38);
  if (lVar7 != 0) {
    iVar3 = *(int *)(lVar7 + *(int *)(this + 0x40));
    iVar8 = *(int *)(this + 0x40) + 4;
    *(int *)(this + 0x40) = iVar8;
    if (iVar3 == 0x63636269) {
      uVar10 = *(uint *)(this + 0x44);
      uVar9 = 0xffffffffffffffff;
      do {
        bVar4 = *(byte *)(lVar7 + iVar8);
        uVar11 = uVar10 & 0x1f;
        *(uint *)(this + 0x44) = uVar10 + 1;
        bVar1 = 6 < (int)uVar10;
        uVar10 = uVar10 + 1;
        if (bVar1) {
          uVar10 = 0;
          iVar8 = iVar8 + 1;
          *(int *)(this + 0x40) = iVar8;
          *(undefined4 *)(this + 0x44) = 0;
        }
        uVar9 = uVar9 + 1;
      } while ((1 << (ulong)uVar11 & (uint)bVar4) == 0);
      if ((int)uVar9 == 0) {
        uVar9 = 0;
        uVar11 = 0;
      }
      else {
        uVar12 = 0;
        uVar13 = uVar9;
        do {
          bVar4 = *(byte *)(lVar7 + iVar8);
          uVar11 = uVar10 & 0x1f;
          uVar13 = uVar13 - 1;
          *(uint *)(this + 0x44) = uVar10 + 1;
          bVar1 = 6 < (int)uVar10;
          uVar10 = uVar10 + 1;
          if (bVar1) {
            uVar10 = 0;
            iVar8 = iVar8 + 1;
            *(int *)(this + 0x40) = iVar8;
            *(undefined4 *)(this + 0x44) = 0;
          }
          uVar2 = 0;
          if ((1 << (ulong)uVar11 & (uint)bVar4) != 0) {
            uVar2 = 1L << (uVar13 & 0x3f);
          }
          uVar12 = uVar2 | uVar12;
          uVar11 = (uint)uVar12;
        } while (0 < (long)uVar13);
      }
      uVar11 = (uVar11 | (uint)(1L << (uVar9 & 0x3f))) - 1;
      if (uVar10 != 0) {
        iVar8 = iVar8 + 1;
        *(int *)(this + 0x40) = iVar8;
        *(undefined4 *)(this + 0x44) = 0;
      }
      if (uVar11 == 5) {
        cVar5 = *(char *)(lVar7 + iVar8);
        *(int *)(this + 0x40) = iVar8 + 1;
        CVar6 = (CCBReader)(cVar5 != '\0');
        this[0x180] = CVar6;
        *(CCBReader *)(*(long *)(this + 0x80) + 0x21) = CVar6;
        return 1;
      }
      cocos2d::log("WARNING! Incompatible ccbi file version (file: %d reader: %d)",(ulong)uVar11,5);
    }
  }
  return 0;
}

