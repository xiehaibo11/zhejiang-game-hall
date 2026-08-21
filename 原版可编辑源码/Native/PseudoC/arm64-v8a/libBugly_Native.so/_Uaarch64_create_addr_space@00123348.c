
undefined8 * _Uaarch64_create_addr_space(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (((param_2 == 0) || (param_2 == 0x10e1)) || (param_2 == 0x4d2)) {
    puVar1 = malloc(0x32aa0);
    if (puVar1 != (undefined8 *)0x0) {
      memset(puVar1 + 8,0,0x32a60);
      uVar3 = param_1[4];
      uVar5 = param_1[7];
      uVar4 = param_1[6];
      uVar7 = param_1[1];
      uVar6 = *param_1;
      uVar9 = param_1[3];
      uVar8 = param_1[2];
      uVar2 = 0;
      puVar1[5] = param_1[5];
      puVar1[4] = uVar3;
      puVar1[7] = uVar5;
      puVar1[6] = uVar4;
      puVar1[1] = uVar7;
      *puVar1 = uVar6;
      puVar1[3] = uVar9;
      puVar1[2] = uVar8;
      if ((param_2 != 0) && (param_2 != 0x4d2)) {
        uVar2 = 1;
      }
      *(undefined4 *)(puVar1 + 8) = uVar2;
    }
  }
  else {
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}

