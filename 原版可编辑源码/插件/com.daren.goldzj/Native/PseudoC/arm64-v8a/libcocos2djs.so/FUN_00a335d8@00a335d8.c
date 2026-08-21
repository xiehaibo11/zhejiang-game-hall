
void FUN_00a335d8(long *param_1,int param_2,long param_3,byte param_4,undefined8 param_5,int param_6
                 ,undefined8 param_7)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
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
    uVar1 = *(undefined4 *)((long)param_1 + (long)param_6 * 4 + 0x260);
  }
  *(undefined4 *)((long)param_1 + 0x41c) = uVar1;
  *(byte *)(lVar2 + 0x212) = param_4 & 1;
                    /* catch() { ... } // from try @ 00a33500 with catch @ 00a3362c */
  *(long *)(lVar2 + 0x78) = param_3;
  *(undefined8 *)(lVar2 + 0x80) = param_5;
  *(undefined8 *)(lVar2 + 0x90) = param_7;
                    /* try { // try from 00a33648 to 00b3369b has its CatchHandler @ 00a33648
                       catch() { ... } // from try @ 00a33648 with catch @ 00a33648
                       catch() { ... } // from try @ 00a3381c with catch @ 00a33648 */
  if (((param_4 & 1) != 0) ||
     (((*(undefined1 *)(lVar2 + 0xd8) = 0, 0 < param_3 &&
       (FUN_00a1b4c4(lVar2,param_3), *(char *)(lVar2 + 0x212) != '\0')) ||
      (*(char *)(lVar2 + 0x620) == '\0')))) {
    if ((int)param_1[0x83] != -1) {
      *(uint *)(lVar2 + 0x1e4) = *(uint *)(lVar2 + 0x1e4) | 1;
    }
    if (*(int *)((long)param_1 + 0x41c) != -1) {
      if (*(char *)(lVar2 + 0x8ca8) != '\0') {
                    /* try { // try from 00a3369c to 00b336b3 has its CatchHandler @ 00a33898 */
        if (((*(byte *)(param_1[0x80] + 0x78) & 3) != 0) &&
           (*(int *)(*(long *)(lVar2 + 0x218) + 0x78) == 2)) {
          *(undefined4 *)(lVar2 + 0x140) = 1;
          auVar3 = FUN_00a18e40();
                    /* try { // try from 00a336bc to 00b336c7 has its CatchHandler @ 00a33894 */
          *(undefined1 (*) [16])(lVar2 + 0x130) = auVar3;
                    /* try { // try from 00a336c8 to 00b336d3 has its CatchHandler @ 00a33890 */
                    /* try { // try from 00a336d4 to 00b3381b has its CatchHandler @ 00a338a8 */
          FUN_00a11760(lVar2,*(undefined8 *)(lVar2 + 0x8e8));
          return;
        }
        *(undefined4 *)(lVar2 + 0x140) = 2;
      }
      *(uint *)(lVar2 + 0x1e4) = *(uint *)(lVar2 + 0x1e4) | 2;
    }
  }
  return;
}

