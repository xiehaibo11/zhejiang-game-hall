
undefined4
FUN_00a5a2ec(undefined8 param_1,char *param_2,char *param_3,undefined8 *param_4,undefined8 *param_5)

{
  long lVar1;
  undefined4 uVar2;
  size_t __n;
  size_t __n_00;
  void *__dest;
  ulong uVar3;
  
                    /* try { // try from 00a5a310 to 00b5a343 has its CatchHandler @ 00a5a428 */
  *param_5 = 0;
  *param_4 = 0;
  __n = strlen(param_2);
  __n_00 = strlen(param_3);
  uVar3 = __n * 2;
                    /* try { // try from 00a5a344 to 00b5a36f has its CatchHandler @ 00a5a168 */
  if (((__n <= uVar3) && (!CARRY8(uVar3,__n_00))) && (uVar3 + __n_00 < 0xfffffffffffffffe)) {
    lVar1 = uVar3 + __n_00 + 2;
    __dest = (void *)(*(code *)PTR_malloc_017699f8)(lVar1);
                    /* try { // try from 00a5a370 to 00b5a383 has its CatchHandler @ 00a5a434 */
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,__n);
                    /* try { // try from 00a5a388 to 00b5a39b has its CatchHandler @ 00a5a438 */
      *(undefined1 *)((long)__dest + __n) = 0;
      memcpy((undefined1 *)((long)__dest + __n) + 1,param_2,__n);
                    /* try { // try from 00a5a3a0 to 00b5a3b3 has its CatchHandler @ 00a5a43c */
      *(undefined1 *)((long)__dest + (uVar3 | 1)) = 0;
      memcpy((void *)((long)__dest + uVar3 + 2),param_3,__n_00);
      uVar2 = FUN_00a2f7a0(param_1,__dest,lVar1,param_4,param_5);
      (*(code *)PTR_free_01769a00)(__dest);
      return uVar2;
    }
  }
                    /* try { // try from 00a5a3f4 to 00b5a3fb has its CatchHandler @ 00a5a430 */
                    /* try { // try from 00a5a400 to 00b5a407 has its CatchHandler @ 00a5a42c */
                    /* try { // try from 00a5a40c to 00b5a413 has its CatchHandler @ 00a5a428 */
  return 0x1b;
}

