
undefined8 dtls_process_hello_verify(long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong __n;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad171c with catch @ 00ad175c
                        */
  uVar3 = param_2[1];
  if (1 < uVar3) {
    lVar2 = *param_2;
    *param_2 = lVar2 + 2;
    param_2[1] = uVar3 - 2;
    if (uVar3 - 2 != 0) {
      bVar1 = *(byte *)(lVar2 + 2);
      __n = (ulong)bVar1;
                    /* try { // try from 00ad1790 to 00bd1793 has its CatchHandler @ 00ad17d0 */
      if (__n <= uVar3 - 3) {
        *param_2 = lVar2 + 3 + __n;
        param_2[1] = (uVar3 - 3) - __n;
        memcpy(*(void **)(param_1 + 0x98),(void *)(lVar2 + 3),__n);
        *(uint *)(*(long *)(param_1 + 0x98) + 0x100) = (uint)bVar1;
        return 1;
      }
    }
  }
  ERR_put_error(0x14,0x182,0x9f,"ssl/statem/statem_clnt.c",0x373);
  ssl3_send_alert(param_1,2,0x32);
  ossl_statem_set_error(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad1790 with catch @ 00ad17d0
                        */
  return 0;
}

