
undefined8 FUN_0176d150(ulong *param_1,long param_2,undefined8 param_3,long *param_4)

{
  short sVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  ulong *puVar8;
  
  while( true ) {
    plVar4 = (long *)*param_1;
    sVar1 = *(short *)(*plVar4 + 0x10);
    if (((sVar1 != 0x28) && (sVar1 != 0xde)) && (sVar1 != 0x3a)) break;
    param_1 = (ulong *)(plVar4 + 4);
    uVar7 = *(uint *)((long)plVar4 + 0x14) >> 0x18 & 0xf;
    puVar8 = param_1;
    if (uVar7 == 0xf) {
      uVar7 = *(uint *)(*param_1 + 8);
      puVar8 = (ulong *)(*param_1 + 0x10);
    }
    if ((0 < (int)uVar7) && (*puVar8 == 0)) break;
    if ((~*(uint *)((long)plVar4 + 0x14) & 0xf000000) == 0) {
      uVar2 = FUN_0176d150(*param_1 + 0x10);
      return uVar2;
    }
  }
  plVar3 = (long *)(param_2 + 8);
  plVar6 = (long *)*plVar3;
  plVar5 = plVar3;
  if (plVar6 != (long *)0x0) {
    do {
      if ((long *)plVar6[4] >= plVar4) {
        plVar5 = plVar6;
      }
      plVar6 = (long *)plVar6[(long *)plVar6[4] < plVar4];
    } while (plVar6 != (long *)0x0);
    if ((plVar5 != plVar3) && ((long *)plVar5[4] <= plVar4)) {
      *param_4 = plVar5[5];
      return 1;
    }
  }
  return 0;
}

