
undefined8 spSkeleton_findBone(long *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
                    /* try { // try from 00d601f4 to 00e6022b has its CatchHandler @ 00d601f4
                       catch() { ... } // from try @ 00d601f4 with catch @ 00d601f4
                       catch() { ... } // from try @ 00d60308 with catch @ 00d601f4 */
  lVar1 = param_1[1];
  if (0 < (int)lVar1) {
    lVar4 = 0;
    lVar3 = *(long *)(*param_1 + 0x20);
    do {
                    /* try { // try from 00d6022c to 00e6023f has its CatchHandler @ 00d60314 */
      iVar2 = strcmp(*(char **)(*(long *)(lVar3 + lVar4 * 8) + 8),param_2);
      if (iVar2 == 0) {
                    /* try { // try from 00d6024c to 00e6025f has its CatchHandler @ 00d6030c */
        return *(undefined8 *)(param_1[2] + lVar4 * 8);
      }
      lVar4 = lVar4 + 1;
                    /* try { // try from 00d60240 to 00e6024b has its CatchHandler @ 00d60310 */
    } while (lVar4 < (int)lVar1);
  }
                    /* try { // try from 00d60264 to 00e6027b has its CatchHandler @ 00d60324 */
  return 0;
}

