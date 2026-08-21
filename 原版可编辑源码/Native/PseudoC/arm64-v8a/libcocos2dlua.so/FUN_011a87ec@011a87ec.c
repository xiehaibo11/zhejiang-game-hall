
void FUN_011a87ec(long param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar1 = (long *)(param_1 + 0xc0);
  plVar2 = (long *)*plVar1;
  if (plVar1 != plVar2) {
    do {
      *(long *)plVar2[1] = *plVar2;
      *(long *)(*plVar2 + 8) = plVar2[1];
      *(undefined4 *)((long)plVar2 + 0x24) = param_2;
      *plVar2 = param_1 + 0xd0;
      puVar3 = *(undefined8 **)(param_1 + 0xd8);
      plVar2[1] = (long)puVar3;
      *puVar3 = plVar2;
      *(long **)(param_1 + 0xd8) = plVar2;
      plVar2 = *(long **)(param_1 + 0xc0);
    } while (plVar1 != plVar2);
  }
  return;
}

