
undefined8 FUN_00138e04(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((0x3ff < *(ulong *)(param_1 + 0x20)) ||
     ((uVar1 = 0, (param_2 & 1) == 0 && (0x1ff < *(ulong *)(param_1 + 0x20))))) {
    operator_delete((void *)**(undefined8 **)(param_1 + 8));
    uVar1 = 1;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x200;
  }
  return uVar1;
}

