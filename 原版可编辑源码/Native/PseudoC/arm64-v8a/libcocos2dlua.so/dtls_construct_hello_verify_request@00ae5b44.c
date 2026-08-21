
undefined8 dtls_construct_hello_verify_request(long param_1)

{
  uint uVar1;
  int iVar2;
  void *__src;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  
  pcVar4 = *(code **)(*(long *)(param_1 + 0x1b8) + 0xc0);
  if (pcVar4 != (code *)0x0) {
                    /* try { // try from 00ae5b70 to 00be5b7b has its CatchHandler @ 00ae5be8 */
    lVar6 = *(long *)(*(long *)(param_1 + 0x78) + 8);
    iVar2 = (*pcVar4)(param_1,*(long *)(param_1 + 0x98),*(long *)(param_1 + 0x98) + 0x100);
                    /* try { // try from 00ae5b7c to 00be5c1f has its CatchHandler @ 00ae5ac0 */
    if (iVar2 != 0) {
      __src = *(void **)(param_1 + 0x98);
      uVar1 = *(uint *)((long)__src + 0x100);
      if (uVar1 < 0x100) {
        *(undefined2 *)(lVar6 + 0xc) = 0xfffe;
        *(char *)(lVar6 + 0xe) = (char)uVar1;
        memcpy((void *)(lVar6 + 0xf),__src,(ulong)(uVar1 & 0xff));
        uVar5 = lVar6 + 0xf + ((ulong)(uVar1 & 0xff) - (lVar6 + 0xc));
        uVar3 = uVar5 & 0xffffffff;
                    /* catch() { ... } // from try @ 00ae5b70 with catch @ 00ae5be8 */
        dtls1_set_message_header(param_1,3,uVar3,0,uVar3);
        *(int *)(param_1 + 0x88) = (int)uVar5 + 0xc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        return 1;
      }
    }
  }
  ERR_put_error(0x14,0x181,400,"ssl/statem/statem_srvr.c",0x372);
  ossl_statem_set_error(param_1);
  return 0;
}

