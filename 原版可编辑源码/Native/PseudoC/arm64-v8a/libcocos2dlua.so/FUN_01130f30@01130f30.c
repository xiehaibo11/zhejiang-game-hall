
undefined8 FUN_01130f30(long param_1,int *param_2,long param_3,undefined4 param_4,uint param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined2 local_38 [2];
  uint local_34;
  
  if (param_3 == 0) {
    uVar1 = 1;
    *param_2 = *param_2 + 1;
  }
  else {
    if ((param_5 & 0xffff0000) == 0) {
      local_38[0] = (undefined2)param_5;
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabShort(local_38);
      }
      uVar1 = 3;
      uVar2 = 2;
      puVar3 = (uint *)local_38;
    }
    else {
      local_34 = param_5;
      if (*(char *)(param_1 + 0x10) < '\0') {
        TIFFSwabLong(&local_34);
      }
      uVar1 = 4;
      uVar2 = 4;
      puVar3 = &local_34;
    }
    uVar1 = FUN_011317b0(param_1,param_2,param_3,param_4,uVar1,1,uVar2,puVar3);
  }
  return uVar1;
}

