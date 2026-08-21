
undefined8 FUN_0010482c(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  __time_t _Var4;
  long lVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  char *__file;
  size_t sVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  stat sStack_600;
  byte abStack_570 [4];
  undefined1 auStack_56c [1020];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e4 [124];
  long lStack_68;
  
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  if ((-1 < DAT_00113190) && ((DAT_00113194 + -1) * DAT_00113194 < 0)) goto LAB_0010494c;
  while( true ) {
    memcpy(auStack_e4,&DAT_0010f8fe,0x7b);
    pcVar8 = (char *)thunk_FUN_00109db4(auStack_e4);
    sStack_600.__unused[2]._4_2_ = 0x40;
    sStack_600.__unused[1] = 0;
    __file = strtok_r(pcVar8,(char *)((long)sStack_600.__unused + 0x14),
                      (char **)(sStack_600.__unused + 1));
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    memset(abStack_570,0,0x400);
    if ((DAT_00113190 < 0) || (-1 < (DAT_00113194 + -1) * DAT_00113194)) break;
LAB_0010494c:
    memcpy(auStack_e4,&DAT_0010f8fe,0x7b);
    pcVar8 = (char *)thunk_FUN_00109db4(auStack_e4);
    sStack_600.__unused[2]._4_2_ = 0x40;
    sStack_600.__unused[1] = 0;
    strtok_r(pcVar8,(char *)((long)sStack_600.__unused + 0x14),(char **)(sStack_600.__unused + 1));
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    memset(abStack_570,0,0x400);
  }
  while( true ) {
    iVar7 = DAT_00113194;
    iVar15 = DAT_00113190;
    uVar14 = (DAT_00113194 + -1) * DAT_00113194;
    bVar6 = (uVar14 & 1) != 0;
    do {
    } while (-1 < DAT_00113190 && (int)uVar14 < 0);
    if (__file == (char *)0x0) break;
    if (9 < DAT_00113190 && bVar6) goto LAB_00104a3c;
    while( true ) {
      iVar7 = lstat(__file,&sStack_600);
      lVar5 = sStack_600.st_atim.tv_nsec;
      _Var4 = sStack_600.st_atim.tv_sec;
      iVar15 = DAT_00113190;
      uVar2 = (DAT_00113194 + -1) * DAT_00113194;
      uVar14 = uVar2 & 1;
      if ((DAT_00113190 < 10) || (uVar14 == 0)) break;
LAB_00104a3c:
      lstat(__file,&sStack_600);
    }
    bVar6 = -1 < DAT_00113190 && (int)uVar2 < 0;
    if (iVar7 == 0) {
      if (bVar6) goto LAB_00104b00;
      while( true ) {
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        snprintf((char *)&uStack_170,0x80,"%ld::%ld",_Var4,lVar5);
        strcat((char *)abStack_570,(char *)&uStack_170);
        sVar9 = strlen((char *)abStack_570);
        (abStack_570 + sVar9)[0] = 0x7c;
        (abStack_570 + sVar9)[1] = 0;
        uVar14 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 0) || (-1 < (int)uVar14)) break;
LAB_00104b00:
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        snprintf((char *)&uStack_170,0x80,"%ld::%ld",_Var4,lVar5);
        strcat((char *)abStack_570,(char *)&uStack_170);
        sVar9 = strlen((char *)abStack_570);
        (abStack_570 + sVar9)[0] = 0x7c;
        (abStack_570 + sVar9)[1] = 0;
      }
      uVar14 = uVar14 & 1;
      iVar15 = DAT_00113190;
    }
    else {
      if (bVar6) {
        do {
          sVar9 = strlen((char *)abStack_570);
          pbVar11 = abStack_570 + sVar9;
          auStack_56c[sVar9] = 0;
          pbVar11[0] = 0x6e;
          pbVar11[1] = 0x6e;
          pbVar11[2] = 0x6e;
          pbVar11[3] = 0x7c;
          sVar9 = strlen((char *)abStack_570);
          pbVar11 = abStack_570 + sVar9;
          auStack_56c[sVar9] = 0;
          pbVar11[0] = 0x6e;
          pbVar11[1] = 0x6e;
          pbVar11[2] = 0x6e;
          pbVar11[3] = 0x7c;
        } while( true );
      }
      sVar9 = strlen((char *)abStack_570);
      pbVar11 = abStack_570 + sVar9;
      auStack_56c[sVar9] = 0;
      pbVar11[0] = 0x6e;
      pbVar11[1] = 0x6e;
      pbVar11[2] = 0x6e;
      pbVar11[3] = 0x7c;
    }
    if ((9 < iVar15) && (uVar14 != 0)) goto LAB_00104ba8;
    while( true ) {
      __file = strtok_r((char *)0x0,(char *)((long)sStack_600.__unused + 0x14),
                        (char **)(sStack_600.__unused + 1));
      if ((DAT_00113190 < 10) || (((DAT_00113194 + -1) * DAT_00113194 & 1U) == 0)) break;
LAB_00104ba8:
      strtok_r((char *)0x0,(char *)((long)sStack_600.__unused + 0x14),
               (char **)(sStack_600.__unused + 1));
    }
  }
  if (9 < DAT_00113190 && bVar6) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (abStack_570[0] != 0) {
    sVar9 = strlen((char *)abStack_570);
    abStack_570[(long)((sVar9 << 0x20) + -0x100000000) >> 0x20] = 0;
    pbVar11 = (byte *)((long)sStack_600.__unused + 0x17);
    do {
      pbVar11 = pbVar11 + 1;
    } while (*pbVar11 != 0);
    pbVar12 = abStack_570;
    while( true ) {
      uVar14 = (iVar7 + -1) * iVar7;
      pbVar11 = pbVar11 + -1;
      do {
      } while (9 < iVar15 && (uVar14 & 1) != 0);
      if (pbVar11 <= pbVar12) break;
      bVar13 = *pbVar11;
      if (-1 < iVar15 && (int)uVar14 < 0) goto LAB_00104c50;
      while( true ) {
        bVar1 = *pbVar12;
        *pbVar11 = bVar13 ^ bVar1;
        bVar13 = *pbVar12 ^ bVar13 ^ bVar1;
        *pbVar12 = bVar13;
        bVar13 = *pbVar11 ^ bVar13;
        *pbVar11 = bVar13;
        if ((DAT_00113190 < 10) || (((DAT_00113194 + -1) * DAT_00113194 & 1U) == 0)) break;
LAB_00104c50:
        bVar1 = *pbVar12;
        *pbVar11 = bVar13 ^ bVar1;
        bVar13 = *pbVar12 ^ bVar13 ^ bVar1;
        *pbVar12 = bVar13;
        bVar13 = *pbVar11 ^ bVar13;
        *pbVar11 = bVar13;
      }
      pbVar12 = pbVar12 + 1;
      iVar15 = DAT_00113190;
      iVar7 = DAT_00113194;
    }
    if (-1 < iVar15 && (int)uVar14 < 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  uVar10 = FUN_00101594(param_1,abStack_570);
  uVar14 = (DAT_00113194 + -1) * DAT_00113194;
  while ((-1 < DAT_00113190 && ((int)uVar14 < 0))) {
    FUN_00101594(param_1,abStack_570);
    uVar10 = FUN_00101594(param_1,abStack_570);
    uVar14 = (DAT_00113194 + -1) * DAT_00113194;
  }
  if (pcVar8 != (char *)0x0) {
    while( true ) {
      free(pcVar8);
      uVar14 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 10) || ((uVar14 & 1) == 0)) break;
      free(pcVar8);
    }
  }
  do {
  } while (-1 < DAT_00113190 && (int)uVar14 < 0);
  if (*(long *)(lVar3 + 0x28) == lStack_68) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

