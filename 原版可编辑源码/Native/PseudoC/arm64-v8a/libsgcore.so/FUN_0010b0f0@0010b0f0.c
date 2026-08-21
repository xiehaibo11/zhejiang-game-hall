
void FUN_0010b0f0(undefined8 param_1,undefined4 param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 uVar19;
  uint uVar20;
  uint uVar21;
  code *pcVar22;
  int iVar23;
  char acStack_114 [4];
  undefined8 uStack_110;
  undefined7 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined5 uStack_e8;
  undefined3 uStack_e3;
  undefined5 uStack_e0;
  undefined8 uStack_db;
  undefined8 uStack_d0;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  long lStack_68;
  
  lVar1 = tpidr_el0;
  lStack_68 = *(long *)(lVar1 + 0x28);
  if ((9 < DAT_00113190) && (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0)) goto LAB_0010b200;
  while( true ) {
    pvVar6 = (void *)FUN_00101a04(param_2);
    uStack_db = 0x8e9f98e32c4bf101;
    uStack_e0 = 0x99a7a1c889;
    uStack_f8 = 0x48745d476924359f;
    uStack_100 = 0x74a66f6f576c002b;
    uStack_e8 = 0x9474a556b9;
    uStack_e3 = 0xa95ad6;
    uStack_f0 = 0xa1be773481aaa397;
    pvVar7 = (void *)thunk_FUN_00109db4(&uStack_100);
    lVar8 = FUN_0010145c(DAT_00113150,pvVar7);
    free(pvVar7);
    uVar20 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 0) || (-1 < (int)uVar20)) break;
LAB_0010b200:
    FUN_00101a04(param_2);
    uStack_db = 0x8e9f98e32c4bf101;
    uStack_e0 = 0x99a7a1c889;
    uStack_f8 = 0x48745d476924359f;
    uStack_100 = 0x74a66f6f576c002b;
    uStack_e8 = 0x9474a556b9;
    uStack_e3 = 0xa95ad6;
    uStack_f0 = 0xa1be773481aaa397;
    pvVar6 = (void *)thunk_FUN_00109db4(&uStack_100);
    FUN_0010145c(DAT_00113150,pvVar6);
    free(pvVar6);
  }
  if (lVar8 == 0) {
    if ((9 < DAT_00113190) && ((uVar20 & 1) != 0)) goto LAB_0010c454;
    while( true ) {
      uVar19 = FUN_0010e924(DAT_00113160);
      FUN_0010e468(param_1,pvVar6,uVar19);
      uVar20 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar20)) break;
