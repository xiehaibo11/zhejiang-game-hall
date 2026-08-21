
void FUN_011a37d8(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  
  uVar3 = *(uint *)(param_2 + 0x30);
  if ((uVar3 != 0xffffffff) && (uVar3 < *(uint *)(param_1 + 0x70))) {
    uVar2 = *(uint *)(param_2 + 0x28) & (param_3 ^ 0xffffffff);
    *(uint *)(param_2 + 0x28) = uVar2;
    plVar1 = (long *)(param_2 + 0x18);
    if (uVar2 == 0) {
      **(undefined8 **)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(*(long *)(param_2 + 0x18) + 8) = *(undefined8 *)(param_2 + 0x20);
      *(long **)(param_2 + 0x18) = plVar1;
      *(long **)(param_2 + 0x20) = plVar1;
      if (*(long *)(*(long *)(param_1 + 0x68) + (long)(int)uVar3 * 8) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x68) + (long)(int)uVar3 * 8) = 0;
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        *(undefined4 *)(param_2 + 0x2c) = 0;
        return;
      }
    }
    else if (plVar1 == (long *)*plVar1) {
      *(long *)(param_2 + 0x18) = param_1 + 0x58;
      plVar4 = *(long **)(param_1 + 0x60);
      *(long **)(param_2 + 0x20) = plVar4;
      *plVar4 = (long)plVar1;
      *(long **)(param_1 + 0x60) = plVar1;
    }
  }
  return;
}

