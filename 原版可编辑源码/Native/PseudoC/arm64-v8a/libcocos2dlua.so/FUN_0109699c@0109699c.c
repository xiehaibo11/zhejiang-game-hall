
int FUN_0109699c(byte *param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 *puVar11;
  byte *__s2;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int local_68;
  int local_64;
  
  puVar13 = *(undefined8 **)(param_3 + 4);
  uVar7 = 0;
  bVar2 = *param_1;
  pbVar9 = param_1;
  bVar1 = bVar2;
  while (bVar1 != 0) {
    pbVar9 = pbVar9 + 1;
    uVar7 = uVar7 * 0x1f + (ulong)(uint)bVar1;
    bVar1 = *pbVar9;
  }
  uVar10 = (ulong)param_3[1];
  uVar3 = 0;
  if (uVar10 != 0) {
    uVar3 = uVar7 / uVar10;
  }
  puVar14 = puVar13 + (uVar7 - uVar3 * uVar10);
  puVar15 = (undefined8 *)*puVar14;
  if (puVar15 != (undefined8 *)0x0) {
    do {
      if ((*(byte *)*puVar15 == bVar2) &&
         (iVar4 = strcmp((char *)*puVar15,(char *)param_1), iVar4 == 0)) {
        puVar15[1] = param_2;
        return 0;
      }
      puVar15 = puVar14 + -1;
      puVar14 = puVar13 + (uVar10 - 1);
      if (puVar13 <= puVar15) {
        puVar14 = puVar15;
      }
      puVar15 = (undefined8 *)*puVar14;
    } while (puVar15 != (undefined8 *)0x0);
  }
  local_68 = 0;
  puVar13 = (undefined8 *)ft_mem_alloc(param_4,0x10,&local_68);
  if (local_68 != 0) {
    return local_68;
  }
  *puVar14 = puVar13;
  *puVar13 = param_1;
  puVar13[1] = param_2;
  iVar4 = param_3[2];
  if (*param_3 <= iVar4) {
    iVar4 = param_3[1];
    puVar13 = *(undefined8 **)(param_3 + 4);
    iVar12 = iVar4 << 1;
    local_64 = 0;
    *param_3 = iVar12 / 3;
    param_3[1] = iVar12;
    uVar6 = ft_mem_realloc(param_4,8,0,(long)iVar12,0,&local_64);
    *(undefined8 *)(param_3 + 4) = uVar6;
    if (local_64 != 0) {
      return local_64;
    }
    if (0 < iVar4) {
      iVar12 = 0;
      puVar14 = puVar13;
      do {
        puVar15 = (undefined8 *)*puVar14;
        if (puVar15 != (undefined8 *)0x0) {
          __s2 = (byte *)*puVar15;
          puVar16 = *(undefined8 **)(param_3 + 4);
          uVar7 = 0;
          bVar2 = *__s2;
          pbVar9 = __s2;
          bVar1 = bVar2;
          while (bVar1 != 0) {
            pbVar9 = pbVar9 + 1;
            uVar7 = uVar7 * 0x1f + (ulong)(uint)bVar1;
            bVar1 = *pbVar9;
          }
          uVar10 = (ulong)param_3[1];
          uVar3 = 0;
          if (uVar10 != 0) {
            uVar3 = uVar7 / uVar10;
          }
          puVar11 = puVar16 + (uVar7 - uVar3 * uVar10);
          puVar8 = (undefined8 *)*puVar11;
          if (puVar8 != (undefined8 *)0x0) {
            do {
              if ((*(byte *)*puVar8 == bVar2) &&
                 (iVar5 = strcmp((char *)*puVar8,(char *)__s2), iVar5 == 0)) break;
                    /* catch() { ... } // from try @ 01096bc4 with catch @ 01096b8c */
              puVar8 = puVar11 + -1;
              puVar11 = puVar16 + (uVar10 - 1);
              if (puVar16 <= puVar8) {
                puVar11 = puVar8;
              }
              puVar8 = (undefined8 *)*puVar11;
            } while (puVar8 != (undefined8 *)0x0);
          }
          *puVar11 = puVar15;
        }
        iVar12 = iVar12 + 1;
        puVar14 = puVar14 + 1;
      } while (iVar12 != iVar4);
    }
                    /* try { // try from 01096bbc to 01196bc3 has its CatchHandler @ 01096be0 */
    ft_mem_free(param_4,puVar13);
                    /* try { // try from 01096bc4 to 01196bfb has its CatchHandler @ 01096b8c */
    if (local_64 != 0) {
      return local_64;
    }
    iVar4 = param_3[2];
  }
  param_3[2] = iVar4 + 1;
                    /* catch() { ... } // from try @ 01096bbc with catch @ 01096be0 */
  return 0;
}

