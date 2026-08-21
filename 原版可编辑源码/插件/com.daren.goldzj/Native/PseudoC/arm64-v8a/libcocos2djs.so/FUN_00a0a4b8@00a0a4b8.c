
void FUN_00a0a4b8(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar3;
  long lVar4;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  undefined4 local_6c;
  char *local_68;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x28);
  uStack_88 = 0;
  local_80 = (void *)0x0;
  local_90 = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    local_80 = *(void **)(param_1 + 0x20);
    uStack_88 = *(ulong *)(param_1 + 0x18);
    local_90 = *(ulong *)(param_1 + 0x10);
    plVar2 = *(long **)(lVar4 + 0x50);
    goto joined_r0x00a0a580;
  }
  __n = *(ulong *)(param_1 + 0x18);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_1 + 0x20);
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_90 | 1);
    local_90 = (ulong)(byte)((int)__n << 1);
    if (__n != 0) goto LAB_00a0a568;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_90 = uVar3 | 1;
    uStack_88 = __n;
    local_80 = __dest;
LAB_00a0a568:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  plVar2 = *(long **)(lVar4 + 0x50);
joined_r0x00a0a580:
  if (plVar2 != (long *)0x0) {
    local_6c = *(undefined4 *)(param_1 + 8);
    local_5c = 0;
    local_68 = "SUCCESS";
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a0a5c4 with catch @ 00a0a5a4
                        */
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_90,&local_5c,&local_68,&local_6c);
  }
                    /* try { // try from 00a0a5b8 to 00b0a5c3 has its CatchHandler @ 00a0a884 */
  if ((local_90 & 1) != 0) {
                    /* try { // try from 00a0a5c4 to 00b0a8df has its CatchHandler @ 00a0a5a4 */
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

