
undefined4 FT_Stroker_GetBorderCounts(long param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  
                    /* catch() { ... } // from try @ 0106b7a4 with catch @ 0106b7f0
                       catch() { ... } // from try @ 0106b7e8 with catch @ 0106b7f0
                       try { // try from 0106b7f0 to 0116b833 has its CatchHandler @ 0106b640 */
  uVar4 = 6;
                    /* catch() { ... } // from try @ 0106b6c8 with catch @ 0106b804
                       catch() { ... } // from try @ 0106b724 with catch @ 0106b804 */
  if ((param_1 == 0) || (1 < param_2)) {
joined_r0x0106b894:
    uVar5 = 0;
    iVar7 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 0106b6e8 with catch @ 0106b808 */
    iVar1 = *(int *)(param_1 + (ulong)param_2 * 0x30 + 0x70);
    if (iVar1 == 0) {
      iVar7 = 0;
      lVar6 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 0106b680 with catch @ 0106b820 */
      lVar6 = 0;
      bVar3 = false;
      iVar7 = 0;
      do {
                    /* try { // try from 0106b834 to 0116b85b has its CatchHandler @ 0106b834
                       catch() { ... } // from try @ 0106b834 with catch @ 0106b834
                       catch() { ... } // from try @ 0106b864 with catch @ 0106b834 */
        bVar2 = *(byte *)(*(long *)(param_1 + (ulong)param_2 * 0x30 + 0x80) + lVar6);
        if ((bVar2 >> 2 & 1) == 0) {
          if (!bVar3) goto LAB_0106b86c;
        }
        else {
          if (bVar3) goto LAB_0106b86c;
          bVar3 = true;
        }
        lVar6 = lVar6 + 1;
        if ((bVar2 & 8) != 0) {
          bVar3 = false;
        }
                    /* try { // try from 0106b85c to 0116b863 has its CatchHandler @ 0106b878 */
        iVar7 = iVar7 + ((bVar2 & 8) >> 3);
                    /* try { // try from 0106b864 to 0116b88b has its CatchHandler @ 0106b834 */
      } while (iVar1 != (int)lVar6);
      if (bVar3) {
LAB_0106b86c:
        uVar4 = 0;
        goto joined_r0x0106b894;
      }
    }
    uVar5 = (undefined4)lVar6;
    uVar4 = 0;
                    /* try { // try from 0106b8b4 to 0116b8bb has its CatchHandler @ 0106b8d0 */
    *(undefined1 *)(param_1 + (ulong)param_2 * 0x30 + 0x98) = 1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar5;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar7;
  }
                    /* try { // try from 0106b88c to 0116b8b3 has its CatchHandler @ 0106b88c
                       catch() { ... } // from try @ 0106b88c with catch @ 0106b88c
                       catch() { ... } // from try @ 0106b8bc with catch @ 0106b88c */
  return uVar4;
}

