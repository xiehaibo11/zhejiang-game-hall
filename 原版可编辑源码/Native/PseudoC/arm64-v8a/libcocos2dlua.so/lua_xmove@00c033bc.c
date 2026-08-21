
void lua_xmove(long param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 != param_2) {
    lVar2 = *(long *)(param_2 + 0x28);
    if (*(long *)(param_2 + 0x30) - lVar2 <= (long)((ulong)param_3 * 8)) {
      FUN_00bfe0e0(param_2,param_3);
      lVar2 = *(long *)(param_2 + 0x28);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x28);
    puVar3 = (undefined8 *)(lVar2 + (long)(int)param_3 * 8);
    *(undefined8 **)(param_2 + 0x28) = puVar3;
    if (0 < (int)param_3) {
      puVar1 = puVar3 + (-1 - (ulong)(param_3 - 1));
      puVar4 = puVar5;
      do {
        puVar4 = puVar4 + -1;
        puVar3 = puVar3 + -1;
        *puVar3 = *puVar4;
      } while (puVar3 != puVar1);
      puVar5 = puVar5 + ~(ulong)(param_3 - 1);
    }
    *(undefined8 **)(param_1 + 0x28) = puVar5;
  }
  return;
}

