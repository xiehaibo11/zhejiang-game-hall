
undefined8 FUN_00a4bf64(long param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x70);
                    /* try { // try from 00a4bf68 to 00b4bf93 has its CatchHandler @ 00a4c034 */
  if (puVar1 == (uint *)0x0) {
    return 3;
  }
  if ((*puVar1 & 1 << (ulong)(param_2 & 0x1f)) != 0) {
    if (*(code **)(puVar1 + 2) != (code *)0x0) {
      (**(code **)(puVar1 + 2))();
      return 0;
    }
                    /* try { // try from 00a4bfb4 to 00b4bfcb has its CatchHandler @ 00a4c030 */
    return 0;
  }
  return 0;
}

