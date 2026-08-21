
undefined8 FUN_00a3fd90(long *param_1,uint param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if (((param_1 != (long *)0x0) && (lVar3 = *param_1, lVar3 != 0)) &&
     ((*(char *)((long)param_1 + 0x3b9) != '\0' ||
      (*(long *)(param_1[0x8f] + 0x18) + *(long *)(param_1[0x90] + 0x18) == 0)))) {
    if (param_1[0xb] != 0) {
      FUN_00a301e8(lVar3);
      param_1[0xb] = 0;
    }
    FUN_00a2fae4(lVar3);
    FUN_00a56fb4(param_1);
    if (*(code **)(param_1[0x80] + 0x60) != (code *)0x0) {
      (**(code **)(param_1[0x80] + 0x60))(param_1,param_2 & 1);
    }
    FUN_00a38740(lVar3,"Closing connection %ld\n",param_1[10]);
    FUN_00a2cab4(*(undefined8 *)(lVar3 + 0xad0),param_1);
    thunk_FUN_00a5ce24(param_1,0);
    uVar2 = FUN_00a27f7c(*(undefined8 *)(lVar3 + 0x60),3);
    if ((uVar2 & 1) != 0) {
      plVar4 = (long *)param_1[0x8f];
      if (plVar4 != (long *)0x0) {
        plVar1 = (long *)*plVar4;
        while (plVar1 != (long *)0x0) {
          plVar5 = (long *)plVar1[2];
          *(undefined1 *)(*plVar1 + 0x8ca9) = 1;
          FUN_00a27f94();
          FUN_00a4aa5c(plVar4,plVar1,0);
          plVar1 = plVar5;
        }
      }
      plVar4 = (long *)param_1[0x90];
      if (plVar4 != (long *)0x0) {
        plVar1 = (long *)*plVar4;
        while (plVar1 != (long *)0x0) {
          plVar5 = (long *)plVar1[2];
          *(undefined1 *)(*plVar1 + 0x8ca9) = 1;
          FUN_00a27f94();
          FUN_00a4aa5c(plVar4,plVar1,0);
          plVar1 = plVar5;
        }
      }
    }
    FUN_00a3fef0(param_1);
  }
  return 0;
}

