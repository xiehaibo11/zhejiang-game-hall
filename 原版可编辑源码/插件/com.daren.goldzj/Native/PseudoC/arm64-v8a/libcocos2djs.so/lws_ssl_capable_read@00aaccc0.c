
ulong lws_ssl_capable_read(long param_1,void *param_2,uint param_3)

{
  long *plVar1;
  byte bVar2;
  uint ret_code;
  int iVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  SSL *ssl;
  long lVar8;
  
  ssl = *(SSL **)(param_1 + 0x2b0);
  uVar7 = (ulong)param_3;
  if (ssl == (SSL *)0x0) {
    uVar7 = lws_ssl_capable_read_no_ssl(param_1,param_2,uVar7);
    return uVar7;
  }
  lVar8 = *(long *)(param_1 + 0x220);
  bVar2 = *(byte *)(param_1 + 0x304);
  piVar5 = (int *)__errno();
  *piVar5 = 0;
  ret_code = SSL_read(ssl,param_2,param_3);
  if (ret_code != 0) {
    if (ret_code == 0xffffffff) {
      if (*piVar5 == 0x6b) goto LAB_00aacd2c;
    }
    else if (-1 < (int)ret_code) {
      lVar6 = *(long *)(param_1 + 0x228);
      if (lVar6 != 0) {
                    /* try { // try from 00aacd74 to 00bacd7b has its CatchHandler @ 00aad084 */
        *(long *)(lVar6 + 0x100) = *(long *)(lVar6 + 0x100) + (long)(int)ret_code;
      }
                    /* try { // try from 00aacd7c to 00bacd9f has its CatchHandler @ 00aac138 */
      FUN_00aa1e90(param_1);
      if (((ret_code == param_3) && (*(SSL **)(param_1 + 0x2b0) != (SSL *)0x0)) &&
         (iVar4 = SSL_pending(*(SSL **)(param_1 + 0x2b0)), iVar4 != 0)) {
                    /* try { // try from 00aacda0 to 00bace13 has its CatchHandler @ 00aad0f0 */
        if (*(long *)(param_1 + 0x2c8) != 0) {
          return uVar7;
        }
        if (*(long *)(param_1 + 0x2c0) == 0) {
          lVar8 = lVar8 + (ulong)bVar2 * 0x6f8;
          lVar6 = *(long *)(lVar8 + 0x128);
          if (lVar6 != param_1) {
            if (lVar6 != 0) {
              *(long *)(lVar6 + 0x2c0) = param_1;
            }
            *(long *)(param_1 + 0x2c8) = lVar6;
            *(undefined8 *)(param_1 + 0x2c0) = 0;
            *(long *)(lVar8 + 0x128) = param_1;
            return uVar7;
          }
          return uVar7;
        }
        return uVar7;
      }
      lVar8 = *(long *)(param_1 + 0x2c0);
      if (lVar8 == 0) {
        lVar6 = *(long *)(param_1 + 0x2c8);
        if ((lVar6 == 0) &&
           (*(long *)(*(long *)(param_1 + 0x220) + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 + 0x128
                     ) != param_1)) goto LAB_00aace94;
      }
      else {
        lVar6 = *(long *)(param_1 + 0x2c8);
      }
                    /* try { // try from 00aace64 to 00bace7b has its CatchHandler @ 00aad068 */
      plVar1 = (long *)(*(long *)(param_1 + 0x220) + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 +
                       0x128);
      if (lVar8 != 0) {
        plVar1 = (long *)(lVar8 + 0x2c8);
      }
      *plVar1 = lVar6;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x2c8) + 0x2c0) = *(undefined8 *)(param_1 + 0x2c0);
      }
      *(undefined8 *)(param_1 + 0x2c0) = 0;
      *(undefined8 *)(param_1 + 0x2c8) = 0;
LAB_00aace94:
      return (ulong)ret_code;
    }
    if (*(SSL **)(param_1 + 0x2b0) == (SSL *)0x0) {
      iVar4 = SSL_want((SSL *)0x0);
    }
    else {
      iVar3 = SSL_get_error(*(SSL **)(param_1 + 0x2b0),ret_code);
      if (iVar3 - 5U < 2) {
        return 0xffffffff;
      }
      if (iVar3 == 2) {
        return 0xfffffffe;
      }
      iVar4 = SSL_want(*(SSL **)(param_1 + 0x2b0));
      if (iVar3 == 3) {
        return 0xfffffffe;
      }
    }
    if (iVar4 == 3) {
      return 0xfffffffe;
    }
    iVar4 = SSL_want(*(SSL **)(param_1 + 0x2b0));
    if (iVar4 == 2) {
      return 0xfffffffe;
    }
  }
LAB_00aacd2c:
  *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40;
  return 0xffffffff;
}

