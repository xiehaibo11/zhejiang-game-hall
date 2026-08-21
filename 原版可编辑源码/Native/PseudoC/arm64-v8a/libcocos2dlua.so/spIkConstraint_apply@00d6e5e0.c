
void spIkConstraint_apply(long param_1)

{
  if (*(int *)(param_1 + 8) == 2) {
    spIkConstraint_apply2
              (*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c),
               *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x78),*(undefined4 *)(param_1 + 0x24),
               **(undefined8 **)(param_1 + 0x10),(*(undefined8 **)(param_1 + 0x10))[1],
               *(undefined4 *)(param_1 + 0x20));
    return;
  }
  if (*(int *)(param_1 + 8) == 1) {
    spIkConstraint_apply1
              (*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x6c),
               *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x78),*(undefined4 *)(param_1 + 0x24),
               **(undefined8 **)(param_1 + 0x10));
    return;
  }
  return;
}

