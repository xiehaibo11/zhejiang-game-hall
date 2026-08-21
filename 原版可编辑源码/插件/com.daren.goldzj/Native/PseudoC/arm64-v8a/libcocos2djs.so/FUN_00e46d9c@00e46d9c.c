
undefined8 FUN_00e46d9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x158) = uVar1;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0x160) = 0;
  FUN_00e13908(uVar1);
  return 0;
}

