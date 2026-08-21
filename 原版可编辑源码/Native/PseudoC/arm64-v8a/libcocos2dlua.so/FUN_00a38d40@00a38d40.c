
long FUN_00a38d40(long *param_1,int param_2,void *param_3,size_t param_4,undefined4 *param_5)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)((long)param_1 + (long)param_2 * 4 + 0x260);
  if (*(char *)((long)param_1 + 0x3d6) == '\0') {
    lVar2 = send(iVar1,param_3,param_4,0x4000);
  }
  else {
                    /* try { // try from 00a38d70 to 00b38dbb has its CatchHandler @ 00a38d70
                       catch() { ... } // from try @ 00a38d70 with catch @ 00a38d70
                       catch() { ... } // from try @ 00a38e50 with catch @ 00a38d70
                       catch() { ... } // from try @ 00a38f90 with catch @ 00a38d70 */
    lVar2 = sendto(iVar1,param_3,param_4,0x20000000,*(sockaddr **)(param_1[0xc] + 0x20),
                   *(socklen_t *)(param_1[0xc] + 0x10));
    *(undefined1 *)((long)param_1 + 0x3d6) = 0;
  }
  *param_5 = 0;
  if (lVar2 == -1) {
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
    lVar2 = 0;
                    /* try { // try from 00a38dbc to 00b38dd3 has its CatchHandler @ 00a38fb4 */
    uVar5 = 0x51;
    if (((iVar1 != 4) && (iVar1 != 0xb)) && (iVar1 != 0x73)) {
                    /* try { // try from 00a38dd8 to 00b38dff has its CatchHandler @ 00a38fac */
      lVar2 = *param_1;
      uVar4 = FUN_00a2afbc(param_1,iVar1);
      FUN_00a38a08(lVar2,"Send failure: %s",uVar4);
      lVar2 = -1;
      *(int *)(*param_1 + 0x8b64) = iVar1;
      uVar5 = 0x37;
    }
    *param_5 = uVar5;
  }
                    /* try { // try from 00a38e1c to 00b38e33 has its CatchHandler @ 00a38fb0 */
  return lVar2;
}

