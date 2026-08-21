
char * FUN_00108a2c(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *__s2;
  char *__s2_00;
  char *__s2_01;
  char *pcVar12;
  size_t sVar13;
  uint uVar14;
  byte *pbVar15;
  char *pcStack_370;
  undefined2 auStack_364 [2];
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined8 uStack_30c;
  undefined1 auStack_304 [156];
  char acStack_268 [512];
  long lStack_68;
  
  lVar2 = tpidr_el0;
  lStack_68 = *(long *)(lVar2 + 0x28);
  if ((-1 < DAT_00113190) && ((DAT_00113194 + -1) * DAT_00113194 < 0)) goto LAB_00108b98;
  while( true ) {
    memcpy(auStack_304,&DAT_0010fb73,0x9a);
    pcVar8 = (char *)thunk_FUN_00109db4(auStack_304);
    auStack_364[0] = 0x40;
    pcStack_370 = (char *)0x0;
    pcVar9 = strtok_r(pcVar8,(char *)auStack_364,&pcStack_370);
    pcVar10 = strtok_r((char *)0x0,(char *)auStack_364,&pcStack_370);
    pcVar11 = strtok_r((char *)0x0,(char *)auStack_364,&pcStack_370);
    __s2 = strtok_r((char *)0x0,(char *)auStack_364,&pcStack_370);
    __s2_00 = strtok_r((char *)0x0,(char *)auStack_364,&pcStack_370);
    __s2_01 = strtok_r((char *)0x0,(char *)auStack_364,&pcStack_370);
    pcVar12 = strtok_r((char *)0x0,(char *)auStack_364,&pcStack_370);
    __system_property_get(pcVar9,acStack_268);
    iVar6 = DAT_00113190;
    uVar14 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 0) || (-1 < (int)uVar14)) break;
