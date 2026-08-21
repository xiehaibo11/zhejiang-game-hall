
int FUN_00a36468(long *param_1,undefined1 *param_2)

{
  ulong uVar1;
  char *__nptr;
  char *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  long lVar6;
  socklen_t sVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  ssize_t sVar12;
  void *pvVar13;
  size_t sVar14;
  ulong uVar15;
  char *pcVar16;
  long lVar17;
  long lVar18;
  undefined1 *puVar19;
  int *piVar20;
  long lVar21;
  char *__s;
  ulong __n;
  socklen_t local_ec;
  sockaddr local_e8 [8];
  
  lVar6 = tpidr_el0;
  lVar17 = *(long *)(lVar6 + 0x28);
  lVar21 = *param_1;
  piVar20 = (int *)param_1[0xc3];
  time((time_t *)local_e8);
                    /* try { // try from 00a364b4 to 00b3650b has its CatchHandler @ 00a364b4
                       catch() { ... } // from try @ 00a364b4 with catch @ 00a364b4
                       catch() { ... } // from try @ 00a36710 with catch @ 00a364b4 */
  lVar18 = *(long *)(piVar20 + 0xc);
  if (lVar18 < (long)local_e8[0]._0_8_) {
    piVar20[2] = -99;
    *piVar20 = 3;
    *param_2 = 0;
  }
  else {
    if (*(long *)(piVar20 + 0xe) + (long)piVar20[8] < (long)local_e8[0]._0_8_) {
      time((time_t *)(piVar20 + 0xe));
      lVar18 = *(long *)(piVar20 + 0xc);
      iVar8 = 7;
    }
    else {
      iVar8 = -1;
    }
                    /* try { // try from 00a3650c to 00b36523 has its CatchHandler @ 00a36790 */
    *param_2 = 0;
    if ((long)local_e8[0]._0_8_ < lVar18) {
      if (iVar8 == -1) {
        iVar8 = FUN_00a159e8(piVar20[6],0xffffffff,0xffffffff,0);
        if (iVar8 != 0) {
          if (iVar8 == -1) {
            puVar10 = (undefined4 *)__errno();
            uVar11 = FUN_00a155d4(param_1,*puVar10);
            FUN_00a23020(lVar21,"%s",uVar11);
            iVar8 = 0;
            piVar20[3] = 5;
            goto LAB_00a36578;
          }
          puVar10 = (undefined4 *)param_1[0xc3];
          lVar18 = *param_1;
          local_ec = 0x80;
          sVar12 = recvfrom(puVar10[6],*(void **)(puVar10 + 0x58),(long)(int)puVar10[0x55] + 4,0,
                            local_e8,&local_ec);
          sVar7 = local_ec;
          iVar8 = (int)sVar12;
          puVar10[0x53] = iVar8;
          if (puVar10[0x52] == 0) {
            memcpy(puVar10 + 0x32,local_e8,(ulong)local_ec);
            iVar8 = puVar10[0x53];
            puVar10[0x52] = sVar7;
          }
          if (iVar8 < 4) {
            FUN_00a23020(lVar18,"Received too short packet");
            puVar10[3] = 7;
          }
          else {
            puVar19 = *(undefined1 **)(puVar10 + 0x58);
            uVar3 = *puVar19;
            uVar4 = puVar19[1];
            puVar10[3] = (uint)CONCAT11(uVar3,uVar4);
            switch((uint)CONCAT11(uVar3,uVar4)) {
            case 3:
              if ((4 < iVar8) &&
                 ((short)(*(short *)(puVar10 + 0x10) + 1) == CONCAT11(puVar19[2],puVar19[3]))) {
                iVar8 = FUN_00a23808(param_1,1,puVar19 + 4,(long)(iVar8 + -4));
                if (iVar8 != 0) {
                    /* try { // try from 00a36710 to 00b367f7 has its CatchHandler @ 00a364b4 */
                  switch(*puVar10) {
                  case 1:
                    **(undefined1 **)(puVar10 + 0x5a) = 0;
                    *(undefined1 *)(*(long *)(puVar10 + 0x5a) + 1) = 5;
                    uVar5 = *(undefined2 *)(puVar10 + 0x10);
                    *(char *)(*(long *)(puVar10 + 0x5a) + 2) = (char)((ushort)uVar5 >> 8);
                    *(char *)(*(long *)(puVar10 + 0x5a) + 3) = (char)uVar5;
                    sendto(puVar10[6],*(void **)(puVar10 + 0x5a),4,0x4000,
                           (sockaddr *)(puVar10 + 0x32),puVar10[0x52]);
                  case 0:
                    *puVar10 = 3;
                    break;
                  case 2:
                    /* try { // try from 00a36b58 to 00b36c67 has its CatchHandler @ 00a367f8 */
                    *puVar10 = 3;
                    **(undefined1 **)(puVar10 + 0x5a) = 0;
                    *(undefined1 *)(*(long *)(puVar10 + 0x5a) + 1) = 5;
                    uVar5 = *(undefined2 *)(puVar10 + 0x10);
                    *(char *)(*(long *)(puVar10 + 0x5a) + 2) = (char)((ushort)uVar5 >> 8);
                    *(char *)(*(long *)(puVar10 + 0x5a) + 3) = (char)uVar5;
                    sendto(puVar10[6],*(void **)(puVar10 + 0x5a),4,0x4000,
                           (sockaddr *)(puVar10 + 0x32),puVar10[0x52]);
                    *puVar10 = 3;
                    break;
                  case 3:
                    FUN_00a22d58(**(undefined8 **)(puVar10 + 4),"%s\n","TFTP finished");
                    break;
                  default:
                    FUN_00a23020(**(undefined8 **)(puVar10 + 4),"%s","Internal state machine error")
                    ;
                  }
                  goto LAB_00a36578;
                }
                    /* try { // try from 00a36ac0 to 00b36b03 has its CatchHandler @ 00a36bd4 */
                *(long *)(lVar18 + 0x98) = *(long *)(lVar18 + 0x98) + (long)(int)puVar10[0x53] + -4;
                FUN_00a1b6ac(lVar18);
              }
              break;
            case 4:
              break;
            case 5:
                    /* catch() { ... } // from try @ 00a36544 with catch @ 00a367a0 */
              puVar10[2] = (uint)CONCAT11(puVar19[2],puVar19[3]);
              FUN_00a22d58(lVar18,"%s\n",puVar19 + 4);
              break;
            case 6:
              pcVar16 = puVar19 + 2;
                    /* try { // try from 00a36850 to 00b36867 has its CatchHandler @ 00a36c00 */
              lVar18 = **(long **)(puVar10 + 4);
              puVar10[0x55] = 0x200;
              __s = pcVar16;
              do {
                __n = (long)(pcVar16 + (iVar8 + -2)) - (long)__s;
                    /* try { // try from 00a36870 to 00b3687b has its CatchHandler @ 00a36bfc */
                    /* try { // try from 00a3687c to 00b36887 has its CatchHandler @ 00a36bf8 */
                pvVar13 = memchr(__s,0,__n);
                uVar15 = __n;
                    /* try { // try from 00a36888 to 00b3689f has its CatchHandler @ 00a36c10 */
                if (pvVar13 != (void *)0x0) {
                  uVar15 = (long)pvVar13 - (long)__s;
                }
                uVar1 = uVar15 + 1;
                sVar14 = __n - uVar1;
                if (__n < uVar1 || sVar14 == 0) {
LAB_00a36a90:
                  pcVar16 = "Malformed ACK packet, rejecting";
LAB_00a36a9c:
                  FUN_00a23020(lVar18,pcVar16);
                  iVar8 = 0x47;
                  goto LAB_00a36578;
                }
                pvVar13 = memchr(__s + uVar1,0,sVar14);
                if (pvVar13 != (void *)0x0) {
                  sVar14 = (long)pvVar13 - (long)(__s + uVar1);
                }
                uVar15 = uVar15 + sVar14 + 2;
                if (__n < uVar15) goto LAB_00a36a90;
                    /* try { // try from 00a368cc to 00b368d3 has its CatchHandler @ 00a36be0 */
                sVar14 = strlen(__s);
                pcVar2 = __s + uVar15;
                if (pcVar2 == (char *)0x0) goto LAB_00a36a90;
                    /* try { // try from 00a368d8 to 00b3694b has its CatchHandler @ 00a36bd8 */
                __nptr = __s + sVar14 + 1;
                FUN_00a22d58(lVar18,"got option=(%s) value=(%s)\n",__s,__nptr);
                sVar14 = strlen(__s);
                iVar9 = FUN_00a33994(__s,"blksize",sVar14);
                if (iVar9 != 0) {
                  uVar15 = strtol(__nptr,(char **)0x0,10);
                  if (uVar15 == 0) {
                    pcVar16 = "invalid blocksize value in OACK packet";
                    goto LAB_00a36a9c;
                  }
                  if ((long)uVar15 < 0xffb9) {
                    if (7 < (long)uVar15) {
                    /* try { // try from 00a36950 to 00b36993 has its CatchHandler @ 00a36c10 */
                      if ((long)uVar15 <= (long)(int)puVar10[0x56]) {
                        puVar10[0x55] = (int)uVar15;
                        FUN_00a22d58(lVar18,"%s (%d) %s (%d)\n","blksize parsed from OACK",
                                     uVar15 & 0xffffffff,"requested");
                        goto LAB_00a369f0;
                      }
                    /* try { // try from 00a36b1c to 00b36b57 has its CatchHandler @ 00a36c10 */
                      FUN_00a23020(lVar18,"%s (%ld)",
                                   "server requested blksize larger than allocated",uVar15);
                      iVar8 = 0x47;
                      goto LAB_00a36578;
                    }
                    pcVar16 = "blksize is smaller than min supported";
                    uVar11 = 8;
                  }
                  else {
                    pcVar16 = "blksize is larger than max supported";
                    uVar11 = 0xffb8;
                  }
                  FUN_00a23020(lVar18,"%s (%d)",pcVar16,uVar11);
                  iVar8 = 0x47;
                  goto LAB_00a36578;
                }
                sVar14 = strlen(__s);
                iVar9 = FUN_00a33994(__s,"tsize",sVar14);
                    /* try { // try from 00a369a4 to 00b369ab has its CatchHandler @ 00a36bdc */
                if (iVar9 != 0) {
                  lVar21 = strtol(__nptr,(char **)0x0,10);
                    /* try { // try from 00a369bc to 00b369c3 has its CatchHandler @ 00a36bd0 */
                    /* try { // try from 00a369d0 to 00b369f7 has its CatchHandler @ 00a36bd4 */
                  FUN_00a22d58(lVar18,"%s (%ld)\n","tsize parsed from OACK",lVar21);
                  if (*(char *)(lVar18 + 0x621) == '\0') {
                    if (lVar21 == 0) {
                    /* catch() { ... } // from try @ 00a369bc with catch @ 00a36bd0 */
                      FUN_00a23020(lVar18,"invalid tsize -:%s:- value in OACK packet",__nptr);
                    /* catch() { ... } // from try @ 00a369d0 with catch @ 00a36bd4
                       catch() { ... } // from try @ 00a36ac0 with catch @ 00a36bd4 */
                      iVar8 = 0x47;
                    /* catch() { ... } // from try @ 00a368d8 with catch @ 00a36bd8 */
                      goto LAB_00a36578;
                    }
                    FUN_00a1b4c4(lVar18,lVar21);
                  }
                }
LAB_00a369f0:
                __s = pcVar2;
              } while (pcVar2 < pcVar16 + (iVar8 + -2));
              break;
            default:
                    /* catch() { ... } // from try @ 00a36538 with catch @ 00a36788 */
                    /* catch() { ... } // from try @ 00a3652c with catch @ 00a3678c */
              FUN_00a23020(lVar18,"%s","Internal error: Unexpected packet");
                    /* catch() { ... } // from try @ 00a3650c with catch @ 00a36790 */
            }
            iVar8 = FUN_00a1ace8(param_1);
            if (iVar8 != 0) {
              switch(*puVar10) {
              case 1:
                    /* try { // try from 00a367f8 to 00b3684f has its CatchHandler @ 00a367f8
                       catch() { ... } // from try @ 00a367f8 with catch @ 00a367f8
                       catch() { ... } // from try @ 00a36b58 with catch @ 00a367f8 */
                **(undefined1 **)(puVar10 + 0x5a) = 0;
                *(undefined1 *)(*(long *)(puVar10 + 0x5a) + 1) = 5;
                uVar5 = *(undefined2 *)(puVar10 + 0x10);
                *(char *)(*(long *)(puVar10 + 0x5a) + 2) = (char)((ushort)uVar5 >> 8);
                *(char *)(*(long *)(puVar10 + 0x5a) + 3) = (char)uVar5;
                sendto(puVar10[6],*(void **)(puVar10 + 0x5a),4,0x4000,(sockaddr *)(puVar10 + 0x32),
                       puVar10[0x52]);
              case 0:
                *puVar10 = 3;
                break;
              case 2:
                *puVar10 = 3;
                **(undefined1 **)(puVar10 + 0x5a) = 0;
                    /* try { // try from 00a36a30 to 00b36a73 has its CatchHandler @ 00a36be0 */
                *(undefined1 *)(*(long *)(puVar10 + 0x5a) + 1) = 5;
                uVar5 = *(undefined2 *)(puVar10 + 0x10);
                *(char *)(*(long *)(puVar10 + 0x5a) + 2) = (char)((ushort)uVar5 >> 8);
                *(char *)(*(long *)(puVar10 + 0x5a) + 3) = (char)uVar5;
                sendto(puVar10[6],*(void **)(puVar10 + 0x5a),4,0x4000,(sockaddr *)(puVar10 + 0x32),
                       puVar10[0x52]);
                *puVar10 = 3;
                break;
              case 3:
                    /* try { // try from 00a36a78 to 00b36abb has its CatchHandler @ 00a36bdc */
                FUN_00a22d58(**(undefined8 **)(puVar10 + 4),"%s\n","TFTP finished");
                break;
              default:
                    /* try { // try from 00a36a10 to 00b36a2b has its CatchHandler @ 00a36c10 */
                FUN_00a23020(**(undefined8 **)(puVar10 + 4),"%s","Internal state machine error");
              }
              iVar8 = 0x2a;
              goto LAB_00a36578;
            }
          }
          iVar8 = piVar20[3];
          goto LAB_00a3651c;
        }
      }
      else {
LAB_00a3651c:
        iVar8 = FUN_00a36e50(piVar20,iVar8);
        if (iVar8 != 0) goto LAB_00a36578;
                    /* try { // try from 00a3652c to 00b36537 has its CatchHandler @ 00a3678c */
        iVar8 = *piVar20;
                    /* try { // try from 00a36538 to 00b36543 has its CatchHandler @ 00a36788 */
        *param_2 = iVar8 == 3;
        if (iVar8 == 3) {
                    /* try { // try from 00a36544 to 00b3670f has its CatchHandler @ 00a367a0 */
          FUN_00a335d8(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
        }
      }
      iVar8 = 0;
      goto LAB_00a36578;
    }
  }
  FUN_00a23020(lVar21,"TFTP response timeout");
  iVar8 = 0x1c;
LAB_00a36578:
  if (*(long *)(lVar6 + 0x28) != lVar17) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00a369a4 with catch @ 00a36bdc
                       catch() { ... } // from try @ 00a36a78 with catch @ 00a36bdc */
    __stack_chk_fail();
  }
  return iVar8;
}

