
undefined8 FUN_00105340(long *param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  void *__ptr;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  undefined8 extraout_x1;
  long lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auVar14 [16];
  char *pcStack_140;
  undefined2 auStack_134 [2];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined5 uStack_a8;
  undefined3 uStack_a3;
  undefined5 uStack_a0;
  undefined8 uStack_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined8 uStack_7b;
  
  lVar1 = tpidr_el0;
  lVar11 = *(long *)(lVar1 + 0x28);
  if ((9 < DAT_00113190) && (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0)) goto LAB_00105428;
  while( true ) {
    uStack_7b = 0x9250a27bf384b46a;
    uStack_80 = 0x21a7f1a986;
    uStack_88 = 0xb65326d9a;
    uStack_83 = 0x557249;
    uStack_90 = 0x68a13266566e001b;
    __ptr = (void *)thunk_FUN_00109db4(&uStack_90,param_2);
    auVar14 = FUN_0010145c(param_1,__ptr);
    param_2 = auVar14._8_8_;
    lVar3 = auVar14._0_8_;
    uVar12 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 10) || ((uVar12 & 1) == 0)) break;
LAB_00105428:
    uStack_7b = 0x9250a27bf384b46a;
    uStack_80 = 0x21a7f1a986;
    uStack_88 = 0xb65326d9a;
    uStack_83 = 0x557249;
    uStack_90 = 0x68a13266566e001b;
    uVar4 = thunk_FUN_00109db4(&uStack_90,param_2);
    FUN_0010145c(param_1,uVar4);
    param_2 = extraout_x1;
  }
  if (lVar3 == 0) {
    while( true ) {
      cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
      uVar12 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar12)) break;
      (**(code **)(*param_1 + 0x720))(param_1);
    }
    if (cVar2 == '\0') {
      uVar4 = 0;
      uVar12 = (DAT_00113194 + -1) * DAT_00113194;
    }
    else {
      if ((9 < DAT_00113190) && ((uVar12 & 1) != 0)) goto LAB_00105910;
      while( true ) {
        (**(code **)(*param_1 + 0x88))(param_1);
        uVar4 = 0;
        uVar12 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 10) || ((uVar12 & 1) == 0)) break;
LAB_00105910:
        (**(code **)(*param_1 + 0x88))(param_1);
      }
    }
  }
  else {
    if ((-1 < DAT_00113190) && ((int)uVar12 < 0)) goto LAB_00105580;
    while( true ) {
      uStack_a0 = 0xac9f69096;
      uStack_a8 = 0x1b5524308b;
      uStack_a3 = 0x757259;
      uStack_b0 = 0x62ab13765d680013;
      pcVar5 = (char *)thunk_FUN_00109db4(&uStack_b0);
      auStack_134[0] = 0x40;
      pcStack_140 = (char *)0x0;
      pcVar6 = strtok_r(pcVar5,(char *)auStack_134,&pcStack_140);
      pcVar7 = strtok_r((char *)0x0,(char *)auStack_134,&pcStack_140);
      lVar8 = (**(code **)(*param_1 + 0x388))(param_1,lVar3,pcVar6,pcVar7);
      uVar12 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 10) || ((uVar12 & 1) == 0)) break;
LAB_00105580:
      uStack_a0 = 0xac9f69096;
      uStack_a8 = 0x1b5524308b;
      uStack_a3 = 0x757259;
      uStack_b0 = 0x62ab13765d680013;
      pcVar5 = (char *)thunk_FUN_00109db4(&uStack_b0);
      auStack_134[0] = 0x40;
      pcStack_140 = (char *)0x0;
      pcVar5 = strtok_r(pcVar5,(char *)auStack_134,&pcStack_140);
      pcVar6 = strtok_r((char *)0x0,(char *)auStack_134,&pcStack_140);
      (**(code **)(*param_1 + 0x388))(param_1,lVar3,pcVar5,pcVar6);
    }
    if (lVar8 == 0) {
      uVar4 = 0;
      iVar13 = DAT_00113190;
    }
    else {
      while( true ) {
        lVar9 = (**(code **)(*param_1 + 0x420))(param_1,lVar3,lVar8);
        uVar12 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 0) || (-1 < (int)uVar12)) break;
        (**(code **)(*param_1 + 0x420))(param_1,lVar3,lVar8);
      }
      if (lVar9 == 0) {
        uVar12 = (DAT_00113194 + -1) * DAT_00113194;
        uVar4 = 0;
        iVar13 = DAT_00113190;
      }
      else {
        if ((9 < DAT_00113190) && ((uVar12 & 1) != 0)) goto LAB_00105820;
        while( true ) {
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          sprintf((char *)&uStack_130,"%lld",lVar9);
          iVar13 = DAT_00113190;
          uVar12 = (DAT_00113194 + -1) * DAT_00113194;
          if ((DAT_00113190 < 0) || (-1 < (int)uVar12)) break;
LAB_00105820:
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          sprintf((char *)&uStack_130,"%lld",lVar9);
        }
        sVar10 = strlen((char *)&uStack_130);
        if (sVar10 == 0) {
          uVar4 = 0;
        }
        else {
          if ((9 < iVar13) && ((uVar12 & 1) != 0)) goto LAB_001058a4;
          while( true ) {
            uVar4 = FUN_00101594(param_1,&uStack_130);
            uVar12 = (DAT_00113194 + -1) * DAT_00113194;
            iVar13 = DAT_00113190;
            if ((DAT_00113190 < 10) || ((uVar12 & 1) == 0)) break;
LAB_001058a4:
            FUN_00101594(param_1,&uStack_130);
          }
        }
        do {
        } while (9 < iVar13 && (uVar12 & 1) != 0);
      }
      if ((-1 < iVar13) && ((int)uVar12 < 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
    if ((9 < iVar13) && ((uVar12 & 1) != 0)) goto LAB_001056b8;
    while( true ) {
      cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
      uVar12 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 10) || ((uVar12 & 1) == 0)) break;
LAB_001056b8:
      (**(code **)(*param_1 + 0x720))(param_1);
    }
    if (cVar2 != '\0') {
      if ((-1 < DAT_00113190) && ((int)uVar12 < 0)) goto LAB_00105718;
      while( true ) {
        (**(code **)(*param_1 + 0x88))(param_1);
        uVar12 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 10) || ((uVar12 & 1) == 0)) break;
LAB_00105718:
        (**(code **)(*param_1 + 0x88))(param_1);
      }
    }
    if ((-1 < DAT_00113190) && ((int)uVar12 < 0)) goto LAB_0010576c;
    while( true ) {
      (**(code **)(*param_1 + 0xb8))(param_1,lVar3);
      uVar12 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar12)) break;
LAB_0010576c:
      (**(code **)(*param_1 + 0xb8))(param_1,lVar3);
    }
    if (pcVar5 != (char *)0x0) {
      while( true ) {
        free(pcVar5);
        uVar12 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 0) || (-1 < (int)uVar12)) break;
        free(pcVar5);
      }
    }
    do {
    } while (9 < DAT_00113190 && (uVar12 & 1) != 0);
  }
  if ((-1 < DAT_00113190) && ((int)uVar12 < 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (__ptr != (void *)0x0) {
    while( true ) {
      free(__ptr);
      uVar12 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar12)) break;
      free(__ptr);
    }
  }
  do {
  } while (-1 < DAT_00113190 && (int)uVar12 < 0);
  if (*(long *)(lVar1 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

