
void FUN_0097e590(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  size_t __n;
  long *plVar3;
  char *__s;
  void *__dest;
  ulong uVar4;
  ulong local_78;
  size_t local_70;
  void *local_68;
  undefined4 local_5c;
  long local_58;
  
                    /* try { // try from 0097e59c to 00a7e5c7 has its CatchHandler @ 0097e6e4 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    __s = (char *)(param_1 + 0x11);
    plVar3 = *(long **)(param_1 + 0x50);
  }
  else {
    __s = *(char **)(param_1 + 0x20);
    plVar3 = *(long **)(param_1 + 0x50);
  }
  if (plVar3 == (long *)0x0) goto LAB_0097e680;
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  local_78 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0097e6b4 to 00a7e703 has its CatchHandler @ 0097e510 */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_0097e640;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    local_78 = uVar4 | 1;
    local_70 = __n;
    local_68 = __dest;
LAB_0097e640:
    memcpy(__dest,__s,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  local_5c = uVar1;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_5c,&local_78);
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
LAB_0097e680:
                    /* try { // try from 0097e688 to 00a7e6b3 has its CatchHandler @ 0097e6e0 */
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

