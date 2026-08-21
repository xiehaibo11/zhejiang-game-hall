
void FUN_00aad024(SSL *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  SSL_CTX *ssl;
  void *pvVar2;
  long lVar3;
  uint local_38;
  undefined4 uStack_34;
  
                    /* try { // try from 00aad024 to 00bad027 has its CatchHandler @ 00aac138 */
                    /* try { // try from 00aad028 to 00bad02f has its CatchHandler @ 00aad048 */
                    /* try { // try from 00aad030 to 00bad03f has its CatchHandler @ 00aad040 */
                    /* catch() { ... } // from try @ 00aad030 with catch @ 00aad040
                       try { // try from 00aad040 to 00bad377 has its CatchHandler @ 00aac138 */
  ssl = SSL_get_SSL_CTX(param_1);
                    /* catch() { ... } // from try @ 00aad028 with catch @ 00aad048 */
                    /* catch() { ... } // from try @ 00aad01c with catch @ 00aad04c */
                    /* catch() { ... } // from try @ 00aacfcc with catch @ 00aad050
                       catch() { ... } // from try @ 00aacfe4 with catch @ 00aad050 */
  pvVar2 = SSL_CTX_get_ex_data(ssl,DAT_01d5449c);
                    /* catch() { ... } // from try @ 00aacfdc with catch @ 00aad054 */
  if (pvVar2 != (void *)0x0) {
                    /* catch() { ... } // from try @ 00aacfd4 with catch @ 00aad058 */
    lVar3 = *(long *)((long)pvVar2 + 0x828);
                    /* catch() { ... } // from try @ 00aac508 with catch @ 00aad060 */
    iVar1 = SSL_get_fd(param_1);
    lVar3 = *(long *)(lVar3 + (long)iVar1 * 8);
                    /* catch() { ... } // from try @ 00aace64 with catch @ 00aad068 */
                    /* catch() { ... } // from try @ 00aac314 with catch @ 00aad06c */
    if ((lVar3 != 0) && ((*(uint *)(*(long *)(lVar3 + 0x228) + 500) & param_2) != 0)) {
                    /* catch() { ... } // from try @ 00aac294 with catch @ 00aad07c */
                    /* catch() { ... } // from try @ 00aacd74 with catch @ 00aad084 */
      local_38 = param_2;
      uStack_34 = param_3;
                    /* catch() { ... } // from try @ 00aac898 with catch @ 00aad094 */
      iVar1 = FUN_00aa08a4(*(undefined8 *)(*(long *)(lVar3 + 0x248) + 8),lVar3,0x43,
                           *(undefined8 *)(lVar3 + 0x270),&local_38,0);
                    /* catch() { ... } // from try @ 00aac670 with catch @ 00aad0a0 */
      if (iVar1 != 0) {
                    /* catch() { ... } // from try @ 00aac6dc with catch @ 00aad0a8 */
        lws_set_timeout(lVar3,0x16,0xffffffff);
      }
    }
  }
  return;
}

