
int lws_interface_to_sa(int param_1,char *param_2,undefined8 *param_3)

{
  int iVar1;
  long *plVar2;
  short *psVar3;
  undefined8 uVar4;
  long *local_48;
  
                    /* try { // try from 01052030 to 01152053 has its CatchHandler @ 010536e0 */
  FUN_01058d04(&local_48);
  if (local_48 != (long *)0x0) {
    plVar2 = local_48;
    if (param_1 == 0) {
      do {
        psVar3 = (short *)plVar2[3];
        if ((psVar3 != (short *)0x0) && (iVar1 = strcmp((char *)plVar2[1],param_2), iVar1 == 0)) {
          if (*psVar3 == 2) {
                    /* try { // try from 01052124 to 01152147 has its CatchHandler @ 010536b8 */
            uVar4 = *(undefined8 *)psVar3;
            param_3[1] = *(undefined8 *)(psVar3 + 4);
            *param_3 = uVar4;
            goto LAB_0105212c;
          }
          if (*psVar3 == 10) goto LAB_010520fc;
        }
        plVar2 = (long *)*plVar2;
      } while (plVar2 != (long *)0x0);
    }
    else {
      do {
        psVar3 = (short *)plVar2[3];
        if ((psVar3 != (short *)0x0) && (iVar1 = strcmp((char *)plVar2[1],param_2), iVar1 == 0)) {
          if (*psVar3 == 10) goto LAB_010520fc;
          if (*psVar3 == 2) {
            param_3[1] = 0;
            param_3[2] = 0;
            *(undefined2 *)((long)param_3 + 0x12) = 0xffff;
            *(undefined4 *)((long)param_3 + 0x14) = *(undefined4 *)(plVar2[3] + 4);
            goto LAB_0105212c;
          }
        }
        plVar2 = (long *)*plVar2;
      } while (plVar2 != (long *)0x0);
    }
  }
  FUN_01058f58(local_48);
  iVar1 = inet_pton(10,param_2,param_3 + 1);
  if (iVar1 == 1) {
    return 0;
  }
  iVar1 = inet_pton(2,param_2,(void *)((long)param_3 + 4));
                    /* try { // try from 010520f0 to 011520fb has its CatchHandler @ 01053594 */
  return -(uint)(iVar1 != 1);
LAB_010520fc:
                    /* try { // try from 010520fc to 01152117 has its CatchHandler @ 0105358c */
  uVar4 = *(undefined8 *)(psVar3 + 4);
  param_3[2] = *(undefined8 *)(psVar3 + 8);
  param_3[1] = uVar4;
LAB_0105212c:
  FUN_01058f58(local_48);
  return 0;
}

