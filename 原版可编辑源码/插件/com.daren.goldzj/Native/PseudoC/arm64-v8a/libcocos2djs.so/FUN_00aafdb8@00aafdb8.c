
undefined4 FUN_00aafdb8(uint *param_1,long param_2)

{
  short sVar1;
  int iVar2;
  int __fd;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *__s2;
  undefined8 uVar6;
  char *__s1;
  long lVar7;
  long lVar8;
  uint local_58;
  undefined4 local_54;
  
                    /* try { // try from 00aafdb8 to 00bafde7 has its CatchHandler @ 00ab0894 */
  local_54 = 1;
  uVar4 = *param_1;
  if (uVar4 < 0xfffffffe) {
    lVar7 = *(long *)(param_2 + 0x150);
    for (lVar8 = *(long *)(lVar7 + 0x830); lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x158)) {
                    /* try { // try from 00aafe04 to 00bafe17 has its CatchHandler @ 00ab088c */
      if (*(uint *)(lVar8 + 0x1d0) == uVar4) {
        __s1 = *(char **)(param_1 + 2);
        __s2 = *(char **)(lVar8 + 0x178);
        if (__s1 == (char *)0x0) {
          if (__s2 == (char *)0x0) goto LAB_00aafe34;
        }
        else if ((__s2 != (char *)0x0) && (iVar2 = strcmp(__s1,__s2), iVar2 == 0)) {
LAB_00aafe34:
          *(uint *)(param_2 + 0x1d0) = uVar4;
          *(char **)(param_2 + 0x178) = __s1;
          _lws_log(4," using listen skt from vhost %s\n",*(undefined8 *)(lVar8 + 0x170));
          return 0;
        }
      }
    }
    sVar1 = *(short *)(lVar7 + 0xca6);
    if (0 < sVar1) {
                    /* try { // try from 00aafe64 to 00bafe6b has its CatchHandler @ 00ab0864 */
      iVar2 = 0;
                    /* try { // try from 00aafe78 to 00bafefb has its CatchHandler @ 00ab0870 */
      if ((*(byte *)(lVar7 + 0xc78) >> 5 & 1) == 0) goto LAB_00aafe98;
LAB_00aafe84:
      uVar4 = 2;
      do {
        __fd = socket(uVar4,1,0);
        if (__fd == -1) {
          _lws_log(1,"ERROR opening socket\n");
          return 1;
        }
        iVar3 = setsockopt(__fd,1,2,&local_54,4);
        if (iVar3 < 0) {
                    /* try { // try from 00ab0058 to 00bb005f has its CatchHandler @ 00ab0878 */
          _lws_log(1,"reuseaddr failed\n");
          close(__fd);
          return 1;
        }
        if (((*(byte *)(*(long *)(param_2 + 0x150) + 0xc78) >> 5 & 1) == 0) &&
           ((*(uint *)(param_2 + 0x1d8) & 0x10020) == 0x10000)) {
          local_58 = *(uint *)(param_2 + 0x1d8) >> 0x11 & 1;
          iVar3 = setsockopt(__fd,0x29,0x1a,&local_58,4);
          if (iVar3 < 0) goto LAB_00ab00c0;
        }
                    /* try { // try from 00aaff20 to 00baff27 has its CatchHandler @ 00ab0860 */
                    /* try { // try from 00aaff30 to 00baff37 has its CatchHandler @ 00ab085c */
                    /* try { // try from 00aaff3c to 00baff4b has its CatchHandler @ 00ab0858 */
        if (((*(char *)(param_2 + 0x1da) < '\0') &&
            (1 < *(short *)(*(long *)(param_2 + 0x150) + 0xca6))) &&
           (iVar3 = setsockopt(__fd,1,0xf,&local_54,4), iVar3 < 0)) {
LAB_00ab00c0:
                    /* try { // try from 00ab00c4 to 00bb00cb has its CatchHandler @ 00ab0884 */
          close(__fd);
          return 1;
                    /* try { // try from 00ab00cc to 00bb00d3 has its CatchHandler @ 00ab0888 */
        }
        lws_plat_set_socket_options(param_2,__fd);
        uVar4 = FUN_00aa1b98(param_2,__fd,*param_1,*(undefined8 *)(param_1 + 2));
        if ((int)uVar4 < 0) goto LAB_00ab00c0;
        *param_1 = uVar4;
        *(uint *)(param_2 + 0x1d0) = uVar4;
                    /* try { // try from 00aaff7c to 00baff87 has its CatchHandler @ 00ab0850 */
        *(undefined8 *)(param_2 + 0x178) = *(undefined8 *)(param_1 + 2);
        lVar8 = FUN_00aa8a78(0x310,"listen wsi");
                    /* try { // try from 00aaff90 to 00baff9f has its CatchHandler @ 00ab0834 */
        if (lVar8 == 0) {
          _lws_log(1,"Out of mem\n");
          goto LAB_00ab00c0;
        }
        uVar6 = *(undefined8 *)(param_2 + 0x150);
        *(int *)(lVar8 + 0x2d0) = __fd;
        *(undefined1 *)(lVar8 + 0x2fe) = 10;
        *(undefined8 *)(lVar8 + 0x220) = uVar6;
        uVar6 = *(undefined8 *)(param_2 + 0x188);
        *(char *)(lVar8 + 0x304) = (char)iVar2;
        *(long *)(lVar8 + 0x228) = param_2;
        *(undefined8 *)(lVar8 + 0x248) = uVar6;
        *(uint *)(lVar8 + 0x2f4) = *(uint *)(lVar8 + 0x2f4) | 0x10;
        lVar7 = *(long *)(param_2 + 0x150);
        if ((*(byte *)(lVar7 + 0xc79) >> 2 & 1) != 0) {
          FUN_00ab4d74(param_2,lVar8);
          lVar7 = *(long *)(param_2 + 0x150);
        }
        iVar3 = FUN_00aa3824(lVar7,lVar8);
        if (iVar3 != 0) goto LAB_00ab00c0;
        *(int *)(*(long *)(param_2 + 0x150) + 0xc70) =
             *(int *)(*(long *)(param_2 + 0x150) + 0xc70) + 1;
        *(long *)(param_2 + 0x168) = lVar8;
        iVar3 = listen(*(int *)(lVar8 + 0x2d0),0x80);
        if (iVar3 < 0) {
          puVar5 = (undefined4 *)__errno();
          _lws_log(1,"listen failed with error %d\n",*puVar5);
                    /* try { // try from 00ab00a8 to 00bb00af has its CatchHandler @ 00ab087c */
          *(undefined8 *)(param_2 + 0x168) = 0;
                    /* try { // try from 00ab00b8 to 00bb00bf has its CatchHandler @ 00ab0880 */
          *(int *)(*(long *)(param_2 + 0x150) + 0xc70) =
               *(int *)(*(long *)(param_2 + 0x150) + 0xc70) + -1;
          FUN_00aa39bc(lVar8);
          goto LAB_00ab00c0;
        }
        iVar2 = iVar2 + 1;
                    /* try { // try from 00ab0014 to 00bb001f has its CatchHandler @ 00ab0874 */
        if (sVar1 <= iVar2) {
          return 0;
        }
        if ((*(byte *)(*(long *)(param_2 + 0x150) + 0xc78) >> 5 & 1) != 0) goto LAB_00aafe84;
LAB_00aafe98:
        uVar4 = *(uint *)(param_2 + 0x1d8) >> 2 & 8 ^ 10;
      } while( true );
    }
  }
                    /* try { // try from 00ab003c to 00bb004f has its CatchHandler @ 00ab0890 */
  return 0;
}

