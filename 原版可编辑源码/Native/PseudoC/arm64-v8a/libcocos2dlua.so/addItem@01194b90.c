
/* dtProximityGrid::addItem(unsigned short, float, float, float, float) */

void __thiscall
dtProximityGrid::addItem
          (dtProximityGrid *this,ushort param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  bool bVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  float fVar16;
  
  fVar16 = *(float *)(this + 4);
  iVar10 = (int)(fVar16 * param_2);
  iVar5 = *(int *)(this + 0x24);
  if (iVar10 <= *(int *)(this + 0x24)) {
    iVar5 = iVar10;
  }
  *(int *)(this + 0x24) = iVar5;
  iVar11 = (int)(fVar16 * param_3);
  iVar5 = *(int *)(this + 0x28);
  if (iVar11 <= *(int *)(this + 0x28)) {
    iVar5 = iVar11;
  }
  *(int *)(this + 0x28) = iVar5;
  iVar12 = (int)(fVar16 * param_4);
  iVar5 = *(int *)(this + 0x2c);
  if (*(int *)(this + 0x2c) <= iVar12) {
    iVar5 = iVar12;
  }
  *(int *)(this + 0x2c) = iVar5;
  iVar13 = (int)(fVar16 * param_5);
  iVar5 = *(int *)(this + 0x30);
  if (*(int *)(this + 0x30) <= iVar13) {
    iVar5 = iVar13;
  }
  *(int *)(this + 0x30) = iVar5;
  if (iVar11 <= iVar13) {
    do {
      if (iVar10 <= iVar12) {
        iVar5 = *(int *)(this + 0x14);
        iVar7 = iVar10;
        uVar3 = iVar10 * 0x466f45d;
        uVar8 = *(uint *)(this + 0x10);
        do {
          uVar14 = uVar8;
          if ((int)uVar8 < iVar5) {
            iVar6 = *(int *)(this + 0x20);
            uVar14 = uVar8 + 1;
            puVar2 = (ushort *)(*(long *)(this + 8) + (ulong)(uVar8 & 0xffff) * 8);
            *(uint *)(this + 0x10) = uVar14;
            puVar2[1] = (ushort)iVar7;
            puVar2[2] = (ushort)iVar11;
            *puVar2 = param_1;
            lVar15 = *(long *)(this + 0x18);
            uVar4 = iVar6 - 1U & (uVar3 ^ iVar11 * 0x127409f);
            uVar9 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1;
            puVar2[3] = *(ushort *)(lVar15 + uVar9);
            *(short *)(lVar15 + uVar9) = (short)uVar8;
          }
          uVar3 = uVar3 + 0x466f45d;
          bVar1 = iVar7 < iVar12;
          iVar7 = iVar7 + 1;
          uVar8 = uVar14;
        } while (bVar1);
      }
      bVar1 = iVar11 < iVar13;
      iVar11 = iVar11 + 1;
    } while (bVar1);
  }
  return;
}

