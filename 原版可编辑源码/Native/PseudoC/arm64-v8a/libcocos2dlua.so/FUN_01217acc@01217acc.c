
undefined8 FUN_01217acc(long param_1,long *param_2)

{
  if ((*param_2 != *(long *)(param_1 + 8)) && (param_2[1] != *(long *)(param_1 + 8))) {
    return 0;
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x40))
            (*(long **)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x18));
  return 0;
}

