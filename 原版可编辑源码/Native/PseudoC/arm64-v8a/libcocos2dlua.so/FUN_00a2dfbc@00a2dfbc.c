
undefined8 FUN_00a2dfbc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x8b30) == 0) {
    lVar2 = (*(code *)PTR_calloc_01769a18)(param_2,0x78);
    if (lVar2 == 0) {
                    /* try { // try from 00a2e028 to 00b2e05b has its CatchHandler @ 00a2e128 */
      uVar1 = 0x1b;
    }
    else {
      uVar1 = 0;
      *(undefined8 *)(param_1 + 0x5b8) = param_2;
      *(long *)(param_1 + 0x8b30) = lVar2;
      *(undefined8 *)(param_1 + 0x8b38) = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

