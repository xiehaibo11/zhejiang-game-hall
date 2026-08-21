
undefined8 ossl_statem_server_read_transition(int *param_1,int param_2)

{
  int line;
  int iVar1;
  
  switch(param_1[0x17]) {
  case 0:
  case 0x15:
    if (param_2 == 1) {
      iVar1 = 0x14;
      goto LAB_00ae5348;
    }
    break;
  case 0x1a:
    if (param_2 == 0x10) {
      if (*(int *)(*(long *)(param_1 + 0x24) + 0x288) != 0) {
        if (*param_1 != 0x300) break;
        if ((~param_1[0x62] & 3U) == 0) {
          ssl3_send_alert(param_1,2,0x28);
          iVar1 = 199;
          line = 0x75;
          goto LAB_00ae537c;
        }
      }
LAB_00ae52d0:
      iVar1 = 0x1c;
      goto LAB_00ae5348;
    }
    if ((param_2 == 0xb) && (*(int *)(*(long *)(param_1 + 0x24) + 0x288) != 0)) {
      iVar1 = 0x1b;
      goto LAB_00ae5348;
    }
    break;
  case 0x1b:
    if (param_2 == 0x10) goto LAB_00ae52d0;
    break;
  case 0x1c:
    if ((*(long *)(*(long *)(param_1 + 0x5e) + 0x98) == 0) || (param_1[0x1b] != 0))
    goto switchD_00ae525c_caseD_1d;
    if (param_2 == 0xf) {
      iVar1 = 0x1d;
      goto LAB_00ae5348;
    }
    break;
  case 0x1d:
  case 0x24:
switchD_00ae525c_caseD_1d:
    if (param_2 == 0x101) {
      iVar1 = 0x1f;
LAB_00ae5348:
      param_1[0x17] = iVar1;
      return 1;
    }
    break;
  case 0x1e:
switchD_00ae525c_caseD_1e:
    if (param_2 == 0x14) {
      iVar1 = 0x20;
      goto LAB_00ae5348;
    }
    break;
  case 0x1f:
    if (*(int *)(*(long *)(param_1 + 0x24) + 0x3c8) == 0) goto switchD_00ae525c_caseD_1e;
    if (param_2 == 0x43) {
      iVar1 = 0x1e;
      goto LAB_00ae5348;
    }
  }
  ssl3_send_alert(param_1,2,10);
  iVar1 = 0xf4;
  line = 0xd9;
LAB_00ae537c:
                    /* try { // try from 00ae537c to 00be53fb has its CatchHandler @ 00ae537c
                       catch() { ... } // from try @ 00ae537c with catch @ 00ae537c
                       catch() { ... } // from try @ 00ae5464 with catch @ 00ae537c */
  ERR_put_error(0x14,0x1a2,iVar1,"ssl/statem/statem_srvr.c",line);
  return 0;
}

