
undefined8 FUN_0108f6ec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[6] = *(undefined8 *)(param_1 + 0x128);
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  param_2[1] = *(undefined8 *)(param_1 + 0x100);
  *param_2 = uVar1;
                    /* try { // try from 0108f700 to 0118f70f has its CatchHandler @ 0108f89c */
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  param_2[5] = *(undefined8 *)(param_1 + 0x120);
  param_2[4] = uVar1;
                    /* try { // try from 0108f710 to 0118f71f has its CatchHandler @ 0108f870 */
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  param_2[3] = *(undefined8 *)(param_1 + 0x110);
  param_2[2] = uVar1;
  return 0;
}

