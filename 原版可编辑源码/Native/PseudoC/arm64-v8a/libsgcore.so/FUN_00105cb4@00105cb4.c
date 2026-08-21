
undefined8
FUN_00105cb4(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
            )

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  uint uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = (DAT_00113194 + -1) * DAT_00113194;
  if ((-1 < DAT_00113190) && ((int)uVar2 < 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar1 = 0;
  if (param_3 < 0x110014) {
    if (param_3 == 0x110010) {
      if ((9 < DAT_00113190) && ((uVar2 & 1) != 0)) goto LAB_00105e9c;
      while( true ) {
        uVar1 = FUN_0010482c(param_1);
        uVar2 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 10) || ((uVar2 & 1) == 0)) break;
LAB_00105e9c:
        FUN_0010482c(param_1);
      }
    }
    else if (param_3 == 0x110013) {
      if ((9 < DAT_00113190) && ((uVar2 & 1) != 0)) goto LAB_00105e68;
      while( true ) {
        uVar1 = FUN_00104dfc(param_1);
        uVar2 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 0) || (-1 < (int)uVar2)) break;
LAB_00105e68:
        FUN_00104dfc(param_1);
      }
    }
  }
  else if (param_3 == 0x110014) {
    if ((9 < DAT_00113190) && ((uVar2 & 1) != 0)) goto LAB_00105ed0;
    while( true ) {
      uVar1 = FUN_00105340(param_1);
      uVar2 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 10) || ((uVar2 & 1) == 0)) break;
LAB_00105ed0:
      FUN_00105340(param_1);
    }
  }
  else if (param_3 == 0x11001c) {
    if ((9 < DAT_00113190) && ((uVar2 & 1) != 0)) goto LAB_00105f08;
    while( true ) {
      auVar3 = FUN_001059bc(param_1,param_2,param_4,param_5);
      param_2 = auVar3._8_8_;
      uVar1 = auVar3._0_8_;
      uVar2 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar2)) break;
LAB_00105f08:
      FUN_001059bc(param_1,param_2,param_4,param_5);
      param_2 = extraout_x1;
    }
  }
  else if (param_3 == 0x120001) {
    while( true ) {
      uVar1 = FUN_00108a2c(param_1,param_2);
      uVar2 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar2)) break;
      FUN_00108a2c(param_1,param_2);
    }
  }
  if ((9 < DAT_00113190) && ((uVar2 & 1) != 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return uVar1;
}

