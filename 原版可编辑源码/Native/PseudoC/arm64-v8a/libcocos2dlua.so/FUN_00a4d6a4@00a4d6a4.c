
undefined8 FUN_00a4d6a4(int *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
                    /* try { // try from 00a4d6ac to 00b4d6b3 has its CatchHandler @ 00a4db88 */
                    /* try { // try from 00a4d6b4 to 00b4d6c7 has its CatchHandler @ 00a4db84 */
  iVar3 = *param_1;
  time((time_t *)(param_1 + 10));
                    /* try { // try from 00a4d6cc to 00b4d6d7 has its CatchHandler @ 00a4db80 */
                    /* try { // try from 00a4d6d8 to 00b4d6eb has its CatchHandler @ 00a4db7c */
  lVar2 = FUN_00a25238(**(undefined8 **)(param_1 + 4),0,iVar3 == 0);
  if (lVar2 < 0) {
                    /* try { // try from 00a4d718 to 00b4d72b has its CatchHandler @ 00a4db74 */
    FUN_00a38a08(**(undefined8 **)(param_1 + 4),"Connection time-out");
    return 0x1c;
  }
  if (iVar3 == 0) {
                    /* try { // try from 00a4d730 to 00b4d73b has its CatchHandler @ 00a4db70 */
                    /* try { // try from 00a4d73c to 00b4d74f has its CatchHandler @ 00a4db6c */
    lVar2 = (lVar2 + 500) / 1000;
    iVar4 = (int)lVar2;
    iVar3 = iVar4 / 5;
    if (iVar4 < 5) {
      iVar3 = 1;
    }
    param_1[9] = iVar3;
    lVar5 = *(long *)(param_1 + 10);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = iVar4 / iVar3;
    }
                    /* try { // try from 00a4d780 to 00b4d787 has its CatchHandler @ 00a4db68 */
    if (iVar1 < 2) {
      iVar1 = 1;
    }
                    /* try { // try from 00a4d788 to 00b4d79b has its CatchHandler @ 00a4db64 */
    lVar6 = lVar5 + lVar2;
    *(long *)(param_1 + 0xc) = lVar6;
    param_1[8] = iVar1;
    if (iVar3 < 3) goto LAB_00a4d7e4;
LAB_00a4d79c:
                    /* try { // try from 00a4d7a0 to 00b4d7ab has its CatchHandler @ 00a4db60 */
    if (iVar3 < 0x33) goto LAB_00a4d7ec;
    iVar3 = 0x32;
  }
  else {
    if (lVar2 < 1) {
                    /* try { // try from 00a4d7ac to 00b4d7bf has its CatchHandler @ 00a4db54 */
      lVar2 = 0xe10;
    }
    else {
      lVar2 = (lVar2 + 500) / 1000;
                    /* try { // try from 00a4d70c to 00b4d717 has its CatchHandler @ 00a4db78 */
    }
    iVar3 = (int)lVar2 / 5;
    param_1[9] = iVar3;
    lVar5 = *(long *)(param_1 + 10);
    lVar6 = lVar5 + lVar2;
    *(long *)(param_1 + 0xc) = lVar6;
    if (2 < iVar3) goto LAB_00a4d79c;
LAB_00a4d7e4:
    iVar3 = 3;
  }
  param_1[9] = iVar3;
LAB_00a4d7ec:
  iVar4 = 0;
  if ((long)iVar3 != 0) {
    iVar4 = (int)(lVar2 / (long)iVar3);
  }
                    /* try { // try from 00a4d7fc to 00b4d803 has its CatchHandler @ 00a4db3c */
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  param_1[8] = iVar4;
                    /* try { // try from 00a4d804 to 00b4d817 has its CatchHandler @ 00a4db34 */
  FUN_00a38740(**(undefined8 **)(param_1 + 4),
               "set timeouts for state %d; Total %ld, retry %d maxtry %d\n",*param_1,lVar6 - lVar5);
                    /* try { // try from 00a4d81c to 00b4d827 has its CatchHandler @ 00a4db08 */
  time((time_t *)(param_1 + 0xe));
                    /* try { // try from 00a4d828 to 00b4d83b has its CatchHandler @ 00a4daf0 */
  return 0;
}

