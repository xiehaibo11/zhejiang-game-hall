
undefined8 SSL_CTX_use_serverinfo(long param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  void *__dest;
  int line;
  ulong uVar3;
  short *psVar4;
  ulong uVar5;
  
  if (((param_1 == 0) || (param_2 == (undefined1 *)0x0)) ||
     (uVar3 = param_3, puVar1 = param_2, param_3 == 0)) {
    iVar2 = 0x43;
    line = 0x34f;
  }
  else {
    while (uVar3 != 0) {
      if ((uVar3 == 1) || ((uVar3 & 0xfffffffffffffffe) == 2)) {
LAB_00accb84:
        iVar2 = 0x184;
        line = 0x353;
        goto LAB_00accbb8;
      }
      uVar5 = (ulong)CONCAT11(puVar1[2],puVar1[3]);
      if (uVar3 - 4 < uVar5) goto LAB_00accb84;
      uVar3 = (uVar3 - 4) - uVar5;
      puVar1 = puVar1 + uVar5 + 4;
    }
    if (**(long **)(param_1 + 0x120) == 0) {
      iVar2 = 0x44;
      line = 0x357;
    }
    else {
      __dest = CRYPTO_realloc(*(void **)(**(long **)(param_1 + 0x120) + 0x18),(int)param_3,
                              "ssl/ssl_rsa.c",0x35b);
      if (__dest == (void *)0x0) {
        iVar2 = 0x41;
        line = 0x35d;
      }
      else {
        *(void **)(**(long **)(param_1 + 0x120) + 0x18) = __dest;
        memcpy(__dest,param_2,param_3);
        *(ulong *)(**(long **)(param_1 + 0x120) + 0x20) = param_3;
        while( true ) {
          if (param_3 == 0) {
            return 1;
          }
          if (param_3 == 1) break;
          uVar3 = *(ulong *)(*(long *)(param_1 + 0x120) + 0x1b0);
          if (uVar3 != 0) {
            psVar4 = *(short **)(*(long *)(param_1 + 0x120) + 0x1a8);
            uVar5 = 0;
            do {
              if (CONCAT11(*param_2,param_2[1]) == *psVar4) {
                if ((param_3 & 0xfffffffffffffffe) != 2) goto LAB_00accc74;
                goto LAB_00acccfc;
              }
              uVar5 = uVar5 + 1;
              psVar4 = psVar4 + 0x18;
            } while (uVar5 < uVar3);
          }
          iVar2 = SSL_CTX_add_server_custom_ext
                            (param_1,CONCAT11(*param_2,param_2[1]),FUN_00acd044,0,0,&LAB_00acd118,0)
          ;
          if (((param_3 & 0xfffffffffffffffe) == 2) || (iVar2 == 0)) break;
LAB_00accc74:
          uVar3 = (ulong)CONCAT11(param_2[2],param_2[3]);
          uVar5 = param_3 - 4;
          param_3 = uVar5 - uVar3;
          if (uVar5 < uVar3) break;
          param_2 = param_2 + uVar3 + 4;
        }
LAB_00acccfc:
        iVar2 = 0x184;
        line = 0x369;
      }
    }
  }
LAB_00accbb8:
  ERR_put_error(0x14,0x150,iVar2,"ssl/ssl_rsa.c",line);
  return 0;
}

