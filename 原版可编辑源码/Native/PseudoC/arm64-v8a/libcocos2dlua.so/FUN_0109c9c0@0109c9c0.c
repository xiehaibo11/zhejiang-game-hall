
uint * FUN_0109c9c0(long param_1,byte *param_2,undefined8 param_3)

{
  ulong uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  long lVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint *puVar14;
  
  iVar10 = FUN_0109cb04(param_2);
  bVar5 = *param_2;
  bVar6 = param_2[1];
  bVar7 = param_2[2];
  bVar8 = param_2[3];
  iVar10 = FUN_0109c954(param_1,iVar10 + 1,param_3);
  if (iVar10 == 0) {
                    /* try { // try from 0109ca18 to 0119ca4b has its CatchHandler @ 0109ca18
                       catch() { ... } // from try @ 0109ca18 with catch @ 0109ca18
                       catch() { ... } // from try @ 0109ca54 with catch @ 0109ca18 */
    puVar11 = *(uint **)(param_1 + 0x38);
    puVar2 = puVar11;
    for (uVar9 = (uint)bVar5 << 0x18 | (uint)bVar6 << 0x10 | (uint)bVar7 << 8 | (uint)bVar8;
        uVar9 != 0; uVar9 = uVar9 - 1) {
                    /* try { // try from 0109ca4c to 0119ca53 has its CatchHandler @ 0109ca60 */
      bVar5 = param_2[7];
                    /* try { // try from 0109ca54 to 0119ca73 has its CatchHandler @ 0109ca18 */
                    /* catch() { ... } // from try @ 0109ca4c with catch @ 0109ca60 */
      uVar1 = (ulong)bVar5 + 1;
      uVar16 = (uint)param_2[4] << 0x10 | (uint)param_2[5] << 8 | (uint)param_2[6];
      uVar12 = bVar5 + 1;
      puVar13 = puVar2;
      if (7 < uVar1) {
        uVar4 = bVar5 + 1 & 7;
        lVar15 = uVar1 - uVar4;
        if (lVar15 != 0) {
          uVar12 = uVar12 - (int)lVar15;
          puVar14 = puVar2 + lVar15;
          uVar3 = uVar16 + (int)lVar15;
          iVar10 = uVar16 + 1;
          iVar17 = uVar16 + 2;
          iVar18 = uVar16 + 3;
          puVar13 = puVar2 + 4;
          do {
            *(ulong *)(puVar13 + -2) = CONCAT44(iVar18,iVar17);
            *(ulong *)(puVar13 + -4) = CONCAT44(iVar10,uVar16);
            *(ulong *)(puVar13 + 2) = CONCAT44(iVar18 + 4,iVar17 + 4);
            *(ulong *)puVar13 = CONCAT44(iVar10 + 4,uVar16 + 4);
            uVar16 = uVar16 + 8;
            iVar10 = iVar10 + 8;
            iVar17 = iVar17 + 8;
            iVar18 = iVar18 + 8;
            lVar15 = lVar15 + -8;
            puVar13 = puVar13 + 8;
            if (lVar15 == 0) goto joined_r0x0109cac4;
          } while( true );
        }
      }
      do {
        puVar14 = puVar13 + 1;
        *puVar13 = uVar16;
        uVar12 = uVar12 - 1;
        uVar3 = uVar16 + 1;
        uVar4 = uVar12;
joined_r0x0109cac4:
        uVar16 = uVar3;
        puVar13 = puVar14;
      } while (uVar4 != 0);
      puVar2 = puVar2 + (ulong)bVar5 + 1;
      param_2 = param_2 + 4;
    }
    *puVar2 = 0;
  }
  else {
    puVar11 = (uint *)0x0;
  }
  return puVar11;
}

