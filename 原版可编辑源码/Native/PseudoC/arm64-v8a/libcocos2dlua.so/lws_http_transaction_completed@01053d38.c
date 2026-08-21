
undefined8 lws_http_transaction_completed(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)((long)param_1 + 0x2f4);
  if ((uVar1 & 1) == 0) {
    _lws_log(4,"%s: ignoring, ah parsing incomplete\n","lws_http_transaction_completed");
    return 0;
  }
  if ((uVar1 >> 1 & 1) != 0) {
                    /* catch() { ... } // from try @ 0105109c with catch @ 01053db8 */
    return 0;
  }
  if ((uVar1 >> 0x17 & 1) != 0) {
    return 1;
  }
  if (*(int *)((long)param_1 + 0x144) == 1) {
    iVar2 = FUN_01042188(param_1,*(undefined8 *)(param_1[0x45] + 0x188));
    if (iVar2 != 0) {
                    /* catch() { ... } // from try @ 01051090 with catch @ 01053da0 */
                    /* catch() { ... } // from try @ 0105104c with catch @ 01053da8 */
      return 1;
    }
                    /* catch() { ... } // from try @ 01051058 with catch @ 01053de0 */
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
        FUN_01047a8c(param_1);
        FUN_01047ae8(param_1,1);
        if (*(int *)(param_1[0x45] + 0x1f8) != 0) {
                    /* catch() { ... } // from try @ 010503d8 with catch @ 01053e40 */
          iVar2 = *(int *)(param_1[0x44] + 0xc8c);
          if ((iVar2 != 0) && (*(int *)(param_1[0x44] + 0xc90) == iVar2)) {
                    /* catch() { ... } // from try @ 010503cc with catch @ 01053e58 */
            return 1;
          }
        }
      }
      else {
        FUN_01047710(param_1,1);
                    /* catch() { ... } // from try @ 010503c4 with catch @ 01053e78 */
        lws_set_timeout(param_1,0x19,*(undefined4 *)(param_1[0x45] + 0x1ec));
      }
    }
    *(undefined4 *)(param_1 + 5) = 0;
                    /* catch() { ... } // from try @ 010503b8 with catch @ 01053e98 */
    return 0;
  }
  return 1;
}

