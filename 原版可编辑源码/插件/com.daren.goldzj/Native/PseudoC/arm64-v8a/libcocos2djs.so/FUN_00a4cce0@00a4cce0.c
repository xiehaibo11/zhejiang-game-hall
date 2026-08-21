
size_t FUN_00a4cce0(void *param_1,long param_2,long param_3,long *param_4)

{
  void *__src;
  size_t sVar1;
  size_t __n;
  FILE *__stream;
  long lVar2;
  long lVar3;
  long lVar4;
  size_t __n_00;
  ulong __n_01;
  
  lVar2 = *param_4;
  if (lVar2 == 0) {
    return 0;
  }
  __n_00 = param_3 * param_2;
  if (*(int *)(lVar2 + 8) - 3U < 2) {
    if (*(int *)(lVar2 + 8) == 3) {
      if ((code *)param_4[3] == (code *)0x0) goto LAB_00a4cda8;
                    /* catch() { ... } // from try @ 00a4c8cc with catch @ 00a4cd30 */
      sVar1 = (*(code *)param_4[3])(param_1,1,__n_00,*(undefined8 *)(lVar2 + 0x10));
    }
    else {
      __stream = (FILE *)param_4[2];
      if (__stream == (FILE *)0x0) {
        __stream = fopen(*(char **)(lVar2 + 0x10),"rb");
        param_4[2] = (long)__stream;
        if (__stream == (FILE *)0x0) {
          return 0xffffffffffffffff;
        }
      }
      sVar1 = fread(param_1,1,__n_00,__stream);
    }
    if (sVar1 != 0) {
      return sVar1;
    }
    if ((FILE *)param_4[2] != (FILE *)0x0) {
      fclose((FILE *)param_4[2]);
      param_4[2] = 0;
    }
                    /* try { // try from 00a4cda0 to 00b4cdb7 has its CatchHandler @ 00a4cf84 */
    lVar2 = *(long *)*param_4;
    *param_4 = lVar2;
  }
LAB_00a4cda8:
  lVar3 = param_4[1];
  sVar1 = 0;
  while( true ) {
    __n_01 = __n_00 - sVar1;
    __n = *(long *)(lVar2 + 0x18) - lVar3;
                    /* try { // try from 00a4cdc0 to 00b4cdcb has its CatchHandler @ 00a4cf80 */
    __src = (void *)(*(long *)(lVar2 + 0x10) + lVar3);
    if (__n_01 < __n) {
      memcpy((void *)((long)param_1 + sVar1),__src,__n_01);
      param_4[1] = param_4[1] + __n_01;
      return __n_00;
    }
                    /* try { // try from 00a4cdcc to 00b4cdd7 has its CatchHandler @ 00a4cf7c */
    memcpy((void *)((long)param_1 + sVar1),__src,__n);
    lVar3 = param_4[1];
    lVar4 = ((long *)*param_4)[3];
                    /* try { // try from 00a4cdd8 to 00b4cf07 has its CatchHandler @ 00a4cf94 */
    param_4[1] = 0;
    lVar2 = *(long *)*param_4;
    sVar1 = (lVar4 - lVar3) + sVar1;
    *param_4 = lVar2;
    if (lVar2 == 0) break;
    lVar3 = 0;
    if (2 < *(uint *)(lVar2 + 8)) {
      return sVar1;
    }
  }
  return sVar1;
}

