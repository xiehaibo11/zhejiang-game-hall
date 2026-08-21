
undefined8 FUN_00e3eec8(long param_1,long *param_2,long *param_3,undefined4 *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x490);
  if (lVar3 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(lVar3 + 0x74c);
  if (uVar1 == 0xffff) {
    return 6;
  }
  if (param_2 != (long *)0x0) {
    lVar2 = *(long *)(lVar3 + 0x1378);
    if (lVar2 == 0) {
      if (uVar1 < 0x187) {
        lVar2 = 0;
        if (*(long *)(lVar3 + 0x1360) != 0) {
          lVar2 = (**(code **)(*(long *)(lVar3 + 0x1360) + 0x28))();
        }
      }
      else if (uVar1 - 0x187 < *(uint *)(lVar3 + 0x648)) {
        lVar2 = *(long *)(*(long *)(lVar3 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
      }
      else {
        lVar2 = 0;
      }
      *(long *)(lVar3 + 0x1378) = lVar2;
    }
    *param_2 = lVar2;
  }
  if (param_3 == (long *)0x0) goto LAB_00e3ef9c;
  lVar2 = *(long *)(lVar3 + 0x1380);
  if (lVar2 == 0) {
    uVar1 = *(uint *)(lVar3 + 0x750);
    if (uVar1 == 0xffff) {
LAB_00e3ef90:
      lVar2 = 0;
    }
    else if (uVar1 < 0x187) {
      if (*(long *)(lVar3 + 0x1360) == 0) goto LAB_00e3ef90;
      lVar2 = (**(code **)(*(long *)(lVar3 + 0x1360) + 0x28))();
    }
    else {
      if (*(uint *)(lVar3 + 0x648) <= uVar1 - 0x187) goto LAB_00e3ef90;
      lVar2 = *(long *)(*(long *)(lVar3 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
    }
    *(long *)(lVar3 + 0x1380) = lVar2;
  }
  *param_3 = lVar2;
LAB_00e3ef9c:
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = (int)*(undefined8 *)(lVar3 + 0x758);
  }
  return 0;
}

