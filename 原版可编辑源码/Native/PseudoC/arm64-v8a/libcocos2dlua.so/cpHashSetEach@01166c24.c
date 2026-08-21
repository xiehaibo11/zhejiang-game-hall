
void cpHashSetEach(long param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_1 + 4);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x18) + (ulong)uVar4 * 8);
      if (puVar3 != (undefined8 *)0x0) {
        do {
          uVar1 = *puVar3;
          puVar3 = (undefined8 *)puVar3[2];
          (*param_2)(uVar1,param_3);
        } while (puVar3 != (undefined8 *)0x0);
        uVar2 = *(uint *)(param_1 + 4);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return;
}

