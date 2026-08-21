
long * FUN_00a697fc(undefined8 *param_1,byte *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  byte local_44 [4];
  
  plVar1 = (long *)(*(code *)PTR_malloc_017699f8)
                             ((ulong)(uint)(*(int *)(param_1 + 3) << 1) +
                              (ulong)*(uint *)(param_1 + 4) + 0x18);
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 3;
    *plVar1 = (long)param_1;
    plVar1[1] = (long)plVar2;
    plVar1[2] = (long)plVar2 + (ulong)*(uint *)(param_1 + 3);
    if (*(uint *)((long)param_1 + 0x1c) < param_3) {
      (*(code *)*param_1)();
      (*(code *)param_1[1])(plVar1[1],param_2,param_3);
      param_2 = (byte *)(plVar1[2] + (ulong)*(uint *)(param_1 + 3));
      (*(code *)param_1[2])(param_2,plVar1[1]);
      param_3 = *(uint *)(param_1 + 4);
      plVar2 = (long *)plVar1[1];
    }
    (*(code *)*param_1)(plVar2);
    (*(code *)*param_1)(plVar1[2]);
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)param_3;
      uVar4 = uVar3;
      do {
        local_44[0] = *param_2 ^ 0x36;
        (*(code *)param_1[1])(plVar1[1],local_44,1);
        local_44[0] = *param_2 ^ 0x5c;
        (*(code *)param_1[1])(plVar1[2],local_44,1);
        uVar4 = uVar4 - 1;
        param_2 = param_2 + 1;
      } while (uVar4 != 0);
    }
    if (uVar3 < *(uint *)((long)param_1 + 0x1c)) {
      do {
        (*(code *)param_1[1])(plVar1[1],&DAT_013cc002,1);
        (*(code *)param_1[1])(plVar1[2],&DAT_013cc003,1);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((long)param_1 + 0x1c));
    }
  }
  return plVar1;
}

