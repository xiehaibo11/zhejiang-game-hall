
int ssl3_read_n(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  char *__src;
  void *__dest;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  void *__src_00;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  
  if (param_2 < 1) {
    return param_2;
  }
  lVar6 = *(long *)(param_1 + 0x3b8);
  if (lVar6 == 0) {
    iVar3 = ssl3_setup_read_buffer(param_1);
    if (iVar3 == 0) {
      return -1;
    }
    lVar6 = *(long *)(param_1 + 0x3b8);
  }
  iVar3 = *(int *)(param_1 + 0x3d4);
  uVar2 = ~((int)lVar6 + 4U);
  uVar10 = (ulong)uVar2 & 7;
  iVar9 = (int)uVar10;
  if (param_4 != 0) {
    iVar8 = *(int *)(param_1 + 0x10e0);
    __src_00 = *(void **)(param_1 + 0x10d8);
    goto LAB_00ac8c70;
  }
  if (iVar3 == 0) {
LAB_00ac8c58:
    *(int *)(param_1 + 0x3d0) = iVar9;
    iVar4 = iVar9;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x3d0);
    if ((((4 < iVar3) && ((uVar2 & 7) != 0)) && (__src = (char *)(lVar6 + iVar4), *__src == '\x17'))
       && (0x7f < CONCAT11(__src[3],__src[4]))) {
      memmove((void *)(lVar6 + uVar10),__src,(long)iVar3);
      lVar6 = *(long *)(param_1 + 0x3b8);
      goto LAB_00ac8c58;
    }
  }
  iVar8 = 0;
  __src_00 = (void *)(lVar6 + iVar4);
  *(void **)(param_1 + 0x10d8) = __src_00;
  *(undefined4 *)(param_1 + 0x10e0) = 0;
LAB_00ac8c70:
  __dest = (void *)(lVar6 + uVar10);
  if ((param_5 == 1) && (__src_00 != __dest)) {
    memmove(__dest,__src_00,(long)(iVar8 + iVar3));
    *(void **)(param_1 + 0x10d8) = __dest;
    *(int *)(param_1 + 0x3d0) = iVar9 + iVar8;
  }
  uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68);
  iVar9 = param_2;
  if ((uVar2 >> 3 & 1) != 0) {
    if ((param_4 != 0) && (iVar3 == 0)) {
      return 0;
    }
    iVar9 = iVar3;
    if (param_2 <= iVar3 || iVar3 < 1) {
      iVar9 = param_2;
    }
  }
  if (iVar9 <= iVar3) {
    *(int *)(param_1 + 0x3d4) = iVar3 - iVar9;
    *(int *)(param_1 + 0x10e0) = *(int *)(param_1 + 0x10e0) + iVar9;
    *(int *)(param_1 + 0x3d0) = *(int *)(param_1 + 0x3d0) + iVar9;
    return iVar9;
  }
  iVar4 = *(int *)(param_1 + 0x3c8) - *(int *)(param_1 + 0x3d0);
  if (iVar4 < iVar9) {
    ERR_put_error(0x14,0x95,0x44,"ssl/record/rec_layer_s3.c",0x117);
  }
  else {
    iVar7 = iVar9;
    if (*(int *)(param_1 + 0x3a8) != 0 || (uVar2 & 8) != 0) {
      iVar1 = iVar9;
      if (iVar9 <= param_3) {
        iVar1 = param_3;
      }
      iVar7 = iVar4;
      if (iVar1 <= iVar4) {
        iVar7 = iVar1;
      }
    }
    puVar5 = (undefined4 *)__errno();
    while( true ) {
      *puVar5 = 0;
      if (*(BIO **)(param_1 + 0x10) == (BIO *)0x0) break;
      *(undefined4 *)(param_1 + 0x28) = 3;
      iVar4 = BIO_read(*(BIO **)(param_1 + 0x10),(void *)((long)__dest + (long)iVar3 + (long)iVar8),
                       iVar7 - iVar3);
      if (iVar4 < 1) goto LAB_00ac8df0;
      iVar3 = iVar4 + iVar3;
                    /* try { // try from 00ac8d8c to 00bc8dd7 has its CatchHandler @ 00ac8d8c
                       catch() { ... } // from try @ 00ac8d8c with catch @ 00ac8d8c
                       catch() { ... } // from try @ 00ac8ddc with catch @ 00ac8d8c */
      iVar4 = iVar3;
      if (((uint)(iVar3 < iVar9) &
          (*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) & 8) >> 3) == 0) {
        iVar4 = iVar9;
      }
      iVar9 = iVar4;
      if (iVar4 <= iVar3) {
        *(int *)(param_1 + 0x3d4) = iVar3 - iVar4;
        *(int *)(param_1 + 0x3d0) = *(int *)(param_1 + 0x3d0) + iVar4;
        *(int *)(param_1 + 0x10e0) = *(int *)(param_1 + 0x10e0) + iVar4;
        *(undefined4 *)(param_1 + 0x28) = 1;
        return iVar4;
      }
    }
                    /* try { // try from 00ac8dd8 to 00bc8ddb has its CatchHandler @ 00ac8e10 */
                    /* try { // try from 00ac8ddc to 00bc8e23 has its CatchHandler @ 00ac8d8c */
    ERR_put_error(0x14,0x95,0xd3,"ssl/record/rec_layer_s3.c",0x132);
LAB_00ac8df0:
    *(int *)(param_1 + 0x3d4) = iVar3;
    if ((*(byte *)(param_1 + 0x1e8) >> 4 & 1) != 0) {
      if (iVar8 + iVar3 != 0) {
        return -1;
      }
                    /* catch() { ... } // from try @ 00ac8dd8 with catch @ 00ac8e10 */
      if ((*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) != 0) {
        return -1;
      }
      ssl3_release_read_buffer(param_1);
    }
  }
                    /* try { // try from 00ac8e24 to 00bc91ab has its CatchHandler @ 00ac8e24
                       catch() { ... } // from try @ 00ac8e24 with catch @ 00ac8e24
                       catch() { ... } // from try @ 00ac922c with catch @ 00ac8e24 */
  return -1;
}

