
int FUN_00e1f768(long *param_1,long *param_2,long param_3,undefined8 param_4,char *param_5,
                long *param_6)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined4 local_a0 [8];
  long *local_80;
  long *local_78;
  
  lVar5 = *param_1;
  if (param_1 == (long *)0x0) {
    iVar2 = 0x21;
    if (param_2 == (long *)0x0) {
      return 0x21;
    }
  }
  else {
    if (param_2 == (long *)0x0) {
      return 6;
    }
    plVar3 = (long *)(**(code **)(lVar5 + 8))(lVar5,0x50);
    if (plVar3 != (long *)0x0) {
      *plVar3 = (long)param_2;
      plVar3[1] = param_3;
      plVar3[2] = 0;
      plVar3[8] = 0;
      plVar3[7] = 0;
      plVar3[6] = 0;
      plVar3[5] = 0;
      plVar3[4] = 0;
      plVar3[3] = 0;
      plVar3[8] = 0;
      plVar3[9] = 0;
      plVar3[5] = 0;
      plVar3[6] = (long)FUN_00e1f8e0;
      local_a0[0] = 2;
      local_80 = plVar3;
      if (param_5 != (char *)0x0) {
        local_a0[0] = 10;
        uVar1 = *(uint *)((long)param_1 + 0x14);
        if (uVar1 != 0) {
          plVar7 = param_1 + 3;
          do {
            plVar6 = plVar7 + 1;
            plVar7 = (long *)*plVar7;
            iVar2 = strcmp(*(char **)(*plVar7 + 0x10),param_5);
            local_78 = plVar7;
            if (iVar2 == 0) goto LAB_00e1f840;
            plVar7 = plVar6;
          } while (plVar6 < param_1 + (ulong)uVar1 + 3);
        }
        local_78 = (long *)0x0;
      }
LAB_00e1f840:
      iVar2 = FUN_00e15b6c(param_1,local_a0,param_4,param_6,0);
      if (iVar2 == 0) {
        *(ulong *)(*param_6 + 0x10) = *(ulong *)(*param_6 + 0x10) & 0xfffffffffffffbff;
        return 0;
      }
      if ((code *)plVar3[6] != (code *)0x0) {
        (*(code *)plVar3[6])(plVar3);
      }
      pcVar4 = *(code **)(lVar5 + 0x10);
      param_2 = plVar3;
      goto LAB_00e1f8a4;
    }
    iVar2 = 0x40;
  }
  pcVar4 = *(code **)(lVar5 + 0x10);
LAB_00e1f8a4:
  (*pcVar4)(lVar5,param_2);
  return iVar2;
}

