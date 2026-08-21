
void FUN_010ce440(uint *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  
  bVar4 = *(byte *)((long)param_1 + 0x11);
  if ((7 < bVar4) && (bVar5 = (byte)param_1[4], (bVar5 >> 1 & 1) == 0)) {
    uVar3 = *param_1;
    uVar7 = (ulong)uVar3;
    if (bVar5 == 0) {
      if (bVar4 == 8) {
        if (uVar3 != 0) {
          puVar10 = (undefined1 *)(param_2 + uVar7 * 3 + -1);
          uVar8 = uVar7;
          do {
                    /* try { // try from 010ce4d4 to 011ce4db has its CatchHandler @ 010ce540 */
            lVar2 = param_2 + uVar8;
                    /* try { // try from 010ce4dc to 011ce55b has its CatchHandler @ 010ce4a0 */
            uVar8 = uVar8 - 1;
            *puVar10 = *(undefined1 *)(lVar2 + -1);
            puVar10[-1] = *(undefined1 *)(lVar2 + -1);
            puVar10[-2] = *(undefined1 *)(lVar2 + -1);
            puVar10 = puVar10 + -3;
          } while ((int)uVar8 != 0);
        }
      }
      else if (uVar3 != 0) {
                    /* try { // try from 010ce56c to 011ce5db has its CatchHandler @ 010ce56c
                       catch() { ... } // from try @ 010ce56c with catch @ 010ce56c
                       catch() { ... } // from try @ 010ce5e0 with catch @ 010ce56c */
        puVar9 = (undefined1 *)(param_2 + uVar7 * 2 + -1);
        puVar10 = puVar9 + uVar7 * 4;
        uVar8 = uVar7;
        do {
          uVar3 = (int)uVar8 - 1;
          uVar8 = (ulong)uVar3;
          *puVar10 = *puVar9;
          puVar10[-1] = puVar9[-1];
          puVar10[-2] = *puVar9;
          puVar10[-3] = puVar9[-1];
          puVar10[-4] = *puVar9;
          puVar1 = puVar9 + -1;
          puVar9 = puVar9 + -2;
          puVar10[-5] = *puVar1;
          puVar10 = puVar10 + -6;
        } while (uVar3 != 0);
      }
    }
    else if (bVar5 == 4) {
      if (bVar4 == 8) {
        if (uVar3 != 0) {
          puVar9 = (undefined1 *)(param_2 + uVar7 * 2 + -1);
          puVar10 = puVar9 + uVar7 * 2;
          uVar8 = uVar7;
          do {
            uVar3 = (int)uVar8 - 1;
            uVar8 = (ulong)uVar3;
            *puVar10 = *puVar9;
            puVar10[-1] = puVar9[-1];
            puVar10[-2] = puVar9[-1];
                    /* catch() { ... } // from try @ 010ce4dc with catch @ 010ce4a0 */
            puVar1 = puVar9 + -1;
            puVar9 = puVar9 + -2;
            puVar10[-3] = *puVar1;
            puVar10 = puVar10 + -4;
          } while (uVar3 != 0);
        }
      }
      else if (uVar3 != 0) {
        puVar9 = (undefined1 *)(param_2 + uVar7 * 4 + -1);
        puVar10 = puVar9 + uVar7 * 4;
        uVar8 = uVar7;
        do {
          uVar3 = (int)uVar8 - 1;
          uVar8 = (ulong)uVar3;
          *puVar10 = *puVar9;
          puVar10[-1] = puVar9[-1];
          puVar10[-2] = puVar9[-2];
          puVar10[-3] = puVar9[-3];
          puVar10[-4] = puVar9[-2];
                    /* catch() { ... } // from try @ 010ce4d4 with catch @ 010ce540 */
          puVar10[-5] = puVar9[-3];
          puVar10[-6] = puVar9[-2];
          puVar1 = puVar9 + -3;
          puVar9 = puVar9 + -4;
          puVar10[-7] = *puVar1;
          puVar10 = puVar10 + -8;
        } while (uVar3 != 0);
      }
    }
    cVar6 = *(char *)((long)param_1 + 0x12);
    *(char *)((long)param_1 + 0x12) = cVar6 + '\x02';
    bVar4 = *(char *)((long)param_1 + 0x11) * (cVar6 + '\x02');
    *(byte *)(param_1 + 4) = (byte)param_1[4] | 2;
                    /* try { // try from 010ce5dc to 011ce5df has its CatchHandler @ 010ce608 */
                    /* try { // try from 010ce5e0 to 011ce6ef has its CatchHandler @ 010ce56c */
    *(byte *)((long)param_1 + 0x13) = bVar4;
    if ((bVar4 & 0xf8) < 8) {
      uVar7 = uVar7 * bVar4 + 7 >> 3;
    }
    else {
      uVar7 = (bVar4 >> 3) * uVar7;
    }
                    /* catch() { ... } // from try @ 010ce5dc with catch @ 010ce608 */
    *(ulong *)(param_1 + 2) = uVar7;
  }
  return;
}

