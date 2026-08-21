
char * FUN_00102a08(long *param_1,char *param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  char *__s;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  void *__ptr;
  byte *pbVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  undefined8 uStack_250;
  char *pcStack_218;
  undefined8 uStack_210;
  char *pcStack_208;
  char *pcStack_200;
  char *pcStack_1f8;
  char acStack_1ec [4];
  undefined1 auStack_1e8 [88];
  byte abStack_190 [20];
  undefined1 auStack_17c [276];
  long lStack_68;
  
  lVar2 = tpidr_el0;
  lStack_68 = *(long *)(lVar2 + 0x28);
  if ((9 < DAT_00113190) && (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0)) goto LAB_00102c18;
  while( true ) {
    memcpy(auStack_17c,&DAT_0010f7d0,0x111);
    __s = (char *)thunk_FUN_00109db4(auStack_17c);
    acStack_1ec[0] = '@';
    acStack_1ec[1] = '\0';
    pcStack_1f8 = (char *)0x0;
    pcVar7 = strtok_r(__s,acStack_1ec,&pcStack_1f8);
    pcVar8 = strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    pcVar9 = strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    pcVar10 = strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    pcVar11 = strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    pcVar12 = strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    pcVar13 = strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    pcStack_218 = strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    pcVar14 = strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    pcVar15 = strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    pcVar16 = strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    pcVar17 = strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    pcVar18 = strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    lVar26 = *param_1;
    uVar19 = (**(code **)(lVar26 + 0xf8))(param_1,param_2);
    cVar4 = (**(code **)(*param_1 + 0x720))(param_1);
    uVar1 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 0) || (-1 < (int)uVar1)) break;
LAB_00102c18:
    memcpy(auStack_17c,&DAT_0010f7d0,0x111);
    pcVar8 = (char *)thunk_FUN_00109db4(auStack_17c);
    acStack_1ec[0] = '@';
    acStack_1ec[1] = '\0';
    pcStack_1f8 = (char *)0x0;
    strtok_r(pcVar8,acStack_1ec,&pcStack_1f8);
    strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    strtok_r((char *)0x0,acStack_1ec,&pcStack_1f8);
    (**(code **)(*param_1 + 0xf8))(param_1,param_2);
    (**(code **)(*param_1 + 0x720))(param_1);
  }
  bVar3 = (uVar1 & 1) != 0;
  if (cVar4 == '\x01') {
    if (9 < DAT_00113190 && bVar3) goto LAB_00102d9c;
    while (((**(code **)(*param_1 + 0x88))(param_1), iVar25 = DAT_00113190, iVar24 = DAT_00113194,
           -1 < DAT_00113190 && ((DAT_00113194 + -1) * DAT_00113194 < 0))) {
LAB_00102d9c:
      (**(code **)(*param_1 + 0x88))(param_1);
    }
  }
  else {
    if (9 < DAT_00113190 && bVar3) goto LAB_00102e20;
    while( true ) {
      uVar20 = (**(code **)(lVar26 + 0x108))(param_1,uVar19,pcVar7,pcVar8);
      uStack_210 = (**(code **)(lVar26 + 0x110))(param_1,param_2,uVar20);
      cVar4 = (**(code **)(*param_1 + 0x720))(param_1);
      uVar1 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar1)) break;
