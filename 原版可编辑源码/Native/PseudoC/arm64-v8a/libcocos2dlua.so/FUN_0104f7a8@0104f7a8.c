
void FUN_0104f7a8(SSL *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  SSL_CTX *ssl;
  void *pvVar2;
  long lVar3;
  uint local_38;
  undefined4 uStack_34;
  
                    /* try { // try from 0104f7c0 to 0114f7c7 has its CatchHandler @ 0104f8fc */
  ssl = SSL_get_SSL_CTX(param_1);
  pvVar2 = SSL_CTX_get_ex_data(ssl,DAT_01795f80);
  if (pvVar2 != (void *)0x0) {
    lVar3 = *(long *)((long)pvVar2 + 0x828);
    iVar1 = SSL_get_fd(param_1);
    lVar3 = *(long *)(lVar3 + (long)iVar1 * 8);
                    /* try { // try from 0104f7f0 to 0114f80b has its CatchHandler @ 0104f920 */
    if ((lVar3 != 0) && ((*(uint *)(*(long *)(lVar3 + 0x228) + 500) & param_2) != 0)) {
                    /* try { // try from 0104f80c to 0114f87b has its CatchHandler @ 0104f784 */
      local_38 = param_2;
      uStack_34 = param_3;
      iVar1 = FUN_01043028(*(undefined8 *)(*(long *)(lVar3 + 0x248) + 8),lVar3,0x43,
                           *(undefined8 *)(lVar3 + 0x270),&local_38,0);
      if (iVar1 != 0) {
        lws_set_timeout(lVar3,0x16,0xffffffff);
      }
    }
  }
  return;
}

