
undefined8 FUN_010b900c(long *param_1)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 010b900c to 011b901b has its CatchHandler @ 010b90a8 */
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x300);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar1 + 0x278);
                    /* try { // try from 010b901c to 011b9117 has its CatchHandler @ 010b8e70 */
  param_1[6] = *(long *)(lVar1 + 0x280);
  param_1[4] = *(long *)(lVar2 + 0x28);
  param_1[3] = *(long *)(lVar2 + 0x38);
  return 0;
}

