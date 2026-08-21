
undefined8 FT_Stroker_GetCounts(long param_1,int *param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 == 0) {
    iVar8 = 0;
    iVar7 = 0;
    uVar3 = 6;
    goto joined_r0x0106b984;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    iVar6 = 0;
    lVar5 = 0;
LAB_0106b994:
    iVar4 = (int)lVar5;
    *(undefined1 *)(param_1 + 0x98) = 1;
                    /* catch() { ... } // from try @ 0106b984 with catch @ 0106b99c */
    iVar8 = *(int *)(param_1 + 0xa0);
    if (iVar8 != 0) goto LAB_0106b924;
LAB_0106b9a4:
    iVar7 = 0;
    lVar5 = 0;
LAB_0106b9ac:
    iVar8 = (int)lVar5;
                    /* try { // try from 0106b9b0 to 0116b9d7 has its CatchHandler @ 0106b9b0
                       catch() { ... } // from try @ 0106b9b0 with catch @ 0106b9b0
                       catch() { ... } // from try @ 0106b9e0 with catch @ 0106b9b0 */
    *(undefined1 *)(param_1 + 200) = 1;
  }
  else {
                    /* catch() { ... } // from try @ 0106b8b4 with catch @ 0106b8d0 */
    lVar5 = 0;
    bVar2 = false;
    iVar6 = 0;
    do {
      bVar1 = *(byte *)(*(long *)(param_1 + 0x80) + lVar5);
      if ((bVar1 >> 2 & 1) == 0) {
                    /* try { // try from 0106b8e4 to 0116b90b has its CatchHandler @ 0106b8e4
                       catch() { ... } // from try @ 0106b8e4 with catch @ 0106b8e4
                       catch() { ... } // from try @ 0106b914 with catch @ 0106b8e4 */
        if (!bVar2) goto LAB_0106b914;
      }
      else {
        if (bVar2) goto LAB_0106b914;
        bVar2 = true;
      }
      lVar5 = lVar5 + 1;
      if ((bVar1 & 8) != 0) {
        bVar2 = false;
      }
      iVar6 = iVar6 + ((bVar1 & 8) >> 3);
                    /* try { // try from 0106b90c to 0116b913 has its CatchHandler @ 0106b928 */
    } while (*(int *)(param_1 + 0x70) != (int)lVar5);
    if (!bVar2) goto LAB_0106b994;
LAB_0106b914:
                    /* try { // try from 0106b914 to 0116b93b has its CatchHandler @ 0106b8e4 */
    iVar4 = 0;
    iVar6 = 0;
    iVar8 = *(int *)(param_1 + 0xa0);
    if (iVar8 == 0) goto LAB_0106b9a4;
LAB_0106b924:
                    /* catch() { ... } // from try @ 0106b90c with catch @ 0106b928 */
    lVar5 = 0;
    bVar2 = false;
    iVar7 = 0;
    do {
      bVar1 = *(byte *)(*(long *)(param_1 + 0xb0) + lVar5);
      if ((bVar1 >> 2 & 1) == 0) {
                    /* try { // try from 0106b93c to 0116b983 has its CatchHandler @ 0106b93c
                       catch() { ... } // from try @ 0106b93c with catch @ 0106b93c
                       catch() { ... } // from try @ 0106b988 with catch @ 0106b93c */
        if (!bVar2) goto LAB_0106b96c;
      }
      else {
        if (bVar2) goto LAB_0106b96c;
        bVar2 = true;
      }
      lVar5 = lVar5 + 1;
      if ((bVar1 & 8) != 0) {
        bVar2 = false;
      }
      iVar7 = iVar7 + ((bVar1 & 8) >> 3);
    } while (iVar8 != (int)lVar5);
    if (!bVar2) goto LAB_0106b9ac;
LAB_0106b96c:
    iVar8 = 0;
    iVar7 = 0;
  }
  uVar3 = 0;
  iVar8 = iVar8 + iVar4;
  iVar7 = iVar7 + iVar6;
joined_r0x0106b984:
                    /* try { // try from 0106b984 to 0116b987 has its CatchHandler @ 0106b99c */
  if (param_2 != (int *)0x0) {
    *param_2 = iVar8;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar7;
  }
  return uVar3;
}

