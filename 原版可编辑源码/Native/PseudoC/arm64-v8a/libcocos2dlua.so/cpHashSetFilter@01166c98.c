
void cpHashSetFilter(int *param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_1[1] != 0) {
    uVar4 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 6) + (ulong)uVar4 * 8);
      puVar5 = (undefined8 *)*puVar1;
      while (puVar6 = puVar5, puVar2 = puVar1, puVar6 != (undefined8 *)0x0) {
        while( true ) {
          puVar5 = (undefined8 *)puVar6[2];
          cVar3 = (*param_2)(*puVar6,param_3);
          puVar1 = puVar6 + 2;
          if (cVar3 != '\0') break;
          *puVar2 = puVar5;
          *param_1 = *param_1 + -1;
          puVar6[2] = *(undefined8 *)(param_1 + 8);
          *(undefined8 **)(param_1 + 8) = puVar6;
          *puVar6 = 0;
          puVar6 = puVar5;
          if (puVar5 == (undefined8 *)0x0) goto LAB_01166d2c;
        }
      }
LAB_01166d2c:
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[1]);
  }
  return;
}

