
undefined8 spSkeleton_findSlot(long *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1[4];
  if (0 < (int)lVar1) {
                    /* try { // try from 00d602f0 to 00e602fb has its CatchHandler @ 00d60324 */
    lVar4 = 0;
                    /* try { // try from 00d602fc to 00e60307 has its CatchHandler @ 00d60328 */
    lVar3 = *(long *)(*param_1 + 0x30);
    do {
                    /* try { // try from 00d60308 to 00e60363 has its CatchHandler @ 00d601f4 */
                    /* catch() { ... } // from try @ 00d6024c with catch @ 00d6030c */
      iVar2 = strcmp(*(char **)(*(long *)(lVar3 + lVar4 * 8) + 8),param_2);
                    /* catch() { ... } // from try @ 00d60240 with catch @ 00d60310 */
      if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 00d60280 with catch @ 00d60328
                       catch() { ... } // from try @ 00d602fc with catch @ 00d60328 */
        return *(undefined8 *)(param_1[5] + lVar4 * 8);
      }
                    /* catch() { ... } // from try @ 00d6022c with catch @ 00d60314 */
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)lVar1);
  }
  return 0;
}

