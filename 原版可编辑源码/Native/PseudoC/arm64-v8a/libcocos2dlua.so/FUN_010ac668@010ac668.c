
int FUN_010ac668(uint *param_1,int param_2,int param_3,undefined8 param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int local_64;
  int local_58;
  int local_54;
  
  if (param_3 < 0) {
    bVar4 = param_3 != -0x15;
    iVar10 = 3;
    if (bVar4) {
      param_3 = 0;
    }
    param_2 = param_3 + param_2;
    if (bVar4) {
      iVar10 = 1;
    }
    param_3 = 0;
  }
  else {
    iVar10 = 0;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = 0xffffffff;
  }
  uVar2 = *param_1;
  piVar6 = *(int **)(param_1 + 2);
  uVar9 = 0;
  piVar7 = piVar6;
  if (uVar2 != 0) {
    do {
      if ((*piVar7 == param_2) && (piVar7[1] == param_3)) goto LAB_010ac750;
      uVar9 = uVar9 + 1;
      piVar7 = piVar7 + 3;
    } while (uVar9 < uVar2);
  }
  uVar3 = param_1[1];
  uVar1 = uVar2 + 1;
  if ((uVar3 <= uVar1) && (local_64 = 0, uVar3 < uVar1)) {
    uVar2 = uVar2 + 8 & 0xfffffff8;
    piVar6 = (int *)ft_mem_realloc(param_4,0xc,uVar3,uVar2,piVar6,&local_64);
    *(int **)(param_1 + 2) = piVar6;
    if (local_64 != 0) {
      return local_64;
    }
    param_1[1] = uVar2;
  }
  *param_1 = uVar1;
  piVar6[(ulong)uVar1 * 3 + -3] = param_2;
  piVar6[(ulong)uVar1 * 3 + -2] = param_3;
  piVar6[(ulong)uVar1 * 3 + -1] = iVar10;
LAB_010ac750:
                    /* try { // try from 010ac750 to 011ac763 has its CatchHandler @ 010acb08 */
  if (param_1[4] == 0) {
    if (param_1[5] == 0) {
      local_58 = 0;
      puVar8 = (uint *)ft_mem_realloc(param_4,0x18,0,8,*(undefined8 *)(param_1 + 6),&local_58);
                    /* try { // try from 010ac878 to 011ac87f has its CatchHandler @ 010acadc */
      *(uint **)(param_1 + 6) = puVar8;
                    /* try { // try from 010ac880 to 011ac8d3 has its CatchHandler @ 010ac564 */
      if (local_58 != 0) {
        return local_58;
      }
      param_1[5] = 8;
    }
    else {
      puVar8 = *(uint **)(param_1 + 6);
    }
    *puVar8 = 0;
    puVar8[4] = 0;
    param_1[4] = 1;
  }
  else {
    puVar8 = (uint *)(*(long *)(param_1 + 6) + (ulong)param_1[4] * 0x18 + -0x18);
  }
  if (-1 < (int)uVar9) {
    if (*puVar8 <= uVar9) {
      uVar2 = uVar9 + 8 >> 3;
      local_54 = 0;
      uVar1 = puVar8[1] + 7 >> 3;
      if (uVar1 < uVar2) {
        uVar2 = uVar2 + 7 & 0x3ffffff8;
        uVar5 = ft_mem_realloc(param_4,1,uVar1,uVar2,*(undefined8 *)(puVar8 + 2),&local_54);
        *(undefined8 *)(puVar8 + 2) = uVar5;
        if (local_54 != 0) {
          return local_54;
        }
        puVar8[1] = uVar2 << 3;
      }
      *puVar8 = uVar9 + 1;
    }
    *(byte *)(*(long *)(puVar8 + 2) + (ulong)(uVar9 >> 3)) =
         (byte)(0x80 >> (ulong)(uVar9 & 7)) | *(byte *)(*(long *)(puVar8 + 2) + (ulong)(uVar9 >> 3))
    ;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar9;
  }
  return 0;
}

