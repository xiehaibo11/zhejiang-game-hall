
byte FUN_00139778(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_3 == 0) {
    bVar2 = false;
  }
  else {
    uVar5 = 0;
    lVar4 = 0;
    bVar2 = true;
    do {
      uVar1 = *(undefined4 *)(param_2 + uVar5 * 4);
      uVar3 = FUN_0013c9ec(param_1,uVar1);
      if ((uVar3 & 1) != 0) {
        uVar3 = FUN_0013d97c(param_1,uVar1,param_4,lVar4);
        if ((uVar3 & 1) == 0) break;
        uVar3 = FUN_0013d560(param_1,uVar1);
        lVar4 = lVar4 + (uVar3 & 0xffffffff);
      }
      uVar5 = uVar5 + 1;
      bVar2 = uVar5 < param_3;
    } while (param_3 != uVar5);
  }
  return ~bVar2 & 1;
}

