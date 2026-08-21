
ulong spSkeleton_findBoneIndex(long *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = param_1[1];
                    /* try { // try from 00d60280 to 00e602a7 has its CatchHandler @ 00d60328 */
  if (0 < (int)lVar1) {
    uVar3 = 0;
    lVar4 = *(long *)(*param_1 + 0x20);
    do {
      iVar2 = strcmp(*(char **)(*(long *)(lVar4 + uVar3 * 8) + 8),param_2);
      if (iVar2 == 0) goto LAB_00d602b8;
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)lVar1);
  }
  uVar3 = 0xffffffff;
LAB_00d602b8:
  return uVar3 & 0xffffffff;
}

