
uint FUN_0176c280(long *param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long local_28;
  
  if (param_1 != param_2) {
    local_28 = param_1[1];
    uVar4 = v8::internal::compiler::Type::Maybe((Type *)&local_28,param_2[1]);
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
      goto LAB_0176c3f8;
    }
    sVar1 = *(short *)(*param_2 + 0x10);
    if (((sVar1 == 0x28) || (sVar1 == 0xde)) || (sVar1 == 0x3a)) {
      plVar5 = param_2 + 4;
      uVar3 = *(uint *)((long)param_2 + 0x14) >> 0x18 & 0xf;
      plVar6 = plVar5;
      if (uVar3 == 0xf) {
        uVar3 = *(uint *)(*plVar5 + 8);
        plVar6 = (long *)(*plVar5 + 0x10);
      }
      if (((int)uVar3 < 1) || (*plVar6 != 0)) {
        if ((~*(uint *)((long)param_2 + 0x14) & 0xf000000) == 0) {
          plVar5 = (long *)(*plVar5 + 0x10);
        }
        uVar3 = FUN_0176c280(param_1,*plVar5);
        goto LAB_0176c3f8;
      }
    }
    sVar2 = *(short *)(*param_1 + 0x10);
    if (((sVar2 == 0x28) || (sVar2 == 0xde)) || (sVar2 == 0x3a)) {
      plVar5 = param_1 + 4;
      uVar3 = *(uint *)((long)param_1 + 0x14) >> 0x18 & 0xf;
      plVar6 = plVar5;
      if (uVar3 == 0xf) {
        uVar3 = *(uint *)(*plVar5 + 8);
        plVar6 = (long *)(*plVar5 + 0x10);
      }
      if (((int)uVar3 < 1) || (*plVar6 != 0)) {
        if ((~*(uint *)((long)param_1 + 0x14) & 0xf000000) == 0) {
          plVar5 = (long *)(*plVar5 + 0x10);
        }
        uVar3 = FUN_0176c280(*plVar5,param_2);
        goto LAB_0176c3f8;
      }
    }
    if (sVar1 == 0xe7) {
      uVar3 = 0;
      if ((sVar2 == 0x1e) || ((sVar2 == 0x32 || (sVar2 == 0xe7)))) goto LAB_0176c3f8;
    }
    else if ((sVar2 == 0xe7) && ((uVar3 = 0, sVar1 == 0x1e || (sVar1 == 0x32)))) goto LAB_0176c3f8;
  }
  uVar3 = 1;
LAB_0176c3f8:
  return uVar3 & 1;
}

