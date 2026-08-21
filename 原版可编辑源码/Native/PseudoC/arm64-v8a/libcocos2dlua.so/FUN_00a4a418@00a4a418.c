
undefined4 FUN_00a4a418(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_00a4a970(FUN_00a68734);
  *(long *)(param_1 + 0x18) = lVar1;
                    /* try { // try from 00a4a438 to 00b4a443 has its CatchHandler @ 00a4a4a8 */
  uVar2 = 0x1b;
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}

