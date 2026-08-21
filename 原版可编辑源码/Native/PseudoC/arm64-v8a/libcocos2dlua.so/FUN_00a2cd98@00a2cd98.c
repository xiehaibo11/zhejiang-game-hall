
void FUN_00a2cd98(long param_1,long param_2)

{
  long *plVar1;
  
                    /* catch() { ... } // from try @ 00a2cd00 with catch @ 00a2cd98 */
                    /* catch() { ... } // from try @ 00a2cd18 with catch @ 00a2cd9c */
  plVar1 = (long *)**(long **)(param_2 + 0x478);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return;
    }
    if (*plVar1 == param_1) break;
    plVar1 = (long *)plVar1[2];
  }
                    /* catch() { ... } // from try @ 00a2cccc with catch @ 00a2cdcc */
  FUN_00a4ac08(*(long **)(param_2 + 0x478),plVar1,*(long *)(param_2 + 0x480),
               *(undefined8 *)(*(long *)(param_2 + 0x480) + 8));
  if (**(long **)(param_2 + 0x478) == 0) {
    return;
  }
                    /* try { // try from 00a2cde8 to 00b2ce3f has its CatchHandler @ 00a2cde8
                       catch() { ... } // from try @ 00a2cde8 with catch @ 00a2cde8
                       catch() { ... } // from try @ 00a2ce44 with catch @ 00a2cde8 */
  *(undefined1 *)(param_2 + 0x471) = 0;
  FUN_00a27148(*(undefined8 *)**(long **)(param_2 + 0x478),0);
  return;
}

