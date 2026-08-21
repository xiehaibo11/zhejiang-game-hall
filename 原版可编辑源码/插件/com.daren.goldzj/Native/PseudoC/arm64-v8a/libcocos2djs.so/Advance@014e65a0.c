
/* v8::internal::SourcePositionTableIterator::Advance() */

void __thiscall
v8::internal::SourcePositionTableIterator::Advance(SourcePositionTableIterator *this)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  int iVar14;
  
  if (*(long **)(this + 0x10) == (long *)0x0) {
    lVar7 = *(long *)this;
    iVar8 = (int)*(undefined8 *)(this + 8);
  }
  else {
    lVar6 = **(long **)(this + 0x10);
    lVar7 = lVar6 + 7;
    iVar8 = *(int *)(lVar6 + 3) >> 1;
  }
  iVar14 = *(int *)(this + 0x18);
  if (iVar14 != -1) {
    do {
      if (iVar8 <= iVar14) {
        *(undefined4 *)(this + 0x18) = 0xffffffff;
        return;
      }
      uVar11 = 0;
      uVar9 = 0;
      pbVar13 = (byte *)(lVar7 + iVar14);
      iVar1 = iVar14 + 2;
      do {
        iVar5 = iVar1;
        iVar14 = iVar14 + 1;
        *(int *)(this + 0x18) = iVar14;
        bVar2 = *pbVar13;
        uVar3 = uVar9 & 0x1f;
        uVar9 = uVar9 + 7;
        uVar11 = (bVar2 & 0x7f) << (ulong)uVar3 | uVar11;
        pbVar13 = pbVar13 + 1;
        iVar1 = iVar5 + 1;
      } while ((char)bVar2 < '\0');
      uVar9 = -(uVar11 & 1) ^ (int)uVar11 >> 1;
      uVar12 = 0;
      uVar10 = 0;
      pbVar13 = (byte *)(lVar7 + iVar14);
      do {
        iVar14 = iVar5;
        *(int *)(this + 0x18) = iVar14;
        bVar2 = *pbVar13;
        uVar4 = uVar12 & 0x3f;
        uVar12 = uVar12 + 7;
        uVar10 = ((ulong)bVar2 & 0x7f) << uVar4 | uVar10;
        pbVar13 = pbVar13 + 1;
        iVar5 = iVar14 + 1;
      } while ((char)bVar2 < '\0');
      iVar1 = *(int *)(this + 0x38);
      uVar12 = *(long *)(this + 0x28) + (-(uVar10 & 1) ^ (long)uVar10 >> 1);
      *(uint *)(this + 0x20) = *(int *)(this + 0x20) + ((int)uVar9 >> 0x1f ^ uVar9);
      *(ulong *)(this + 0x28) = uVar12;
      this[0x30] = (SourcePositionTableIterator)((byte)~(byte)(uVar9 >> 0x18) >> 7);
      if (iVar1 == 0) {
        if ((uVar12 & 1) == 0) {
          return;
        }
      }
      else if (iVar1 == 1) {
        if ((uVar12 & 1) != 0) {
          return;
        }
      }
      else if (iVar1 == 2) {
        return;
      }
    } while (iVar14 + 1 != 0);
  }
  return;
}

