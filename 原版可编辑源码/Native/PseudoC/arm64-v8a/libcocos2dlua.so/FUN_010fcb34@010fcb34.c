
void FUN_010fcb34(long param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* try { // try from 010fcb48 to 011fcb57 has its CatchHandler @ 010fcbbc */
  jcopy_sample_rows(*param_2,param_3,param_4,0,param_5,*(undefined4 *)(param_1 + 0x88));
  return;
}

