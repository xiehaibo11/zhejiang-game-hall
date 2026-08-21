
void FUN_00c0e3ac(long *param_1,long param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  
  puVar3 = (undefined1 *)*param_1;
  if ((undefined1 *)((long)param_1 + (ulong)param_3 + 0x29) <= puVar3) {
    if ((int)param_1[4] != 0) {
      puVar3 = puVar3 + -1;
      *puVar3 = 0x20;
    }
    *(undefined4 *)(param_1 + 4) = 1;
    lVar4 = (long)puVar3 - (ulong)param_3;
    uVar2 = param_3 - 1;
    if (param_3 != 0) {
      do {
        uVar1 = (ulong)uVar2;
        uVar2 = uVar2 - 1;
        *(undefined1 *)(lVar4 + uVar1) = *(undefined1 *)(param_2 + uVar1);
      } while (uVar2 != 0xffffffff);
    }
    *param_1 = lVar4;
    return;
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}

