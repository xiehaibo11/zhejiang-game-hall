
undefined8 FUN_00918924(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  double dVar3;
  timespec local_50;
  timespec local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  dVar3 = (double)luaL_checknumber(param_1,1);
                    /* try { // try from 0091894c to 00a1895f has its CatchHandler @ 009189e4 */
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  if (2147483647.0 < dVar3) {
    dVar3 = 2147483647.0;
  }
                    /* try { // try from 00918964 to 00a18997 has its CatchHandler @ 009189e8 */
  iVar2 = (int)((dVar3 - (double)(int)dVar3) * 1000000000.0);
  if (0x3b9ac9fe < iVar2) {
    iVar2 = 999999999;
  }
  local_40.tv_sec = (__time_t)(int)dVar3;
  local_40.tv_nsec = (long)iVar2;
                    /* try { // try from 00918998 to 00a18a33 has its CatchHandler @ 00918860 */
  while( true ) {
    iVar2 = nanosleep(&local_40,&local_50);
    if (iVar2 == 0) break;
    local_40.tv_nsec = local_50.tv_nsec;
    local_40.tv_sec = local_50.tv_sec;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

