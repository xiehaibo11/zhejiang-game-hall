
long lws_client_connect_via_info(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)(*param_1 + 0xc94) >> 3 & 1) != 0) {
    return 0;
  }
                    /* try { // try from 0104e24c to 0114e2cf has its CatchHandler @ 0104e24c
                       catch() { ... } // from try @ 0104e24c with catch @ 0104e24c
                       catch() { ... } // from try @ 0104e2dc with catch @ 0104e24c
                       catch() { ... } // from try @ 0104e31c with catch @ 0104e24c
                       catch() { ... } // from try @ 0104e450 with catch @ 0104e24c */
  if ((*(byte *)(*param_1 + 0xc94) >> 4 & 1) == 0) {
    lws_protocol_init();
  }
  lVar2 = FUN_0104b1fc(0x310,"client wsi");
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x220) = *param_1;
    lws_union_transition(lVar2,0x20);
    *(undefined4 *)(lVar2 + 0x2d0) = 0xffffffff;
    iVar1 = (int)param_1[7];
    if (iVar1 + 1U < 2) {
      iVar1 = 0xd;
    }
    *(char *)(lVar2 + 0x2fd) = (char)iVar1;
    *(undefined8 *)(lVar2 + 0x270) = 0;
    *(undefined1 *)(lVar2 + 0x303) = 0;
    *(undefined1 *)(lVar2 + 0x2ff) = 7;
    *(undefined4 *)(lVar2 + 0x2d4) = 0xffffffff;
    *(short *)(lVar2 + 0x2fa) = (short)(int)param_1[2];
    lVar3 = param_1[0xe];
    *(long *)(lVar2 + 0x228) = lVar3;
    lVar4 = lVar3;
    if (lVar3 == 0) {
                    /* try { // try from 0104e2d0 to 0114e2db has its CatchHandler @ 0104e458 */
      lVar4 = *(long *)(*param_1 + 0x830);
      *(long *)(lVar2 + 0x228) = lVar4;
    }
                    /* try { // try from 0104e2dc to 0114e2ff has its CatchHandler @ 0104e24c */
    *(undefined8 *)(lVar2 + 0x248) = *(undefined8 *)(lVar4 + 0x188);
    if ((((lVar3 != 0) && (param_1[10] != 0)) && (param_1[6] != 0)) &&
       (lVar4 = lws_vhost_name_to_protocol(), lVar4 != 0)) {
      *(long *)(lVar2 + 0x248) = lVar4;
    }
                    /* try { // try from 0104e300 to 0114e31b has its CatchHandler @ 0104e46c */
    if ((*(long *)(lVar2 + 0x270) == 0) && (param_1[8] != 0)) {
      *(uint *)(lVar2 + 0x2f4) = *(uint *)(lVar2 + 0x2f4) | 0x20;
      *(long *)(lVar2 + 0x270) = param_1[8];
    }
    else if ((param_1[10] != 0) && (iVar1 = FUN_01042334(lVar2), iVar1 != 0)) goto LAB_0104e4e4;
    *(byte *)(lVar2 + 0x2f8) =
         *(byte *)(lVar2 + 0x2f8) & 0xf0 | *(byte *)((long)param_1 + 0x14) & 0xf;
    lVar4 = thunk_FUN_0104b1cc(0,0x1420,"client stash");
    *(long *)(lVar2 + 0x18) = lVar4;
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x1200) = 0;
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x1300) = 0;
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x1400) = 0;
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x1410) = 0;
      strncpy(*(char **)(lVar2 + 0x18),(char *)param_1[1],0xff);
      strncpy((char *)(*(long *)(lVar2 + 0x18) + 0x100),(char *)param_1[3],0xfff);
      strncpy((char *)(*(long *)(lVar2 + 0x18) + 0x1100),(char *)param_1[4],0xff);
      if ((char *)param_1[5] != (char *)0x0) {
        strncpy((char *)(*(long *)(lVar2 + 0x18) + 0x1200),(char *)param_1[5],0xff);
      }
      if ((char *)param_1[6] != (char *)0x0) {
        strncpy((char *)(*(long *)(lVar2 + 0x18) + 0x1300),(char *)param_1[6],0xff);
      }
      if ((char *)param_1[10] != (char *)0x0) {
        strncpy((char *)(*(long *)(lVar2 + 0x18) + 0x1400),(char *)param_1[10],0xf);
      }
      if ((char *)param_1[0x10] != (char *)0x0) {
        strncpy((char *)(*(long *)(lVar2 + 0x18) + 0x1410),(char *)param_1[0x10],0xf);
      }
                    /* try { // try from 0104e444 to 0114e44f has its CatchHandler @ 0104e454 */
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0xff) = 0;
                    /* try { // try from 0104e450 to 0114e487 has its CatchHandler @ 0104e24c */
                    /* catch() { ... } // from try @ 0104e444 with catch @ 0104e454 */
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x10ff) = 0;
                    /* catch() { ... } // from try @ 0104e2d0 with catch @ 0104e458 */
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x11ff) = 0;
                    /* catch() { ... } // from try @ 0104e300 with catch @ 0104e46c */
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x12ff) = 0;
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x13ff) = 0;
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x140f) = 0;
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x141f) = 0;
      if ((long *)param_1[0xf] != (long *)0x0) {
        *(long *)param_1[0xf] = lVar2;
      }
      iVar1 = FUN_01047830(lVar2,0);
      if (-1 < iVar1) {
        lVar4 = param_1[0xb];
        if (lVar4 != 0) {
          *(long *)(lVar2 + 0x230) = lVar4;
          *(undefined8 *)(lVar2 + 0x240) = *(undefined8 *)(lVar4 + 0x238);
          *(long *)(lVar4 + 0x238) = lVar2;
          return lVar2;
        }
        return lVar2;
      }
      goto LAB_0104e4fc;
    }
    _lws_log(1,"%s: OOM\n","lws_client_connect_via_info");
  }
LAB_0104e4e4:
  thunk_FUN_0104b1cc(lVar2,0,"lws_free");
                    /* catch() { ... } // from try @ 0104e528 with catch @ 0104e4f8 */
LAB_0104e4fc:
  if ((undefined8 *)param_1[0xf] == (undefined8 *)0x0) {
                    /* try { // try from 0104e520 to 0114e527 has its CatchHandler @ 0104e5b0 */
    return 0;
  }
  *(undefined8 *)param_1[0xf] = 0;
  return 0;
}

