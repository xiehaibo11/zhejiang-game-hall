
/* cocos2d::fopen_mem_func(void*, char const*, int) */

ulonglong * cocos2d::fopen_mem_func(void *param_1,char *param_2,int param_3)

{
  ulonglong uVar1;
  long lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulong uVar5;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar3 = malloc(0x20);
  if (puVar3 != (ulonglong *)0x0) {
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    local_40 = (char *)0x0;
    uVar4 = strtoull(param_2,&local_40,0x10);
                    /* try { // try from 009ae42c to 00aae43f has its CatchHandler @ 009ae500 */
    if ((uVar4 == 0) || (uVar5 = strtoul(local_40,&local_40,0x10), uVar5 == 0)) {
      puVar3 = (ulonglong *)0x0;
    }
    else {
      uVar1 = uVar5;
      if ((param_3 & 8U) != 0) {
        uVar1 = 0;
      }
      *puVar3 = uVar4;
      puVar3[1] = uVar5;
      puVar3[2] = uVar1;
      puVar3[3] = 0;
                    /* try { // try from 009ae440 to 00aae44f has its CatchHandler @ 009ae554 */
    }
  }
                    /* try { // try from 009ae450 to 00aae687 has its CatchHandler @ 009adf8c */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

