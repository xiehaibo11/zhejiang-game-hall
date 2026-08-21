
undefined8 FUN_00a4c014(long *param_1,ulong param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *pbVar5;
  
                    /* catch() { ... } // from try @ 00a4bf60 with catch @ 00a4c020 */
                    /* catch() { ... } // from try @ 00a4bfb4 with catch @ 00a4c030 */
                    /* catch() { ... } // from try @ 00a4bf68 with catch @ 00a4c034 */
  lVar1 = *param_1 + 0x8bb8;
  if ((param_2 & 1) == 0) {
    lVar1 = *param_1 + 0x8b78;
  }
  iVar2 = FUN_00a4a37c("Digest",param_3,6);
  if (iVar2 == 0) {
    return 0x3d;
  }
  pbVar5 = (byte *)(param_3 + 6);
  uVar4 = (uint)*pbVar5;
  if (*pbVar5 != 0) {
    do {
      iVar2 = isspace(uVar4);
      if (iVar2 == 0) break;
      pbVar5 = pbVar5 + 1;
      uVar4 = (uint)*pbVar5;
    } while (uVar4 != 0);
  }
  uVar3 = FUN_00a5b37c(pbVar5,lVar1);
  return uVar3;
}

