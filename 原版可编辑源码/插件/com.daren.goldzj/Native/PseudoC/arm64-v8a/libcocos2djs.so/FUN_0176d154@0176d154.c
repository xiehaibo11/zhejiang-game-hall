
undefined8 FUN_0176d154(long param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  short sVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  ulong *puVar8;
  
  while (((sVar2 = *(short *)(*param_2 + 0x10), sVar2 == 0x28 || (sVar2 == 0xde)) || (sVar2 == 0x3a)
         )) {
    puVar1 = (ulong *)(param_2 + 4);
    uVar7 = *(uint *)((long)param_2 + 0x14) >> 0x18 & 0xf;
    puVar8 = puVar1;
    if (uVar7 == 0xf) {
      uVar7 = *(uint *)(*puVar1 + 8);
      puVar8 = (ulong *)(*puVar1 + 0x10);
    }
    if ((0 < (int)uVar7) && (*puVar8 == 0)) break;
    if ((~*(uint *)((long)param_2 + 0x14) & 0xf000000) == 0) {
      uVar3 = FUN_0176d150(*puVar1 + 0x10);
      return uVar3;
    }
    param_2 = (long *)*puVar1;
  }
  plVar4 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar4;
  plVar5 = plVar4;
  if (plVar6 != (long *)0x0) {
    do {
      if ((long *)plVar6[4] >= param_2) {
        plVar5 = plVar6;
      }
      plVar6 = (long *)plVar6[(long *)plVar6[4] < param_2];
    } while (plVar6 != (long *)0x0);
    if ((plVar5 != plVar4) && ((long *)plVar5[4] <= param_2)) {
      *param_3 = plVar5[5];
      return 1;
    }
  }
  return 0;
}

