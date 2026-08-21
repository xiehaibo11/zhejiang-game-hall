
void FUN_00a5821c(undefined8 *param_1,undefined8 param_2)

{
                    /* try { // try from 00a58224 to 00b58257 has its CatchHandler @ 00a58324 */
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 3) = 1;
  param_1[2] = 0xffffffdf;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x1a) = 0;
  return;
}

