
undefined8 FUN_010574f8(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x150);
  if ((*(byte *)(lVar5 + 0xc79) >> 2 & 1) == 0) {
    return 0;
  }
                    /* catch() { ... } // from try @ 0105749c with catch @ 01057530 */
  if ((param_2 == 0) && (param_2 = *(long *)(param_1 + 0x168), param_2 == 0)) {
                    /* try { // try from 010575b8 to 011575bb has its CatchHandler @ 010576f0 */
                    /* try { // try from 010575bc to 0115770b has its CatchHandler @ 0105754c */
    return 0;
  }
  if (*(long *)(param_2 + 0x208) != 0) {
                    /* try { // try from 0105754c to 011575b7 has its CatchHandler @ 0105754c
                       catch() { ... } // from try @ 0105754c with catch @ 0105754c
                       catch() { ... } // from try @ 010575bc with catch @ 0105754c */
    return 0;
  }
  lVar3 = *(long *)(lVar5 + (ulong)*(byte *)(param_2 + 0x304) * 0x6f8 + 0x130);
  uVar4 = 0;
  if (lVar3 != 0) {
    *(long *)(param_2 + 0x208) = lVar5;
    iVar2 = uv_poll_init_socket(lVar3,param_2 + 0x168,*(undefined4 *)(param_2 + 0x2d0));
    if (iVar2 == 0) {
      lVar5 = lws_get_context(param_2);
      if ((*(byte *)(lVar5 + 0xc79) >> 2 & 1) == 0) {
        return 0;
      }
      if (*(long *)(*(long *)(param_2 + 0x220) + (ulong)*(byte *)(param_2 + 0x304) * 0x6f8 + 0x130)
          != 0) {
        if (*(long *)(param_2 + 0x208) != 0) {
          bVar1 = *(byte *)(param_2 + 0x210) & 2 | 1;
          uv_poll_start(param_2 + 0x168,bVar1,FUN_01057ba4);
          *(byte *)(param_2 + 0x210) = bVar1;
          return 0;
        }
        return 0;
      }
      return 0;
    }
    _lws_log(1,"uv_poll_init failed %d, sockfd=%p\n",iVar2,(long)*(int *)(param_2 + 0x2d0));
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

