
void FUN_00c175d8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x50) = &stack0xffffffffffffff30;
  *(long *)(lVar4 + 0x158) = param_1;
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = (param_2 + 1) - lVar1;
  *(undefined4 *)(lVar4 + 0x80) = 0xffffffff;
  if ((long)*(ulong *)(param_2 + -0x10) >> 0x2f == -9) {
    *(long *)(param_2 + -8) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00c17680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + (ulong)(byte)**(undefined4 **)
                                        ((*(ulong *)(param_2 + -0x10) & 0x7fffffffffff) + 0x20) * 8
                + 0x2a0))();
    return;
  }
  *(long *)(param_1 + 0x20) = lVar1;
  FUN_00c1dec8(param_1,param_2 + -0x10,uVar2);
  *(long *)(param_2 + -8) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00c17a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + (ulong)(byte)**(undefined4 **)
                                      ((*(ulong *)(param_2 + -0x10) & 0x7fffffffffff) + 0x20) * 8 +
              0x2a0))();
  return;
}

