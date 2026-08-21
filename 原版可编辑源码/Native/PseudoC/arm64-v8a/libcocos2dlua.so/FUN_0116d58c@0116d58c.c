
void FUN_0116d58c(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(param_1 + 0x28);
  puVar1 = (undefined8 *)param_3[3];
  puVar7 = *(undefined8 **)(param_2 + 0x28);
  if ((puVar1 != (undefined8 *)0x0) && ((undefined **)*puVar1 != &PTR_FUN_01781708)) {
    puVar1 = (undefined8 *)0x0;
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = param_3;
  }
  puVar6 = (undefined8 *)puVar1[8];
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = calloc(1,0x8000);
    cpArrayPush(puVar1[9],puVar6);
    puVar2 = (undefined8 *)puVar1[3];
    if (puVar2 == (undefined8 *)0x0) {
      lVar5 = 0x248;
      puVar3 = (undefined8 *)puVar1[8];
      puVar2 = puVar6;
      do {
        puVar2[9] = puVar3;
        lVar5 = lVar5 + -1;
        puVar3 = puVar2 + 7;
        puVar2 = puVar2 + 7;
      } while (lVar5 != 0);
      puVar1[8] = puVar6 + 0xff8;
    }
    else {
      lVar5 = 0x248;
      if ((undefined **)*puVar2 != &PTR_FUN_01781708) {
        puVar2 = (undefined8 *)0x0;
      }
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = puVar1;
      }
      puVar3 = (undefined8 *)puVar2[8];
      puVar1 = puVar6;
      do {
        puVar4 = puVar1 + 7;
        puVar1[9] = puVar3;
        lVar5 = lVar5 + -1;
        puVar3 = puVar4;
        puVar1 = puVar4;
      } while (lVar5 != 0);
      puVar2[8] = puVar4;
    }
  }
  else {
    puVar1[8] = puVar6[2];
  }
  *(undefined8 **)(param_2 + 0x28) = puVar6;
  *(undefined8 **)(param_1 + 0x28) = puVar6;
  *puVar6 = 0;
  puVar6[1] = param_1;
  puVar6[2] = puVar8;
  puVar6[3] = 0;
  puVar6[4] = param_2;
  puVar6[5] = puVar7;
  *(undefined4 *)(puVar6 + 6) = 0;
  if (puVar8 != (undefined8 *)0x0) {
    if (puVar8[1] != param_1) {
      puVar8 = puVar8 + 3;
    }
    *puVar8 = puVar6;
  }
  if (puVar7 != (undefined8 *)0x0) {
    if (puVar7[1] != param_2) {
      puVar7 = puVar7 + 3;
    }
    *puVar7 = puVar6;
  }
  return;
}

