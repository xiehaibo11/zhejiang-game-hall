
long lws_client_connect_via_info(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)(*param_1 + 0xc94) >> 3 & 1) != 0) {
    return 0;
  }
  if ((*(byte *)(*param_1 + 0xc94) >> 4 & 1) == 0) {
    lws_protocol_init();
  }
  lVar2 = FUN_00aa8a78(0x310,"client wsi");
  if (lVar2 != 0) {
                    /* try { // try from 00aabaf0 to 00babaf7 has its CatchHandler @ 00aabba4 */
    *(long *)(lVar2 + 0x220) = *param_1;
                    /* try { // try from 00aabaf8 to 00babb63 has its CatchHandler @ 00aaba94 */
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
      lVar4 = *(long *)(*param_1 + 0x830);
      *(long *)(lVar2 + 0x228) = lVar4;
    }
    *(undefined8 *)(lVar2 + 0x248) = *(undefined8 *)(lVar4 + 0x188);
                    /* try { // try from 00aabb64 to 00babb6b has its CatchHandler @ 00aabbb8 */
                    /* try { // try from 00aabb6c to 00babbbb has its CatchHandler @ 00aaba94 */
    if ((((lVar3 != 0) && (param_1[10] != 0)) && (param_1[6] != 0)) &&
       (lVar4 = lws_vhost_name_to_protocol(), lVar4 != 0)) {
      *(long *)(lVar2 + 0x248) = lVar4;
    }
    if ((*(long *)(lVar2 + 0x270) == 0) && (param_1[8] != 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aabaf0 with catch @ 00aabba4
                        */
      *(uint *)(lVar2 + 0x2f4) = *(uint *)(lVar2 + 0x2f4) | 0x20;
      *(long *)(lVar2 + 0x270) = param_1[8];
    }
    else if ((param_1[10] != 0) && (iVar1 = FUN_00a9fbb0(lVar2), iVar1 != 0)) goto LAB_00aabd60;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aabb64 with catch @ 00aabbb8
                        */
                    /* try { // try from 00aabbbc to 00babc0b has its CatchHandler @ 00aabbbc
                       catch() { ... } // from try @ 00aabbbc with catch @ 00aabbbc
                       catch() { ... } // from try @ 00aabc18 with catch @ 00aabbbc
                       catch() { ... } // from try @ 00aabc54 with catch @ 00aabbbc */
    *(byte *)(lVar2 + 0x2f8) =
         *(byte *)(lVar2 + 0x2f8) & 0xf0 | *(byte *)((long)param_1 + 0x14) & 0xf;
    lVar4 = thunk_FUN_00aa8a48(0,0x1420,"client stash");
    *(long *)(lVar2 + 0x18) = lVar4;
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x1200) = 0;
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x1300) = 0;
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x1400) = 0;
                    /* try { // try from 00aabc0c to 00babc17 has its CatchHandler @ 00aabc84 */
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x1410) = 0;
                    /* try { // try from 00aabc18 to 00babc4b has its CatchHandler @ 00aabbbc */
      strncpy(*(char **)(lVar2 + 0x18),(char *)param_1[1],0xff);
      strncpy((char *)(*(long *)(lVar2 + 0x18) + 0x100),(char *)param_1[3],0xfff);
      strncpy((char *)(*(long *)(lVar2 + 0x18) + 0x1100),(char *)param_1[4],0xff);
                    /* try { // try from 00aabc4c to 00babc53 has its CatchHandler @ 00aabca0 */
      if ((char *)param_1[5] != (char *)0x0) {
                    /* try { // try from 00aabc54 to 00babcb3 has its CatchHandler @ 00aabbbc */
        strncpy((char *)(*(long *)(lVar2 + 0x18) + 0x1200),(char *)param_1[5],0xff);
      }
      if ((char *)param_1[6] != (char *)0x0) {
        strncpy((char *)(*(long *)(lVar2 + 0x18) + 0x1300),(char *)param_1[6],0xff);
      }
                    /* catch() { ... } // from try @ 00aabc0c with catch @ 00aabc84 */
      if ((char *)param_1[10] != (char *)0x0) {
        strncpy((char *)(*(long *)(lVar2 + 0x18) + 0x1400),(char *)param_1[10],0xf);
      }
                    /* catch() { ... } // from try @ 00aabc4c with catch @ 00aabca0 */
      if ((char *)param_1[0x10] != (char *)0x0) {
                    /* try { // try from 00aabcb4 to 00babceb has its CatchHandler @ 00aabcb4
                       catch() { ... } // from try @ 00aabcb4 with catch @ 00aabcb4
                       catch() { ... } // from try @ 00aabd5c with catch @ 00aabcb4 */
        strncpy((char *)(*(long *)(lVar2 + 0x18) + 0x1410),(char *)param_1[0x10],0xf);
      }
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0xff) = 0;
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x10ff) = 0;
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x11ff) = 0;
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x12ff) = 0;
                    /* try { // try from 00aabcec to 00babcef has its CatchHandler @ 00aabd94 */
                    /* try { // try from 00aabcf0 to 00babcf7 has its CatchHandler @ 00aabd84 */
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x13ff) = 0;
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x140f) = 0;
      *(undefined1 *)(*(long *)(lVar2 + 0x18) + 0x141f) = 0;
      if ((long *)param_1[0xf] != (long *)0x0) {
        *(long *)param_1[0xf] = lVar2;
      }
                    /* try { // try from 00aabd1c to 00babd5b has its CatchHandler @ 00aabd5c */
      iVar1 = FUN_00aa50ac(lVar2,0);
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
      goto LAB_00aabd78;
    }
                    /* catch() { ... } // from try @ 00aabd1c with catch @ 00aabd5c
                       try { // try from 00aabd5c to 00babda7 has its CatchHandler @ 00aabcb4 */
    _lws_log(1,"%s: OOM\n","lws_client_connect_via_info");
  }
LAB_00aabd60:
  thunk_FUN_00aa8a48(lVar2,0,"lws_free");
LAB_00aabd78:
  if ((undefined8 *)param_1[0xf] == (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 00aabcec with catch @ 00aabd94 */
    return 0;
  }
                    /* catch() { ... } // from try @ 00aabcf0 with catch @ 00aabd84 */
  *(undefined8 *)param_1[0xf] = 0;
  return 0;
}

