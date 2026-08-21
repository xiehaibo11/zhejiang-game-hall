
int FUN_00e20650(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  lVar2 = FUN_00e20f2c(lVar4,param_3,&DAT_0197573f);
  if (lVar2 == 0) {
    iVar1 = 0x40;
  }
  else {
    lVar5 = *param_1;
    puVar3 = (undefined8 *)(**(code **)(lVar5 + 8))(lVar5,0x50);
    if (puVar3 == (undefined8 *)0x0) {
      iVar1 = 0x40;
    }
    else {
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[7] = lVar5;
      iVar1 = FUN_00e85014(puVar3,lVar2);
      puVar3[4] = lVar2;
      if (iVar1 == 0) {
        puVar3[7] = lVar5;
        iVar1 = FUN_00e20c14(puVar3,0x51607,param_5);
        lVar5 = puVar3[7];
        if ((code *)puVar3[6] != (code *)0x0) {
          (*(code *)puVar3[6])(puVar3);
        }
        (**(code **)(lVar5 + 0x10))(lVar5,puVar3);
        if (iVar1 == 0) {
          *param_4 = lVar2;
          return 0;
        }
      }
      else {
        (**(code **)(lVar5 + 0x10))(lVar5,puVar3);
      }
    }
    (**(code **)(lVar4 + 0x10))(lVar4,lVar2);
  }
  return iVar1;
}

