
void FUN_010ef9b8(long param_1,long param_2,long param_3,uint param_4)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  
                    /* try { // try from 010ef9dc to 011ef9df has its CatchHandler @ 010efa7c */
                    /* try { // try from 010ef9e0 to 011ef9e7 has its CatchHandler @ 010efa6c */
  if ((0 < (int)param_4) && (iVar2 = *(int *)(param_1 + 0x88), iVar2 != 0)) {
    uVar4 = 0;
                    /* try { // try from 010efa00 to 011efa3b has its CatchHandler @ 010efa3c */
    lVar5 = *(long *)(*(long *)(param_1 + 0x290) + 0x30);
    do {
      pbVar6 = *(byte **)(param_2 + uVar4 * 8);
      pcVar7 = *(char **)(param_3 + uVar4 * 8);
      iVar8 = iVar2;
      do {
                    /* catch() { ... } // from try @ 010efa00 with catch @ 010efa3c
                       try { // try from 010efa3c to 011efa8f has its CatchHandler @ 010ef9b0 */
        psVar1 = (short *)(*(long *)(lVar5 + (ulong)(*pbVar6 >> 3) * 8) +
                           (ulong)(pbVar6[1] >> 2) * 0x40 + (ulong)(pbVar6[2] >> 3) * 2);
        sVar3 = *psVar1;
        if (sVar3 == 0) {
          FUN_010eff18(param_1);
          sVar3 = *psVar1;
        }
        iVar8 = iVar8 + -1;
        *pcVar7 = (char)sVar3 + -1;
        pbVar6 = pbVar6 + 3;
        pcVar7 = pcVar7 + 1;
      } while (iVar8 != 0);
      uVar4 = uVar4 + 1;
                    /* catch() { ... } // from try @ 010ef9e0 with catch @ 010efa6c */
    } while (uVar4 != param_4);
  }
                    /* catch() { ... } // from try @ 010ef9dc with catch @ 010efa7c */
                    /* try { // try from 010efa90 to 011efc9b has its CatchHandler @ 010efa90
                       catch() { ... } // from try @ 010efa90 with catch @ 010efa90
                       catch() { ... } // from try @ 010efca4 with catch @ 010efa90
                       catch() { ... } // from try @ 010efd74 with catch @ 010efa90 */
  return;
}

