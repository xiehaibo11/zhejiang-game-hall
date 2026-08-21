
undefined8 ssl_check_clienthello_tlsext_late(long param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  long lVar6;
  byte local_34 [4];
  undefined8 local_28;
  
                    /* catch() { ... } // from try @ 00adf1d4 with catch @ 00adf320 */
  *(undefined4 *)(param_1 + 0x260) = 0;
  if ((((*(int *)(param_1 + 0x234) == -1) || (*(long *)(param_1 + 0x1b8) == 0)) ||
      (*(long *)(*(long *)(param_1 + 0x1b8) + 0x228) == 0)) ||
     (lVar2 = ssl_get_server_send_pkey(param_1), lVar2 == 0)) {
LAB_00adf388:
    local_28 = 0;
    local_34[0] = 0;
    pcVar5 = *(code **)(*(long *)(param_1 + 0x1b8) + 0x2e8);
    if (pcVar5 != (code *)0x0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x90) + 0x3e0);
      if (lVar2 != 0) {
        iVar1 = (*pcVar5)(param_1,&local_28,local_34,lVar2,
                          *(undefined4 *)(*(long *)(param_1 + 0x90) + 1000),
                          *(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x2f0));
        if (iVar1 == 0) {
                    /* try { // try from 00adf3fc to 00bdf403 has its CatchHandler @ 00adf5ac */
                    /* try { // try from 00adf404 to 00bdf483 has its CatchHandler @ 00adf35c */
          CRYPTO_free(*(void **)(*(long *)(param_1 + 0x90) + 0x3d0));
          lVar2 = CRYPTO_memdup(local_28,local_34[0],"ssl/t1_lib.c",0x72e);
          lVar6 = *(long *)(param_1 + 0x90);
          *(long *)(lVar6 + 0x3d0) = lVar2;
          if (lVar2 != 0) {
            *(undefined4 *)(lVar6 + 0x3c8) = 0;
            *(ulong *)(lVar6 + 0x3d8) = (ulong)local_34[0];
            return 1;
          }
          uVar4 = 0x50;
        }
        else {
          uVar4 = 0x78;
        }
        goto LAB_00adf3cc;
      }
    }
    uVar3 = 1;
  }
  else {
    **(long **)(param_1 + 0x148) = lVar2;
                    /* catch() { ... } // from try @ 00adf404 with catch @ 00adf35c
                       catch() { ... } // from try @ 00adf48c with catch @ 00adf35c
                       catch() { ... } // from try @ 00adf4e8 with catch @ 00adf35c
                       catch() { ... } // from try @ 00adf59c with catch @ 00adf35c */
    iVar1 = (**(code **)(*(long *)(param_1 + 0x1b8) + 0x228))
                      (param_1,*(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x230));
    if (iVar1 == 0) {
      if (*(long *)(param_1 + 0x278) != 0) {
        *(undefined4 *)(param_1 + 0x260) = 1;
      }
      goto LAB_00adf388;
    }
    if (iVar1 == 3) {
      *(undefined4 *)(param_1 + 0x260) = 0;
      goto LAB_00adf388;
    }
    uVar4 = 0x50;
LAB_00adf3cc:
    uVar3 = 0;
    *param_2 = uVar4;
  }
  return uVar3;
}