LAB_0010c454:
      uVar19 = FUN_0010e924(DAT_00113160);
      FUN_0010e468(param_1,pvVar6,uVar19);
    }
    uVar20 = uVar20 & 1;
  }
  else {
    if (DAT_00113180 != 0) {
      while( true ) {
        uStack_7c = 0;
        uStack_80 = 0;
        uStack_88 = 0;
        uStack_84 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        uStack_c1 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_b9 = 0;
        iVar5 = __system_property_get("ro.build.version.sdk",&uStack_d0);
        if (iVar5 < 1) {
          iVar5 = -1;
        }
        else {
          iVar5 = atoi((char *)&uStack_d0);
          if (iVar5 < 1) {
            iVar5 = -1;
          }
        }
        uVar20 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 0) || (-1 < (int)uVar20)) break;
        uStack_7c = 0;
        uStack_80 = 0;
        uStack_88 = 0;
        uStack_84 = 0;
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        uStack_c1 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_b9 = 0;
        __system_property_get("ro.build.version.sdk",&uStack_d0);
      }
      if (0x1d < iVar5) {
        if ((9 < DAT_00113190) && ((uVar20 & 1) != 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        if ((param_3 & 1) != 0) {
          while( true ) {
            uStack_b8 = 0x9a04c58e5ca06ac5;
            uStack_d0 = 0x6dab346b5078002e;
            uStack_a8 = 0x5998288e8eacad25;
            uStack_b0 = 0x44dd03d9afa3c897;
            uStack_c0 = 0xb670218cf1b184;
            uStack_b9 = 0xe0;
            uStack_c8 = 0x6a703340353197;
            uStack_c1 = 0x5d;
            pcVar17 = (char *)thunk_FUN_00109db4(&uStack_d0);
            acStack_114[0] = '@';
            acStack_114[1] = '\0';
            uStack_110._0_7_ = 0;
            uStack_110._7_1_ = 0;
            pcVar18 = strtok_r(pcVar17,acStack_114,(char **)&uStack_110);
            pcVar9 = strtok_r((char *)0x0,acStack_114,(char **)&uStack_110);
            pcVar10 = strtok_r((char *)0x0,acStack_114,(char **)&uStack_110);
            uVar19 = (**(code **)(*DAT_00113150 + 0x480))(DAT_00113150,lVar8,pcVar18,pcVar9);
            cVar4 = (**(code **)(*DAT_00113150 + 0x720))(DAT_00113150);
            uVar20 = (DAT_00113194 + -1) * DAT_00113194;
            if ((DAT_00113190 < 0) || (-1 < (int)uVar20)) break;
            uStack_a8 = 0x5998288e8eacad25;
            uStack_b0 = 0x44dd03d9afa3c897;
            uStack_b8 = 0x9a04c58e5ca06ac5;
            uStack_c0 = 0xb670218cf1b184;
            uStack_b9 = 0xe0;
            uStack_c8 = 0x6a703340353197;
            uStack_c1 = 0x5d;
            uStack_d0 = 0x6dab346b5078002e;
            pcVar17 = (char *)thunk_FUN_00109db4(&uStack_d0);
            acStack_114[0] = '@';
            acStack_114[1] = '\0';
            uStack_110._0_7_ = 0;
            uStack_110._7_1_ = 0;
            pcVar17 = strtok_r(pcVar17,acStack_114,(char **)&uStack_110);
            pcVar18 = strtok_r((char *)0x0,acStack_114,(char **)&uStack_110);
            strtok_r((char *)0x0,acStack_114,(char **)&uStack_110);
            (**(code **)(*DAT_00113150 + 0x480))(DAT_00113150,lVar8,pcVar17,pcVar18);
            (**(code **)(*DAT_00113150 + 0x720))();
          }
          if (cVar4 == '\0') {
            if ((9 < DAT_00113190) && ((uVar20 & 1) != 0)) goto LAB_0010b6f4;
            while( true ) {
              uVar13 = (**(code **)(*DAT_00113150 + 0x488))(DAT_00113150,lVar8,uVar19);
              cVar4 = (**(code **)(*DAT_00113150 + 0x720))(DAT_00113150);
              uVar20 = (DAT_00113194 + -1) * DAT_00113194;
              if ((DAT_00113190 < 10) || ((uVar20 & 1) == 0)) break;
LAB_0010b6f4:
              (**(code **)(*DAT_00113150 + 0x488))(DAT_00113150,lVar8,uVar19);
              (**(code **)(*DAT_00113150 + 0x720))();
            }
            if (cVar4 == '\0') {
              if (DAT_00113190 < 0 || -1 < (int)uVar20) goto LAB_0010b7dc;
              do {
                (**(code **)(*DAT_00113150 + 0x558))(DAT_00113150,uVar13);
                (**(code **)(*DAT_00113150 + 0x720))();
LAB_0010b7dc:
                iVar5 = (**(code **)(*DAT_00113150 + 0x558))(DAT_00113150,uVar13);
                cVar4 = (**(code **)(*DAT_00113150 + 0x720))(DAT_00113150);
              } while ((9 < DAT_00113190) && (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0));
              if (cVar4 == '\0') {
                while( true ) {
                  uVar14 = (**(code **)(*DAT_00113150 + 0x30))(DAT_00113150,pcVar10);
                  cVar4 = (**(code **)(*DAT_00113150 + 0x720))(DAT_00113150);
                  uVar20 = (DAT_00113194 + -1) * DAT_00113194;
                  if ((DAT_00113190 < 10) || ((uVar20 & 1) == 0)) break;
                  (**(code **)(*DAT_00113150 + 0x30))(DAT_00113150,pcVar10);
                  (**(code **)(*DAT_00113150 + 0x720))();
                }
                if (cVar4 == '\0') {
                  while( true ) {
                    uVar15 = (**(code **)(*DAT_00113150 + 0x560))(DAT_00113150,iVar5 + 1,uVar14,0);
                    cVar4 = (**(code **)(*DAT_00113150 + 0x720))(DAT_00113150);
                    if ((DAT_00113190 < 0) || (-1 < (DAT_00113194 + -1) * DAT_00113194)) break;
                    (**(code **)(*DAT_00113150 + 0x560))(DAT_00113150,iVar5 + 1,uVar14,0);
                    (**(code **)(*DAT_00113150 + 0x720))();
                  }
                  if (cVar4 == '\0') {
                    iVar23 = 0;
                    do {
                      uVar20 = (DAT_00113194 + -1) * DAT_00113194;
                      bVar3 = (uVar20 & 1) != 0;
                      do {
                      } while (-1 < DAT_00113190 && (int)uVar20 < 0);
                      if (iVar5 <= iVar23) {
                        if (9 < DAT_00113190 && bVar3) {
                          do {
                    /* WARNING: Do nothing block with infinite loop */
                          } while( true );
                        }
                        goto LAB_0010bc4c;
                      }
                      if (9 < DAT_00113190 && bVar3) goto LAB_0010baf8;
                      while( true ) {
                        plVar2 = DAT_00113150;
                        pcVar22 = *(code **)(*DAT_00113150 + 0x570);
                        uVar16 = (**(code **)(*DAT_00113150 + 0x568))(DAT_00113150,uVar13,iVar23);
                        (*pcVar22)(plVar2,uVar15,iVar23,uVar16);
                        cVar4 = (**(code **)(*DAT_00113150 + 0x720))();
                        if ((DAT_00113190 < 10) || (((DAT_00113194 + -1) * DAT_00113194 & 1U) == 0))
                        break;
LAB_0010baf8:
                        plVar2 = DAT_00113150;
                        pcVar22 = *(code **)(*DAT_00113150 + 0x570);
                        uVar16 = (**(code **)(*DAT_00113150 + 0x568))(DAT_00113150,uVar13,iVar23);
                        (*pcVar22)(plVar2,uVar15,iVar23,uVar16);
                        (**(code **)(*DAT_00113150 + 0x720))();
                      }
                      iVar23 = iVar23 + 1;
                    } while (cVar4 == '\0');
                    while( true ) {
                      (**(code **)(*DAT_00113150 + 0x80))();
                      (**(code **)(*DAT_00113150 + 0x88))();
                      free(pcVar17);
                      uVar20 = (DAT_00113194 + -1) * DAT_00113194;
                      if ((DAT_00113190 < 0) || (-1 < (int)uVar20)) break;
                      (**(code **)(*DAT_00113150 + 0x80))();
                      (**(code **)(*DAT_00113150 + 0x88))();
                      free(pcVar17);
                    }
LAB_0010bc4c:
                    if (DAT_00113190 < 0) goto LAB_0010bd44;
                    if (-1 < (int)uVar20) goto LAB_0010bd44;
                    lVar12 = *DAT_00113150;
                    do {
                      (**(code **)(lVar12 + 0x570))(DAT_00113150,uVar15,iVar5,DAT_00113180);
                      (**(code **)(*DAT_00113150 + 0x720))();
LAB_0010bd44:
                      (**(code **)(*DAT_00113150 + 0x570))(DAT_00113150,uVar15,iVar5,DAT_00113180);
                      cVar4 = (**(code **)(*DAT_00113150 + 0x720))();
                      plVar2 = DAT_00113150;
                      lVar12 = *DAT_00113150;
                    } while ((-1 < DAT_00113190) && ((DAT_00113194 + -1) * DAT_00113194 < 0));
                    if (cVar4 == '\0') {
                      while( true ) {
                        (**(code **)(lVar12 + 0x4d0))(plVar2,lVar8,uVar19,uVar15);
                        cVar4 = (**(code **)(*DAT_00113150 + 0x720))();
                        uVar20 = (DAT_00113194 + -1) * DAT_00113194;
                        if ((DAT_00113190 < 10) || ((uVar20 & 1) == 0)) break;
                        (**(code **)(lVar12 + 0x4d0))(plVar2,lVar8,uVar19,uVar15);
                        (**(code **)(*DAT_00113150 + 0x720))();
                      }
                      if (cVar4 == '\0') {
                        if ((-1 < DAT_00113190) && ((int)uVar20 < 0)) goto LAB_0010bf68;
                        while( true ) {
                          free(pcVar17);
                          (**(code **)(*DAT_00113150 + 0xb8))(DAT_00113150,uVar14);
                          cVar4 = (**(code **)(*DAT_00113150 + 0x720))();
                          plVar2 = DAT_00113150;
                          lVar12 = *DAT_00113150;
                          uVar20 = (DAT_00113194 + -1) * DAT_00113194;
                          if ((DAT_00113190 < 0) || (-1 < (int)uVar20)) break;
LAB_0010bf68:
                          free(pcVar17);
                          (**(code **)(*DAT_00113150 + 0xb8))(DAT_00113150,uVar14);
                          (**(code **)(*DAT_00113150 + 0x720))();
                        }
                        if (cVar4 == '\0') {
                          while( true ) {
                            (**(code **)(lVar12 + 0xb8))(plVar2,uVar15);
                            cVar4 = (**(code **)(*DAT_00113150 + 0x720))();
                            uVar20 = (DAT_00113194 + -1) * DAT_00113194;
                            if ((DAT_00113190 < 10) || ((uVar20 & 1) == 0)) break;
                            (**(code **)(lVar12 + 0xb8))(plVar2,uVar15);
                            (**(code **)(*DAT_00113150 + 0x720))();
                          }
                          if (cVar4 == '\0') {
                            if ((-1 < DAT_00113190) && ((int)uVar20 < 0)) {
                              do {
                    /* WARNING: Do nothing block with infinite loop */
                              } while( true );
                            }
                          }
                          else {
                            while( true ) {
                              (**(code **)(*DAT_00113150 + 0x80))();
                              (**(code **)(*DAT_00113150 + 0x88))();
                              uVar20 = (DAT_00113194 + -1) * DAT_00113194;
                              if ((DAT_00113190 < 0) || (-1 < (int)uVar20)) break;
                              (**(code **)(*DAT_00113150 + 0x80))();
                              (**(code **)(*DAT_00113150 + 0x88))();
                            }
                          }
                        }
                        else {
                          if ((9 < DAT_00113190) && ((uVar20 & 1) != 0)) goto LAB_0010c0dc;
                          while( true ) {
                            (**(code **)(lVar12 + 0x80))(plVar2);
                            (**(code **)(*DAT_00113150 + 0x88))();
                            uVar20 = (DAT_00113194 + -1) * DAT_00113194;
                            if ((DAT_00113190 < 10) || ((uVar20 & 1) == 0)) break;
LAB_0010c0dc:
                            (**(code **)(lVar12 + 0x80))(plVar2);
                            (**(code **)(*DAT_00113150 + 0x88))();
                          }
                        }
                      }
                      else {
                        while( true ) {
                          (**(code **)(*DAT_00113150 + 0x80))();
                          (**(code **)(*DAT_00113150 + 0x88))();
                          free(pcVar17);
                          uVar20 = (DAT_00113194 + -1) * DAT_00113194;
                          if ((DAT_00113190 < 10) || ((uVar20 & 1) == 0)) break;
                          (**(code **)(*DAT_00113150 + 0x80))();
                          (**(code **)(*DAT_00113150 + 0x88))();
                          free(pcVar17);
                        }
                      }
                    }
                    else {
                      while( true ) {
                        (**(code **)(lVar12 + 0x80))(plVar2);
                        (**(code **)(*DAT_00113150 + 0x88))();
                        free(pcVar17);
                        uVar20 = (DAT_00113194 + -1) * DAT_00113194;
                        if ((DAT_00113190 < 0) || (-1 < (int)uVar20)) break;
                        (**(code **)(lVar12 + 0x80))(plVar2);
                        (**(code **)(*DAT_00113150 + 0x88))();
                        free(pcVar17);
                      }
                    }
                  }
                  else {
                    while( true ) {
                      (**(code **)(*DAT_00113150 + 0x80))();
                      (**(code **)(*DAT_00113150 + 0x88))();
                      free(pcVar17);
                      uVar20 = (DAT_00113194 + -1) * DAT_00113194;
                      if ((DAT_00113190 < 10) || ((uVar20 & 1) == 0)) break;
                      (**(code **)(*DAT_00113150 + 0x80))();
                      (**(code **)(*DAT_00113150 + 0x88))();
                      free(pcVar17);
                    }
                  }
                  if ((-1 < DAT_00113190) && ((int)uVar20 < 0)) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                }
                else {
                  if ((-1 < DAT_00113190) && ((int)uVar20 < 0)) goto LAB_0010bcc4;
                  while( true ) {
                    (**(code **)(*DAT_00113150 + 0x80))();
                    (**(code **)(*DAT_00113150 + 0x88))();
                    free(pcVar17);
                    uVar20 = (DAT_00113194 + -1) * DAT_00113194;
                    if ((DAT_00113190 < 10) || ((uVar20 & 1) == 0)) break;
LAB_0010bcc4:
                    (**(code **)(*DAT_00113150 + 0x80))();
                    (**(code **)(*DAT_00113150 + 0x88))();
                    free(pcVar17);
                  }
                }
                do {
                } while (-1 < DAT_00113190 && (int)uVar20 < 0);
              }
              else {
                while( true ) {
                  (**(code **)(*DAT_00113150 + 0x80))();
                  (**(code **)(*DAT_00113150 + 0x88))();
                  free(pcVar17);
                  uVar20 = (DAT_00113194 + -1) * DAT_00113194;
                  if ((DAT_00113190 < 0) || (-1 < (int)uVar20)) break;
                  (**(code **)(*DAT_00113150 + 0x80))();
                  (**(code **)(*DAT_00113150 + 0x88))();
                  free(pcVar17);
                }
              }
              if ((-1 < DAT_00113190) && ((int)uVar20 < 0)) {
                do {
                    /* WARNING: Do nothing block with infinite loop */
                } while( true );
              }
            }
            else {
              if (DAT_00113190 < 0 || -1 < (int)uVar20) goto LAB_0010b750;
              do {
                (**(code **)(*DAT_00113150 + 0x80))();
                (**(code **)(*DAT_00113150 + 0x88))();
                free(pcVar17);
LAB_0010b750:
                (**(code **)(*DAT_00113150 + 0x80))();
                (**(code **)(*DAT_00113150 + 0x88))();
                free(pcVar17);
                uVar20 = (DAT_00113194 + -1) * DAT_00113194;
              } while ((-1 < DAT_00113190) && ((int)uVar20 < 0));
            }
            do {
            } while (-1 < DAT_00113190 && (int)uVar20 < 0);
          }
          else {
            while( true ) {
              (**(code **)(*DAT_00113150 + 0x80))();
              (**(code **)(*DAT_00113150 + 0x88))();
              free(pcVar17);
              uVar20 = (DAT_00113194 + -1) * DAT_00113194;
              if ((DAT_00113190 < 0) || (-1 < (int)uVar20)) break;
              (**(code **)(*DAT_00113150 + 0x80))();
              (**(code **)(*DAT_00113150 + 0x88))();
              free(pcVar17);
            }
          }
          if ((9 < DAT_00113190) && ((uVar20 & 1) != 0)) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
        }
      }
    }
    if ((9 < DAT_00113190) && ((uVar20 & 1) != 0)) goto LAB_0010b5f0;
    while( true ) {
      uStack_108 = 0x7959236b222b92;
      uStack_110._0_7_ = 0xbb10765d68000d;
      uStack_110._7_1_ = 99;
      uStack_c0 = 0xea792e89aca4a1;
      uStack_c8 = 0x6752096c6e2388;
      uStack_c1 = 0x13;
      uStack_d0 = 0x60a40c2b71270015;
      pvVar7 = (void *)thunk_FUN_00109db4(&uStack_110);
      pvVar11 = (void *)thunk_FUN_00109db4(&uStack_d0);
      lVar12 = FUN_001016c4(DAT_00113150,0,lVar8,pvVar7,pvVar11,1);
      free(pvVar7);
      free(pvVar11);
      uVar20 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar20)) break;
