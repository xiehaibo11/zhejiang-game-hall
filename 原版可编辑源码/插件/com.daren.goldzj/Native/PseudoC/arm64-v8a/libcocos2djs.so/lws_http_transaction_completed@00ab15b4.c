
undefined8 lws_http_transaction_completed(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)((long)param_1 + 0x2f4);
                    /* try { // try from 00ab15c8 to 00bb172b has its CatchHandler @ 00ab15c8
                       catch() { ... } // from try @ 00ab15c8 with catch @ 00ab15c8
                       catch() { ... } // from try @ 00ab1734 with catch @ 00ab15c8 */
  if ((uVar1 & 1) == 0) {
    _lws_log(4,"%s: ignoring, ah parsing incomplete\n","lws_http_transaction_completed");
    return 0;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    return 0;
  }
  if ((uVar1 >> 0x17 & 1) != 0) {
    return 1;
  }
  if (*(int *)((long)param_1 + 0x144) == 1) {
    iVar2 = FUN_00a9fa04(param_1,*(undefined8 *)(param_1[0x45] + 0x188));
    if (iVar2 != 0) {
      return 1;
    }
    *(undefined2 *)((long)param_1 + 0x2fe) = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) & 0xfffffffe;
    uVar3 = 0;
    if (*(int *)(param_1[0x45] + 0x1ec) != 0) {
      uVar3 = 0xf;
    }
    lws_set_timeout(param_1,uVar3);
    if (*param_1 != 0) {
      if ((*(byte *)((long)param_1 + 0x2f5) >> 1 & 1) == 0) {
        FUN_00aa5308(param_1);
        FUN_00aa5364(param_1,1);
        if (*(int *)(param_1[0x45] + 0x1f8) != 0) {
          iVar2 = *(int *)(param_1[0x44] + 0xc8c);
          if ((iVar2 != 0) && (*(int *)(param_1[0x44] + 0xc90) == iVar2)) {
            return 1;
          }
        }
      }
      else {
        FUN_00aa4f8c(param_1,1);
        lws_set_timeout(param_1,0x19,*(undefined4 *)(param_1[0x45] + 0x1ec));
      }
    }
    *(undefined4 *)(param_1 + 5) = 0;
    return 0;
  }
  return 1;
}

