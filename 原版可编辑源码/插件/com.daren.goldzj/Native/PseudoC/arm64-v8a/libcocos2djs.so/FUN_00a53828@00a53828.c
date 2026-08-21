
void FUN_00a53828(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                 uint *param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  time_t tVar4;
  undefined8 *__s;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
                    /* try { // try from 00a53844 to 00b53893 has its CatchHandler @ 00a53844
                       catch() { ... } // from try @ 00a53844 with catch @ 00a53844
                       catch() { ... } // from try @ 00a5394c with catch @ 00a53844 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  tVar4 = time((time_t *)0x0);
  uVar1 = *(int *)(param_3 + 0x18) + 0x30;
  __s = (undefined8 *)(*(code *)PTR_malloc_01d1b740)((ulong)uVar1);
                    /* try { // try from 00a53894 to 00b538ab has its CatchHandler @ 00a53a14 */
  if (__s != (undefined8 *)0x0) {
                    /* try { // try from 00a538c0 to 00b538d3 has its CatchHandler @ 00a53a10 */
    memset(__s,0,(ulong)uVar1);
                    /* try { // try from 00a538d4 to 00b538e3 has its CatchHandler @ 00a539e4 */
    FUN_00a0e7c4(__s + 2,*(int *)(param_3 + 0x18) + 0x20,&DAT_018996bb,0,0,0,0);
    FUN_00a438c4(tVar4 * 10000000 + 0x19db1ded53e8000,__s + 3);
                    /* try { // try from 00a538fc to 00b53903 has its CatchHandler @ 00a539c8 */
    __s[4] = *param_2;
                    /* try { // try from 00a53904 to 00b53913 has its CatchHandler @ 00a539f8 */
    memcpy((void *)((long)__s + 0x2c),*(void **)(param_3 + 0x10),(ulong)*(uint *)(param_3 + 0x18));
                    /* try { // try from 00a53914 to 00b5391b has its CatchHandler @ 00a539e0 */
                    /* try { // try from 00a5391c to 00b5394b has its CatchHandler @ 00a539e8 */
    __s[1] = *(undefined8 *)(param_3 + 8);
    iVar2 = *(int *)(param_3 + 0x18);
    lVar5 = FUN_00a52e14(&PTR_MD5_Init_01c6e520,param_1,0x10);
    if (lVar5 != 0) {
      FUN_00a52fa8(lVar5,__s + 1,iVar2 + 0x28);
                    /* try { // try from 00a5394c to 00b53a63 has its CatchHandler @ 00a53844 */
      FUN_00a52fc8(lVar5,&local_78);
      uVar6 = 0;
      __s[1] = uStack_70;
      *__s = local_78;
      *param_4 = __s;
      *param_5 = uVar1;
      goto LAB_00a53984;
    }
    (*(code *)PTR_free_01d1b748)(__s);
  }
  uVar6 = 0x1b;
LAB_00a53984:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