LAB_00108b98:
    memcpy(auStack_304,&DAT_0010fb73,0x9a);
    pcVar8 = (char *)thunk_FUN_00109db4(auStack_304);
    auStack_364[0] = 0x40;
    pcStack_370 = (char *)0x0;
    pcVar8 = strtok_r(pcVar8,(char *)auStack_364,&pcStack_370);
    strtok_r((char *)0x0,(char *)auStack_364,&pcStack_370);
    strtok_r((char *)0x0,(char *)auStack_364,&pcStack_370);
    strtok_r((char *)0x0,(char *)auStack_364,&pcStack_370);
    strtok_r((char *)0x0,(char *)auStack_364,&pcStack_370);
    strtok_r((char *)0x0,(char *)auStack_364,&pcStack_370);
    strtok_r((char *)0x0,(char *)auStack_364,&pcStack_370);
    __system_property_get(pcVar8,acStack_268);
  }
  if (acStack_268[0] != '\0') {
    iVar5 = atoi(acStack_268);
    if (iVar5 < 0x15) {
      while( true ) {
        memset(acStack_268,0,0x200);
        __system_property_get(pcVar10,acStack_268);
        if ((DAT_00113190 < 0) || (-1 < (DAT_00113194 + -1) * DAT_00113194)) break;
        memset(acStack_268,0,0x200);
        __system_property_get(pcVar10,acStack_268);
      }
      if (acStack_268[0] != '\0') {
        if (pcVar8 == (char *)0x0) {
          uVar14 = (DAT_00113194 + -1) * DAT_00113194;
        }
        else {
          while( true ) {
            free(pcVar8);
            uVar14 = (DAT_00113194 + -1) * DAT_00113194;
            if ((DAT_00113190 < 10) || ((uVar14 & 1) == 0)) break;
            free(pcVar8);
          }
        }
        if ((-1 < DAT_00113190) && ((int)uVar14 < 0)) goto LAB_0010906c;
        while( true ) {
          pcVar9 = (char *)FUN_00101594(param_1,acStack_268);
          uVar14 = (DAT_00113194 + -1) * DAT_00113194;
          iVar6 = DAT_00113190;
          if ((DAT_00113190 < 0) || (-1 < (int)uVar14)) break;
LAB_0010906c:
          FUN_00101594(param_1,acStack_268);
        }
        goto LAB_001094c8;
      }
      uVar14 = (DAT_00113194 + -1) * DAT_00113194;
    }
    else {
      if ((9 < iVar6) && ((uVar14 & 1) != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if (0x1c < iVar5) {
        while( true ) {
          uStack_30c = 0;
          uStack_310 = 0;
          uStack_328 = 0;
          uStack_330 = 0;
          uStack_318 = 0;
          uStack_314 = 0;
          uStack_320 = 0;
          uStack_348 = 0;
          uStack_350 = 0;
          uStack_338 = 0;
          uStack_340 = 0;
          uStack_358 = 0;
          uStack_360 = 0;
          __system_property_get(pcVar11,&uStack_360);
          if ((DAT_00113190 < 0) || (-1 < (DAT_00113194 + -1) * DAT_00113194)) break;
          uStack_30c = 0;
          uStack_310 = 0;
          uStack_328 = 0;
          uStack_330 = 0;
          uStack_318 = 0;
          uStack_314 = 0;
          uStack_320 = 0;
          uStack_348 = 0;
          uStack_350 = 0;
          uStack_338 = 0;
          uStack_340 = 0;
          uStack_358 = 0;
          uStack_360 = 0;
          __system_property_get(pcVar11,&uStack_360);
        }
        pbVar15 = (byte *)&uStack_360;
        while( true ) {
          iVar6 = DAT_00113190;
          uVar14 = (DAT_00113194 + -1) * DAT_00113194;
          do {
          } while (9 < DAT_00113190 && (uVar14 & 1) != 0);
          bVar1 = *pbVar15;
          if (bVar1 == 0) break;
          while( true ) {
            iVar6 = tolower((uint)bVar1);
            *pbVar15 = (byte)iVar6;
            if ((DAT_00113190 < 10) || (((DAT_00113194 + -1) * DAT_00113194 & 1U) == 0)) break;
            iVar6 = tolower((uint)bVar1);
            *pbVar15 = (byte)iVar6;
          }
          pbVar15 = pbVar15 + 1;
        }
        bVar3 = -1 < DAT_00113190;
        bVar4 = (int)uVar14 < 0;
        pcVar9 = (char *)(ulong)(bVar3 && bVar4);
        iVar7 = strcmp((char *)&uStack_360,__s2);
        if ((iVar7 == 0) || (iVar7 = strcmp((char *)&uStack_360,__s2_00), iVar7 == 0)) {
          if (bVar3 && bVar4) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
LAB_00108fec:
          if (pcVar8 != (char *)0x0) {
            while( true ) {
              free(pcVar8);
              uVar14 = (DAT_00113194 + -1) * DAT_00113194;
              iVar6 = DAT_00113190;
              if ((DAT_00113190 < 10) || ((uVar14 & 1) == 0)) break;
              free(pcVar8);
            }
          }
          if ((-1 < iVar6) && ((int)uVar14 < 0)) goto LAB_001090b0;
          while( true ) {
            pcVar9 = (char *)FUN_00101594(param_1,pcVar12);
            uVar14 = (DAT_00113194 + -1) * DAT_00113194;
            bVar3 = true;
            iVar6 = DAT_00113190;
            if ((DAT_00113190 < 0) || (-1 < (int)uVar14)) break;
LAB_001090b0:
            FUN_00101594(param_1,pcVar12);
          }
        }
        else {
          if (bVar3 && bVar4) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          iVar7 = strcmp((char *)&uStack_360,__s2_01);
          if (iVar7 == 0) goto LAB_00108fec;
          bVar3 = false;
        }
        do {
        } while (-1 < iVar6 && (int)uVar14 < 0);
        if (bVar3) goto LAB_001094c8;
      }
      FUN_00108110(FUN_00109520);
      uVar14 = (DAT_00113194 + -1) * DAT_00113194;
      iVar6 = DAT_00113190;
      while ((DAT_00113190 = iVar6, 9 < iVar6 && ((uVar14 & 1) != 0))) {
        FUN_00108110(FUN_00109520);
        FUN_00108110(FUN_00109520);
        iVar6 = DAT_00113190;
        uVar14 = (DAT_00113194 + -1) * DAT_00113194;
      }
      sVar13 = strlen(&DAT_00113078);
      bVar3 = -1 < iVar6;
      bVar4 = (int)uVar14 < 0;
      if (sVar13 != 0) {
        if (bVar3 && bVar4) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        if (pcVar8 != (char *)0x0) {
          while( true ) {
            free(pcVar8);
            uVar14 = (DAT_00113194 + -1) * DAT_00113194;
            iVar6 = DAT_00113190;
            if ((DAT_00113190 < 10) || ((uVar14 & 1) == 0)) break;
            free(pcVar8);
          }
        }
        if ((-1 < iVar6) && ((int)uVar14 < 0)) goto LAB_00109118;
        while( true ) {
          pcVar9 = (char *)FUN_00101594(param_1,&DAT_00113078);
          uVar14 = (DAT_00113194 + -1) * DAT_00113194;
          iVar6 = DAT_00113190;
          if ((DAT_00113190 < 0) || (-1 < (int)uVar14)) break;
LAB_00109118:
          FUN_00101594(param_1,&DAT_00113078);
        }
        goto LAB_001094c8;
      }
      if (0x19 < iVar5) {
        if (!bVar3 || !bVar4) goto LAB_0010924c;
        do {
          strtok_r((char *)0x0,(char *)auStack_364,&pcStack_370);
LAB_0010924c:
          pcVar10 = strtok_r((char *)0x0,(char *)auStack_364,&pcStack_370);
        } while ((9 < DAT_00113190) && (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0));
        do {
          uVar14 = (DAT_00113194 + -1) * DAT_00113194;
          do {
          } while (9 < DAT_00113190 && (uVar14 & 1) != 0);
          if (pcVar10 == (char *)0x0) {
            bVar3 = false;
            if ((-1 < DAT_00113190) && ((int)uVar14 < 0)) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            goto LAB_00109464;
          }
          while( true ) {
            memset(acStack_268,0,0x200);
            __system_property_get(pcVar10,acStack_268);
            uVar14 = (DAT_00113194 + -1) * DAT_00113194;
            if ((DAT_00113190 < 10) || ((uVar14 & 1) == 0)) break;
            memset(acStack_268,0,0x200);
            __system_property_get(pcVar10,acStack_268);
          }
          if (acStack_268[0] != '\0') goto LAB_001093b8;
          pcVar10 = strtok_r((char *)0x0,(char *)auStack_364,&pcStack_370);
          if (-1 < DAT_00113190) {
            iVar6 = (DAT_00113194 + -1) * DAT_00113194;
            do {
              if (-1 < iVar6) break;
              strtok_r((char *)0x0,(char *)auStack_364,&pcStack_370);
              pcVar10 = strtok_r((char *)0x0,(char *)auStack_364,&pcStack_370);
              iVar6 = (DAT_00113194 + -1) * DAT_00113194;
            } while (-1 < DAT_00113190);
          }
        } while( true );
      }
      if (!bVar3 || !bVar4) goto LAB_0010912c;
      do {
        memset(acStack_268,0,0x200);
        __system_property_get(pcVar10,acStack_268);
LAB_0010912c:
        memset(acStack_268,0,0x200);
        __system_property_get(pcVar10,acStack_268);
        uVar14 = (DAT_00113194 + -1) * DAT_00113194;
      } while ((-1 < DAT_00113190) && ((int)uVar14 < 0));
      if (acStack_268[0] != '\0') {
        bVar3 = (uVar14 & 1) != 0;
        if (9 < DAT_00113190 && bVar3) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        if (pcVar8 == (char *)0x0) {
          if (9 < DAT_00113190 && bVar3) goto LAB_0010923c;
        }
        else {
          free(pcVar8);
          while ((9 < DAT_00113190 && (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0))) {
            free(pcVar8);
            free(pcVar8);
          }
        }
        while( true ) {
          pcVar9 = (char *)FUN_00101594(param_1,acStack_268);
          uVar14 = (DAT_00113194 + -1) * DAT_00113194;
          iVar6 = DAT_00113190;
          if ((DAT_00113190 < 10) || ((uVar14 & 1) == 0)) break;
LAB_0010923c:
          FUN_00101594(param_1,acStack_268);
        }
        goto LAB_001094c8;
      }
    }
  }
  goto LAB_00108ef0;
LAB_001093b8:
  if (pcVar8 == (char *)0x0) {
    iVar6 = (DAT_00113194 + -1) * DAT_00113194;
  }
  else {
    if ((-1 < DAT_00113190) && ((int)uVar14 < 0)) goto LAB_00109400;
    while( true ) {
      free(pcVar8);
      iVar6 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < iVar6)) break;
LAB_00109400:
      free(pcVar8);
    }
  }
  if ((-1 < DAT_00113190) && (iVar6 < 0)) goto LAB_00109454;
  while( true ) {
    pcVar9 = (char *)FUN_00101594(param_1,acStack_268);
    uVar14 = (DAT_00113194 + -1) * DAT_00113194;
    bVar3 = true;
    if ((DAT_00113190 < 10) || ((uVar14 & 1) == 0)) break;
LAB_00109454:
    FUN_00101594(param_1,acStack_268);
  }
LAB_00109464:
  do {
  } while (9 < DAT_00113190 && (uVar14 & 1) != 0);
  iVar6 = DAT_00113190;
  if (bVar3) goto LAB_001094c8;
LAB_00108ef0:
  do {
  } while (9 < DAT_00113190 && (uVar14 & 1) != 0);
  if (pcVar8 != (char *)0x0) {
    while( true ) {
      free(pcVar8);
      uVar14 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar14)) break;
      free(pcVar8);
    }
  }
  if ((9 < DAT_00113190) && ((uVar14 & 1) != 0)) goto LAB_001094b8;
  while( true ) {
    pcVar9 = (char *)FUN_00101594(param_1,pcVar12);
    uVar14 = (DAT_00113194 + -1) * DAT_00113194;
    iVar6 = DAT_00113190;
    if ((DAT_00113190 < 10) || ((uVar14 & 1) == 0)) break;
LAB_001094b8:
    FUN_00101594(param_1,pcVar12);
  }
LAB_001094c8:
  do {
  } while (9 < iVar6 && (uVar14 & 1) != 0);
  if (*(long *)(lVar2 + 0x28) == lStack_68) {
    return pcVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

