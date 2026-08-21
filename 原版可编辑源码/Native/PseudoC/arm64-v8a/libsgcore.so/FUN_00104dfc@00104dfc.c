
undefined8 FUN_00104dfc(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  size_t sVar7;
  undefined8 uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  byte bVar13;
  int iVar14;
  char *pcStack_5f8;
  char acStack_5f0 [4];
  byte abStack_5ec [1024];
  char acStack_1ec [256];
  undefined1 auStack_ec [132];
  long lStack_68;
  
  lVar2 = tpidr_el0;
  lStack_68 = *(long *)(lVar2 + 0x28);
  if ((9 < DAT_00113190) && (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0)) goto LAB_00104f18;
  while( true ) {
    memcpy(auStack_ec,&DAT_0010f979,0x81);
    pcVar5 = (char *)thunk_FUN_00109db4(auStack_ec);
    acStack_5f0[0] = '@';
    acStack_5f0[1] = '\0';
    pcStack_5f8 = (char *)0x0;
    pcVar6 = strtok_r(pcVar5,acStack_5f0,&pcStack_5f8);
    memset(acStack_1ec,0,0x100);
    memset(abStack_5ec,0,0x400);
    uVar9 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 10) || ((uVar9 & 1) == 0)) break;
LAB_00104f18:
    memcpy(auStack_ec,&DAT_0010f979,0x81);
    pcVar5 = (char *)thunk_FUN_00109db4(auStack_ec);
    acStack_5f0[0] = '@';
    acStack_5f0[1] = '\0';
    pcStack_5f8 = (char *)0x0;
    strtok_r(pcVar5,acStack_5f0,&pcStack_5f8);
    memset(acStack_1ec,0,0x100);
    memset(abStack_5ec,0,0x400);
  }
  if ((DAT_00113190 < 0) || (-1 < (int)uVar9)) {
    bVar3 = false;
    do {
      iVar4 = DAT_00113194;
      iVar14 = DAT_00113190;
      if (pcVar6 == (char *)0x0) {
        if (bVar3) {
          if ((9 < DAT_00113190) && ((uVar9 & 1) != 0)) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          if (abStack_5ec[0] != 0) {
            sVar7 = strlen((char *)abStack_5ec);
            abStack_5ec[(long)((sVar7 << 0x20) + -0x100000000) >> 0x20] = 0;
            pbVar10 = (byte *)(acStack_5f0 + 2);
            do {
              pbVar12 = pbVar10 + 2;
              pbVar10 = pbVar10 + 1;
            } while (*pbVar12 != 0);
            uVar9 = (iVar4 + -1) * iVar4;
            if ((iVar14 < 10) || ((uVar9 & 1) == 0)) {
              pbVar12 = abStack_5ec;
              do {
                if (pbVar10 <= pbVar12) {
                  if (-1 >= iVar14 || (int)uVar9 >= 0) goto LAB_00105300;
                  do {
                    FUN_00101594(param_1,abStack_5ec);
LAB_00105300:
                    uVar8 = FUN_00101594(param_1,abStack_5ec);
                    uVar9 = (DAT_00113194 + -1) * DAT_00113194;
                  } while ((9 < DAT_00113190) && ((uVar9 & 1) != 0));
LAB_00105250:
                  uVar11 = uVar9 & 1;
                  do {
                  } while (9 < DAT_00113190 && (uVar9 & 1) != 0);
                  if (pcVar5 != (char *)0x0) {
                    while( true ) {
                      free(pcVar5);
                      uVar11 = (DAT_00113194 + -1) * DAT_00113194 & 1;
                      if ((DAT_00113190 < 10) || (uVar11 == 0)) break;
                      free(pcVar5);
                    }
                  }
                  if ((9 < DAT_00113190) && (uVar11 != 0)) {
                    do {
                    /* WARNING: Do nothing block with infinite loop */
                    } while( true );
                  }
                  if (*(long *)(lVar2 + 0x28) != lStack_68) {
                    /* WARNING: Subroutine does not return */
                    __stack_chk_fail();
                  }
                  return uVar8;
                }
                bVar13 = *pbVar10;
                if (-1 < iVar14 && (int)uVar9 < 0) goto LAB_00105208;
                while( true ) {
                  bVar1 = *pbVar12;
                  *pbVar10 = bVar13 ^ bVar1;
                  bVar13 = *pbVar12 ^ bVar13 ^ bVar1;
                  *pbVar12 = bVar13;
                  uVar9 = (DAT_00113194 + -1) * DAT_00113194;
                  bVar13 = *pbVar10 ^ bVar13;
                  *pbVar10 = bVar13;
                  if ((DAT_00113190 < 10) || ((uVar9 & 1) == 0)) break;
LAB_00105208:
                  bVar1 = *pbVar12;
                  *pbVar10 = bVar13 ^ bVar1;
                  bVar13 = *pbVar12 ^ bVar13 ^ bVar1;
                  *pbVar12 = bVar13;
                  bVar13 = *pbVar10 ^ bVar13;
                  *pbVar10 = bVar13;
                }
                pbVar12 = pbVar12 + 1;
                pbVar10 = pbVar10 + -1;
                iVar14 = DAT_00113190;
              } while ((DAT_00113190 < 10) || ((uVar9 & 1) == 0));
            }
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
        }
        uVar8 = 0;
        goto LAB_00105250;
      }
      while( true ) {
        memset(acStack_1ec,0,0x100);
        __system_property_get(pcVar6,acStack_1ec);
        iVar4 = DAT_00113194;
        iVar14 = DAT_00113190;
        uVar9 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 10) || ((uVar9 & 1) == 0)) break;
        memset(acStack_1ec,0,0x100);
        __system_property_get(pcVar6,acStack_1ec);
      }
      if (acStack_1ec[0] == '\0') {
        if ((-1 < DAT_00113190) && ((int)uVar9 < 0)) {
          sVar7 = strlen((char *)abStack_5ec);
          pbVar10 = abStack_5ec + sVar7;
          pbVar10[0] = 0x6e;
          pbVar10[1] = 0x6e;
          pbVar10[2] = 0x6e;
          pbVar10[3] = 0;
          sVar7 = strlen((char *)abStack_5ec);
          (abStack_5ec + sVar7)[0] = 0x7c;
          (abStack_5ec + sVar7)[1] = 0;
        }
        sVar7 = strlen((char *)abStack_5ec);
        pbVar10 = abStack_5ec + sVar7;
        pbVar10[0] = 0x6e;
        pbVar10[1] = 0x6e;
        pbVar10[2] = 0x6e;
        pbVar10[3] = 0;
        sVar7 = strlen((char *)abStack_5ec);
        uVar9 = (iVar4 + -1) * iVar4 & 1;
        (abStack_5ec + sVar7)[0] = 0x7c;
        (abStack_5ec + sVar7)[1] = 0;
      }
      else {
        while( true ) {
          strcat((char *)abStack_5ec,acStack_1ec);
          sVar7 = strlen((char *)abStack_5ec);
          bVar3 = true;
          (abStack_5ec + sVar7)[0] = 0x7c;
          (abStack_5ec + sVar7)[1] = 0;
          uVar9 = (DAT_00113194 + -1) * DAT_00113194 & 1;
          iVar14 = DAT_00113190;
          if ((DAT_00113190 < 10) || (uVar9 == 0)) break;
          strcat((char *)abStack_5ec,acStack_1ec);
          sVar7 = strlen((char *)abStack_5ec);
          (abStack_5ec + sVar7)[0] = 0x7c;
          (abStack_5ec + sVar7)[1] = 0;
        }
      }
      if ((9 < iVar14) && (uVar9 != 0)) goto LAB_00104fc8;
      while( true ) {
        pcVar6 = strtok_r((char *)0x0,acStack_5f0,&pcStack_5f8);
        uVar9 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 0) || (-1 < (int)uVar9)) break;
LAB_00104fc8:
        strtok_r((char *)0x0,acStack_5f0,&pcStack_5f8);
      }
    } while ((DAT_00113190 < 0) || (-1 < (int)uVar9));
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

