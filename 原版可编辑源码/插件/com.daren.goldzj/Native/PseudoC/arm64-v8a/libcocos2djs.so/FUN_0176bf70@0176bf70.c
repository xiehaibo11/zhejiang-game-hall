
ulong FUN_0176bf70(long *param_1,undefined8 param_2,long *param_3)

{
  short sVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  
  while( true ) {
    plVar2 = (long *)*param_1;
    sVar1 = *(short *)(*plVar2 + 0x10);
    if (((sVar1 != 0x28) && (sVar1 != 0xde)) && (sVar1 != 0x3a)) break;
    param_1 = plVar2 + 4;
    uVar5 = *(uint *)((long)plVar2 + 0x14) >> 0x18 & 0xf;
    plVar4 = param_1;
    if (uVar5 == 0xf) {
      uVar5 = *(uint *)(*param_1 + 8);
      plVar4 = (long *)(*param_1 + 0x10);
    }
    if ((0 < (int)uVar5) && (*plVar4 == 0)) break;
    if ((~*(uint *)((long)plVar2 + 0x14) & 0xf000000) == 0) {
      uVar3 = FUN_0176bf70(*param_1 + 0x10);
      return uVar3;
    }
  }
  do {
    sVar1 = *(short *)(*param_3 + 0x10);
    if ((sVar1 != 0x28) && ((sVar1 != 0xde && (sVar1 != 0x3a)))) {
LAB_0176c050:
      return (ulong)(plVar2 == param_3);
    }
    plVar4 = param_3 + 4;
    uVar5 = *(uint *)((long)param_3 + 0x14) >> 0x18 & 0xf;
    plVar6 = plVar4;
    if (uVar5 == 0xf) {
      uVar5 = *(uint *)(*plVar4 + 8);
      plVar6 = (long *)(*plVar4 + 0x10);
    }
    if ((0 < (int)uVar5) && (*plVar6 == 0)) goto LAB_0176c050;
    if ((~*(uint *)((long)param_3 + 0x14) & 0xf000000) == 0) {
      plVar4 = (long *)(*plVar4 + 0x10);
    }
    param_3 = (long *)*plVar4;
  } while( true );
}

