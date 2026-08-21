
ulong FUN_0109ae48(long param_1,long param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint *puVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar4 = *(long *)(param_1 + 0x18);
  uVar5 = 0;
  uVar6 = (*(uint *)(lVar4 + 6) & 0xff00ff00) >> 8 | (*(uint *)(lVar4 + 6) & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  do {
    uVar7 = uVar6;
    if (uVar7 <= uVar5) {
                    /* catch() { ... } // from try @ 0109a92c with catch @ 0109af5c */
      return 0;
    }
    uVar6 = uVar5 + uVar7 >> 1;
    pbVar1 = (byte *)(lVar4 + 10 + (ulong)(uVar6 * 0xb));
                    /* catch() { ... } // from try @ 0109adfc with catch @ 0109ae94 */
                    /* catch() { ... } // from try @ 0109ad70 with catch @ 0109ae98 */
    uVar9 = (uint)*pbVar1 << 0x10 | (uint)pbVar1[1] << 8 | (uint)pbVar1[2];
                    /* catch() { ... } // from try @ 0109ac84 with catch @ 0109ae9c */
  } while ((param_4 < uVar9) || (uVar5 = uVar6 + 1, uVar6 = uVar7, uVar9 < param_4));
                    /* catch() { ... } // from try @ 0109ac48 with catch @ 0109aeb0 */
                    /* catch() { ... } // from try @ 0109ab24 with catch @ 0109aec4 */
                    /* catch() { ... } // from try @ 0109ac54 with catch @ 0109aec8 */
                    /* catch() { ... } // from try @ 0109aad4 with catch @ 0109aecc */
                    /* catch() { ... } // from try @ 0109aac4 with catch @ 0109aed0 */
                    /* catch() { ... } // from try @ 0109add8 with catch @ 0109aed4
                       catch() { ... } // from try @ 0109ae08 with catch @ 0109aed4 */
                    /* catch() { ... } // from try @ 0109ad50 with catch @ 0109aed8
                       catch() { ... } // from try @ 0109ad7c with catch @ 0109aed8 */
  uVar8 = (ulong)pbVar1[3] << 0x18 | (ulong)pbVar1[4] << 0x10 | (ulong)pbVar1[5] << 8 |
          (ulong)pbVar1[6];
                    /* catch() { ... } // from try @ 0109ac90 with catch @ 0109aedc
                       catch() { ... } // from try @ 0109ad28 with catch @ 0109aedc */
  if (uVar8 != 0) {
                    /* catch() { ... } // from try @ 0109aaa4 with catch @ 0109aee0 */
    puVar2 = (uint *)(lVar4 + uVar8);
    uVar6 = *puVar2;
    uVar5 = 0;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
                    /* catch() { ... } // from try @ 0109aa48 with catch @ 0109af00 */
    while (uVar7 = uVar6, uVar5 < uVar7) {
      uVar6 = uVar7 + uVar5 >> 1;
      pbVar3 = (byte *)((long)puVar2 + (ulong)(uVar6 << 2) + 4);
      uVar9 = (uint)*pbVar3 << 0x10 | (uint)pbVar3[1] << 8 | (uint)pbVar3[2];
                    /* catch() { ... } // from try @ 0109aa38 with catch @ 0109af40 */
                    /* catch() { ... } // from try @ 0109aaac with catch @ 0109af44
                       catch() { ... } // from try @ 0109aaf8 with catch @ 0109af44 */
      if ((uVar9 <= param_3) && (uVar5 = uVar6 + 1, uVar6 = uVar7, param_3 <= uVar9 + pbVar3[3])) {
                    /* catch() { ... } // from try @ 0109aa84 with catch @ 0109af48 */
                    /* catch() { ... } // from try @ 0109a93c with catch @ 0109af4c */
                    /* WARNING: Could not recover jumptable at 0x0109af58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar8 = (**(code **)(*(long *)(param_2 + 0x10) + 0x18))(param_2,param_3);
        return uVar8;
      }
    }
  }
                    /* catch() { ... } // from try @ 0109aa74 with catch @ 0109af6c */
                    /* catch() { ... } // from try @ 0109ab30 with catch @ 0109af70 */
  uVar8 = (ulong)pbVar1[7] << 0x18 | (ulong)pbVar1[8] << 0x10 | (ulong)pbVar1[9] << 8 |
          (ulong)pbVar1[10];
                    /* catch() { ... } // from try @ 0109a95c with catch @ 0109af74
                       catch() { ... } // from try @ 0109aa64 with catch @ 0109af74 */
  if (uVar8 == 0) {
    return 0;
  }
  puVar2 = (uint *)(lVar4 + uVar8);
  uVar5 = *puVar2;
  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
  if (uVar5 != 0) {
    uVar6 = 0;
    while( true ) {
      while( true ) {
        uVar7 = uVar6 + uVar5 >> 1;
        pbVar1 = (byte *)((long)puVar2 + (ulong)(uVar7 * 5) + 4);
        uVar9 = (uint)*pbVar1 << 0x10 | (uint)pbVar1[1] << 8 | (uint)pbVar1[2];
        if (uVar9 <= param_3) break;
        uVar5 = uVar7;
        if (uVar7 <= uVar6) {
          return 0;
        }
      }
      if (param_3 <= uVar9) break;
      uVar6 = uVar7 + 1;
      if (uVar5 <= uVar6) {
        return 0;
      }
    }
    return (ulong)CONCAT11(pbVar1[3],pbVar1[4]);
  }
  return 0;
}

