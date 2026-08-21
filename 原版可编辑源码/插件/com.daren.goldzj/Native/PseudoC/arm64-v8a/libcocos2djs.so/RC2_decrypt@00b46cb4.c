
void RC2_decrypt(ulong *data,RC2_KEY *key)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  
  uVar9 = *data;
  uVar12 = data[1];
  puVar7 = key->data + 0x3f;
  iVar6 = 3;
  uVar11 = uVar9 >> 0x10;
  uVar13 = uVar12 >> 0x10;
  iVar5 = 5;
  while( true ) {
    uVar15 = (uint)uVar12 & 0xffff;
    uVar1 = iVar5 - 1;
    uVar8 = (uint)uVar9 & 0xffff;
    puVar14 = puVar7;
    do {
      uVar10 = (uint)uVar11;
      uVar2 = (((uint)uVar13 << 0xb | (uint)uVar13 >> 5) -
              (((uVar15 ^ 0xffff) & uVar8) + (uVar15 & uVar10))) - *puVar14;
      uVar3 = ((((uVar15 & 7) << 0xd | uVar15 >> 3) - (uVar10 & uVar8)) - puVar14[-1]) -
              (uVar2 & (uVar10 ^ 0xffff));
      uVar10 = (((uVar10 << 0xe | uVar10 >> 2) - (uVar2 & uVar8)) - puVar14[-2]) -
               (uVar3 & (uVar8 ^ 0xffff));
      uVar4 = ((((uVar8 & 1) << 0xf | uVar8 >> 1) - puVar14[-3]) - (uVar3 & uVar2)) -
              (uVar10 & (uVar2 ^ 0xffff));
      iVar5 = iVar5 + -1;
      uVar13 = (ulong)(uVar2 & 0xffff);
      uVar15 = uVar3 & 0xffff;
      uVar11 = (ulong)(uVar10 & 0xffff);
      uVar8 = uVar4 & 0xffff;
      puVar14 = puVar14 + -4;
    } while (iVar5 != 0);
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) break;
    uVar2 = uVar2 - key->data[uVar3 & 0x3f];
    uVar12 = (ulong)(uVar3 - key->data[uVar10 & 0x3f]);
    puVar7 = puVar7 + (ulong)uVar1 * -4 + -4;
    iVar5 = 5;
    if (iVar6 == 2) {
      iVar5 = 6;
    }
    uVar13 = (ulong)(uVar2 & 0xffff);
    uVar11 = (ulong)(uVar10 - key->data[uVar4 & 0x3f] & 0xffff);
    uVar9 = (ulong)(uVar4 - key->data[uVar2 & 0x3f]);
  }
  *data = (ulong)(uVar8 | uVar10 * 0x10000);
  data[1] = (ulong)(uVar15 | uVar2 * 0x10000);
  return;
}

