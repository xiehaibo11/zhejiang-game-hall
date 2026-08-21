
undefined4 FUN_0105253c(uint *param_1,long param_2)

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
  
  local_54 = 1;
  uVar4 = *param_1;
                    /* try { // try from 0105256c to 01152583 has its CatchHandler @ 01053840 */
  if (uVar4 < 0xfffffffe) {
    lVar7 = *(long *)(param_2 + 0x150);
    for (lVar8 = *(long *)(lVar7 + 0x830); lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x158)) {
      if (*(uint *)(lVar8 + 0x1d0) == uVar4) {
        __s1 = *(char **)(param_1 + 2);
        __s2 = *(char **)(lVar8 + 0x178);
        if (__s1 == (char *)0x0) {
          if (__s2 == (char *)0x0) goto LAB_010525b8;
        }
        else if ((__s2 != (char *)0x0) && (iVar2 = strcmp(__s1,__s2), iVar2 == 0)) {
LAB_010525b8:
          *(uint *)(param_2 + 0x1d0) = uVar4;
          *(char **)(param_2 + 0x178) = __s1;
                    /* try { // try from 010525c4 to 011525d7 has its CatchHandler @ 01053640 */
          _lws_log(4," using listen skt from vhost %s\n",*(undefined8 *)(lVar8 + 0x170));
          return 0;
        }
      }
    }
                    /* try { // try from 010525dc to 011525ff has its CatchHandler @ 01053830 */
    sVar1 = *(short *)(lVar7 + 0xca6);
    if (0 < sVar1) {
      iVar2 = 0;
      if ((*(byte *)(lVar7 + 0xc78) >> 5 & 1) == 0) goto LAB_0105261c;
LAB_01052608:
      uVar4 = 2;
      do {
        __fd = socket(uVar4,1,0);
        if (__fd == -1) {
          _lws_log(1,"ERROR opening socket\n");
          return 1;
        }
                    /* try { // try from 01052654 to 01152663 has its CatchHandler @ 01053858 */
        iVar3 = setsockopt(__fd,1,2,&local_54,4);
        if (iVar3 < 0) {
                    /* try { // try from 010527e8 to 011527fb has its CatchHandler @ 010534dc */
          _lws_log(1,"reuseaddr failed\n");
          close(__fd);
          return 1;
        }
        if (((*(byte *)(*(long *)(param_2 + 0x150) + 0xc78) >> 5 & 1) == 0) &&
           ((*(uint *)(param_2 + 0x1d8) & 0x10020) == 0x10000)) {
          local_58 = *(uint *)(param_2 + 0x1d8) >> 0x11 & 1;
                    /* try { // try from 01052694 to 011526a3 has its CatchHandler @ 01053588 */
          iVar3 = setsockopt(__fd,0x29,0x1a,&local_58,4);
          if (iVar3 < 0) goto LAB_01052844;
        }
                    /* try { // try from 010526a4 to 011526b3 has its CatchHandler @ 01053584 */
        if (((*(char *)(param_2 + 0x1da) < '\0') &&
            (1 < *(short *)(*(long *)(param_2 + 0x150) + 0xca6))) &&
           (iVar3 = setsockopt(__fd,1,0xf,&local_54,4), iVar3 < 0)) {
LAB_01052844:
          close(__fd);
          return 1;
                    /* try { // try from 01052850 to 01152877 has its CatchHandler @ 0105353c */
        }
        lws_plat_set_socket_options(param_2,__fd);
        uVar4 = FUN_0104431c(param_2,__fd,*param_1,*(undefined8 *)(param_1 + 2));
        if ((int)uVar4 < 0) goto LAB_01052844;
        *param_1 = uVar4;
        *(uint *)(param_2 + 0x1d0) = uVar4;
        *(undefined8 *)(param_2 + 0x178) = *(undefined8 *)(param_1 + 2);
        lVar8 = FUN_0104b1fc(0x310,"listen wsi");
        if (lVar8 == 0) {
                    /* try { // try from 01052800 to 01152827 has its CatchHandler @ 01053540 */
          _lws_log(1,"Out of mem\n");
          goto LAB_01052844;
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
                    /* try { // try from 01052754 to 01152767 has its CatchHandler @ 01053508 */
          FUN_010574f8(param_2,lVar8);
          lVar7 = *(long *)(param_2 + 0x150);
        }
        iVar3 = FUN_01045fa8(lVar7,lVar8);
                    /* try { // try from 0105276c to 0115278f has its CatchHandler @ 010535f8 */
        if (iVar3 != 0) goto LAB_01052844;
        *(int *)(*(long *)(param_2 + 0x150) + 0xc70) =
             *(int *)(*(long *)(param_2 + 0x150) + 0xc70) + 1;
        *(long *)(param_2 + 0x168) = lVar8;
        iVar3 = listen(*(int *)(lVar8 + 0x2d0),0x80);
        if (iVar3 < 0) {
          puVar5 = (undefined4 *)__errno();
          _lws_log(1,"listen failed with error %d\n",*puVar5);
          *(undefined8 *)(param_2 + 0x168) = 0;
                    /* try { // try from 01052838 to 0115284b has its CatchHandler @ 010534d4 */
          *(int *)(*(long *)(param_2 + 0x150) + 0xc70) =
               *(int *)(*(long *)(param_2 + 0x150) + 0xc70) + -1;
          FUN_01046140(lVar8);
          goto LAB_01052844;
        }
        iVar2 = iVar2 + 1;
        if (sVar1 <= iVar2) {
          return 0;
        }
        if ((*(byte *)(*(long *)(param_2 + 0x150) + 0xc78) >> 5 & 1) != 0) goto LAB_01052608;
LAB_0105261c:
        uVar4 = *(uint *)(param_2 + 0x1d8) >> 2 & 8 ^ 10;
      } while( true );
    }
  }
  return 0;
}

