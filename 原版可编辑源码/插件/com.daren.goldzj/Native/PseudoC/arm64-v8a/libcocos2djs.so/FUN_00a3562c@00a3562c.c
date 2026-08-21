
undefined8 FUN_00a3562c(long *param_1,ulong param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *pbVar5;
  
  lVar1 = *param_1 + 0x8bb8;
  if ((param_2 & 1) == 0) {
    lVar1 = *param_1 + 0x8b78;
  }
  iVar2 = FUN_00a33994("Digest",param_3,6);
  if (iVar2 == 0) {
                    /* try { // try from 00a356a8 to 00b356b3 has its CatchHandler @ 00a35974 */
    return 0x3d;
  }
  pbVar5 = (byte *)(param_3 + 6);
  uVar4 = (uint)*pbVar5;
  if (*pbVar5 != 0) {
    do {
                    /* try { // try from 00a3567c to 00b35693 has its CatchHandler @ 00a35a04 */
      iVar2 = isspace(uVar4);
      if (iVar2 == 0) break;
      pbVar5 = pbVar5 + 1;
      uVar4 = (uint)*pbVar5;
    } while (uVar4 != 0);
  }
                    /* try { // try from 00a3569c to 00b356a7 has its CatchHandler @ 00a35978 */
  uVar3 = FUN_00a44994(pbVar5,lVar1);
  return uVar3;
}

