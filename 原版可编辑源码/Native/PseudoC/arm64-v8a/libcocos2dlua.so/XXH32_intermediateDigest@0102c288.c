
uint XXH32_intermediateDigest(ulong *param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  int iVar6;
  
  puVar3 = param_1 + 4;
  if (*param_1 < 0x10) {
    iVar6 = (int)param_1[1] + 0x165667b1;
  }
  else {
    iVar6 = ((uint)param_1[2] >> 0x19 | (uint)param_1[2] << 7) +
            (*(uint *)((long)param_1 + 0xc) >> 0x1f | *(uint *)((long)param_1 + 0xc) << 1) +
            (*(uint *)((long)param_1 + 0x14) >> 0x14 | *(uint *)((long)param_1 + 0x14) << 0xc) +
            ((uint)param_1[3] >> 0xe | (uint)param_1[3] << 0x12);
  }
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)((long)param_1 + 0x1c) + 0x20);
  lVar2 = (long)*(int *)((long)param_1 + 0x1c) + 0x1c;
  uVar5 = iVar6 + (int)*param_1;
  if (0x1f < lVar2) {
    puVar4 = puVar3;
    do {
      puVar3 = (ulong *)((long)puVar4 + 4);
      uVar5 = uVar5 + (int)*puVar4 * -0x3d4d51c3;
      uVar5 = (uVar5 >> 0xf | uVar5 * 0x20000) * 0x27d4eb2f;
      puVar4 = puVar3;
    } while (puVar3 <= (ulong *)((long)param_1 + lVar2));
  }
  if (puVar3 < puVar1) {
    do {
      puVar4 = (ulong *)((long)puVar3 + 1);
      uVar5 = uVar5 + (uint)(byte)*puVar3 * 0x165667b1;
      uVar5 = (uVar5 >> 0x15 | uVar5 * 0x800) * -0x61c8864f;
      puVar3 = puVar4;
    } while (puVar1 != puVar4);
  }
  uVar5 = (uVar5 ^ uVar5 >> 0xf) * -0x7a143589;
  uVar5 = (uVar5 ^ uVar5 >> 0xd) * -0x3d4d51c3;
  return uVar5 ^ uVar5 >> 0x10;
}

