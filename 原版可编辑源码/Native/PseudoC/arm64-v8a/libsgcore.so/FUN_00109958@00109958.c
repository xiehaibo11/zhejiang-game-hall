
uint FUN_00109958(uint param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = (DAT_00113194 + -1) * DAT_00113194;
  if ((-1 < DAT_00113190) && ((int)uVar7 < 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  bVar1 = (uVar7 & 1) == 0;
  if (DAT_00113190 < 10 || bVar1) {
    uVar2 = 0;
    iVar3 = 9;
    uVar7 = DAT_001130fc & 1;
    uVar6 = DAT_00113100 & 1;
    uVar4 = DAT_00113100;
    uVar5 = DAT_001130fc;
    do {
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        return uVar2 + 3 ^ param_1;
      }
      if ((DAT_001130f8 & 1) == 0) {
        DAT_001130f8 = DAT_00113110 & DAT_001130f8 >> 1;
        if ((uVar4 & 1) == 0) {
          uVar6 = 0;
          uVar4 = DAT_00113118 & uVar4 >> 1;
          DAT_00113100 = uVar4;
        }
        else {
          uVar4 = DAT_0011310c >> 1 ^ uVar4 | DAT_00113124;
          uVar6 = 1;
          DAT_00113100 = uVar4;
        }
      }
      else {
        DAT_001130f8 = DAT_00113104 >> 1 ^ DAT_001130f8 | DAT_0011311c;
        if ((uVar5 & 1) == 0) {
          uVar5 = DAT_00113114 & uVar5 >> 1;
          uVar7 = 0;
          DAT_001130fc = uVar5;
        }
        else {
          uVar5 = DAT_00113108 >> 1 ^ uVar5 | DAT_00113120;
          uVar7 = 1;
          DAT_001130fc = uVar5;
        }
      }
      uVar2 = uVar6 ^ uVar7 | (uVar2 & 0x7f) << 1;
    } while (DAT_00113190 < 10 || bVar1);
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

