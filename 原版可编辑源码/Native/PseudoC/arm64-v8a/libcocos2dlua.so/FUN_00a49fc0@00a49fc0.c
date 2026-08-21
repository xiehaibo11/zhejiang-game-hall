
void FUN_00a49fc0(long *param_1,int param_2,long param_3,byte param_4,undefined8 param_5,int param_6
                 ,undefined8 param_7)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
                    /* try { // try from 00a49fcc to 00b49fff has its CatchHandler @ 00a4a0cc */
  lVar2 = *param_1;
  if (param_2 == -1) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x260);
  }
  *(undefined4 *)(param_1 + 0x83) = uVar1;
  if (param_6 == -1) {
    uVar1 = 0xffffffff;
  }
  else {
                    /* try { // try from 00a4a000 to 00b4a013 has its CatchHandler @ 00a4a098 */
    uVar1 = *(undefined4 *)((long)param_1 + (long)param_6 * 4 + 0x260);
  }
  *(undefined4 *)((long)param_1 + 0x41c) = uVar1;
  *(byte *)(lVar2 + 0x212) = param_4 & 1;
  *(long *)(lVar2 + 0x78) = param_3;
  *(undefined8 *)(lVar2 + 0x80) = param_5;
                    /* try { // try from 00a4a018 to 00b4a04b has its CatchHandler @ 00a4a09c */
  *(undefined8 *)(lVar2 + 0x90) = param_7;
  if (((param_4 & 1) != 0) ||
     (((*(undefined1 *)(lVar2 + 0xd8) = 0, 0 < param_3 &&
       (FUN_00a30eac(lVar2,param_3), *(char *)(lVar2 + 0x212) != '\0')) ||
      (*(char *)(lVar2 + 0x620) == '\0')))) {
                    /* try { // try from 00a4a04c to 00b4a0e7 has its CatchHandler @ 00a49e9c */
    if ((int)param_1[0x83] != -1) {
      *(uint *)(lVar2 + 0x1e4) = *(uint *)(lVar2 + 0x1e4) | 1;
    }
    if (*(int *)((long)param_1 + 0x41c) != -1) {
      if (*(char *)(lVar2 + 0x8ca8) != '\0') {
        if (((*(byte *)(param_1[0x80] + 0x78) & 3) != 0) &&
           (*(int *)(*(long *)(lVar2 + 0x218) + 0x78) == 2)) {
                    /* catch() { ... } // from try @ 00a4a000 with catch @ 00a4a098 */
                    /* catch() { ... } // from try @ 00a4a018 with catch @ 00a4a09c */
          *(undefined4 *)(lVar2 + 0x140) = 1;
          auVar3 = FUN_00a2e828();
          *(undefined1 (*) [16])(lVar2 + 0x130) = auVar3;
          FUN_00a27148(lVar2,*(undefined8 *)(lVar2 + 0x8e8));
          return;
        }
        *(undefined4 *)(lVar2 + 0x140) = 2;
      }
                    /* catch() { ... } // from try @ 00a49fcc with catch @ 00a4a0cc */
      *(uint *)(lVar2 + 0x1e4) = *(uint *)(lVar2 + 0x1e4) | 2;
    }
  }
  return;
}

