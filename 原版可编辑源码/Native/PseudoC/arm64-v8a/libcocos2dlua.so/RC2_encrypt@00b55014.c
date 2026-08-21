
void RC2_encrypt(ulong *data,RC2_KEY *key)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  uint uVar19;
  uint *puVar20;
  
  iVar13 = 3;
  uVar19 = (uint)*data & 0xffff;
  uVar17 = *data >> 0x10;
  uVar14 = (uint)data[1] & 0xffff;
  uVar16 = data[1] >> 0x10;
  iVar12 = 5;
  puVar18 = key->data;
  while( true ) {
    iVar8 = iVar12 * 4;
    puVar20 = puVar18;
    do {
      uVar15 = (uint)uVar16;
      puVar6 = puVar20 + 1;
      iVar12 = iVar12 + -1;
      uVar19 = (uVar15 & uVar14) + uVar19 + ((uint)uVar17 & (uVar15 ^ 0xffffffff)) + *puVar20;
      puVar1 = puVar20 + 2;
      puVar7 = puVar20 + 3;
      puVar20 = puVar20 + 4;
      uVar9 = uVar19 >> 0xf & 1;
      uVar3 = (uVar19 & 0xffff) << 1;
      uVar19 = uVar9 | uVar3;
      uVar2 = *puVar6 + (uint)uVar17 + (uVar19 & uVar15) + (uVar14 & (uVar19 ^ 0xffffffff));
      uVar2 = uVar2 >> 0xe & 3 | (uVar2 & 0xffff) << 2;
      uVar17 = (ulong)uVar2;
      uVar14 = *puVar1 + uVar14 + (uVar19 & uVar2) + (uVar15 & (uVar2 ^ 0xffffffff));
      uVar10 = uVar14 >> 0xd & 7;
      uVar4 = (uVar14 & 0xffff) << 3;
      uVar14 = uVar10 | uVar4;
      uVar15 = *puVar7 + uVar15 + (uVar2 & uVar14) + (uVar19 & (uVar14 ^ 0xffffffff));
      uVar11 = uVar15 >> 0xb & 0x1f;
      uVar15 = (uVar15 & 0xffff) << 5;
      uVar5 = uVar11 | uVar15;
      uVar16 = (ulong)uVar5;
    } while (iVar12 != 0);
    iVar13 = iVar13 + -1;
    if (iVar13 == 0) break;
    puVar18 = puVar18 + (ulong)(iVar8 - 4) + 4;
    uVar19 = key->data[uVar11 | uVar15 & 0x20] + uVar19;
    uVar2 = key->data[uVar19 & 0x3f] + uVar2;
    uVar17 = (ulong)uVar2;
    uVar14 = key->data[uVar2 & 0x3f] + uVar14;
    iVar12 = 5;
    if (iVar13 == 2) {
      iVar12 = 6;
    }
    uVar16 = (ulong)(key->data[uVar14 & 0x3f] + uVar5);
  }
  *data = (ulong)(uVar9 | uVar3 & 0xffff | uVar2 << 0x10);
  data[1] = (ulong)(uVar10 | uVar4 & 0xffff | uVar5 << 0x10);
  return;
}

