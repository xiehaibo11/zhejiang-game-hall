
undefined8 FUN_00a355d4(long param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x70);
  if (puVar1 == (uint *)0x0) {
    return 3;
  }
  if ((*puVar1 & 1 << (ulong)(param_2 & 0x1f)) != 0) {
    if (*(code **)(puVar1 + 4) != (code *)0x0) {
      (**(code **)(puVar1 + 4))(param_1,param_2,*(undefined8 *)(puVar1 + 6));
      return 0;
    }
    return 0;
  }
                    /* try { // try from 00a35620 to 00b3567b has its CatchHandler @ 00a35620
                       catch() { ... } // from try @ 00a35620 with catch @ 00a35620
                       catch() { ... } // from try @ 00a358f8 with catch @ 00a35620 */
  return 0;
}

