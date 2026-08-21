
int FUN_00a4ce50(long *param_1,undefined1 *param_2)

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
  lVar18 = *(long *)(piVar20 + 0xc);
                    /* try { // try from 00a4cea4 to 00b4cefb has its CatchHandler @ 00a4cea4
                       catch() { ... } // from try @ 00a4cea4 with catch @ 00a4cea4
                       catch() { ... } // from try @ 00a4cf14 with catch @ 00a4cea4 */
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
    *param_2 = 0;
    if ((long)local_e8[0]._0_8_ < lVar18) {
                    /* try { // try from 00a4cefc to 00b4cf07 has its CatchHandler @ 00a4cf9c */
      if (iVar8 == -1) {
                    /* catch() { ... } // from try @ 00a4cefc with catch @ 00a4cf9c */
        iVar8 = FUN_00a2b3d0(piVar20[6],0xffffffff,0xffffffff,0);
        if (iVar8 != 0) {
          if (iVar8 == -1) {
            puVar10 = (undefined4 *)__errno();
            uVar11 = FUN_00a2afbc(param_1,*puVar10);
            FUN_00a38a08(lVar21,"%s",uVar11);
            iVar8 = 0;
            piVar20[3] = 5;
            goto LAB_00a4cf60;
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
            FUN_00a38a08(lVar18,"Received too short packet");
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
                iVar8 = FUN_00a391f0(param_1,1,puVar19 + 4,(long)(iVar8 + -4));
                if (iVar8 != 0) {
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
                    *puVar10 = 3;
                    **(undefined1 **)(puVar10 + 0x5a) = 0;
                    *(undefined1 *)(*(long *)(puVar10 + 0x5a) + 1) = 5;
                    uVar5 = *(undefined2 *)(puVar10 + 0x10);
                    /* try { // try from 00a4d56c to 00b4d57b has its CatchHandler @ 00a4dbd0 */
                    *(char *)(*(long *)(puVar10 + 0x5a) + 2) = (char)((ushort)uVar5 >> 8);
                    *(char *)(*(long *)(puVar10 + 0x5a) + 3) = (char)uVar5;
                    sendto(puVar10[6],*(void **)(puVar10 + 0x5a),4,0x4000,
                           (sockaddr *)(puVar10 + 0x32),puVar10[0x52]);
                    *puVar10 = 3;
                    break;
                  case 3:
                    /* try { // try from 00a4d5a0 to 00b4d633 has its CatchHandler @ 00a4db44 */
                    FUN_00a38740(**(undefined8 **)(puVar10 + 4),"%s\n","TFTP finished");
                    break;
                  default:
                    FUN_00a38a08(**(undefined8 **)(puVar10 + 4),"%s","Internal state machine error")
                    ;
                  }
                  goto LAB_00a4cf60;
                }
                *(long *)(lVar18 + 0x98) = *(long *)(lVar18 + 0x98) + (long)(int)puVar10[0x53] + -4;
                FUN_00a31094(lVar18);
              }
              break;
            case 4:
              break;
            case 5:
              puVar10[2] = (uint)CONCAT11(puVar19[2],puVar19[3]);
              FUN_00a38740(lVar18,"%s\n",puVar19 + 4);
              break;
            case 6:
              pcVar16 = puVar19 + 2;
              lVar18 = **(long **)(puVar10 + 4);
              puVar10[0x55] = 0x200;
              __s = pcVar16;
              do {
                __n = (long)(pcVar16 + (iVar8 + -2)) - (long)__s;
                pvVar13 = memchr(__s,0,__n);
                uVar15 = __n;
                if (pvVar13 != (void *)0x0) {
                  uVar15 = (long)pvVar13 - (long)__s;
                }
                uVar1 = uVar15 + 1;
                sVar14 = __n - uVar1;
                if (__n < uVar1 || sVar14 == 0) {
LAB_00a4d478:
                  pcVar16 = "Malformed ACK packet, rejecting";
LAB_00a4d484:
                  FUN_00a38a08(lVar18,pcVar16);
                  iVar8 = 0x47;
                  goto LAB_00a4cf60;
                }
                pvVar13 = memchr(__s + uVar1,0,sVar14);
                if (pvVar13 != (void *)0x0) {
                  sVar14 = (long)pvVar13 - (long)(__s + uVar1);
                }
                uVar15 = uVar15 + sVar14 + 2;
                if (__n < uVar15) goto LAB_00a4d478;
                sVar14 = strlen(__s);
                pcVar2 = __s + uVar15;
                if (pcVar2 == (char *)0x0) goto LAB_00a4d478;
                __nptr = __s + sVar14 + 1;
                FUN_00a38740(lVar18,"got option=(%s) value=(%s)\n",__s,__nptr);
                sVar14 = strlen(__s);
                iVar9 = FUN_00a4a37c(__s,"blksize",sVar14);
                if (iVar9 != 0) {
                  uVar15 = strtol(__nptr,(char **)0x0,10);
                  if (uVar15 == 0) {
                    pcVar16 = "invalid blocksize value in OACK packet";
                    goto LAB_00a4d484;
                  }
                  if ((long)uVar15 < 0xffb9) {
                    if (7 < (long)uVar15) {
                      if ((long)uVar15 <= (long)(int)puVar10[0x56]) {
                        puVar10[0x55] = (int)uVar15;
                        FUN_00a38740(lVar18,"%s (%d) %s (%d)\n","blksize parsed from OACK",
                                     uVar15 & 0xffffffff,"requested");
                        goto LAB_00a4d3d8;
                      }
                      FUN_00a38a08(lVar18,"%s (%ld)",
                                   "server requested blksize larger than allocated",uVar15);
                      iVar8 = 0x47;
                      goto LAB_00a4cf60;
                    }
                    pcVar16 = "blksize is smaller than min supported";
                    /* try { // try from 00a4d4e8 to 00b4d56b has its CatchHandler @ 00a4d4e8
                       catch() { ... } // from try @ 00a4d4e8 with catch @ 00a4d4e8
                       catch() { ... } // from try @ 00a4da24 with catch @ 00a4d4e8 */
                    uVar11 = 8;
                  }
                  else {
                    pcVar16 = "blksize is larger than max supported";
                    uVar11 = 0xffb8;
                  }
                  FUN_00a38a08(lVar18,"%s (%d)",pcVar16,uVar11);
                  iVar8 = 0x47;
                  goto LAB_00a4cf60;
                }
                sVar14 = strlen(__s);
                iVar9 = FUN_00a4a37c(__s,"tsize",sVar14);
                if (iVar9 != 0) {
                  lVar21 = strtol(__nptr,(char **)0x0,10);
                  FUN_00a38740(lVar18,"%s (%ld)\n","tsize parsed from OACK",lVar21);
                  if (*(char *)(lVar18 + 0x621) == '\0') {
                    if (lVar21 == 0) {
                      FUN_00a38a08(lVar18,"invalid tsize -:%s:- value in OACK packet",__nptr);
                      iVar8 = 0x47;
                      goto LAB_00a4cf60;
                    }
                    FUN_00a30eac(lVar18,lVar21);
                  }
                }
LAB_00a4d3d8:
                __s = pcVar2;
              } while (pcVar2 < pcVar16 + (iVar8 + -2));
              break;
            default:
              FUN_00a38a08(lVar18,"%s","Internal error: Unexpected packet");
            }
            iVar8 = FUN_00a306d0(param_1);
            if (iVar8 != 0) {
              switch(*puVar10) {
              case 1:
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
                *(undefined1 *)(*(long *)(puVar10 + 0x5a) + 1) = 5;
                uVar5 = *(undefined2 *)(puVar10 + 0x10);
                *(char *)(*(long *)(puVar10 + 0x5a) + 2) = (char)((ushort)uVar5 >> 8);
                *(char *)(*(long *)(puVar10 + 0x5a) + 3) = (char)uVar5;
                sendto(puVar10[6],*(void **)(puVar10 + 0x5a),4,0x4000,(sockaddr *)(puVar10 + 0x32),
                       puVar10[0x52]);
                *puVar10 = 3;
                break;
              case 3:
                FUN_00a38740(**(undefined8 **)(puVar10 + 4),"%s\n","TFTP finished");
                break;
              default:
                FUN_00a38a08(**(undefined8 **)(puVar10 + 4),"%s","Internal state machine error");
              }
              iVar8 = 0x2a;
              goto LAB_00a4cf60;
            }
          }
          iVar8 = piVar20[3];
          goto LAB_00a4cf04;
        }
      }
      else {
LAB_00a4cf04:
        iVar8 = FUN_00a4d838(piVar20,iVar8);
                    /* try { // try from 00a4cf10 to 00b4cf13 has its CatchHandler @ 00a4cf84 */
        if (iVar8 != 0) goto LAB_00a4cf60;
                    /* try { // try from 00a4cf14 to 00b4cfaf has its CatchHandler @ 00a4cea4 */
        iVar8 = *piVar20;
        *param_2 = iVar8 == 3;
        if (iVar8 == 3) {
          FUN_00a49fc0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
        }
      }
      iVar8 = 0;
      goto LAB_00a4cf60;
    }
  }
  FUN_00a38a08(lVar21,"TFTP response timeout");
  iVar8 = 0x1c;
LAB_00a4cf60:
  if (*(long *)(lVar6 + 0x28) != lVar17) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00a4cf10 with catch @ 00a4cf84 */
  return iVar8;
}

