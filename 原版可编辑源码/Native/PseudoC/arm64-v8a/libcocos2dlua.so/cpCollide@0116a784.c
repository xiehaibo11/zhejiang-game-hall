
void cpCollide(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
              undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uVar1 = *(uint *)*param_2;
  uVar2 = *(uint *)*param_3;
  local_48 = param_2;
  uVar3 = uVar1;
  if (uVar2 < uVar1) {
    local_48 = param_3;
    param_3 = param_2;
    uVar3 = uVar2;
    uVar2 = uVar1;
  }
  puStack_40 = param_3;
  local_38 = param_4;
  local_28 = param_5;
  (*(code *)(&PTR_FUN_0172d248)[uVar2 * 3 + uVar3])(local_48,param_3,&local_48);
  param_1[4] = local_28;
  param_1[1] = puStack_40;
  *param_1 = local_48;
  param_1[3] = CONCAT44(uStack_2c,uStack_30);
  param_1[2] = CONCAT44(uStack_34,local_38);
  return;
}

