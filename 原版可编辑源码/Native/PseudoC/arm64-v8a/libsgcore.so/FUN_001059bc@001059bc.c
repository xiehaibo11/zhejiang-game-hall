
long FUN_001059bc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char *__nptr;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if ((9 < DAT_00113190) && (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0)) goto LAB_00105a64;
  while( true ) {
    iVar1 = FUN_0010a00c(param_1,param_4);
    uVar2 = (DAT_00113194 + -1) * DAT_00113194;
    if ((DAT_00113190 < 10) || ((uVar2 & 1) == 0)) break;
LAB_00105a64:
    FUN_0010a00c(param_1,param_4);
  }
  if (iVar1 == 0) {
    if ((-1 < DAT_00113190) && ((int)uVar2 < 0)) goto LAB_00105b50;
    while( true ) {
      __nptr = (char *)(**(code **)(*param_1 + 0x548))(param_1,param_3,0);
      uVar2 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 10) || ((uVar2 & 1) == 0)) break;
LAB_00105b50:
      (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
    }
    if (__nptr == (char *)0x0) {
      while( true ) {
        (**(code **)(*param_1 + 0x88))(param_1);
        lVar3 = 0;
        uVar2 = (DAT_00113194 + -1) * DAT_00113194;
        lVar4 = lVar3;
        if ((DAT_00113190 < 0) || (lVar4 = 0, -1 < (int)uVar2)) break;
        (**(code **)(*param_1 + 0x88))(param_1);
      }
    }
    else {
      if ((-1 < DAT_00113190) && ((int)uVar2 < 0)) goto LAB_00105c2c;
      while( true ) {
        iVar1 = atoi(__nptr);
        lVar3 = FUN_0010a664(param_1,iVar1);
        free(__nptr);
        uVar2 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 10) || ((uVar2 & 1) == 0)) break;
LAB_00105c2c:
        iVar1 = atoi(__nptr);
        FUN_0010a664(param_1,iVar1);
        free(__nptr);
      }
      if (lVar3 == 0) {
        lVar4 = 0;
        if ((-1 < DAT_00113190) && (lVar4 = 0, (int)uVar2 < 0)) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
      }
      else {
        while( true ) {
          lVar4 = FUN_00101594(param_1,lVar3);
          uVar2 = (DAT_00113194 + -1) * DAT_00113194;
          if ((DAT_00113190 < 10) || ((uVar2 & 1) == 0)) break;
          FUN_00101594(param_1,lVar3);
        }
      }
    }
    do {
    } while (-1 < DAT_00113190 && (int)uVar2 < 0);
  }
  else {
    lVar3 = 0;
    lVar4 = 0;
  }
  if ((-1 < DAT_00113190) && ((int)uVar2 < 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (lVar3 == 0) {
    uVar2 = uVar2 & 1;
  }
  else {
    while( true ) {
      FUN_0010d3d4(lVar3);
      uVar2 = (DAT_00113194 + -1) * DAT_00113194 & 1;
      if ((DAT_00113190 < 10) || (uVar2 == 0)) break;
      FUN_0010d3d4(lVar3);
    }
  }
  if ((9 < DAT_00113190) && (uVar2 != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return lVar4;
}

