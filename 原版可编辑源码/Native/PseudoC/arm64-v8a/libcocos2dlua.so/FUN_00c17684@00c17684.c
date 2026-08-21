
undefined8 FUN_00c17684(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  *(undefined1 **)(param_1 + 0x50) = &stack0xffffffffffffff30;
  *(long *)(lVar4 + 0x158) = param_1;
  lVar2 = (*param_4)();
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    return 0;
  }
  *(long *)(lVar4 + 0x158) = param_1;
  lVar1 = *(long *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = (lVar2 + 5) - lVar1;
  *(undefined4 *)(lVar4 + 0x80) = 0xffffffff;
  if ((long)*(ulong *)(lVar2 + -0x10) >> 0x2f == -9) {
    *(long *)(lVar2 + -8) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00c17680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(lVar4 + (ulong)(byte)**(undefined4 **)
                                                ((*(ulong *)(lVar2 + -0x10) & 0x7fffffffffff) + 0x20
                                                ) * 8 + 0x2a0))();
    return uVar5;
  }
  *(long *)(param_1 + 0x20) = lVar1;
  FUN_00c1dec8(param_1,lVar2 + -0x10,uVar5);
  *(long *)(lVar2 + -8) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00c17a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(lVar4 + (ulong)(byte)**(undefined4 **)
                                              ((*(ulong *)(lVar2 + -0x10) & 0x7fffffffffff) + 0x20)
                               * 8 + 0x2a0))();
  return uVar5;
}

