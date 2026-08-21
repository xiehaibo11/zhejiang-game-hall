
undefined8 tls_process_server_done(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (*(long *)(param_2 + 8) == 0) {
    if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x90) + 0x228) + 0x14) >> 5 & 1) == 0) ||
       (iVar1 = SRP_Calc_A_param(param_1), 0 < iVar1)) {
      iVar1 = ssl3_check_cert_and_algorithm(param_1);
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0x234) != -1) {
          pcVar3 = *(code **)(*(long *)(param_1 + 0x1b8) + 0x228);
          if (pcVar3 != (code *)0x0) {
            iVar1 = (*pcVar3)(param_1,*(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x230));
            if (iVar1 == 0) {
              ssl3_send_alert(param_1,2,0x71);
              ERR_put_error(0x14,0x170,0x148,"ssl/statem/statem_clnt.c",0x804);
              return 0;
            }
            if (iVar1 < 0) {
              ssl3_send_alert(param_1,2,0x50);
              ERR_put_error(0x14,0x170,0x41,"ssl/statem/statem_clnt.c",0x809);
              return 0;
            }
          }
        }
        if (((*(long *)(param_1 + 0x238) != 0) && (iVar1 = ssl_validate_ct(param_1), iVar1 == 0)) &&
           ((*(byte *)(param_1 + 0x188) & 1) != 0)) {
          ssl3_send_alert(param_1,2,0x28);
          return 0;
        }
        return 1;
      }
      uVar2 = 0x28;
    }
    else {
      ERR_put_error(0x14,0x170,0x169,"ssl/statem/statem_clnt.c",0x7e6);
      uVar2 = 0x50;
    }
    ssl3_send_alert(param_1,2,uVar2);
  }
  else {
    ssl3_send_alert(param_1,2,0x32);
    ERR_put_error(0x14,0x170,0x9f,"ssl/statem/statem_clnt.c",0x7df);
  }
  ossl_statem_set_error(param_1);
  return 0;
}

