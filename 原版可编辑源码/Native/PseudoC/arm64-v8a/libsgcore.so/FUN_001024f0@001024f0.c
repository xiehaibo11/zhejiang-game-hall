
int FUN_001024f0(long *param_1,long param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  char *__s1;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (DAT_00113194 + -1) * DAT_00113194;
  do {
  } while (9 < DAT_00113190 && (uVar4 & 1) != 0);
  if (param_2 == 0 && param_3 == (char *)0x0) {
    if (DAT_00113190 >= 0 && -1 >= (int)uVar4) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar2 = 0;
  }
  else {
    iVar2 = -1;
    if ((param_2 != 0) && (param_3 != (char *)0x0)) {
      if (DAT_00113190 < 0 || -1 < (int)uVar4) goto LAB_001025e4;
      do {
        (**(code **)(*param_1 + 0x548))(param_1,param_2,0);
LAB_001025e4:
        __s1 = (char *)(**(code **)(*param_1 + 0x548))(param_1,param_2,0);
        iVar1 = DAT_00113190;
        uVar4 = (DAT_00113194 + -1) * DAT_00113194;
        uVar3 = uVar4 & 1;
      } while ((9 < DAT_00113190) && (uVar3 != 0));
      if (__s1 == (char *)0x0) {
        iVar2 = -1;
      }
      else {
        iVar2 = strcasecmp(__s1,param_3);
        iVar2 = -(uint)(iVar2 != 0);
        if ((-1 < iVar1) && ((int)uVar4 < 0)) goto LAB_001026ac;
        while( true ) {
          (**(code **)(*param_1 + 0x550))(param_1,param_2,__s1);
          uVar4 = (DAT_00113194 + -1) * DAT_00113194;
          uVar3 = uVar4 & 1;
          if ((DAT_00113190 < 10) || (uVar3 == 0)) break;
LAB_001026ac:
          (**(code **)(*param_1 + 0x550))(param_1,param_2,__s1);
        }
      }
      if ((9 < DAT_00113190) && (uVar3 != 0)) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
  }
  if ((-1 < DAT_00113190) && ((int)uVar4 < 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return iVar2;
}

