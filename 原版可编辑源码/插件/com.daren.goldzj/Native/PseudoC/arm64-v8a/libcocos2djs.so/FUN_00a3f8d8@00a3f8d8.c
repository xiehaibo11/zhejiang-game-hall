
undefined8 FUN_00a3f8d8(long *param_1,int param_2)

{
  char *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_c8 [136];
  
                    /* catch() { ... } // from try @ 00a3f820 with catch @ 00a3f8ec */
                    /* catch() { ... } // from try @ 00a3f838 with catch @ 00a3f904 */
                    /* catch() { ... } // from try @ 00a3f7f8 with catch @ 00a3f908 */
                    /* catch() { ... } // from try @ 00a3f840 with catch @ 00a3f90c */
  if (((int)param_1[0x30] == 2) && (*(char *)((long)param_1 + (long)param_2 + 0x3d9) == '\0')) {
    pcVar1 = (char *)((long)param_1 + (long)param_2 + 0x3d9);
    uVar5 = FUN_00a17c8c(param_1,param_2,pcVar1);
    if ((int)uVar5 != 0) {
      *(undefined1 *)((long)param_1 + 0x3b9) = 1;
      return uVar5;
    }
    if (*pcVar1 == '\0') {
      return 0;
    }
  }
                    /* catch() { ... } // from try @ 00a3f828 with catch @ 00a3f91c */
  if ((*(char *)((long)param_1 + 0x3c9) == '\0') || (*(char *)((long)param_1 + 0x3be) == '\0')) {
    return 0;
  }
  lVar6 = *param_1;
  uVar5 = *(undefined8 *)(lVar6 + 0x218);
                    /* catch() { ... } // from try @ 00a3f7e4 with catch @ 00a3f934 */
                    /* catch() { ... } // from try @ 00a3f7b8 with catch @ 00a3f938 */
  memset(auStack_c8,0,0x88);
  *(undefined1 **)(lVar6 + 0x218) = auStack_c8;
  FUN_00a11300(param_1,0);
  if (param_2 == 1) {
    lVar6 = param_1[0x1a];
    uVar4 = (uint)*(ushort *)(param_1 + 0x35);
  }
  else {
                    /* try { // try from 00a3f988 to 00b3f9cb has its CatchHandler @ 00a3f988
                       catch() { ... } // from try @ 00a3f988 with catch @ 00a3f988
                       catch() { ... } // from try @ 00a3f9e4 with catch @ 00a3f988 */
    plVar2 = param_1 + 0x18;
    if (*(char *)((long)param_1 + 0x3bb) != '\0') {
      plVar2 = param_1 + 0x1d;
    }
    lVar6 = *plVar2;
    if (*(char *)((long)param_1 + 0x3bc) == '\0') {
      uVar4 = *(uint *)(param_1 + 0x34);
    }
    else {
      uVar4 = *(uint *)((long)param_1 + 0x1a4);
    }
  }
                    /* try { // try from 00a3f9cc to 00b3f9e3 has its CatchHandler @ 00a3fa14 */
  uVar3 = FUN_00a3fa10(param_1,param_2,lVar6,uVar4,0);
  *(undefined8 *)(*param_1 + 0x218) = uVar5;
  if ((int)uVar3 == 0) {
                    /* try { // try from 00a3f9e4 to 00b3fa27 has its CatchHandler @ 00a3f988 */
    (*(code *)PTR_free_01d1b748)(param_1[0x84]);
    param_1[0x84] = 0;
    return 0;
  }
  return uVar3;
}

