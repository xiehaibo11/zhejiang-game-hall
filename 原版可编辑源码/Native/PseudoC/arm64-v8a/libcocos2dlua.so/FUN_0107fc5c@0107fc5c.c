
undefined8 FUN_0107fc5c(long param_1,long *param_2,long *param_3,undefined4 *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x428);
  if (lVar3 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(lVar3 + 0x6f4);
  if (uVar1 == 0xffff) {
    return 6;
  }
  if (param_2 != (long *)0x0) {
    lVar2 = *(long *)(lVar3 + 0x1290);
    if (lVar2 == 0) {
      if (uVar1 < 0x187) {
        lVar2 = 0;
        if (*(long *)(lVar3 + 0x1280) != 0) {
          lVar2 = (**(code **)(*(long *)(lVar3 + 0x1280) + 0x28))();
        }
      }
      else if (uVar1 - 0x187 < *(uint *)(lVar3 + 0x5f8)) {
        lVar2 = *(long *)(*(long *)(lVar3 + 0x600) + (ulong)(uVar1 - 0x187) * 8);
      }
      else {
        lVar2 = 0;
      }
      *(long *)(lVar3 + 0x1290) = lVar2;
    }
    *param_2 = lVar2;
  }
  if (param_3 == (long *)0x0) goto LAB_0107fd10;
  lVar2 = *(long *)(lVar3 + 0x1298);
  if (lVar2 == 0) {
    uVar1 = *(uint *)(lVar3 + 0x6f8);
    if (uVar1 == 0xffff) {
LAB_0107fd04:
      lVar2 = 0;
    }
    else if (uVar1 < 0x187) {
      if (*(long *)(lVar3 + 0x1280) == 0) goto LAB_0107fd04;
      lVar2 = (**(code **)(*(long *)(lVar3 + 0x1280) + 0x28))();
    }
    else {
      if (*(uint *)(lVar3 + 0x5f8) <= uVar1 - 0x187) goto LAB_0107fd04;
      lVar2 = *(long *)(*(long *)(lVar3 + 0x600) + (ulong)(uVar1 - 0x187) * 8);
    }
    *(long *)(lVar3 + 0x1298) = lVar2;
  }
  *param_3 = lVar2;
LAB_0107fd10:
  if (param_4 == (undefined4 *)0x0) {
    return 0;
  }
  *param_4 = (int)*(undefined8 *)(lVar3 + 0x700);
  return 0;
}

