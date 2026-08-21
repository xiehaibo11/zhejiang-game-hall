
void FUN_0125187c(long param_1,long param_2,long *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (*(long *)(param_1 + 8) == *(long *)(*(long *)(param_2 + 0x10) + 8)) {
    if (*(long **)(param_2 + 0x20) == (long *)0x0) {
      *(long **)(param_2 + 0x20) = param_3;
      *(undefined4 *)(param_2 + 0x30) = param_4;
      *(undefined4 *)(param_2 + 0x3c) = 1;
    }
    else if (*(long **)(param_2 + 0x20) == param_3) {
      if (*(int *)(param_2 + 0x30) == 2) {
        *(undefined4 *)(param_2 + 0x30) = param_4;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      *(undefined1 *)(param_2 + 0x4e) = 1;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x14);
    uVar3 = *(ulong *)(param_1 + 0x20);
    if (param_3 == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (long)uVar3 >> 8;
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(*param_3 + lVar4);
      }
    }
    uVar1 = 2;
    if ((uVar3 & 2) != 0) {
      uVar1 = param_4;
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x38))
              (*(long **)(param_1 + 0x18),param_2,(long)param_3 + lVar4,uVar1);
    if (1 < uVar2) {
      puVar5 = (undefined8 *)(param_1 + 0x28);
      do {
        uVar3 = puVar5[1];
        if (param_3 == (long *)0x0) {
          lVar4 = 0;
        }
        else {
          lVar4 = (long)uVar3 >> 8;
          if ((uVar3 & 1) != 0) {
            lVar4 = *(long *)(*param_3 + lVar4);
          }
        }
        uVar1 = 2;
        if ((uVar3 & 2) != 0) {
          uVar1 = param_4;
        }
        (**(code **)(*(long *)*puVar5 + 0x38))((long *)*puVar5,param_2,(long)param_3 + lVar4,uVar1);
      } while ((*(char *)(param_2 + 0x4e) == '\0') &&
              (puVar5 = puVar5 + 2, puVar5 < (undefined8 *)(param_1 + (ulong)uVar2 * 0x10 + 0x18)));
    }
  }
  return;
}

