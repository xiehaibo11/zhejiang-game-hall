
void FUN_00e8c2e8(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = param_1[3];
  if (lVar4 < 0x17) {
    lVar5 = param_1[4];
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    param_1[3] = 0;
    lVar4 = 0;
    param_1[1] = puVar2;
    lVar5 = puVar2[2];
    param_1[4] = lVar5;
    param_1[2] = *(long *)*puVar2 + puVar2[1];
  }
  if (lVar5 < 0x17) {
    puVar2 = (undefined8 *)param_1[1];
    lVar6 = puVar2[2];
    do {
      puVar2 = (undefined8 *)puVar2[3];
      lVar4 = lVar4 + lVar6;
      lVar6 = puVar2[2];
    } while (lVar6 + lVar4 < 0x17);
    lVar1 = puVar2[1];
    lVar5 = *(long *)*puVar2;
    param_1[3] = lVar4;
    param_1[4] = lVar6 + lVar4;
    lVar5 = lVar5 + lVar1;
    param_1[1] = puVar2;
    param_1[2] = lVar5;
  }
  else {
    lVar5 = param_1[2];
  }
  plVar3 = param_1 + 4;
  *(char *)(lVar5 + (0x16 - lVar4)) = (char)param_2;
  if (*plVar3 < 0x18) {
    puVar2 = (undefined8 *)param_1[1];
    lVar4 = param_1[3];
    lVar5 = puVar2[2];
    do {
      puVar2 = (undefined8 *)puVar2[3];
      lVar4 = lVar4 + lVar5;
      lVar5 = puVar2[2];
    } while (lVar5 + lVar4 < 0x18);
    lVar1 = puVar2[1];
    lVar6 = *(long *)*puVar2;
    param_1[3] = lVar4;
    param_1[4] = lVar5 + lVar4;
    lVar6 = lVar6 + lVar1;
    param_1[1] = puVar2;
    param_1[2] = lVar6;
  }
  else {
    lVar6 = param_1[2];
    lVar4 = param_1[3];
  }
  *(char *)(lVar6 + (0x17 - lVar4)) = (char)((uint)param_2 >> 8);
  if (*plVar3 < 0x19) {
    puVar2 = (undefined8 *)param_1[1];
    lVar4 = param_1[3];
    lVar5 = puVar2[2];
    do {
      puVar2 = (undefined8 *)puVar2[3];
      lVar4 = lVar4 + lVar5;
      lVar5 = puVar2[2];
    } while (lVar5 + lVar4 < 0x19);
    lVar1 = puVar2[1];
    lVar6 = *(long *)*puVar2;
    param_1[3] = lVar4;
    param_1[4] = lVar5 + lVar4;
    lVar6 = lVar6 + lVar1;
    param_1[1] = puVar2;
    param_1[2] = lVar6;
  }
  else {
    lVar6 = param_1[2];
    lVar4 = param_1[3];
  }
  *(char *)(lVar6 + (0x18 - lVar4)) = (char)((uint)param_2 >> 0x10);
  if (*plVar3 < 0x1a) {
    puVar2 = (undefined8 *)param_1[1];
    lVar4 = param_1[3];
    lVar5 = puVar2[2];
    do {
      puVar2 = (undefined8 *)puVar2[3];
      lVar4 = lVar4 + lVar5;
      lVar5 = puVar2[2];
    } while (lVar5 + lVar4 < 0x1a);
    lVar1 = puVar2[1];
    lVar6 = *(long *)*puVar2;
    param_1[3] = lVar4;
    param_1[4] = lVar5 + lVar4;
    lVar6 = lVar6 + lVar1;
    param_1[1] = puVar2;
    param_1[2] = lVar6;
  }
  else {
    lVar6 = param_1[2];
    lVar4 = param_1[3];
  }
  *(char *)(lVar6 + (0x19 - lVar4)) = (char)((uint)param_2 >> 0x18);
  return;
}

