
undefined8 FUN_010b8e88(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x300);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar1 + 0x278);
  param_1[6] = *(long *)(lVar1 + 0x280);
  param_1[4] = *(long *)(lVar2 + 0x28);
  param_1[3] = *(long *)(lVar2 + 0x30);
                    /* try { // try from 010b8eb4 to 011b8ecb has its CatchHandler @ 010b9094 */
  return 0;
}

