
void jinit_2pass_quantizer(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x58);
  param_1[0x52] = (long)puVar2;
  puVar2[8] = 0;
  *puVar2 = FUN_00d92638;
  puVar2[3] = FUN_00d92970;
  puVar2[10] = 0;
  if ((int)param_1[0x12] != 3) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x30;
    (*(code *)*puVar4)(param_1);
  }
  uVar3 = (**(code **)param_1[1])(param_1,1,0x100);
  puVar2[6] = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)puVar2[6] = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 8) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0x10) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0x18) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0x20) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0x28) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0x30) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0x38) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0x40) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0x48) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0x50) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0x58) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0x60) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0x68) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0x70) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0x78) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0x80) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0x88) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0x90) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0x98) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0xa0) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0xa8) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0xb0) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0xb8) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0xc0) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 200) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0xd0) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0xd8) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0xe0) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0xe8) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0xf0) = uVar3;
  uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
  *(undefined8 *)(puVar2[6] + 0xf8) = uVar3;
  *(undefined4 *)(puVar2 + 7) = 1;
  if (*(int *)((long)param_1 + 0x84) == 0) {
    puVar2[4] = 0;
    iVar1 = (int)param_1[0xe];
    goto joined_r0x00d92590;
  }
  iVar1 = (int)param_1[0xf];
  if (iVar1 < 8) {
    puVar4 = (undefined8 *)*param_1;
    uVar3 = 0x80000003a;
LAB_00d925b8:
    puVar4[5] = uVar3;
    (*(code *)*puVar4)(param_1);
  }
  else if (0x100 < iVar1) {
    puVar4 = (undefined8 *)*param_1;
    uVar3 = 0x1000000003b;
    goto LAB_00d925b8;
  }
  uVar3 = (**(code **)(param_1[1] + 0x10))(param_1,1,iVar1,3);
  puVar2[4] = uVar3;
  *(int *)(puVar2 + 5) = iVar1;
  iVar1 = (int)param_1[0xe];
joined_r0x00d92590:
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xe) = 2;
    uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,(ulong)((int)param_1[0x11] + 2) * 6);
    puVar2[8] = uVar3;
    FUN_00d92980(param_1);
    return;
  }
  return;
}

