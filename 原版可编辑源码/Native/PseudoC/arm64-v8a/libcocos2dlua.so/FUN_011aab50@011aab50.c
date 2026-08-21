
void FUN_011aab50(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar1 = (long *)(param_1 + 0xb8);
  plVar2 = (long *)*plVar1;
  if (plVar1 != plVar2) {
    do {
      *(long *)plVar2[1] = *plVar2;
      *(long *)(*plVar2 + 8) = plVar2[1];
      plVar2[0x14] = -0x7d;
      *plVar2 = param_1 + 200;
      puVar3 = *(undefined8 **)(param_1 + 0xd0);
      plVar2[1] = (long)puVar3;
      *puVar3 = plVar2;
      *(long **)(param_1 + 0xd0) = plVar2;
      plVar2 = *(long **)(param_1 + 0xb8);
    } while (plVar1 != plVar2);
  }
  FUN_011aabc4(param_1);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}

