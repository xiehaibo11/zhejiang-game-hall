
undefined8 FUN_00a4ccd0(long *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = (undefined4 *)(*(code *)PTR_calloc_01769a18)(1,0x170);
  param_1[0xc3] = (long)puVar2;
  if (puVar2 == (undefined4 *)0x0) {
LAB_00a4cde4:
    uVar3 = 0x1b;
  }
  else {
    lVar4 = *(long *)(*param_1 + 0x378);
    if (lVar4 == 0) {
      lVar4 = 0x200;
    }
    else if (0xffb0 < (int)lVar4 - 8U) {
      return 0x47;
    }
    iVar1 = (int)lVar4;
    if (*(long *)(puVar2 + 0x58) == 0) {
      lVar4 = (*(code *)PTR_calloc_01769a18)(1,(long)(iVar1 + 4));
      *(long *)(puVar2 + 0x58) = lVar4;
      if (lVar4 == 0) goto LAB_00a4cde4;
    }
    if (*(long *)(puVar2 + 0x5a) == 0) {
                    /* try { // try from 00a4cd64 to 00b4cd9b has its CatchHandler @ 00a4cd64
                       catch() { ... } // from try @ 00a4cd64 with catch @ 00a4cd64
                       catch() { ... } // from try @ 00a4cdac with catch @ 00a4cd64 */
      lVar4 = (*(code *)PTR_calloc_01769a18)(1,(long)(iVar1 + 4));
      *(long *)(puVar2 + 0x5a) = lVar4;
      if (lVar4 == 0) goto LAB_00a4cde4;
    }
    FUN_00a26ce8(param_1,1);
    *(long **)(puVar2 + 4) = param_1;
    lVar4 = param_1[0x4c];
                    /* try { // try from 00a4cd9c to 00b4cdab has its CatchHandler @ 00a4ce10 */
    *puVar2 = 0;
    puVar2[2] = 0xffffff9c;
    puVar2[0x55] = 0x200;
                    /* try { // try from 00a4cdac to 00b4ce2b has its CatchHandler @ 00a4cd64 */
    puVar2[6] = (int)lVar4;
    puVar2[0x56] = iVar1;
    *(short *)(puVar2 + 0x12) = (short)*(undefined4 *)(param_1[0xc] + 4);
    FUN_00a4d6a4(puVar2);
    if (*(char *)((long)param_1 + 0x3d3) == '\0') {
      iVar1 = bind(puVar2[6],(sockaddr *)(puVar2 + 0x12),*(socklen_t *)(param_1[0xc] + 0x10));
                    /* catch() { ... } // from try @ 00a4cd9c with catch @ 00a4ce10 */
      if (iVar1 != 0) {
        lVar4 = *param_1;
        puVar2 = (undefined4 *)__errno();
        uVar3 = FUN_00a2afbc(param_1,*puVar2);
        FUN_00a38a08(lVar4,"bind() failed; %s",uVar3);
        return 7;
      }
      *(undefined1 *)((long)param_1 + 0x3d3) = 1;
    }
    FUN_00a30fe4(*param_1);
    uVar3 = 0;
    *param_2 = 1;
  }
  return uVar3;
}

