
void FUN_010aabf4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
                    /* try { // try from 010aac0c to 011aac23 has its CatchHandler @ 010aac7c */
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_010acdc8(param_1 + 0x30,uVar1);
                    /* try { // try from 010aac24 to 011aacb3 has its CatchHandler @ 010aabe8 */
  FUN_010acdc8(param_1 + 0x60,uVar1);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

