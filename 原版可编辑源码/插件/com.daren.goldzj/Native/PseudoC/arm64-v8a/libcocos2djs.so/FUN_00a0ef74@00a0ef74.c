
undefined8 FUN_00a0ef74(void)

{
  int iVar1;
  undefined8 local_18;
  
                    /* try { // try from 00a0ef74 to 00b0ef7b has its CatchHandler @ 00a0f0e0 */
                    /* try { // try from 00a0ef7c to 00b0ef8f has its CatchHandler @ 00a0f0dc */
  if (DAT_01d38bb0 == 0) {
    DAT_01d38bb0 = 1;
    PTR_malloc_01d1b740 = malloc;
                    /* try { // try from 00a0efa8 to 00b0efaf has its CatchHandler @ 00a0f0d8 */
                    /* try { // try from 00a0efb0 to 00b0efc3 has its CatchHandler @ 00a0f0d4 */
    PTR_free_01d1b748 = free;
    PTR_realloc_01d1b750 = realloc;
    PTR_strdup_01d1b758 = strdup;
                    /* try { // try from 00a0efd4 to 00b0efdb has its CatchHandler @ 00a0f0d0 */
                    /* try { // try from 00a0efdc to 00b0efef has its CatchHandler @ 00a0f0cc */
    PTR_calloc_01d1b760 = calloc;
    iVar1 = FUN_00a17b58();
    if (iVar1 == 0) {
      return 0;
                    /* try { // try from 00a0f024 to 00b0f03b has its CatchHandler @ 00a0f108 */
    }
    FUN_00a156a4();
    DAT_01d38bb8 = 3;
    FUN_00a0d1a0();
  }
                    /* try { // try from 00a0f004 to 00b0f00f has its CatchHandler @ 00a0f0c8 */
  iVar1 = FUN_00a240c4(&local_18);
                    /* try { // try from 00a0f010 to 00b0f01b has its CatchHandler @ 00a0f0b0 */
  if (iVar1 != 0) {
    local_18 = 0;
  }
  return local_18;
}

