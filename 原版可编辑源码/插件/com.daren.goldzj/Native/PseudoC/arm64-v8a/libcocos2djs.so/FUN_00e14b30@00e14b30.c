
int FUN_00e14b30(long *param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_3 = 0;
  if (param_1 == (long *)0x0) {
    return 0x21;
  }
  if (param_2 == (uint *)0x0) {
    return 6;
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(**(code **)(lVar4 + 8))(lVar4,0x50);
  if (puVar3 == (undefined8 *)0x0) {
    return 0x40;
  }
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
  puVar3[7] = lVar4;
  uVar1 = *param_2;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 >> 2 & 1) == 0) {
      if (((uVar1 >> 1 & 1) != 0) && (*(long *)(param_2 + 8) != 0)) {
        (**(code **)(lVar4 + 0x10))(lVar4,puVar3);
        puVar3 = *(undefined8 **)(param_2 + 8);
        goto LAB_00e14be4;
      }
      iVar2 = 6;
    }
    else {
      iVar2 = FUN_00e85014(puVar3,*(undefined8 *)(param_2 + 6));
      puVar3[4] = *(undefined8 *)(param_2 + 6);
      if (iVar2 == 0) goto LAB_00e14be4;
    }
    (**(code **)(lVar4 + 0x10))(lVar4,puVar3);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 4);
    uVar5 = *(undefined8 *)(param_2 + 2);
    puVar3[2] = 0;
    puVar3[8] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[1] = uVar6;
    *puVar3 = uVar5;
LAB_00e14be4:
    iVar2 = 0;
    puVar3[7] = lVar4;
  }
  *param_3 = puVar3;
  return iVar2;
}

