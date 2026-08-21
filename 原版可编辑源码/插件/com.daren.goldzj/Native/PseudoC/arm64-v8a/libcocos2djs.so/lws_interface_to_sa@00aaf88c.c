
int lws_interface_to_sa(int param_1,char *param_2,undefined8 *param_3)

{
  int iVar1;
  long *plVar2;
  short *psVar3;
  undefined8 uVar4;
  long *local_48;
  
  FUN_00ab6580(&local_48);
  if (local_48 != (long *)0x0) {
    plVar2 = local_48;
    if (param_1 == 0) {
      do {
        psVar3 = (short *)plVar2[3];
        if ((psVar3 != (short *)0x0) && (iVar1 = strcmp((char *)plVar2[1],param_2), iVar1 == 0)) {
          if (*psVar3 == 2) {
            uVar4 = *(undefined8 *)psVar3;
            param_3[1] = *(undefined8 *)(psVar3 + 4);
            *param_3 = uVar4;
            goto LAB_00aaf9a8;
          }
          if (*psVar3 == 10) goto LAB_00aaf978;
        }
        plVar2 = (long *)*plVar2;
      } while (plVar2 != (long *)0x0);
    }
    else {
      do {
        psVar3 = (short *)plVar2[3];
        if ((psVar3 != (short *)0x0) && (iVar1 = strcmp((char *)plVar2[1],param_2), iVar1 == 0)) {
          if (*psVar3 == 10) goto LAB_00aaf978;
          if (*psVar3 == 2) {
            param_3[1] = 0;
            param_3[2] = 0;
            *(undefined2 *)((long)param_3 + 0x12) = 0xffff;
            *(undefined4 *)((long)param_3 + 0x14) = *(undefined4 *)(plVar2[3] + 4);
            goto LAB_00aaf9a8;
          }
        }
        plVar2 = (long *)*plVar2;
      } while (plVar2 != (long *)0x0);
    }
  }
  FUN_00ab67d4(local_48);
  iVar1 = inet_pton(10,param_2,param_3 + 1);
  if (iVar1 == 1) {
    return 0;
  }
  iVar1 = inet_pton(2,param_2,(void *)((long)param_3 + 4));
  return -(uint)(iVar1 != 1);
LAB_00aaf978:
  uVar4 = *(undefined8 *)(psVar3 + 4);
  param_3[2] = *(undefined8 *)(psVar3 + 8);
  param_3[1] = uVar4;
LAB_00aaf9a8:
  FUN_00ab67d4(local_48);
  return 0;
}

