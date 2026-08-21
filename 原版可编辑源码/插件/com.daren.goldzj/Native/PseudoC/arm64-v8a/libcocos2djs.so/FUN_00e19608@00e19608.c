
long FUN_00e19608(long *param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  lVar2 = 0;
  if (param_1 != (long *)0x0) {
    if (*(code **)(*param_1 + 0x40) == (code *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*param_1 + 0x40))(param_1,param_2);
    }
    if ((param_3 != '\0') && (lVar2 == 0)) {
      lVar2 = param_1[1];
      uVar1 = *(uint *)(lVar2 + 0x14);
      if (uVar1 != 0) {
        plVar5 = (long *)(lVar2 + 0x18);
        do {
          plVar3 = (long *)*plVar5;
          if (((plVar3 != param_1) && (*(code **)(*plVar3 + 0x40) != (code *)0x0)) &&
             (lVar4 = (**(code **)(*plVar3 + 0x40))(plVar3,param_2), lVar4 != 0)) {
            return lVar4;
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 < (long *)(lVar2 + (ulong)uVar1 * 8 + 0x18));
      }
      lVar2 = 0;
    }
  }
  return lVar2;
}

