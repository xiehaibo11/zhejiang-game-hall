
void FUN_0106b108(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = **(long **)(param_1 + 8);
  if (*(char *)(param_1 + 0x10) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0106b124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0106b12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x18))(*(long **)(param_1 + 8),*param_2);
  return;
}

