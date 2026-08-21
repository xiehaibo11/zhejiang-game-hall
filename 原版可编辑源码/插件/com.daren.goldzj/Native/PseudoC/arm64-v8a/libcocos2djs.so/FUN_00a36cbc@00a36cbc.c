
undefined8 FUN_00a36cbc(int *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
                    /* try { // try from 00a36cc0 to 00b36cd7 has its CatchHandler @ 00a36f50 */
  iVar3 = *param_1;
                    /* try { // try from 00a36ce0 to 00b36ceb has its CatchHandler @ 00a36f4c */
  time((time_t *)(param_1 + 10));
                    /* try { // try from 00a36cec to 00b36cf7 has its CatchHandler @ 00a36f48 */
  lVar2 = FUN_00a0f850(**(undefined8 **)(param_1 + 4),0,iVar3 == 0);
                    /* try { // try from 00a36cf8 to 00b36ecf has its CatchHandler @ 00a36f60 */
  if (lVar2 < 0) {
    FUN_00a23020(**(undefined8 **)(param_1 + 4),"Connection time-out");
    return 0x1c;
  }
  if (iVar3 == 0) {
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
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    lVar6 = lVar5 + lVar2;
    *(long *)(param_1 + 0xc) = lVar6;
    param_1[8] = iVar1;
    if (iVar3 < 3) goto LAB_00a36dfc;
LAB_00a36db4:
    if (iVar3 < 0x33) goto LAB_00a36e04;
    iVar3 = 0x32;
  }
  else {
    if (lVar2 < 1) {
      lVar2 = 0xe10;
    }
    else {
      lVar2 = (lVar2 + 500) / 1000;
    }
    iVar3 = (int)lVar2 / 5;
    param_1[9] = iVar3;
    lVar5 = *(long *)(param_1 + 10);
    lVar6 = lVar5 + lVar2;
    *(long *)(param_1 + 0xc) = lVar6;
    if (2 < iVar3) goto LAB_00a36db4;
LAB_00a36dfc:
    iVar3 = 3;
  }
  param_1[9] = iVar3;
LAB_00a36e04:
  iVar4 = 0;
  if ((long)iVar3 != 0) {
    iVar4 = (int)(lVar2 / (long)iVar3);
  }
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  param_1[8] = iVar4;
  FUN_00a22d58(**(undefined8 **)(param_1 + 4),
               "set timeouts for state %d; Total %ld, retry %d maxtry %d\n",*param_1,lVar6 - lVar5);
  time((time_t *)(param_1 + 0xe));
  return 0;
}

