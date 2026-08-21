
undefined8 FUN_00a43f40(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
                    /* try { // try from 00a43f44 to 00b43f77 has its CatchHandler @ 00a43fc8 */
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0x3c4) = 0;
  }
  *(undefined1 *)(param_1 + 0x8d08) = 0;
  *(undefined1 *)(param_1 + 0x8ca8) = 0;
  if (*(char *)(param_1 + 0x620) == '\0') {
                    /* try { // try from 00a43f78 to 00b44013 has its CatchHandler @ 00a43e10 */
    if (*(int *)(param_1 + 0x430) != 5) goto LAB_00a43f8c;
    uVar1 = 1;
  }
  else {
    uVar1 = 5;
  }
  *(undefined4 *)(param_1 + 0x430) = uVar1;
LAB_00a43f8c:
  auVar2 = FUN_00a2e828();
  *(undefined1 (*) [16])(param_1 + 0xb8) = auVar2;
  *(undefined1 *)(param_1 + 0xd8) = 1;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(long *)(param_1 + 0x1d0) = param_1 + 0xb08;
  *(long *)(param_1 + 0x1d8) = param_1 + 0x4b09;
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xaf8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xb8);
                    /* catch() { ... } // from try @ 00a43f2c with catch @ 00a43fc4 */
  *(undefined1 *)(param_1 + 0x1e9) = 0;
                    /* catch() { ... } // from try @ 00a43f44 with catch @ 00a43fc8 */
  FUN_00a450d4(param_1);
  FUN_00a3112c(param_1,0);
  FUN_00a31094(param_1,0);
  return 0;
}

