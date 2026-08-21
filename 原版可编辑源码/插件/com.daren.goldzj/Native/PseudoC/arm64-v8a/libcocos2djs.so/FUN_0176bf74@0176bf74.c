
ulong FUN_0176bf74(long *param_1,long *param_2)

{
  short sVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  
  while( true ) {
    sVar1 = *(short *)(*param_1 + 0x10);
    if (((sVar1 != 0x28) && (sVar1 != 0xde)) && (sVar1 != 0x3a)) break;
    plVar3 = param_1 + 4;
    uVar4 = *(uint *)((long)param_1 + 0x14) >> 0x18 & 0xf;
    plVar5 = plVar3;
    if (uVar4 == 0xf) {
      uVar4 = *(uint *)(*plVar3 + 8);
      plVar5 = (long *)(*plVar3 + 0x10);
    }
    if ((0 < (int)uVar4) && (*plVar5 == 0)) break;
    if ((~*(uint *)((long)param_1 + 0x14) & 0xf000000) == 0) {
      uVar2 = FUN_0176bf70(*plVar3 + 0x10);
      return uVar2;
    }
    param_1 = (long *)*plVar3;
  }
  do {
    sVar1 = *(short *)(*param_2 + 0x10);
    if ((sVar1 != 0x28) && ((sVar1 != 0xde && (sVar1 != 0x3a)))) {
LAB_0176c050:
      return (ulong)(param_1 == param_2);
    }
    plVar3 = param_2 + 4;
    uVar4 = *(uint *)((long)param_2 + 0x14) >> 0x18 & 0xf;
    plVar5 = plVar3;
    if (uVar4 == 0xf) {
      uVar4 = *(uint *)(*plVar3 + 8);
      plVar5 = (long *)(*plVar3 + 0x10);
    }
    if ((0 < (int)uVar4) && (*plVar5 == 0)) goto LAB_0176c050;
    if ((~*(uint *)((long)param_2 + 0x14) & 0xf000000) == 0) {
      plVar3 = (long *)(*plVar3 + 0x10);
    }
    param_2 = (long *)*plVar3;
  } while( true );
}

