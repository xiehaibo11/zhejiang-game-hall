
undefined8 FUN_00a4be54(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    uVar1 = 3;
  }
  else {
    if (*(code **)(param_1 + 8) != (code *)0x0) {
      (**(code **)(param_1 + 8))(0,1,2,*(undefined8 *)(param_1 + 0x18));
    }
    if (*(int *)(param_1 + 4) == 0) {
      FUN_00a4b0d4(param_1 + 0x20);
      FUN_00a32668(*(undefined8 *)(param_1 + 0x50));
      lVar2 = *(long *)(param_1 + 0x58);
      if (lVar2 != 0) {
        if (*(long *)(param_1 + 0x60) != 0) {
          FUN_00a2d9a0();
                    /* try { // try from 00a4bedc to 00b4bf5f has its CatchHandler @ 00a4bedc
                       catch() { ... } // from try @ 00a4bedc with catch @ 00a4bedc
                       catch() { ... } // from try @ 00a4bfcc with catch @ 00a4bedc */
          if (1 < *(ulong *)(param_1 + 0x60)) {
            uVar3 = 1;
            lVar2 = 0x78;
            do {
              FUN_00a2d9a0(*(long *)(param_1 + 0x58) + lVar2);
              uVar3 = uVar3 + 1;
              lVar2 = lVar2 + 0x78;
            } while (uVar3 < *(ulong *)(param_1 + 0x60));
          }
          lVar2 = *(long *)(param_1 + 0x58);
        }
        (*(code *)PTR_free_01769a00)(lVar2);
      }
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        (**(code **)(param_1 + 0x10))(0,1,*(undefined8 *)(param_1 + 0x18));
      }
      (*(code *)PTR_free_01769a00)(param_1);
      uVar1 = 0;
    }
    else {
      if (*(code **)(param_1 + 0x10) != (code *)0x0) {
        (**(code **)(param_1 + 0x10))(0,1,*(undefined8 *)(param_1 + 0x18));
      }
      uVar1 = 2;
    }
  }
                    /* try { // try from 00a4bf60 to 00b4bf67 has its CatchHandler @ 00a4c020 */
  return uVar1;
}

