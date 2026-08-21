
long FUN_00a23358(long *param_1,int param_2,void *param_3,size_t param_4,undefined4 *param_5)

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
    lVar2 = sendto(iVar1,param_3,param_4,0x20000000,*(sockaddr **)(param_1[0xc] + 0x20),
                   *(socklen_t *)(param_1[0xc] + 0x10));
    *(undefined1 *)((long)param_1 + 0x3d6) = 0;
  }
  *param_5 = 0;
  if (lVar2 == -1) {
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
    lVar2 = 0;
    uVar5 = 0x51;
    if (((iVar1 != 4) && (iVar1 != 0xb)) && (iVar1 != 0x73)) {
      lVar2 = *param_1;
      uVar4 = FUN_00a155d4(param_1,iVar1);
      FUN_00a23020(lVar2,"Send failure: %s",uVar4);
      lVar2 = -1;
      *(int *)(*param_1 + 0x8b64) = iVar1;
      uVar5 = 0x37;
    }
    *param_5 = uVar5;
  }
                    /* try { // try from 00a23438 to 00b23487 has its CatchHandler @ 00a23438
                       catch() { ... } // from try @ 00a23438 with catch @ 00a23438
                       catch() { ... } // from try @ 00a23498 with catch @ 00a23438 */
  return lVar2;
}

