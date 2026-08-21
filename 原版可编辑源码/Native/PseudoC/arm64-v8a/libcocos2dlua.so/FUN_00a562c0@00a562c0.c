
undefined8 FUN_00a562c0(long *param_1,int param_2)

{
  char *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_c8 [136];
  
  if (((int)param_1[0x30] == 2) && (*(char *)((long)param_1 + (long)param_2 + 0x3d9) == '\0')) {
    pcVar1 = (char *)((long)param_1 + (long)param_2 + 0x3d9);
    uVar5 = FUN_00a2d674(param_1,param_2,pcVar1);
    if ((int)uVar5 != 0) {
      *(undefined1 *)((long)param_1 + 0x3b9) = 1;
      return uVar5;
    }
    if (*pcVar1 == '\0') {
      return 0;
    }
  }
  if ((*(char *)((long)param_1 + 0x3c9) == '\0') || (*(char *)((long)param_1 + 0x3be) == '\0')) {
    return 0;
  }
  lVar6 = *param_1;
  uVar5 = *(undefined8 *)(lVar6 + 0x218);
  memset(auStack_c8,0,0x88);
  *(undefined1 **)(lVar6 + 0x218) = auStack_c8;
  FUN_00a26ce8(param_1,0);
                    /* try { // try from 00a56334 to 00b56387 has its CatchHandler @ 00a56334
                       catch() { ... } // from try @ 00a56334 with catch @ 00a56334
                       catch() { ... } // from try @ 00a5642c with catch @ 00a56334
                       catch() { ... } // from try @ 00a5648c with catch @ 00a56334 */
  if (param_2 == 1) {
    lVar6 = param_1[0x1a];
    uVar4 = (uint)*(ushort *)(param_1 + 0x35);
  }
  else {
    plVar2 = param_1 + 0x18;
    if (*(char *)((long)param_1 + 0x3bb) != '\0') {
      plVar2 = param_1 + 0x1d;
    }
    lVar6 = *plVar2;
                    /* try { // try from 00a56388 to 00b563c3 has its CatchHandler @ 00a564cc */
    if (*(char *)((long)param_1 + 0x3bc) == '\0') {
      uVar4 = *(uint *)(param_1 + 0x34);
    }
    else {
      uVar4 = *(uint *)((long)param_1 + 0x1a4);
    }
  }
  uVar3 = FUN_00a563f8(param_1,param_2,lVar6,uVar4,0);
  *(undefined8 *)(*param_1 + 0x218) = uVar5;
  if ((int)uVar3 == 0) {
                    /* try { // try from 00a563d0 to 00b5642b has its CatchHandler @ 00a564d0 */
    (*(code *)PTR_free_01769a00)(param_1[0x84]);
    param_1[0x84] = 0;
    return 0;
  }
  return uVar3;
}

