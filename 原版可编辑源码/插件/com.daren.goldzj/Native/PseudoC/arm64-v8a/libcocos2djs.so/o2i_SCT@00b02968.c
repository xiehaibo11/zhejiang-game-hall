
uint * o2i_SCT(long *param_1,long *param_2,ulong param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *local_48;
  
                    /* try { // try from 00b0296c to 00c0297f has its CatchHandler @ 00b02990 */
                    /* try { // try from 00b02980 to 00c02a9b has its CatchHandler @ 00b02028 */
                    /* catch() { ... } // from try @ 00b0296c with catch @ 00b02990 */
                    /* catch() { ... } // from try @ 00b028a4 with catch @ 00b02994 */
                    /* catch() { ... } // from try @ 00b0285c with catch @ 00b02998 */
  if (param_3 - 1 < 0xffff) {
                    /* catch() { ... } // from try @ 00b02214 with catch @ 00b029c0 */
    puVar7 = (uint *)SCT_new();
                    /* catch() { ... } // from try @ 00b02788 with catch @ 00b029c4 */
                    /* catch() { ... } // from try @ 00b022fc with catch @ 00b029c8 */
    if (puVar7 != (uint *)0x0) {
      pbVar8 = (byte *)*param_2;
                    /* catch() { ... } // from try @ 00b02390 with catch @ 00b029d0 */
                    /* catch() { ... } // from try @ 00b02264 with catch @ 00b029d4 */
      bVar2 = *pbVar8;
                    /* catch() { ... } // from try @ 00b02498 with catch @ 00b029d8 */
      *puVar7 = (uint)bVar2;
                    /* catch() { ... } // from try @ 00b022c4 with catch @ 00b029dc */
      local_48 = pbVar8;
      if (bVar2 == 0) {
        if (param_3 < 0x2b) {
          iVar3 = 99;
        }
        else {
                    /* catch() { ... } // from try @ 00b0229c with catch @ 00b02a48 */
          local_48 = pbVar8 + 1;
                    /* catch() { ... } // from try @ 00b022a4 with catch @ 00b02a4c */
                    /* catch() { ... } // from try @ 00b02274 with catch @ 00b02a50 */
                    /* catch() { ... } // from try @ 00b02234 with catch @ 00b02a54 */
                    /* catch() { ... } // from try @ 00b02480 with catch @ 00b02a58
                       catch() { ... } // from try @ 00b024e8 with catch @ 00b02a58 */
          lVar4 = CRYPTO_memdup(local_48,0x20,"crypto/ct/ct_oct.c",0x68);
          *(long *)(puVar7 + 6) = lVar4;
          if (lVar4 == 0) goto LAB_00b02b88;
          puVar7[8] = 0x20;
          puVar7[9] = 0;
          bVar2 = pbVar8[0x21];
          *(ulong *)(puVar7 + 10) = (ulong)bVar2 << 0x38;
          uVar6 = (ulong)bVar2 << 0x38 | (ulong)pbVar8[0x22] << 0x30;
          *(ulong *)(puVar7 + 10) = uVar6;
          uVar6 = uVar6 | (ulong)pbVar8[0x23] << 0x28;
          *(ulong *)(puVar7 + 10) = uVar6;
          uVar6 = uVar6 | (ulong)pbVar8[0x24] << 0x20;
                    /* try { // try from 00b02a9c to 00c02ac7 has its CatchHandler @ 00b02a9c
                       catch() { ... } // from try @ 00b02a9c with catch @ 00b02a9c
                       catch() { ... } // from try @ 00b02b28 with catch @ 00b02a9c */
          *(ulong *)(puVar7 + 10) = uVar6;
          uVar6 = uVar6 | (ulong)pbVar8[0x25] << 0x18;
          *(ulong *)(puVar7 + 10) = uVar6;
          uVar6 = uVar6 | (ulong)pbVar8[0x26] << 0x10;
          *(ulong *)(puVar7 + 10) = uVar6;
          uVar6 = uVar6 | (ulong)pbVar8[0x27] << 8;
          *(ulong *)(puVar7 + 10) = uVar6;
                    /* try { // try from 00b02ac8 to 00c02acb has its CatchHandler @ 00b02b60 */
                    /* try { // try from 00b02acc to 00c02ad3 has its CatchHandler @ 00b02b50 */
          *(ulong *)(puVar7 + 10) = uVar6 | pbVar8[0x28];
          pbVar1 = pbVar8 + 0x2b;
          uVar6 = (ulong)CONCAT11(pbVar8[0x29],pbVar8[0x2a]);
          lVar4 = (param_3 - 0x2b) - uVar6;
          local_48 = pbVar1;
                    /* try { // try from 00b02aec to 00c02b27 has its CatchHandler @ 00b02b28 */
          if (param_3 - 0x2b < uVar6) {
            iVar3 = 0x72;
          }
          else {
            if (uVar6 != 0) {
              lVar5 = CRYPTO_memdup(pbVar1,uVar6,"crypto/ct/ct_oct.c",0x76);
                    /* catch() { ... } // from try @ 00b02aec with catch @ 00b02b28
                       try { // try from 00b02b28 to 00c02b73 has its CatchHandler @ 00b02a9c */
              *(long *)(puVar7 + 0xc) = lVar5;
              if (lVar5 == 0) goto LAB_00b02b88;
            }
            local_48 = pbVar1 + uVar6;
            *(ulong *)(puVar7 + 0xe) = uVar6;
            iVar3 = o2i_SCT_signature(puVar7,&local_48,lVar4);
                    /* catch() { ... } // from try @ 00b02acc with catch @ 00b02b50 */
            if (0 < iVar3) {
                    /* catch() { ... } // from try @ 00b02ac8 with catch @ 00b02b60 */
              *param_2 = (long)(local_48 + (lVar4 - iVar3));
              goto joined_r0x00b02b64;
            }
                    /* try { // try from 00b02b74 to 00c02ce7 has its CatchHandler @ 00b02b74
                       catch() { ... } // from try @ 00b02b74 with catch @ 00b02b74
                       catch() { ... } // from try @ 00b02d84 with catch @ 00b02b74 */
            iVar3 = 0x80;
          }
        }
        ERR_put_error(0x32,0x6e,0x68,"crypto/ct/ct_oct.c",iVar3);
      }
      else {
                    /* catch() { ... } // from try @ 00b02364 with catch @ 00b029e0
                       catch() { ... } // from try @ 00b02388 with catch @ 00b029e0 */
        lVar4 = CRYPTO_memdup(pbVar8,param_3,"crypto/ct/ct_oct.c",0x87);
        *(long *)(puVar7 + 2) = lVar4;
        if (lVar4 != 0) {
          *(ulong *)(puVar7 + 4) = param_3;
          *param_2 = (long)(pbVar8 + param_3);
joined_r0x00b02b64:
          if (param_1 == (long *)0x0) {
            return puVar7;
          }
          SCT_free(*param_1);
          *param_1 = (long)puVar7;
          return puVar7;
        }
      }
    }
  }
  else {
                    /* catch() { ... } // from try @ 00b02878 with catch @ 00b0299c */
                    /* catch() { ... } // from try @ 00b02714 with catch @ 00b029a0 */
                    /* catch() { ... } // from try @ 00b02204 with catch @ 00b029a4 */
                    /* catch() { ... } // from try @ 00b027b4 with catch @ 00b029a8 */
                    /* catch() { ... } // from try @ 00b02168 with catch @ 00b029ac */
                    /* catch() { ... } // from try @ 00b0210c with catch @ 00b029b0 */
                    /* catch() { ... } // from try @ 00b021c8 with catch @ 00b029b4 */
    ERR_put_error(0x32,0x6e,0x68,"crypto/ct/ct_oct.c",0x4c);
                    /* catch() { ... } // from try @ 00b028e0 with catch @ 00b029b8 */
    puVar7 = (uint *)0x0;
                    /* catch() { ... } // from try @ 00b027c4 with catch @ 00b029bc
                       catch() { ... } // from try @ 00b02868 with catch @ 00b029bc
                       catch() { ... } // from try @ 00b028b0 with catch @ 00b029bc */
  }
LAB_00b02b88:
  SCT_free(puVar7);
  return (uint *)0x0;
}

