
undefined8 FUN_00a4bfbc(long param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x70);
  if (puVar1 == (uint *)0x0) {
    return 3;
  }
                    /* try { // try from 00a4bfcc to 00b4c06f has its CatchHandler @ 00a4bedc */
  if ((*puVar1 & 1 << (ulong)(param_2 & 0x1f)) != 0) {
    if (*(code **)(puVar1 + 4) != (code *)0x0) {
      (**(code **)(puVar1 + 4))(param_1,param_2,*(undefined8 *)(puVar1 + 6));
      return 0;
    }
    return 0;
  }
  return 0;
}

