
undefined8 ssl3_send_alert(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x58))(param_3);
  iVar2 = 0x28;
  if (*param_1 != 0x300 || iVar1 != 0x46) {
    iVar2 = iVar1;
  }
  if (-1 < iVar2) {
    if ((param_2 == 2) && (*(SSL_SESSION **)(param_1 + 0x5e) != (SSL_SESSION *)0x0)) {
      SSL_CTX_remove_session(*(SSL_CTX **)(param_1 + 0xb4),*(SSL_SESSION **)(param_1 + 0x5e));
    }
    lVar4 = *(long *)(param_1 + 0x24);
    *(undefined4 *)(lVar4 + 0xf4) = 1;
    *(char *)(lVar4 + 0xf8) = (char)param_2;
    *(char *)(*(long *)(param_1 + 0x24) + 0xf9) = (char)iVar2;
    iVar2 = RECORD_LAYER_write_pending(param_1 + 0xe8);
    if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00acfec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(long *)(param_1 + 2) + 0x78))(param_1);
      return uVar3;
    }
  }
  return 0xffffffff;
}

