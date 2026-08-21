
bool FUN_00acb52c(long param_1,long *param_2,char *param_3)

{
  int iVar1;
  int reason;
  int line;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
                    /* catch() { ... } // from try @ 00acb394 with catch @ 00acb52c */
  uVar8 = DAT_01d39040;
                    /* catch() { ... } // from try @ 00acb48c with catch @ 00acb534 */
  if ((param_1 == 0) && (param_2 == (long *)0x0)) {
    ERR_put_error(0x14,0x187,0x43,"ssl/ssl_mcnf.c",0x93);
  }
  else {
    if ((param_3 != (char *)0x0) && (DAT_01d39040 != 0)) {
      uVar6 = 0;
      puVar5 = (ulong *)(DAT_01d39038 + 0x10);
      do {
        iVar1 = strcmp((char *)puVar5[-2],param_3);
        if (iVar1 == 0) {
          if (puVar5 != (ulong *)0x10) {
            lVar3 = SSL_CONF_CTX_new();
            if (lVar3 == 0) {
              iVar1 = 0;
              goto LAB_00acb620;
            }
            if (param_1 == 0) {
              lVar7 = *param_2;
                    /* try { // try from 00acb650 to 00bcb71f has its CatchHandler @ 00acb650
                       catch() { ... } // from try @ 00acb650 with catch @ 00acb650
                       catch() { ... } // from try @ 00acb728 with catch @ 00acb650 */
              SSL_CONF_CTX_set_ssl_ctx(lVar3,param_2);
            }
            else {
              lVar7 = *(long *)(param_1 + 8);
              SSL_CONF_CTX_set_ssl(lVar3,param_1);
            }
            uVar2 = 0x62;
            if (*(code **)(lVar7 + 0x28) != ssl_undefined_function) {
              uVar2 = 0x6a;
            }
            if (*(code **)(lVar7 + 0x30) != ssl_undefined_function) {
              uVar2 = uVar2 | 4;
            }
            SSL_CONF_CTX_set_flags(lVar3,uVar2);
            if (*puVar5 == 0) goto LAB_00acb6cc;
            uVar8 = 0;
            puVar4 = (undefined8 *)(puVar5[-1] + 8);
            goto LAB_00acb6a0;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 3;
      } while (uVar6 < uVar8);
    }
    ERR_put_error(0x14,0x187,0x71,"ssl/ssl_mcnf.c",0x98);
    ERR_add_error_data(2,"name=",param_3);
  }
  iVar1 = 0;
  lVar3 = 0;
  goto LAB_00acb620;
  while( true ) {
    uVar8 = uVar8 + 1;
    puVar4 = puVar4 + 2;
    if (*puVar5 <= uVar8) break;
LAB_00acb6a0:
    iVar1 = SSL_CONF_cmd(lVar3,puVar4[-1],*puVar4);
    if (iVar1 < 1) {
      if (iVar1 == -2) {
        reason = 0x8b;
        line = 0xb1;
      }
      else {
        reason = 0x180;
        line = 0xb3;
      }
      ERR_put_error(0x14,0x187,reason,"ssl/ssl_mcnf.c",line);
                    /* try { // try from 00acb720 to 00bcb727 has its CatchHandler @ 00acb740 */
                    /* try { // try from 00acb728 to 00bcb757 has its CatchHandler @ 00acb650 */
      ERR_add_error_data(6,"section=",param_3,&DAT_018a46aa,puVar4[-1],", arg=",*puVar4);
      goto LAB_00acb620;
    }
  }
LAB_00acb6cc:
  iVar1 = SSL_CONF_CTX_finish(lVar3);
LAB_00acb620:
  SSL_CONF_CTX_free(lVar3);
  return 0 < iVar1;
}

