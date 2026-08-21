
undefined8 FUN_00a362e8(long *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
                    /* try { // try from 00a3630c to 00b3634f has its CatchHandler @ 00a36420 */
  puVar2 = (undefined4 *)(*(code *)PTR_calloc_01d1b760)(1,0x170);
  param_1[0xc3] = (long)puVar2;
  if (puVar2 == (undefined4 *)0x0) {
LAB_00a363fc:
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
                    /* try { // try from 00a36368 to 00b363a3 has its CatchHandler @ 00a3645c */
      lVar4 = (*(code *)PTR_calloc_01d1b760)(1,(long)(iVar1 + 4));
      *(long *)(puVar2 + 0x58) = lVar4;
      if (lVar4 == 0) goto LAB_00a363fc;
    }
    if (*(long *)(puVar2 + 0x5a) == 0) {
      lVar4 = (*(code *)PTR_calloc_01d1b760)(1,(long)(iVar1 + 4));
      *(long *)(puVar2 + 0x5a) = lVar4;
      if (lVar4 == 0) goto LAB_00a363fc;
    }
                    /* try { // try from 00a363a4 to 00b364b3 has its CatchHandler @ 00a36044 */
    FUN_00a11300(param_1,1);
    *(long **)(puVar2 + 4) = param_1;
    lVar4 = param_1[0x4c];
    *puVar2 = 0;
    puVar2[2] = 0xffffff9c;
    puVar2[0x55] = 0x200;
    puVar2[6] = (int)lVar4;
    puVar2[0x56] = iVar1;
    *(short *)(puVar2 + 0x12) = (short)*(undefined4 *)(param_1[0xc] + 4);
    FUN_00a36cbc(puVar2);
    if (*(char *)((long)param_1 + 0x3d3) == '\0') {
                    /* catch() { ... } // from try @ 00a36208 with catch @ 00a3641c */
                    /* catch() { ... } // from try @ 00a3621c with catch @ 00a36420
                       catch() { ... } // from try @ 00a3630c with catch @ 00a36420 */
                    /* catch() { ... } // from try @ 00a36124 with catch @ 00a36424 */
      iVar1 = bind(puVar2[6],(sockaddr *)(puVar2 + 0x12),*(socklen_t *)(param_1[0xc] + 0x10));
                    /* catch() { ... } // from try @ 00a361f0 with catch @ 00a36428
                       catch() { ... } // from try @ 00a362c4 with catch @ 00a36428 */
      if (iVar1 != 0) {
                    /* catch() { ... } // from try @ 00a36118 with catch @ 00a3642c
                       catch() { ... } // from try @ 00a3627c with catch @ 00a3642c */
        lVar4 = *param_1;
        puVar2 = (undefined4 *)__errno();
        uVar3 = FUN_00a155d4(param_1,*puVar2);
                    /* catch() { ... } // from try @ 00a360c8 with catch @ 00a36444 */
                    /* catch() { ... } // from try @ 00a360bc with catch @ 00a36448 */
                    /* catch() { ... } // from try @ 00a3609c with catch @ 00a3644c */
        FUN_00a23020(lVar4,"bind() failed; %s",uVar3);
        return 7;
      }
                    /* catch() { ... } // from try @ 00a360d4 with catch @ 00a3645c
                       catch() { ... } // from try @ 00a3619c with catch @ 00a3645c
                       catch() { ... } // from try @ 00a3625c with catch @ 00a3645c
                       catch() { ... } // from try @ 00a36368 with catch @ 00a3645c */
      *(undefined1 *)((long)param_1 + 0x3d3) = 1;
    }
    FUN_00a1b5fc(*param_1);
    uVar3 = 0;
    *param_2 = 1;
  }
  return uVar3;
}

