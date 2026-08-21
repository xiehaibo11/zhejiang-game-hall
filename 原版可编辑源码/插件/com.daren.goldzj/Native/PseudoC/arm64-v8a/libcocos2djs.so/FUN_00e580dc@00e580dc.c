
undefined8 FUN_00e580dc(long param_1,long param_2,long param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 == 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  }
  else {
    if ((ulong)*(ushort *)(param_1 + 0x120) == 0) {
      return 0x8e;
    }
    plVar3 = *(long **)(param_1 + 0x128);
    plVar1 = plVar3 + (ulong)*(ushort *)(param_1 + 0x120) * 4;
    while ((*plVar3 != param_2 || (lVar5 = plVar3[3], lVar5 == 0))) {
      plVar3 = plVar3 + 4;
      if (plVar1 <= plVar3) {
        return 0x8e;
      }
    }
    param_3 = plVar3[2] + param_3;
  }
  lVar4 = lVar5;
  if ((param_5 != (long *)0x0) && (lVar4 = *param_5, *param_5 == 0)) {
    *param_5 = lVar5;
    return 0;
  }
  uVar2 = FUN_00e1d4a8(*(undefined8 *)(param_1 + 0xc0),param_3,param_4,lVar4);
  return uVar2;
}

