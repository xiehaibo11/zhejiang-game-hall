
/* cocos2d::fopen_mem_func64_32(void*, void const*, int) */

ulonglong * cocos2d::fopen_mem_func64_32(void *param_1,void *param_2,int param_3)

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
                    /* catch() { ... } // from try @ 009ae16c with catch @ 009ae490 */
                    /* catch() { ... } // from try @ 009ae15c with catch @ 009ae4a0 */
  puVar3 = malloc(0x20);
  if (puVar3 != (ulonglong *)0x0) {
                    /* catch() { ... } // from try @ 009ae140 with catch @ 009ae4b0 */
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
                    /* catch() { ... } // from try @ 009ae130 with catch @ 009ae4c0 */
    local_40 = (char *)0x0;
    uVar4 = strtoull(param_2,&local_40,0x10);
                    /* catch() { ... } // from try @ 009ae11c with catch @ 009ae4d0 */
    if ((uVar4 == 0) || (uVar5 = strtoul(local_40,&local_40,0x10), uVar5 == 0)) {
      puVar3 = (ulonglong *)0x0;
    }
    else {
      uVar1 = uVar5;
                    /* catch() { ... } // from try @ 009ae110 with catch @ 009ae4e8 */
      if ((param_3 & 8U) != 0) {
        uVar1 = 0;
      }
      *puVar3 = uVar4;
      puVar3[1] = uVar5;
                    /* catch() { ... } // from try @ 009ae0fc with catch @ 009ae4f0 */
      puVar3[2] = uVar1;
      puVar3[3] = 0;
                    /* catch() { ... } // from try @ 009ae0d4 with catch @ 009ae4f4 */
    }
  }
                    /* catch() { ... } // from try @ 009ae0b4 with catch @ 009ae4fc */
                    /* catch() { ... } // from try @ 009ae42c with catch @ 009ae500 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 009ae1f0 with catch @ 009ae518 */
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

