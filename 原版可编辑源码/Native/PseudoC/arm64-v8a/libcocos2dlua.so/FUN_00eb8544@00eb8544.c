
void FUN_00eb8544(undefined8 *param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = param_1[3];
  if (lVar2 < 0x17) {
    lVar3 = param_1[4];
  }
  else {
    puVar4 = (undefined8 *)*param_1;
    param_1[3] = 0;
    lVar2 = 0;
    param_1[1] = puVar4;
    lVar3 = puVar4[2];
    param_1[4] = lVar3;
    param_1[2] = *(long *)*puVar4 + puVar4[1];
  }
  if (lVar3 < 0x17) {
    puVar4 = (undefined8 *)param_1[1];
    lVar5 = puVar4[2];
    do {
      puVar4 = (undefined8 *)puVar4[3];
      lVar2 = lVar2 + lVar5;
      lVar5 = puVar4[2];
    } while (lVar5 + lVar2 < 0x17);
    lVar1 = puVar4[1];
    lVar3 = *(long *)*puVar4;
    param_1[3] = lVar2;
    param_1[4] = lVar5 + lVar2;
    lVar3 = lVar3 + lVar1;
    param_1[1] = puVar4;
    param_1[2] = lVar3;
                    /* catch() { ... } // from try @ 00eb8508 with catch @ 00eb85b4 */
  }
  else {
    lVar3 = param_1[2];
  }
  *(char *)((lVar3 - lVar2) + 0x16) = (char)param_2;
  if ((long)param_1[4] < 0x18) {
    puVar4 = (undefined8 *)param_1[1];
    lVar2 = param_1[3];
    lVar3 = puVar4[2];
    do {
      puVar4 = (undefined8 *)puVar4[3];
      lVar2 = lVar2 + lVar3;
      lVar3 = puVar4[2];
    } while (lVar3 + lVar2 < 0x18);
    lVar1 = puVar4[1];
    lVar5 = *(long *)*puVar4;
    param_1[3] = lVar2;
    param_1[4] = lVar3 + lVar2;
    lVar5 = lVar5 + lVar1;
    param_1[1] = puVar4;
    param_1[2] = lVar5;
  }
  else {
    lVar5 = param_1[2];
    lVar2 = param_1[3];
  }
  *(char *)((lVar5 - lVar2) + 0x17) = (char)((uint)param_2 >> 8);
  if ((long)param_1[4] < 0x19) {
    puVar4 = (undefined8 *)param_1[1];
    lVar2 = param_1[3];
    lVar3 = puVar4[2];
    do {
      puVar4 = (undefined8 *)puVar4[3];
      lVar2 = lVar2 + lVar3;
      lVar3 = puVar4[2];
    } while (lVar3 + lVar2 < 0x19);
    lVar1 = puVar4[1];
    lVar5 = *(long *)*puVar4;
    param_1[3] = lVar2;
    param_1[4] = lVar3 + lVar2;
    lVar5 = lVar5 + lVar1;
    param_1[1] = puVar4;
    param_1[2] = lVar5;
  }
  else {
    lVar5 = param_1[2];
    lVar2 = param_1[3];
  }
  *(char *)((lVar5 - lVar2) + 0x18) = (char)((uint)param_2 >> 0x10);
  if ((long)param_1[4] < 0x1a) {
    puVar4 = (undefined8 *)param_1[1];
    lVar2 = param_1[3];
    lVar3 = puVar4[2];
    do {
      puVar4 = (undefined8 *)puVar4[3];
      lVar2 = lVar2 + lVar3;
      lVar3 = puVar4[2];
    } while (lVar3 + lVar2 < 0x1a);
    lVar1 = puVar4[1];
    lVar5 = *(long *)*puVar4;
    param_1[3] = lVar2;
    param_1[4] = lVar3 + lVar2;
    lVar5 = lVar5 + lVar1;
    param_1[1] = puVar4;
    param_1[2] = lVar5;
  }
  else {
    lVar5 = param_1[2];
    lVar2 = param_1[3];
  }
  *(char *)((lVar5 - lVar2) + 0x19) = (char)((uint)param_2 >> 0x18);
  return;
}

