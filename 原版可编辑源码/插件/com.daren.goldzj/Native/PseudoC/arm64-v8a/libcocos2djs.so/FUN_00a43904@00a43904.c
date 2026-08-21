
undefined4
FUN_00a43904(undefined8 param_1,char *param_2,char *param_3,undefined8 *param_4,undefined8 *param_5)

{
  long lVar1;
  undefined4 uVar2;
  size_t __n;
  size_t __n_00;
  void *__dest;
  ulong uVar3;
  
  *param_5 = 0;
  *param_4 = 0;
  __n = strlen(param_2);
  __n_00 = strlen(param_3);
  uVar3 = __n * 2;
  if (((__n <= uVar3) && (!CARRY8(uVar3,__n_00))) && (uVar3 + __n_00 < 0xfffffffffffffffe)) {
    lVar1 = uVar3 + __n_00 + 2;
    __dest = (void *)(*(code *)PTR_malloc_01d1b740)(lVar1);
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,__n);
      *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00a439b0 to 00b43a93 has its CatchHandler @ 00a437fc */
      memcpy((undefined1 *)((long)__dest + __n) + 1,param_2,__n);
      *(undefined1 *)((long)__dest + (uVar3 | 1)) = 0;
      memcpy((void *)((long)__dest + uVar3 + 2),param_3,__n_00);
      uVar2 = FUN_00a19db8(param_1,__dest,lVar1,param_4,param_5);
      (*(code *)PTR_free_01d1b748)(__dest);
      return uVar2;
    }
  }
                    /* catch() { ... } // from try @ 00a4387c with catch @ 00a43a24 */
  return 0x1b;
}

