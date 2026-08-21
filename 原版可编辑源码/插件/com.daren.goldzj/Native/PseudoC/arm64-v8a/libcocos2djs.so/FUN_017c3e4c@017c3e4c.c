
void FUN_017c3e4c(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  if (*(char *)(param_1 + 1000) == '\0') {
    *(undefined1 *)(param_1 + 1000) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x017c3e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x78) + 0x10))((long *)(param_1 + 0x78));
  return;
}

