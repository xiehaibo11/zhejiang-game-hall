
ulong FUN_0107a33c(long *param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  size_t sVar9;
  long **pplVar10;
  undefined4 uVar11;
  code *pcVar12;
  long *plVar13;
  long *plVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined **ppuVar17;
  long lVar18;
  byte *__s;
  size_t __n;
  long *local_68;
  
  pbVar2 = (byte *)(param_3 + param_4);
  *param_2 = param_3;
                    /* try { // try from 0107a374 to 0117a377 has its CatchHandler @ 0107a414 */
  param_2[2] = (long)pbVar2;
  *(undefined4 *)(param_2 + 3) = 0;
  (*(code *)param_2[7])(param_2);
  pbVar16 = (byte *)*param_2;
                    /* try { // try from 0107a384 to 0117a393 has its CatchHandler @ 0107a418 */
  if (pbVar16 < pbVar2) {
    pbVar15 = (byte *)0x0;
                    /* try { // try from 0107a394 to 0117a487 has its CatchHandler @ 0107a27c */
    bVar4 = false;
    plVar1 = param_1 + 0x1f;
    do {
      bVar3 = *pbVar16;
                    /* catch() { ... } // from try @ 0107a504 with catch @ 0107a540 */
      uVar5 = (uint)bVar3;
      if (bVar3 == 0x46) {
        if (pbVar16 + 0xe != pbVar2) {
          if (pbVar16 + 0xe < pbVar2) {
            switch(pbVar16[0xd]) {
            case 0:
            case 9:
            case 10:
            case 0xc:
            case 0xd:
            case 0x20:
            case 0x25:
            case 0x28:
            case 0x29:
            case 0x2f:
            case 0x3c:
            case 0x3e:
            case 0x5b:
            case 0x5d:
            case 0x7b:
            case 0x7d:
              goto switchD_0107a5d0_caseD_0;
            }
          }
          goto switchD_0107a584_caseD_1;
        }
switchD_0107a5d0_caseD_0:
        iVar6 = strncmp((char *)pbVar16,"FontDirectory",0xd);
        if (iVar6 != 0) goto switchD_0107a584_caseD_1;
        if ((*(uint *)((long)param_2 + 700) & 1) != 0) {
          *(uint *)((long)param_2 + 700) = *(uint *)((long)param_2 + 700) | 2;
        }
        *param_2 = (long)(pbVar16 + 0xd);
      }
      else {
        if (bVar3 == 99) {
          if (pbVar16 + 10 == pbVar2) {
switchD_0107a634_caseD_0:
            iVar6 = strncmp((char *)pbVar16,"closefile",9);
joined_r0x0107a64c:
            if (iVar6 == 0) break;
          }
          else if (pbVar16 + 10 < pbVar2) {
            switch(pbVar16[9]) {
            case 0:
            case 9:
            case 10:
            case 0xc:
            case 0xd:
            case 0x20:
            case 0x25:
            case 0x28:
            case 0x29:
            case 0x2f:
            case 0x3c:
            case 0x3e:
            case 0x5b:
            case 0x5d:
            case 0x7b:
            case 0x7d:
              goto switchD_0107a634_caseD_0;
            }
          }
        }
        else if (uVar5 == 0x65) {
                    /* catch() { ... } // from try @ 0107a4e0 with catch @ 0107a560 */
          if (pbVar16 + 6 == pbVar2) {
switchD_0107a584_caseD_0:
            iVar6 = strncmp((char *)pbVar16,"eexec",5);
            goto joined_r0x0107a64c;
          }
          if (pbVar16 + 6 < pbVar2) {
            switch(pbVar16[5]) {
            case 0:
            case 9:
            case 10:
            case 0xc:
            case 0xd:
            case 0x20:
            case 0x25:
            case 0x28:
            case 0x29:
            case 0x2f:
            case 0x3c:
            case 0x3e:
            case 0x5b:
            case 0x5d:
            case 0x7b:
            case 0x7d:
              goto switchD_0107a584_caseD_0;
            }
          }
        }
switchD_0107a584_caseD_1:
        if (uVar5 - 0x30 < 10) {
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) break;
          bVar4 = true;
          pbVar15 = pbVar16;
        }
        else {
          if ((pbVar16 + 6 < pbVar2) && (uVar5 == 0x52)) {
            if ((!bVar4) || (pbVar16[1] != 0x44)) goto LAB_0107a800;
LAB_0107a6cc:
            *param_2 = (long)pbVar15;
            pbVar16 = (byte *)param_2[2];
            lVar18 = *(long *)(param_1[0x1e] + 0x60);
            (*(code *)param_2[7])(param_2);
                    /* try { // try from 0107a6f0 to 0117a6f7 has its CatchHandler @ 0107a768 */
            if ((pbVar16 <= (byte *)*param_2) || (9 < *(byte *)*param_2 - 0x30)) {
LAB_0107a854:
              if (lVar18 != 0) {
                return 3;
              }
              *(undefined4 *)(param_2 + 3) = 3;
              return 3;
            }
            lVar8 = (*(code *)param_2[9])(param_2);
                    /* try { // try from 0107a714 to 0117a73b has its CatchHandler @ 0107a750 */
            (*(code *)param_2[8])(param_2);
            if ((lVar8 < 0) || ((long)pbVar16 - (*param_2 + 1) <= lVar8)) goto LAB_0107a854;
                    /* try { // try from 0107a73c to 0117a77b has its CatchHandler @ 0107a6bc */
            *param_2 = *param_2 + lVar8 + 1;
            if ((int)param_2[3] != 0) {
              return 3;
            }
          }
          else {
            if ((pbVar16 + 6 < pbVar2) && (uVar5 == 0x2d)) {
                    /* try { // try from 0107a6bc to 0117a6ef has its CatchHandler @ 0107a6bc
                       catch() { ... } // from try @ 0107a6bc with catch @ 0107a6bc
                       catch() { ... } // from try @ 0107a73c with catch @ 0107a6bc */
              if ((bVar4) && (pbVar16[1] == 0x7c)) goto LAB_0107a6cc;
            }
            else {
                    /* catch() { ... } // from try @ 0107a714 with catch @ 0107a750 */
              if ((pbVar16 + 2 < pbVar2) && (uVar5 == 0x2f)) {
                    /* catch() { ... } // from try @ 0107a6f0 with catch @ 0107a768 */
                pbVar16 = pbVar16 + 1;
                *param_2 = (long)pbVar16;
                (*(code *)param_2[8])(param_2);
                    /* try { // try from 0107a77c to 0117a7cf has its CatchHandler @ 0107a77c
                       catch() { ... } // from try @ 0107a77c with catch @ 0107a77c
                       catch() { ... } // from try @ 0107a7fc with catch @ 0107a77c */
                if ((int)param_2[3] == 0) {
                  bVar4 = false;
                  if ((byte *)*param_2 < pbVar2) {
                    __n = *param_2 - (long)pbVar16;
                    if (__n - 1 < 0x15) {
                      bVar3 = *pbVar16;
                      __s = (byte *)0x1472d09;
                      ppuVar17 = &PTR_s_version_01472cf8_0x11_01728620;
                      do {
                    /* try { // try from 0107a7d0 to 0117a7fb has its CatchHandler @ 0107a80c */
                        if (((bVar3 == *__s) && (sVar9 = strlen((char *)__s), __n == sVar9)) &&
                           (iVar6 = memcmp(pbVar16,__s,__n), iVar6 == 0)) {
                          if (((*(uint *)((long)param_2 + 700) & 1) + 1 & *(uint *)(ppuVar17 + 5))
                              != 0) {
                            if (((*(uint *)((long)param_2 + 700) >> 1 & 1) != 0) &&
                               (iVar6 = strcmp((char *)__s,"CharStrings"), iVar6 != 0))
                            goto LAB_0107a814;
                            plVar13 = (long *)param_1[0x69];
                            if (plVar13 == (long *)0x0) {
                              plVar14 = (long *)0x0;
                            }
                            else {
                              plVar14 = (long *)0x0;
                              if ((int)*plVar13 != 0) {
                                plVar14 = plVar13;
                              }
                            }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0107a374 with catch @ 0107a414
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0107a384 with catch @ 0107a418
                        */
                            if (*(int *)((long)ppuVar17 + 0xc) == 0xb) {
                              (*(code *)ppuVar17[2])(param_1,param_2);
                              uVar5 = *(uint *)(param_2 + 3);
                              uVar7 = (ulong)uVar5;
                              *(uint *)(param_2 + 3) = uVar5;
                            }
                            else {
                              local_68 = plVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0107a31c with catch @ 0107a44c
                        */
                              switch(*(undefined4 *)(ppuVar17 + 1)) {
                              case 2:
                                local_68 = param_1 + 0x26;
                                break;
                              case 3:
                                if (plVar14 == (long *)0x0) break;
                                pplVar10 = (long **)(plVar14 + 0x23);
LAB_0107a4b0:
                    /* try { // try from 0107a4b0 to 0117a4df has its CatchHandler @ 0107a4b0
                       catch() { ... } // from try @ 0107a4b0 with catch @ 0107a4b0
                       catch() { ... } // from try @ 0107a530 with catch @ 0107a4b0 */
                                uVar11 = (undefined4)*plVar14;
                                if (*pplVar10 != (long *)0x0) goto LAB_0107a4e0;
                                goto LAB_0107a51c;
                              case 4:
                                local_68 = param_1 + 0x27;
                                if (plVar14 != (long *)0x0) {
                                  pplVar10 = (long **)(plVar14 + 0x34);
                                  goto LAB_0107a4b0;
                                }
                                break;
                              case 5:
                                local_68 = param_1 + 0x5a;
                                if (plVar14 != (long *)0x0) {
                                  pplVar10 = (long **)(plVar14 + 0x46);
                                  goto LAB_0107a4b0;
                                }
                                break;
                              case 6:
                                local_68 = param_2;
                                break;
                              case 7:
                                local_68 = param_1;
                                break;
                              case 8:
                                uVar11 = 0;
                    /* try { // try from 0107a530 to 0117a57b has its CatchHandler @ 0107a4b0 */
                                pplVar10 = &local_68;
                                local_68 = plVar13;
                                if (plVar13 == (long *)0x0) goto LAB_0107a51c;
                                goto LAB_0107a4e0;
                              }
                              uVar11 = 0;
                              pplVar10 = &local_68;
LAB_0107a4e0:
                    /* try { // try from 0107a4e0 to 0117a4e7 has its CatchHandler @ 0107a560 */
                              if (*(int *)((long)ppuVar17 + 0xc) - 9U < 2) {
                                pcVar12 = (code *)param_2[0x11];
                              }
                              else {
                                pcVar12 = (code *)param_2[0x10];
                              }
                    /* try { // try from 0107a504 to 0117a52f has its CatchHandler @ 0107a540 */
                              uVar7 = (*pcVar12)(param_2,ppuVar17,pplVar10,uVar11,0);
                              uVar5 = (uint)uVar7;
                              *(uint *)(param_2 + 3) = uVar5;
                            }
                            if (uVar5 == 0) goto LAB_0107a814;
                            if (((uint)uVar7 & 0xff) != 0xa2) {
                              return uVar7;
                            }
LAB_0107a51c:
                            bVar4 = false;
                            *(undefined4 *)(param_2 + 3) = 0;
                            goto LAB_0107a818;
                          }
                          break;
                        }
                        ppuVar17 = ppuVar17 + 6;
                        __s = *ppuVar17;
                      } while (__s != (byte *)0x0);
                    }
                    bVar4 = false;
                    /* try { // try from 0107a7fc to 0117a827 has its CatchHandler @ 0107a77c */
                  }
                  goto LAB_0107a818;
                }
                break;
              }
            }
LAB_0107a800:
            (*(code *)param_2[8])(param_2);
                    /* catch() { ... } // from try @ 0107a7d0 with catch @ 0107a80c */
            if ((int)param_2[3] != 0) break;
          }
LAB_0107a814:
          bVar4 = false;
        }
      }
LAB_0107a818:
      (*(code *)param_2[7])(param_2);
      pbVar16 = (byte *)*param_2;
    } while (pbVar16 < pbVar2);
  }
  return (ulong)*(uint *)(param_2 + 3);
}

