
undefined8 FUN_00a2d558(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0x3c4) = 0;
  }
  *(undefined1 *)(param_1 + 0x8d08) = 0;
  *(undefined1 *)(param_1 + 0x8ca8) = 0;
  if (*(char *)(param_1 + 0x620) == '\0') {
    if (*(int *)(param_1 + 0x430) != 5) goto LAB_00a2d5a4;
    uVar1 = 1;
  }
  else {
    uVar1 = 5;
  }
                    /* catch() { ... } // from try @ 00a2d36c with catch @ 00a2d5a0 */
  *(undefined4 *)(param_1 + 0x430) = uVar1;
LAB_00a2d5a4:
                    /* catch() { ... } // from try @ 00a2d360 with catch @ 00a2d5a4 */
  auVar2 = FUN_00a18e40();
                    /* catch() { ... } // from try @ 00a2d340 with catch @ 00a2d5a8 */
  *(undefined1 (*) [16])(param_1 + 0xb8) = auVar2;
  *(undefined1 *)(param_1 + 0xd8) = 1;
                    /* catch() { ... } // from try @ 00a2d378 with catch @ 00a2d5b8 */
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(long *)(param_1 + 0x1d0) = param_1 + 0xb08;
  *(long *)(param_1 + 0x1d8) = param_1 + 0x4b09;
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xaf8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined1 *)(param_1 + 0x1e9) = 0;
  FUN_00a2e6ec(param_1);
  FUN_00a1b744(param_1,0);
  FUN_00a1b6ac(param_1,0);
  return 0;
}

