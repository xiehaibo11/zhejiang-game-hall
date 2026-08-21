
undefined8 mapping_info_unpack(uint *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  lVar11 = *(long *)(param_2 + 0x30);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
                    /* try { // try from 00eba1f0 to 00fba1fb has its CatchHandler @ 00eba214 */
  uVar9 = 1;
  lVar6 = oggpack_read(param_3,1);
  if (lVar6 != 0) {
    iVar5 = oggpack_read(param_3,4);
    uVar9 = iVar5 + 1;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eba1f0 with catch @ 00eba214
                        */
  *param_1 = uVar9;
  lVar6 = oggpack_read(param_3,1);
  if (lVar6 != 0) {
                    /* try { // try from 00eba22c to 00fba22f has its CatchHandler @ 00eba264 */
    iVar5 = oggpack_read(param_3,8);
                    /* try { // try from 00eba230 to 00fba277 has its CatchHandler @ 00eba178 */
    uVar9 = iVar5 + 1;
    param_1[6] = uVar9;
    pvVar7 = malloc(-(ulong)(uVar9 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar9 << 1);
    *(void **)(param_1 + 8) = pvVar7;
    if (0 < (int)uVar9) {
      iVar5 = *(int *)(param_2 + 4);
      lVar10 = 0;
      lVar6 = 0;
      do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eba22c with catch @ 00eba264
                        */
        iVar1 = 0;
        if (iVar5 + -1 != 0 && iVar5 != 0) {
          iVar1 = 0x20 - (int)LZCOUNT(iVar5 + -1);
        }
        bVar2 = oggpack_read(param_3,iVar1);
        *(byte *)(*(long *)(param_1 + 8) + lVar10) = bVar2;
        iVar1 = *(int *)(param_2 + 4) + -1;
        iVar5 = 0;
        if (iVar1 != 0 && *(int *)(param_2 + 4) != 0) {
          iVar5 = 0x20 - (int)LZCOUNT(iVar1);
        }
        bVar3 = oggpack_read(param_3,iVar5);
        *(byte *)(*(long *)(param_1 + 8) + lVar10 + 1) = bVar3;
                    /* try { // try from 00eba2c4 to 00fba2c7 has its CatchHandler @ 00eba300 */
        if ((((uint)bVar2 == (uint)bVar3) ||
            (iVar5 = *(int *)(param_2 + 4), iVar5 <= (int)(uint)bVar2)) ||
           (iVar5 <= (int)(uint)bVar3)) goto LAB_00eba300;
        lVar6 = lVar6 + 1;
        lVar10 = lVar10 + 2;
      } while (lVar6 < (int)param_1[6]);
    }
  }
  lVar6 = oggpack_read(param_3,2);
  if (lVar6 < 1) {
    uVar12 = (ulong)*param_1;
    if (1 < (int)*param_1) {
      iVar5 = *(int *)(param_2 + 4);
      pvVar7 = malloc((long)iVar5);
      *(void **)(param_1 + 2) = pvVar7;
      if (0 < iVar5) {
        lVar6 = 0;
        do {
          uVar4 = oggpack_read(param_3,4);
          *(undefined1 *)(*(long *)(param_1 + 2) + lVar6) = uVar4;
          uVar12 = (ulong)*param_1;
          if ((int)*param_1 <= (int)(uint)*(byte *)(*(long *)(param_1 + 2) + lVar6))
          goto LAB_00eba300;
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(param_2 + 4));
      }
    }
    pvVar7 = malloc(-(uVar12 >> 0x1f) & 0xfffffffe00000000 | uVar12 << 1);
    *(void **)(param_1 + 4) = pvVar7;
    if (0 < (int)uVar12) {
      lVar10 = 0;
      lVar6 = 0;
      do {
        oggpack_read(param_3,8);
        bVar2 = oggpack_read(param_3,8);
        *(byte *)(*(long *)(param_1 + 4) + lVar10) = bVar2;
        if (*(int *)(lVar11 + 0x18) <= (int)(uint)bVar2) goto LAB_00eba300;
        bVar2 = oggpack_read(param_3,8);
        *(byte *)(*(long *)(param_1 + 4) + lVar10 + 1) = bVar2;
        if (*(int *)(lVar11 + 0x1c) <= (int)(uint)bVar2) goto LAB_00eba300;
        lVar6 = lVar6 + 1;
        lVar10 = lVar10 + 2;
      } while (lVar6 < (int)*param_1);
    }
    uVar8 = 0;
  }
  else {
LAB_00eba300:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eba2c4 with catch @ 00eba300
                        */
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      free(*(void **)(param_1 + 2));
    }
    if (*(void **)(param_1 + 4) != (void *)0x0) {
      free(*(void **)(param_1 + 4));
    }
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      free(*(void **)(param_1 + 8));
    }
    uVar8 = 0xffffffff;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return uVar8;
}

