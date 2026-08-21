
size_t FUN_00a36ca4(void *param_1,long param_2,long param_3,long *param_4)

{
  size_t sVar1;
  long lVar2;
  size_t __n;
  long lVar3;
  size_t *psVar4;
  undefined8 uVar5;
  
                    /* try { // try from 00a36cac to 00b36ce3 has its CatchHandler @ 00a36d68 */
  lVar3 = *(long *)(*param_4 + 0x218);
  sVar1 = *(size_t *)(lVar3 + 8);
  if (sVar1 == 0) {
    __n = 0;
                    /* try { // try from 00a36d14 to 00b36d27 has its CatchHandler @ 00a36d68 */
  }
  else {
    __n = param_3 * param_2;
    *(bool *)(*param_4 + 0x213) = *(int *)(lVar3 + 0x78) == 1;
                    /* try { // try from 00a36ce4 to 00b36d13 has its CatchHandler @ 00a36c5c */
    if ((long)__n < (long)sVar1) {
      memcpy(param_1,*(void **)(lVar3 + 0x10),__n);
      *(size_t *)(lVar3 + 8) = *(long *)(lVar3 + 8) - __n;
      *(size_t *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + __n;
    }
    else {
      memcpy(param_1,*(void **)(lVar3 + 0x10),sVar1);
      sVar1 = *(size_t *)(lVar3 + 0x70);
      __n = *(size_t *)(lVar3 + 8);
                    /* try { // try from 00a36d28 to 00b36d83 has its CatchHandler @ 00a36c5c */
      psVar4 = (size_t *)(lVar3 + 8);
      if (sVar1 != 0) {
        uVar5 = *(undefined8 *)(lVar3 + 0x58);
        *(size_t *)(lVar3 + 8) = sVar1;
        *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar3 + 0x68);
        lVar2 = *param_4;
        *(undefined8 *)(lVar2 + 0x8d18) = *(undefined8 *)(lVar3 + 0x60);
        *(undefined8 *)(lVar2 + 0x8d10) = uVar5;
        *(int *)(lVar3 + 0x78) = *(int *)(lVar3 + 0x78) + 1;
        psVar4 = (size_t *)(lVar3 + 0x70);
      }
      *psVar4 = 0;
    }
  }
  return __n;
}

