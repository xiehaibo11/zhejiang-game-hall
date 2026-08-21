
void FUN_010fcbec(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  
  if ((0 < param_5) && (uVar2 = *(uint *)(param_1 + 0x88), uVar2 != 0)) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x288) + 0x30);
    do {
                    /* catch() { ... } // from try @ 010fcc4c with catch @ 010fcc04
                       catch() { ... } // from try @ 010fccec with catch @ 010fcc04 */
      lVar8 = (ulong)param_3 * 8;
      param_3 = param_3 + 1;
      pbVar5 = *(byte **)(*param_2 + lVar8);
      pbVar6 = *(byte **)(param_2[1] + lVar8);
      pbVar7 = *(byte **)(param_2[2] + lVar8);
      puVar9 = (undefined1 *)*param_4;
      uVar10 = (ulong)uVar2;
      do {
        bVar3 = *pbVar6;
        uVar10 = uVar10 - 1;
                    /* try { // try from 010fcc44 to 011fcc4b has its CatchHandler @ 010fcd30 */
                    /* try { // try from 010fcc4c to 011fccd3 has its CatchHandler @ 010fcc04 */
        *puVar9 = (char)((uint)(*(int *)(lVar4 + (ulong)(bVar3 | 0x100) * 8) +
                                *(int *)(lVar4 + (ulong)((uint)*pbVar5 + (uint)bVar3 + 0x80 & 0xff)
                                                 * 8) +
                               *(int *)(lVar4 + (ulong)((uint)bVar3 + (uint)*pbVar7 + 0x80 & 0xff |
                                                       0x200) * 8)) >> 0x10);
        pbVar5 = pbVar5 + 1;
        pbVar6 = pbVar6 + 1;
        pbVar7 = pbVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar10 != 0);
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}

