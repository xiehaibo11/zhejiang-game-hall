
void FT_Set_Debug_Hook(long param_1,uint param_2,long param_3)

{
  if (((param_2 < 4) && (param_1 != 0)) && (param_3 != 0)) {
    *(long *)(param_1 + (ulong)param_2 * 8 + 0x138) = param_3;
  }
  return;
}

