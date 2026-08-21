
undefined8 FUN_001086b0(uint param_1,long param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  size_t sVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = (DAT_00113194 + -1) * DAT_00113194;
  do {
  } while (9 < DAT_00113190 && (uVar8 & 1) != 0);
  lVar1 = param_2 + (ulong)param_1;
  if (param_1 < 0x1ff81) {
    if (*(int *)(lVar1 + 0x88) != 0) {
      if (-1 < DAT_00113190 && (int)uVar8 < 0) goto LAB_001087e8;
      while( true ) {
        iVar4 = FUN_001086b0(*(undefined4 *)(lVar1 + 0x88),param_2,param_3);
        uVar8 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 10) || ((uVar8 & 1) == 0)) break;
LAB_001087e8:
        FUN_001086b0(*(undefined4 *)(lVar1 + 0x88),param_2,param_3);
      }
      if (iVar4 < 0) {
        bVar3 = true;
        if ((-1 < DAT_00113190) && ((int)uVar8 < 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
      }
      else {
        bVar3 = false;
      }
      if ((-1 < DAT_00113190) && ((int)uVar8 < 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if (bVar3) goto LAB_00108770;
    }
    iVar4 = DAT_00113190;
    do {
      uVar7 = uVar8 & 1;
      if (DAT_00113190 < 10) break;
    } while (uVar7 != 0);
    if (*(int *)(lVar1 + 0x84) != 0) {
      if (DAT_00113190 >= 0 && -1 >= (int)uVar8) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      param_2 = param_2 + (ulong)*(uint *)(lVar1 + 0x84);
      lVar2 = param_2 + 0x80;
      if ((*(uint *)(lVar1 + 0x84) < 0x1ff81) &&
         (sVar6 = strlen((char *)(param_2 + 0xe0)), sVar6 != 0)) {
        while( true ) {
          uVar5 = (*param_3)(lVar2);
          uVar8 = (DAT_00113194 + -1) * DAT_00113194;
          iVar4 = DAT_00113190;
          if ((DAT_00113190 < 10) || ((uVar8 & 1) == 0)) break;
          (*param_3)(lVar2);
        }
      }
      else {
        uVar5 = 0xffffffff;
      }
      if ((-1 < iVar4) && ((int)uVar8 < 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      goto LAB_00108774;
    }
    if (*(int *)(lVar1 + 0x90) != 0) {
      if (DAT_00113190 < 0 || -1 < (int)uVar8) goto LAB_00108910;
      do {
        FUN_001086b0(*(undefined4 *)(lVar1 + 0x90),param_2,param_3);
LAB_00108910:
        iVar4 = FUN_001086b0(*(undefined4 *)(lVar1 + 0x90),param_2,param_3);
        uVar8 = (DAT_00113194 + -1) * DAT_00113194;
      } while ((-1 < DAT_00113190) && ((int)uVar8 < 0));
      uVar7 = uVar8 & 1;
      if ((-1 < iVar4) && ((9 < DAT_00113190 && (uVar7 != 0)))) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      if (iVar4 < 0) goto LAB_00108770;
    }
    do {
    } while (9 < DAT_00113190 && uVar7 != 0);
    if (*(int *)(lVar1 + 0x8c) != 0) {
      while( true ) {
        iVar4 = FUN_001086b0(*(undefined4 *)(lVar1 + 0x8c),param_2,param_3);
        uVar8 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 10) || ((uVar8 & 1) == 0)) break;
        FUN_001086b0(*(undefined4 *)(lVar1 + 0x8c),param_2,param_3);
      }
      if ((-1 < DAT_00113190) && ((int)uVar8 < 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar8 = (DAT_00113194 + -1) * DAT_00113194;
      if (iVar4 < 0) goto LAB_00108770;
    }
    uVar5 = 0;
    iVar4 = DAT_00113190;
    if ((-1 < DAT_00113190) && ((int)uVar8 < 0)) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  else {
LAB_00108770:
    uVar5 = 0xffffffff;
    iVar4 = DAT_00113190;
  }
LAB_00108774:
  do {
  } while (9 < iVar4 && (uVar8 & 1) != 0);
  return uVar5;
}

