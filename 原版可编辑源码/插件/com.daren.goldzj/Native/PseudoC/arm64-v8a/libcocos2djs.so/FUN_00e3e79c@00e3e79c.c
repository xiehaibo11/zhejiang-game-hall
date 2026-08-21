
int FUN_00e3e79c(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int local_34;
  
  lVar4 = *(long *)(param_1 + 0x490);
  local_34 = 0;
  if (lVar4 == 0) {
    return 0;
  }
  puVar3 = *(undefined8 **)(lVar4 + 0x1370);
  if (puVar3 != (undefined8 *)0x0) {
    local_34 = 0;
    goto LAB_00e3e7cc;
  }
  puVar3 = (undefined8 *)FUN_00e1388c(*(undefined8 *)(param_1 + 0xb8),0x38,&local_34);
  if (local_34 != 0) {
    return local_34;
  }
  uVar1 = *(uint *)(lVar4 + 0x668);
  if (uVar1 == 0xffff) {
LAB_00e3e834:
    *puVar3 = 0;
    uVar1 = *(uint *)(lVar4 + 0x66c);
joined_r0x00e3e8c8:
    if (uVar1 == 0xffff) goto LAB_00e3e8cc;
LAB_00e3e848:
    if (uVar1 < 0x187) {
      if (*(long *)(lVar4 + 0x1360) == 0) goto LAB_00e3e8cc;
      uVar2 = (**(code **)(*(long *)(lVar4 + 0x1360) + 0x28))();
    }
    else {
      if (*(uint *)(lVar4 + 0x648) <= uVar1 - 0x187) goto LAB_00e3e8cc;
      uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
    }
  }
  else {
    if (uVar1 < 0x187) {
      if (*(long *)(lVar4 + 0x1360) == 0) goto LAB_00e3e834;
      uVar2 = (**(code **)(*(long *)(lVar4 + 0x1360) + 0x28))();
      *puVar3 = uVar2;
      uVar1 = *(uint *)(lVar4 + 0x66c);
      goto joined_r0x00e3e8c8;
    }
    if (*(uint *)(lVar4 + 0x648) <= uVar1 - 0x187) goto LAB_00e3e834;
    *puVar3 = *(undefined8 *)(*(long *)(lVar4 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
    uVar1 = *(uint *)(lVar4 + 0x66c);
    if (uVar1 != 0xffff) goto LAB_00e3e848;
LAB_00e3e8cc:
    uVar2 = 0;
  }
  puVar3[1] = uVar2;
  uVar1 = *(uint *)(lVar4 + 0x674);
  if (uVar1 == 0xffff) {
LAB_00e3e8e4:
    puVar3[2] = 0;
    uVar1 = *(uint *)(lVar4 + 0x678);
joined_r0x00e3e978:
    if (uVar1 == 0xffff) goto LAB_00e3e97c;
LAB_00e3e8f8:
    if (uVar1 < 0x187) {
      if (*(long *)(lVar4 + 0x1360) == 0) goto LAB_00e3e97c;
      uVar2 = (**(code **)(*(long *)(lVar4 + 0x1360) + 0x28))();
    }
    else {
      if (*(uint *)(lVar4 + 0x648) <= uVar1 - 0x187) goto LAB_00e3e97c;
      uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
    }
  }
  else {
    if (uVar1 < 0x187) {
      if (*(long *)(lVar4 + 0x1360) == 0) goto LAB_00e3e8e4;
      uVar2 = (**(code **)(*(long *)(lVar4 + 0x1360) + 0x28))();
      puVar3[2] = uVar2;
      uVar1 = *(uint *)(lVar4 + 0x678);
      goto joined_r0x00e3e978;
    }
    if (*(uint *)(lVar4 + 0x648) <= uVar1 - 0x187) goto LAB_00e3e8e4;
    puVar3[2] = *(undefined8 *)(*(long *)(lVar4 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
    uVar1 = *(uint *)(lVar4 + 0x678);
    if (uVar1 != 0xffff) goto LAB_00e3e8f8;
LAB_00e3e97c:
    uVar2 = 0;
  }
  puVar3[3] = uVar2;
  uVar1 = *(uint *)(lVar4 + 0x67c);
  if (uVar1 == 0xffff) {
LAB_00e3e994:
    uVar2 = 0;
  }
  else if (uVar1 < 0x187) {
    if (*(long *)(lVar4 + 0x1360) == 0) goto LAB_00e3e994;
    uVar2 = (**(code **)(*(long *)(lVar4 + 0x1360) + 0x28))();
  }
  else {
    if (*(uint *)(lVar4 + 0x648) <= uVar1 - 0x187) goto LAB_00e3e994;
    uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
  }
  puVar3[4] = uVar2;
  puVar3[5] = *(undefined8 *)(lVar4 + 0x688);
  *(undefined1 *)(puVar3 + 6) = *(undefined1 *)(lVar4 + 0x680);
  *(short *)((long)puVar3 + 0x32) = (short)*(undefined8 *)(lVar4 + 0x690);
  *(short *)((long)puVar3 + 0x34) = (short)*(undefined8 *)(lVar4 + 0x698);
  *(undefined8 **)(lVar4 + 0x1370) = puVar3;
LAB_00e3e7cc:
  uVar9 = puVar3[3];
  uVar8 = puVar3[2];
  uVar5 = puVar3[5];
  uVar2 = puVar3[4];
  uVar7 = puVar3[1];
  uVar6 = *puVar3;
  param_2[6] = puVar3[6];
  param_2[3] = uVar9;
  param_2[2] = uVar8;
  param_2[5] = uVar5;
  param_2[4] = uVar2;
  param_2[1] = uVar7;
  *param_2 = uVar6;
  return local_34;
}

