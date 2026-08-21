
undefined8 FUN_00a3546c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
                    /* try { // try from 00a35478 to 00b35487 has its CatchHandler @ 00a3554c */
  if (param_1 == 0) {
    uVar1 = 3;
  }
  else {
                    /* try { // try from 00a35488 to 00b354ab has its CatchHandler @ 00a3553c */
    if (*(code **)(param_1 + 8) != (code *)0x0) {
      (**(code **)(param_1 + 8))(0,1,2,*(undefined8 *)(param_1 + 0x18));
    }
    if (*(int *)(param_1 + 4) == 0) {
      FUN_00a346ec(param_1 + 0x20);
      FUN_00a1cc80(*(undefined8 *)(param_1 + 0x50));
      lVar2 = *(long *)(param_1 + 0x58);
      if (lVar2 != 0) {
        if (*(long *)(param_1 + 0x60) != 0) {
          FUN_00a17fb8();
          if (1 < *(ulong *)(param_1 + 0x60)) {
            uVar3 = 1;
            lVar2 = 0x78;
            do {
                    /* try { // try from 00a3550c to 00b35567 has its CatchHandler @ 00a35438 */
              FUN_00a17fb8(*(long *)(param_1 + 0x58) + lVar2);
              uVar3 = uVar3 + 1;
              lVar2 = lVar2 + 0x78;
            } while (uVar3 < *(ulong *)(param_1 + 0x60));
          }
          lVar2 = *(long *)(param_1 + 0x58);
        }
        (*(code *)PTR_free_01d1b748)(lVar2);
      }
                    /* catch() { ... } // from try @ 00a35488 with catch @ 00a3553c */
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* catch() { ... } // from try @ 00a35478 with catch @ 00a3554c */
                    /* catch() { ... } // from try @ 00a35460 with catch @ 00a35550 */
        (**(code **)(param_1 + 0x10))(0,1,*(undefined8 *)(param_1 + 0x18));
      }
                    /* catch() { ... } // from try @ 00a354b4 with catch @ 00a35554 */
      (*(code *)PTR_free_01d1b748)(param_1);
      uVar1 = 0;
    }
    else {
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* try { // try from 00a354b4 to 00b3550b has its CatchHandler @ 00a35554 */
        (**(code **)(param_1 + 0x10))(0,1,*(undefined8 *)(param_1 + 0x18));
      }
      uVar1 = 2;
    }
  }
  return uVar1;
}

