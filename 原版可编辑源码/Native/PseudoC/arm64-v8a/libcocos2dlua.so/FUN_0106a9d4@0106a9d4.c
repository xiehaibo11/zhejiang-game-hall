
int FUN_0106a9d4(long *param_1,int param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint *puVar9;
  long lVar10;
  uint *puVar11;
  long *plVar12;
  uint uVar13;
  long local_80;
  long lStack_78;
  int local_64;
  
                    /* try { // try from 0106a9fc to 0116aa2b has its CatchHandler @ 0106abf0 */
  lVar10 = (long)param_2;
  lVar2 = FT_Angle_Diff(*param_1,param_1[1]);
  plVar8 = param_1 + (long)param_2 * 6 + 0x11;
  lVar6 = (long)param_2 * -0xb40000 + 0x5a0000;
  puVar9 = (uint *)(param_1 + (long)param_2 * 6 + 0xe);
  if (lVar2 < 0) {
    lVar2 = lVar2 + 1;
  }
                    /* try { // try from 0106aa34 to 0116aa4f has its CatchHandler @ 0106abec */
  if ((param_3 == 0) || ((char)*plVar8 == '\0')) {
LAB_0106aae4:
    FT_Vector_From_Polar(&local_80,param_1[0xd],param_1[1] + lVar6);
    local_80 = local_80 + param_1[2];
    lStack_78 = lStack_78 + param_1[3];
    *(char *)plVar8 = '\0';
    uVar5 = *puVar9;
  }
  else {
    lVar7 = param_1[0xd];
    lVar2 = lVar2 >> 1;
    uVar3 = FT_Tan(lVar2);
    lVar4 = FT_MulFix(lVar7,uVar3);
    lVar7 = -lVar4;
    if (-1 < lVar4) {
      lVar7 = lVar4;
    }
                    /* try { // try from 0106aa5c to 0116aa6b has its CatchHandler @ 0106abe8 */
    if (((lVar7 == 0) || (param_3 < lVar7)) || (param_1[4] < lVar7)) goto LAB_0106aae4;
    lVar7 = *param_1;
    uVar3 = FT_Cos(lVar2);
    uVar3 = FT_DivFix(param_1[0xd],uVar3);
    FT_Vector_From_Polar(&local_80,uVar3,lVar2 + lVar6 + lVar7);
    local_80 = local_80 + param_1[2];
    lStack_78 = lStack_78 + param_1[3];
                    /* try { // try from 0106aab0 to 0116aac7 has its CatchHandler @ 0106abf8 */
    if ((char)*plVar8 != '\0') {
      local_64 = 0;
      plVar12 = (long *)(param_1[lVar10 * 6 + 0xf] + (ulong)(*puVar9 - 1) * 0x10);
      plVar12[1] = lStack_78;
      *plVar12 = local_80;
      goto LAB_0106ac5c;
    }
                    /* try { // try from 0106ab6c to 0116ab83 has its CatchHandler @ 0106abe4 */
    uVar5 = *puVar9;
  }
  if (uVar5 != 0) {
                    /* try { // try from 0106ab2c to 0116ab3f has its CatchHandler @ 0106abe0 */
    if (((ulong)((*(long *)(param_1[lVar10 * 6 + 0xf] + (ulong)(uVar5 - 1) * 0x10) + 1) - local_80)
         < 3) && ((ulong)((*(long *)(param_1[lVar10 * 6 + 0xf] + (ulong)(uVar5 - 1) * 0x10 + 8) + 1)
                         - lStack_78) < 3)) {
      return 0;
    }
  }
  puVar11 = (uint *)((long)param_1 + lVar10 * 0x30 + 0x74);
  uVar1 = *puVar11;
                    /* try { // try from 0106ab84 to 0116ac2b has its CatchHandler @ 0106a998 */
  local_64 = 0;
  if (uVar1 < uVar5 + 1) {
    lVar6 = param_1[lVar10 * 6 + 0x12];
    uVar13 = uVar1;
    do {
      uVar13 = uVar13 + (uVar13 >> 1) + 0x10;
    } while (uVar13 < uVar5 + 1);
    plVar12 = param_1 + lVar10 * 6 + 0xf;
    lVar2 = ft_mem_realloc(lVar6,0x10,uVar1,uVar13,*plVar12,&local_64);
    *plVar12 = lVar2;
                    /* catch() { ... } // from try @ 0106ab2c with catch @ 0106abe0 */
    if (local_64 != 0) goto LAB_0106ac5c;
                    /* catch() { ... } // from try @ 0106ab6c with catch @ 0106abe4 */
                    /* catch() { ... } // from try @ 0106aa5c with catch @ 0106abe8 */
                    /* catch() { ... } // from try @ 0106aa34 with catch @ 0106abec */
                    /* catch() { ... } // from try @ 0106a9fc with catch @ 0106abf0 */
                    /* catch() { ... } // from try @ 0106aab0 with catch @ 0106abf8 */
    lVar6 = ft_mem_realloc(lVar6,1,uVar1,uVar13,param_1[lVar10 * 6 + 0x10],&local_64);
    param_1[lVar10 * 6 + 0x10] = lVar6;
    if (local_64 != 0) goto LAB_0106ac5c;
    *puVar11 = uVar13;
    uVar5 = *puVar9;
  }
  else {
                    /* try { // try from 0106ac2c to 0116ac8f has its CatchHandler @ 0106ac2c
                       catch() { ... } // from try @ 0106ac2c with catch @ 0106ac2c
                       catch() { ... } // from try @ 0106aecc with catch @ 0106ac2c */
    lVar6 = param_1[lVar10 * 6 + 0x10];
    plVar12 = param_1 + lVar10 * 6 + 0xf;
  }
  local_64 = 0;
  plVar12 = (long *)(*plVar12 + (ulong)uVar5 * 0x10);
  plVar12[1] = lStack_78;
  *plVar12 = local_80;
  *(undefined1 *)(lVar6 + (ulong)uVar5) = 1;
  *puVar9 = *puVar9 + 1;
LAB_0106ac5c:
  *(char *)plVar8 = '\0';
  return local_64;
}

