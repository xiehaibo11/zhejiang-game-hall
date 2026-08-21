
int FUN_0107f844(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  int local_34;
  
  lVar4 = *(long *)(param_1 + 0x428);
  local_34 = 0;
  if (lVar4 == 0) {
    return 0;
  }
  puVar3 = *(undefined8 **)(lVar4 + 0x1288);
  if (puVar3 != (undefined8 *)0x0) {
    local_34 = 0;
    goto LAB_0107f874;
  }
  puVar3 = (undefined8 *)ft_mem_alloc(*(undefined8 *)(param_1 + 0xb8),0x38,&local_34);
  if (local_34 != 0) {
    return local_34;
  }
  uVar1 = *(uint *)(lVar4 + 0x610);
  if (uVar1 == 0xffff) {
LAB_0107f8e4:
    uVar2 = 0;
  }
  else if (uVar1 < 0x187) {
    if (*(long *)(lVar4 + 0x1280) == 0) goto LAB_0107f8e4;
    uVar2 = (**(code **)(*(long *)(lVar4 + 0x1280) + 0x28))();
  }
  else {
    if (*(uint *)(lVar4 + 0x5f8) <= uVar1 - 0x187) goto LAB_0107f8e4;
    uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0x600) + (ulong)(uVar1 - 0x187) * 8);
  }
  *puVar3 = uVar2;
  uVar1 = *(uint *)(lVar4 + 0x614);
  if (uVar1 == 0xffff) {
LAB_0107f8f8:
    uVar2 = 0;
  }
  else if (uVar1 < 0x187) {
    if (*(long *)(lVar4 + 0x1280) == 0) goto LAB_0107f8f8;
    uVar2 = (**(code **)(*(long *)(lVar4 + 0x1280) + 0x28))();
  }
  else {
    if (*(uint *)(lVar4 + 0x5f8) <= uVar1 - 0x187) goto LAB_0107f8f8;
    uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0x600) + (ulong)(uVar1 - 0x187) * 8);
  }
  puVar3[1] = uVar2;
  uVar1 = *(uint *)(lVar4 + 0x61c);
  if (uVar1 == 0xffff) {
LAB_0107f910:
    uVar2 = 0;
  }
  else if (uVar1 < 0x187) {
    if (*(long *)(lVar4 + 0x1280) == 0) goto LAB_0107f910;
    uVar2 = (**(code **)(*(long *)(lVar4 + 0x1280) + 0x28))();
  }
  else {
    if (*(uint *)(lVar4 + 0x5f8) <= uVar1 - 0x187) goto LAB_0107f910;
    uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0x600) + (ulong)(uVar1 - 0x187) * 8);
  }
  puVar3[2] = uVar2;
  uVar1 = *(uint *)(lVar4 + 0x620);
  if (uVar1 == 0xffff) {
LAB_0107f924:
    uVar2 = 0;
  }
  else if (uVar1 < 0x187) {
    if (*(long *)(lVar4 + 0x1280) == 0) goto LAB_0107f924;
    uVar2 = (**(code **)(*(long *)(lVar4 + 0x1280) + 0x28))();
  }
  else {
    if (*(uint *)(lVar4 + 0x5f8) <= uVar1 - 0x187) goto LAB_0107f924;
    uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0x600) + (ulong)(uVar1 - 0x187) * 8);
  }
  puVar3[3] = uVar2;
  uVar1 = *(uint *)(lVar4 + 0x624);
  if (uVar1 == 0xffff) {
LAB_0107f93c:
    uVar2 = 0;
  }
  else if (uVar1 < 0x187) {
    if (*(long *)(lVar4 + 0x1280) == 0) goto LAB_0107f93c;
    uVar2 = (**(code **)(*(long *)(lVar4 + 0x1280) + 0x28))();
  }
  else {
    if (*(uint *)(lVar4 + 0x5f8) <= uVar1 - 0x187) goto LAB_0107f93c;
    uVar2 = *(undefined8 *)(*(long *)(lVar4 + 0x600) + (ulong)(uVar1 - 0x187) * 8);
  }
  puVar3[4] = uVar2;
  puVar3[5] = *(undefined8 *)(lVar4 + 0x630);
  *(undefined1 *)(puVar3 + 6) = *(undefined1 *)(lVar4 + 0x628);
  *(short *)((long)puVar3 + 0x32) = (short)*(undefined8 *)(lVar4 + 0x638);
  *(short *)((long)puVar3 + 0x34) = (short)*(undefined8 *)(lVar4 + 0x640);
  *(undefined8 **)(lVar4 + 0x1288) = puVar3;
LAB_0107f874:
  param_2[6] = puVar3[6];
  uVar2 = puVar3[4];
  param_2[5] = puVar3[5];
  param_2[4] = uVar2;
  uVar2 = puVar3[2];
  param_2[3] = puVar3[3];
  param_2[2] = uVar2;
  uVar2 = *puVar3;
  param_2[1] = puVar3[1];
  *param_2 = uVar2;
  return local_34;
}

