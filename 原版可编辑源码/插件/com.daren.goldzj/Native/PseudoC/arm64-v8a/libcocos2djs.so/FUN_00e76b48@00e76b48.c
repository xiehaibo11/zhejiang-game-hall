
undefined8 FUN_00e76b48(long param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x490);
  if (*(int *)(lVar4 + 0xb30) == 0) {
    lVar4 = lVar4 + 0x668;
  }
  else {
    uVar2 = (**(code **)(*(long *)(lVar4 + 0x1368) + 0x10))(lVar4 + 0x1338,param_3);
    if (*(uint *)(lVar4 + 0xb30) <= ((uint)uVar2 & 0xff)) {
      return 3;
    }
    lVar4 = *(long *)(lVar4 + (uVar2 & 0xff) * 8 + 0xb38);
    if ((param_2 != 0) && (*(long *)(param_1 + 0x88) != 0)) {
      *(undefined8 *)(param_1 + 0x90) =
           *(undefined8 *)(**(long **)(param_2 + 0x50) + (uVar2 & 0xff) * 8 + 8);
    }
  }
  uVar1 = *(uint *)(lVar4 + 0x48c);
  *(uint *)(param_1 + 0x5a0) = uVar1;
  *(undefined8 *)(param_1 + 0x5b0) = *(undefined8 *)(lVar4 + 0x4b8);
  if (*(int *)(*(long *)(param_1 + 0xd8) + 0x6a4) == 1) {
    uVar3 = 0;
  }
  else if (uVar1 < 0x4d8) {
    uVar3 = 0x6b;
  }
  else {
    uVar3 = 0x46b;
    if (0x846b < uVar1) {
      uVar3 = 0x8000;
    }
  }
  *(undefined4 *)(param_1 + 0x5a8) = uVar3;
  uVar5 = *(undefined8 *)(lVar4 + 0x400);
  *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)(lVar4 + 0x408);
  *(undefined8 *)(param_1 + 0x488) = uVar5;
  *(long *)(param_1 + 0x5d8) = lVar4;
  return 0;
}

