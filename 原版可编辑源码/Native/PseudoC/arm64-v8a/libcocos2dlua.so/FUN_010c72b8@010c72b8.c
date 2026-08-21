
undefined4 FUN_010c72b8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
                    /* catch() { ... } // from try @ 010c7238 with catch @ 010c72c4 */
  puVar7 = (undefined8 *)*param_1;
  lVar1 = *(long *)*puVar7;
  lVar2 = ((long *)*puVar7)[1];
  png_set_keep_unknown_chunks(lVar1,1,0,0xffffffff);
                    /* catch() { ... } // from try @ 010c71f0 with catch @ 010c7308 */
  png_set_keep_unknown_chunks(lVar1,0,&DAT_01474716,6);
  iVar4 = 0;
  if (*(int *)(param_1 + 9) == 0) {
    iVar4 = png_set_interlace_handling(lVar1);
  }
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 0x168) >> 6 & 1) == 0) {
      png_read_start_row(lVar1);
      png_read_transform_info(lVar1,lVar2);
    }
    else {
      png_app_error(lVar1,"png_read_update_info/png_start_read_image: duplicate call");
    }
  }
  switch(*(undefined4 *)(param_1 + 9)) {
  case 0:
                    /* try { // try from 010c73bc to 011c74ab has its CatchHandler @ 010c73bc
                       catch() { ... } // from try @ 010c73bc with catch @ 010c73bc
                       catch() { ... } // from try @ 010c75c0 with catch @ 010c73bc */
    if (((*(char *)(lVar2 + 0x25) == '\x03') || (*(char *)(lVar2 + 0x25) == '\0')) &&
       (*(char *)(lVar2 + 0x24) == '\b')) {
LAB_010c7438:
      lVar9 = (long)*(int *)(param_1 + 2);
      lVar8 = param_1[1];
      if (*(int *)(param_1 + 2) < 0) {
        lVar8 = lVar8 - lVar9 * (ulong)(*(int *)(puVar7 + 2) - 1);
        param_1[6] = lVar8;
        param_1[7] = lVar9;
      }
      else {
        param_1[6] = lVar8;
        param_1[7] = lVar9;
      }
      if (iVar4 == 0) {
                    /* try { // try from 010c74ac to 011c74b7 has its CatchHandler @ 010c776c */
        uVar6 = png_get_rowbytes(lVar1,lVar2);
        uVar6 = png_malloc(lVar1,uVar6);
        param_1[5] = uVar6;
        uVar5 = png_safe_execute(puVar7,FUN_010c8570,param_1);
        param_1[5] = 0;
        png_free(lVar1,uVar6);
      }
      else {
        if (0 < iVar4) {
          while( true ) {
            for (iVar3 = *(int *)(puVar7 + 2); iVar3 != 0; iVar3 = iVar3 + -1) {
              png_read_row(lVar1,lVar8,0);
              lVar8 = lVar8 + lVar9;
            }
            if (iVar4 < 2) break;
            lVar8 = param_1[6];
            iVar4 = iVar4 + -1;
          }
        }
        uVar5 = 1;
      }
      return uVar5;
    }
    break;
  case 1:
  case 2:
    if (((*(char *)(lVar2 + 0x25) == '\x04') && (*(char *)(lVar2 + 0x24) == '\b')) &&
       ((*(int *)(lVar1 + 0x2ec) == 220000 && (*(int *)((long)puVar7 + 0x1c) == 0x100))))
    goto LAB_010c7438;
    break;
  case 3:
    if (((*(char *)(lVar2 + 0x25) == '\x02') && (*(char *)(lVar2 + 0x24) == '\b')) &&
       ((*(int *)(lVar1 + 0x2ec) == 220000 && (*(int *)((long)puVar7 + 0x1c) == 0xd8))))
    goto LAB_010c7438;
    break;
  case 4:
    if ((((*(char *)(lVar2 + 0x25) == '\x06') && (*(char *)(lVar2 + 0x24) == '\b')) &&
        (*(int *)(lVar1 + 0x2ec) == 220000)) && (*(int *)((long)puVar7 + 0x1c) == 0xf4))
    goto LAB_010c7438;
  }
                    /* WARNING: Subroutine does not return */
  png_error(lVar1,"bad color-map processing (internal error)");
}

