
undefined8
ASYNC_WAIT_CTX_get_changed_fds
          (long *param_1,undefined4 *param_2,long *param_3,undefined4 *param_4,long *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  
  *param_3 = param_1[1];
  *param_5 = param_1[2];
  if (param_2 != (undefined4 *)0x0 || param_4 != (undefined4 *)0x0) {
    for (lVar3 = *param_1; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x28)) {
      puVar2 = param_4;
      if (*(int *)(lVar3 + 0x24) == 0) {
LAB_00b0216c:
        iVar4 = *(int *)(lVar3 + 0x20);
      }
      else {
                    /* catch() { ... } // from try @ 00b020e0 with catch @ 00b02158 */
        iVar4 = *(int *)(lVar3 + 0x20);
        if ((param_4 != (undefined4 *)0x0) && (iVar4 == 0)) {
          puVar2 = param_4 + 1;
          *param_4 = *(undefined4 *)(lVar3 + 8);
          goto LAB_00b0216c;
        }
      }
      puVar1 = param_2;
      if (((iVar4 != 0) && (param_2 != (undefined4 *)0x0)) && (*(int *)(lVar3 + 0x24) == 0)) {
        puVar1 = param_2 + 1;
        *param_2 = *(undefined4 *)(lVar3 + 8);
      }
      param_2 = puVar1;
      param_4 = puVar2;
    }
  }
                    /* try { // try from 00b02190 to 00c0223f has its CatchHandler @ 00b02190
                       catch() { ... } // from try @ 00b02190 with catch @ 00b02190
                       catch() { ... } // from try @ 00b0224c with catch @ 00b02190 */
  return 1;
}