LAB_00102e20:
      uVar20 = (**(code **)(lVar26 + 0x108))(param_1,uVar19,pcVar7,pcVar8);
      (**(code **)(lVar26 + 0x110))(param_1,param_2,uVar20);
      (**(code **)(*param_1 + 0x720))(param_1);
    }
    bVar3 = (uVar1 & 1) != 0;
    if (cVar4 == '\x01') {
      if (9 < DAT_00113190 && bVar3) goto LAB_00102ed0;
      while (((**(code **)(*param_1 + 0x88))(param_1), iVar25 = DAT_00113190, iVar24 = DAT_00113194,
             -1 < DAT_00113190 && ((DAT_00113194 + -1) * DAT_00113194 < 0))) {
LAB_00102ed0:
        (**(code **)(*param_1 + 0x88))(param_1);
      }
    }
    else {
      if (9 < DAT_00113190 && bVar3) goto LAB_00102f74;
      while( true ) {
        uStack_250 = (**(code **)(lVar26 + 0xf8))(param_1,uStack_210);
        cVar4 = (**(code **)(*param_1 + 0x720))(param_1);
        if ((DAT_00113190 < 0) || (-1 < (DAT_00113194 + -1) * DAT_00113194)) break;
LAB_00102f74:
        (**(code **)(lVar26 + 0xf8))(param_1,uStack_210);
        (**(code **)(*param_1 + 0x720))(param_1);
      }
      if (cVar4 == '\x01') {
        (**(code **)(*param_1 + 0x88))(param_1);
        while ((iVar25 = DAT_00113190, iVar24 = DAT_00113194, -1 < DAT_00113190 &&
               ((DAT_00113194 + -1) * DAT_00113194 < 0))) {
          (**(code **)(*param_1 + 0x88))(param_1);
          (**(code **)(*param_1 + 0x88))(param_1);
        }
      }
      else {
        while( true ) {
          pcVar7 = (char *)(**(code **)(lVar26 + 0x108))(param_1,uStack_250,pcVar9,pcVar10);
          uVar20 = (**(code **)(lVar26 + 0x108))(param_1,uVar19,pcVar11,pcVar12);
          pcStack_208 = (char *)(**(code **)(lVar26 + 0x110))(param_1,param_2,uVar20);
          cVar4 = (**(code **)(*param_1 + 0x720))(param_1);
          uVar1 = (DAT_00113194 + -1) * DAT_00113194;
          if ((DAT_00113190 < 0) || (-1 < (int)uVar1)) break;
          (**(code **)(lVar26 + 0x108))(param_1,uStack_250,pcVar9,pcVar10);
          uVar20 = (**(code **)(lVar26 + 0x108))(param_1,uVar19,pcVar11,pcVar12);
          (**(code **)(lVar26 + 0x110))(param_1,param_2,uVar20);
          (**(code **)(*param_1 + 0x720))(param_1);
        }
        pcVar8 = pcStack_208;
        if (cVar4 == '\x01') {
          if ((9 < DAT_00113190) && ((uVar1 & 1) != 0)) goto LAB_001032c8;
          while (((**(code **)(*param_1 + 0x88))(param_1), iVar25 = DAT_00113190,
                 iVar24 = DAT_00113194, -1 < DAT_00113190 &&
                 ((DAT_00113194 + -1) * DAT_00113194 < 0))) {
LAB_001032c8:
            (**(code **)(*param_1 + 0x88))(param_1);
          }
        }
        else {
          while( true ) {
            pcStack_200 = (char *)(**(code **)(lVar26 + 0x30))(param_1,pcVar13);
            uVar20 = (**(code **)(lVar26 + 0x480))(param_1,pcStack_200,pcStack_218,pcVar14);
            uVar5 = (**(code **)(lVar26 + 0x4b0))(param_1,pcStack_200,uVar20);
            pcVar9 = (char *)(**(code **)(lVar26 + 0x110))
                                       (param_1,uStack_210,pcVar7,pcStack_208,uVar5);
            cVar4 = (**(code **)(*param_1 + 0x720))(param_1);
            uVar1 = (DAT_00113194 + -1) * DAT_00113194;
            if ((DAT_00113190 < 0) || (-1 < (int)uVar1)) break;
            uVar20 = (**(code **)(lVar26 + 0x30))(param_1,pcVar13);
            uVar21 = (**(code **)(lVar26 + 0x480))(param_1,uVar20,pcStack_218,pcVar14);
            uVar5 = (**(code **)(lVar26 + 0x4b0))(param_1,uVar20,uVar21);
            (**(code **)(lVar26 + 0x110))(param_1,uStack_210,pcVar7,pcStack_208,uVar5);
            (**(code **)(*param_1 + 0x720))(param_1);
          }
          bVar3 = (uVar1 & 1) != 0;
          if (cVar4 == '\x01') {
            if (9 < DAT_00113190 && bVar3) goto LAB_00103314;
            while (((**(code **)(*param_1 + 0x88))(param_1), param_2 = pcStack_200,
                   pcVar12 = pcVar14, iVar25 = DAT_00113190, iVar24 = DAT_00113194, 9 < DAT_00113190
                   && (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0))) {
LAB_00103314:
              (**(code **)(*param_1 + 0x88))(param_1);
            }
          }
          else {
            if (9 < DAT_00113190 && bVar3) goto LAB_001033a8;
            while( true ) {
              pcVar8 = (char *)(**(code **)(lVar26 + 0xf8))(param_1,pcVar9);
              uVar20 = (**(code **)(lVar26 + 0x2f0))(param_1,pcVar8,pcVar15,pcVar16);
              pcVar7 = (char *)(**(code **)(lVar26 + 0x2f8))(param_1,pcVar9,uVar20);
              iVar6 = (**(code **)(lVar26 + 0x558))(param_1,pcVar7);
              if ((DAT_00113190 < 0) || (-1 < (DAT_00113194 + -1) * DAT_00113194)) break;
LAB_001033a8:
              uVar20 = (**(code **)(lVar26 + 0xf8))(param_1,pcVar9);
              uVar20 = (**(code **)(lVar26 + 0x2f0))(param_1,uVar20,pcVar15,pcVar16);
              uVar20 = (**(code **)(lVar26 + 0x2f8))(param_1,pcVar9,uVar20);
              (**(code **)(lVar26 + 0x558))(param_1,uVar20);
            }
            param_2 = pcVar18;
            pcVar12 = pcVar16;
            iVar25 = DAT_00113190;
            iVar24 = DAT_00113194;
            if (0 < iVar6) {
              while( true ) {
                pcVar12 = (char *)(**(code **)(lVar26 + 0x568))(param_1,pcVar7,0);
                uVar20 = (**(code **)(lVar26 + 0xf8))(param_1,pcVar12);
                uVar20 = (**(code **)(lVar26 + 0x108))(param_1,uVar20,pcVar17,pcVar18);
                param_2 = (char *)(**(code **)(lVar26 + 0x110))(param_1,pcVar12,uVar20);
                cVar4 = (**(code **)(*param_1 + 0x720))(param_1);
                uVar1 = (DAT_00113194 + -1) * DAT_00113194;
                if ((DAT_00113190 < 10) || ((uVar1 & 1) == 0)) break;
                uVar20 = (**(code **)(lVar26 + 0x568))(param_1,pcVar7,0);
                uVar21 = (**(code **)(lVar26 + 0xf8))(param_1,uVar20);
                uVar21 = (**(code **)(lVar26 + 0x108))(param_1,uVar21,pcVar17,pcVar18);
                (**(code **)(lVar26 + 0x110))(param_1,uVar20,uVar21);
                (**(code **)(*param_1 + 0x720))(param_1);
              }
              if (cVar4 == '\x01') {
                if ((-1 < DAT_00113190) && ((int)uVar1 < 0)) goto LAB_00103738;
                while (((**(code **)(*param_1 + 0x88))(param_1), iVar25 = DAT_00113190,
                       iVar24 = DAT_00113194, 9 < DAT_00113190 &&
                       (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0))) {
LAB_00103738:
                  (**(code **)(*param_1 + 0x88))(param_1);
                }
              }
              else {
                iVar6 = (**(code **)(lVar26 + 0x558))(param_1,param_2);
                pcStack_218 = malloc(0x21);
                iVar24 = DAT_00113194;
                iVar25 = DAT_00113190;
                pcStack_218[0x20] = '\0';
                while( true ) {
                  uVar1 = (iVar24 + -1) * iVar24;
                  pcStack_218[8] = '\0';
                  pcStack_218[9] = '\0';
                  pcStack_218[10] = '\0';
                  pcStack_218[0xb] = '\0';
                  pcStack_218[0xc] = '\0';
                  pcStack_218[0xd] = '\0';
                  pcStack_218[0xe] = '\0';
                  pcStack_218[0xf] = '\0';
                  pcStack_218[0] = '\0';
                  pcStack_218[1] = '\0';
                  pcStack_218[2] = '\0';
                  pcStack_218[3] = '\0';
                  pcStack_218[4] = '\0';
                  pcStack_218[5] = '\0';
                  pcStack_218[6] = '\0';
                  pcStack_218[7] = '\0';
                  pcStack_218[0x18] = '\0';
                  pcStack_218[0x19] = '\0';
                  pcStack_218[0x1a] = '\0';
                  pcStack_218[0x1b] = '\0';
                  pcStack_218[0x1c] = '\0';
                  pcStack_218[0x1d] = '\0';
                  pcStack_218[0x1e] = '\0';
                  pcStack_218[0x1f] = '\0';
                  pcStack_218[0x10] = '\0';
                  pcStack_218[0x11] = '\0';
                  pcStack_218[0x12] = '\0';
                  pcStack_218[0x13] = '\0';
                  pcStack_218[0x14] = '\0';
                  pcStack_218[0x15] = '\0';
                  pcStack_218[0x16] = '\0';
                  pcStack_218[0x17] = '\0';
                  if ((iVar25 < 10) || ((uVar1 & 1) == 0)) break;
                  (**(code **)(lVar26 + 0x558))(param_1,param_2);
                  iVar6 = (**(code **)(lVar26 + 0x558))(param_1,param_2);
                  pcStack_218 = malloc(0x21);
                  iVar24 = DAT_00113194;
                  iVar25 = DAT_00113190;
                  pcStack_218[0x20] = '\0';
                }
                if (0 < iVar6) {
                  if ((-1 < iVar25) && ((int)uVar1 < 0)) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                  __ptr = calloc((long)iVar6,1);
                  if (__ptr != (void *)0x0) {
                    while( true ) {
                      (**(code **)(lVar26 + 0x640))(param_1,param_2,0,iVar6,__ptr);
                      FUN_0010654c(auStack_1e8);
                      FUN_00106608(auStack_1e8,__ptr,iVar6);
                      FUN_00106980(auStack_1e8);
                      uVar1 = (DAT_00113194 + -1) * DAT_00113194;
                      if ((DAT_00113190 < 0) || (-1 < (int)uVar1)) break;
                      (**(code **)(lVar26 + 0x640))(param_1,param_2,0,iVar6,__ptr);
                      FUN_0010654c(auStack_1e8);
                      FUN_00106608(auStack_1e8,__ptr,iVar6);
                      FUN_00106980(auStack_1e8);
                    }
                    if ((9 < DAT_00113190) && ((uVar1 & 1) != 0)) goto LAB_0010377c;
                    while( true ) {
                      free(__ptr);
                      uVar1 = (DAT_00113194 + -1) * DAT_00113194 & 1;
                      if ((DAT_00113190 < 10) || (uVar1 == 0)) break;
LAB_0010377c:
                      free(__ptr);
                    }
                    if ((DAT_00113190 < 10) || (uVar1 == 0)) {
                      lVar23 = 0;
                      do {
                        iVar25 = DAT_00113190;
                        iVar24 = DAT_00113194;
                        if (lVar23 == 0x10) goto LAB_00102ee4;
                        pbVar22 = abStack_190 + lVar23;
                        pcVar10 = pcStack_218 + lVar23 * 2;
                        sprintf(pcVar10,"%02x",(ulong)*pbVar22);
                        while ((-1 < DAT_00113190 && ((DAT_00113194 + -1) * DAT_00113194 < 0))) {
                          sprintf(pcVar10,"%02x",(ulong)*pbVar22);
                          sprintf(pcVar10,"%02x",(ulong)*pbVar22);
                        }
                        lVar23 = lVar23 + 1;
                      } while ((DAT_00113190 < 10) ||
                              (((DAT_00113194 + -1) * DAT_00113194 & 1U) == 0));
                    }
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00102ee4:
  uVar1 = (iVar24 + -1) * iVar24;
  do {
  } while (9 < iVar25 && (uVar1 & 1) != 0);
  if (__s != (char *)0x0) {
    if (-1 < iVar25 && (int)uVar1 < 0) goto LAB_00103888;
    while( true ) {
      free(__s);
      uVar1 = (DAT_00113194 + -1) * DAT_00113194;
      iVar25 = DAT_00113190;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar1)) break;
LAB_00103888:
      free(__s);
    }
  }
  if ((9 < iVar25) && ((uVar1 & 1) != 0)) goto LAB_00103974;
  while( true ) {
    (**(code **)(lVar26 + 0xb8))(param_1,uVar19);
    (**(code **)(lVar26 + 0xb8))(param_1,uStack_210);
    (**(code **)(lVar26 + 0xb8))(param_1,uStack_250);
    (**(code **)(lVar26 + 0xb8))(param_1,pcStack_208);
    (**(code **)(lVar26 + 0xb8))(param_1,pcStack_200);
    (**(code **)(lVar26 + 0xb8))(param_1,pcVar9);
    (**(code **)(lVar26 + 0xb8))(param_1,pcVar8);
    (**(code **)(lVar26 + 0xb8))(param_1,pcVar7);
    (**(code **)(lVar26 + 0xb8))(param_1,pcVar12);
    (**(code **)(lVar26 + 0xb8))(param_1,param_2);
    if ((DAT_00113190 < 0) || (-1 < (DAT_00113194 + -1) * DAT_00113194)) break;
LAB_00103974:
    (**(code **)(lVar26 + 0xb8))(param_1,uVar19);
    (**(code **)(lVar26 + 0xb8))(param_1,uStack_210);
    (**(code **)(lVar26 + 0xb8))(param_1,uStack_250);
    (**(code **)(lVar26 + 0xb8))(param_1,pcStack_208);
    (**(code **)(lVar26 + 0xb8))(param_1,pcStack_200);
    (**(code **)(lVar26 + 0xb8))(param_1,pcVar9);
    (**(code **)(lVar26 + 0xb8))(param_1,pcVar8);
    (**(code **)(lVar26 + 0xb8))(param_1,pcVar7);
    (**(code **)(lVar26 + 0xb8))(param_1,pcVar12);
    (**(code **)(lVar26 + 0xb8))(param_1,param_2);
  }
  if (*(long *)(lVar2 + 0x28) != lStack_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcStack_218;
}

