
undefined8 * _Unwind_GetGR(long param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x62) {
    puVar1 = *(undefined8 **)(param_1 + (long)param_2 * 8);
    if (((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) == 0) ||
       (*(char *)(param_1 + param_2 + 0x358) == '\0')) {
      if ((&DAT_01795be0)[param_2] != '\b') goto LAB_01270c30;
      puVar1 = (undefined8 *)*puVar1;
    }
    return puVar1;
  }
LAB_01270c30:
                    /* WARNING: Subroutine does not return */
  abort();
}

