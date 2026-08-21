
void FUN_00a5a2ac(undefined8 param_1,undefined1 *param_2)

{
                    /* try { // try from 00a5a2b0 to 00b5a2ff has its CatchHandler @ 00a5a43c */
  param_2[1] = (char)((ulong)param_1 >> 8);
  param_2[2] = (char)((ulong)param_1 >> 0x10);
  param_2[3] = (char)((ulong)param_1 >> 0x18);
  param_2[4] = (char)((ulong)param_1 >> 0x20);
  param_2[5] = (char)((ulong)param_1 >> 0x28);
  *param_2 = (char)param_1;
  param_2[6] = (char)((ulong)param_1 >> 0x30);
  param_2[7] = (char)((ulong)param_1 >> 0x38);
  return;
}