LAB_0010b5f0:
      uStack_108 = 0x7959236b222b92;
      uStack_110._0_7_ = 0xbb10765d68000d;
      uStack_110._7_1_ = 99;
      uStack_c0 = 0xea792e89aca4a1;
      uStack_c8 = 0x6752096c6e2388;
      uStack_c1 = 0x13;
      uStack_d0 = 0x60a40c2b71270015;
      pvVar7 = (void *)thunk_FUN_00109db4(&uStack_110);
      pvVar11 = (void *)thunk_FUN_00109db4(&uStack_d0);
      FUN_001016c4(DAT_00113150,0,lVar8,pvVar7,pvVar11,1);
      free(pvVar7);
      free(pvVar11);
    }
    bVar3 = DAT_00113190 < 10 || (uVar20 & 1) == 0;
    if (lVar12 == 0) {
      if (bVar3) goto LAB_0010c118;
      do {
        free(pvVar6);
        uVar19 = FUN_0010e924(DAT_00113158);
        FUN_0010e468(param_1,pvVar6,uVar19);
LAB_0010c118:
        free(pvVar6);
        uVar19 = FUN_0010e924(DAT_00113158);
        FUN_0010e468(param_1,pvVar6,uVar19);
        bVar3 = true;
        uVar21 = (DAT_00113194 + -1) * DAT_00113194;
        uVar20 = uVar21 & 1;
      } while ((9 < DAT_00113190) && (uVar20 != 0));
    }
    else {
      if (bVar3) goto LAB_0010c19c;
      do {
        (**(code **)(*DAT_00113150 + 0x548))(DAT_00113150,lVar12,0);
LAB_0010c19c:
        pcVar17 = (char *)(**(code **)(*DAT_00113150 + 0x548))(DAT_00113150,lVar12,0);
        uVar20 = (DAT_00113194 + -1) * DAT_00113194;
      } while ((9 < DAT_00113190) && ((uVar20 & 1) != 0));
      if (pcVar17 == (char *)0x0) {
LAB_0010c344:
        while( true ) {
          (**(code **)(*DAT_00113150 + 0x88))();
          uVar19 = FUN_0010e924(DAT_00113158);
          FUN_0010e468(param_1,pvVar6,uVar19);
          uVar20 = (DAT_00113194 + -1) * DAT_00113194;
          if ((DAT_00113190 < 10) || ((uVar20 & 1) == 0)) break;
          (**(code **)(*DAT_00113150 + 0x88))();
          uVar19 = FUN_0010e924(DAT_00113158);
          FUN_0010e468(param_1,pvVar6,uVar19);
        }
      }
      else {
        if ((-1 < DAT_00113190) && ((int)uVar20 < 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        if (*pcVar17 == '\0') goto LAB_0010c344;
        pcVar18 = strchr(pcVar17,0x3a);
        if (pcVar18 == (char *)0x0) {
          while( true ) {
            uVar19 = FUN_0010e924(pcVar17);
            FUN_0010e468(param_1,pvVar6,uVar19);
            uVar20 = (DAT_00113194 + -1) * DAT_00113194;
            if ((DAT_00113190 < 10) || ((uVar20 & 1) == 0)) break;
            uVar19 = FUN_0010e924(pcVar17);
            FUN_0010e468(param_1,pvVar6,uVar19);
          }
        }
        else {
          while( true ) {
            uVar19 = FUN_0010e924(pcVar18);
            FUN_0010e468(param_1,pvVar6,uVar19);
            uVar20 = (DAT_00113194 + -1) * DAT_00113194;
            if ((DAT_00113190 < 10) || ((uVar20 & 1) == 0)) break;
            uVar19 = FUN_0010e924(pcVar18);
            FUN_0010e468(param_1,pvVar6,uVar19);
          }
        }
        do {
        } while (9 < DAT_00113190 && (uVar20 & 1) != 0);
      }
      if ((-1 < DAT_00113190) && ((int)uVar20 < 0)) goto LAB_0010c3d4;
      while( true ) {
        (**(code **)(*DAT_00113150 + 0x550))(DAT_00113150,lVar12,pcVar17);
        uVar21 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 0) || (-1 < (int)uVar21)) break;
LAB_0010c3d4:
        (**(code **)(*DAT_00113150 + 0x550))(DAT_00113150,lVar12,pcVar17);
      }
      bVar3 = false;
      uVar20 = uVar21 & 1;
    }
    if ((9 < DAT_00113190) && (uVar20 != 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (bVar3) goto LAB_0010c4c4;
  }
  if ((9 < DAT_00113190) && (uVar20 != 0)) goto LAB_0010c4b8;
  while( true ) {
    free(pvVar6);
    uVar21 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 0) || (-1 < (int)uVar21)) break;
LAB_0010c4b8:
    free(pvVar6);
  }
LAB_0010c4c4:
  do {
  } while (-1 < DAT_00113190 && (int)uVar21 < 0);
  if (*(long *)(lVar1 + 0x28) != lStack_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

