
int FUN_0108d3f8(long param_1,byte *param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  int local_44;
  
  pbVar9 = (byte *)(param_1 + 5);
  local_44 = 0;
  if (pbVar9 <= param_2) {
    bVar2 = *(byte *)(param_1 + 4);
    bVar3 = *(byte *)(param_1 + 3);
    uVar1 = *(int *)(param_3 + 0x11) + (uint)bVar2;
    if (*(uint *)((long)param_3 + 0x8c) < uVar1) {
      uVar1 = uVar1 + 3 & 0xfffffffc;
      uVar4 = ft_mem_realloc(*param_3,0x28,*(int *)(param_3 + 0x11),uVar1,param_3[0x12],&local_44);
      param_3[0x12] = uVar4;
      if (local_44 != 0) {
        return local_44;
      }
      *(uint *)((long)param_3 + 0x8c) = uVar1;
    }
    if (pbVar9 + ((ulong)(bVar3 & 1 | 8) + (ulong)(bVar3 >> 1 & 1) + (ulong)(bVar3 >> 2 & 1) +
                  (ulong)(bVar3 >> 3 & 1) + (ulong)(bVar3 >> 4 & 1)) * (ulong)bVar2 <= param_2) {
                    /* try { // try from 0108d4b4 to 0118d4bf has its CatchHandler @ 0108d5b8 */
      uVar1 = *(uint *)(param_3 + 0x11);
      uVar11 = (uint)bVar2;
      if (bVar2 != 0) {
        puVar5 = (uint *)(param_3[0x12] + (ulong)uVar1 * 0x28);
        uVar6 = uVar11;
        if ((bVar3 & 1) == 0) {
          do {
            *puVar5 = (uint)*pbVar9;
            if ((bVar3 & 2) == 0) {
              uVar7 = (uint)pbVar9[1];
              pbVar8 = pbVar9 + 2;
            }
            else {
              pbVar8 = pbVar9 + 3;
              uVar7 = (uint)CONCAT11(pbVar9[1],pbVar9[2]);
            }
            puVar5[1] = uVar7;
            puVar5[2] = (uint)*pbVar8;
            if ((bVar3 & 4) == 0) {
                    /* try { // try from 0108d51c to 0118d527 has its CatchHandler @ 0108d5b4 */
              pbVar9 = pbVar8 + 3;
              lVar10 = 2;
              uVar7 = (uint)pbVar8[1] << 8;
            }
            else {
              pbVar9 = pbVar8 + 4;
                    /* try { // try from 0108d53c to 0118d567 has its CatchHandler @ 0108d5bc */
              uVar7 = (uint)pbVar8[1] << 0x10 | (uint)pbVar8[2] << 8;
              lVar10 = 3;
            }
            puVar5[5] = uVar7 | pbVar8[lVar10];
            if ((bVar3 & 8) == 0) {
              pbVar8 = pbVar9 + 2;
              lVar10 = 1;
              uVar7 = (uint)*pbVar9 << 8;
            }
            else {
                    /* try { // try from 0108d568 to 0118d5a7 has its CatchHandler @ 0108d314 */
              pbVar8 = pbVar9 + 3;
              uVar7 = (uint)*pbVar9 << 0x10 | (uint)pbVar9[1] << 8;
              lVar10 = 2;
            }
            puVar5[6] = uVar7 | pbVar9[lVar10];
            if ((bVar3 & 0x10) == 0) {
              pbVar9 = pbVar8 + 1;
              uVar7 = (uint)*pbVar8;
            }
            else {
              pbVar9 = pbVar8 + 2;
                    /* try { // try from 0108d5a8 to 0118d5af has its CatchHandler @ 0108d5b0 */
              uVar7 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
            }
            puVar5[7] = uVar7;
                    /* catch() { ... } // from try @ 0108d3d4 with catch @ 0108d5b0
                       catch() { ... } // from try @ 0108d5a8 with catch @ 0108d5b0
                       try { // try from 0108d5b0 to 0118d5d7 has its CatchHandler @ 0108d314 */
            uVar6 = uVar6 - 1;
                    /* catch() { ... } // from try @ 0108d51c with catch @ 0108d5b4 */
            puVar5 = puVar5 + 10;
                    /* catch() { ... } // from try @ 0108d4b4 with catch @ 0108d5b8 */
          } while (uVar6 != 0);
        }
        else {
          do {
            *puVar5 = (uint)CONCAT11(*pbVar9,pbVar9[1]);
            if ((bVar3 & 2) == 0) {
              uVar7 = (uint)pbVar9[2];
                    /* try { // try from 0108d5d8 to 0118d65f has its CatchHandler @ 0108d5d8
                       catch() { ... } // from try @ 0108d5d8 with catch @ 0108d5d8
                       catch() { ... } // from try @ 0108d6e8 with catch @ 0108d5d8 */
              pbVar8 = pbVar9 + 3;
            }
            else {
              pbVar8 = pbVar9 + 4;
              uVar7 = (uint)CONCAT11(pbVar9[2],pbVar9[3]);
            }
            puVar5[1] = uVar7;
            puVar5[2] = (uint)*pbVar8;
            if ((bVar3 & 4) == 0) {
              pbVar9 = pbVar8 + 3;
              lVar10 = 2;
              uVar7 = (uint)pbVar8[1] << 8;
            }
            else {
              pbVar9 = pbVar8 + 4;
              uVar7 = (uint)pbVar8[1] << 0x10 | (uint)pbVar8[2] << 8;
              lVar10 = 3;
            }
            puVar5[5] = uVar7 | pbVar8[lVar10];
            if ((bVar3 & 8) == 0) {
              pbVar8 = pbVar9 + 2;
              lVar10 = 1;
              uVar7 = (uint)*pbVar9 << 8;
            }
            else {
              pbVar8 = pbVar9 + 3;
                    /* try { // try from 0108d660 to 0118d66f has its CatchHandler @ 0108d700 */
              uVar7 = (uint)*pbVar9 << 0x10 | (uint)pbVar9[1] << 8;
              lVar10 = 2;
            }
                    /* try { // try from 0108d670 to 0118d6e7 has its CatchHandler @ 0108d70c */
            puVar5[6] = uVar7 | pbVar9[lVar10];
            if ((bVar3 & 0x10) == 0) {
              pbVar9 = pbVar8 + 1;
              uVar7 = (uint)*pbVar8;
            }
            else {
              pbVar9 = pbVar8 + 2;
              uVar7 = (uint)CONCAT11(*pbVar8,pbVar8[1]);
            }
            puVar5[7] = uVar7;
            uVar6 = uVar6 - 1;
            puVar5 = puVar5 + 10;
          } while (uVar6 != 0);
        }
      }
      *(uint *)(param_3 + 0x11) = uVar1 + uVar11;
      return local_44;
    }
  }
  return 8;
}

