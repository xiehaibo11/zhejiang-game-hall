
ulong spSkeleton_findSlotIndex(long *param_1,char *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = param_1[4];
  if (0 < (int)lVar1) {
                    /* try { // try from 00d60364 to 00e603bb has its CatchHandler @ 00d60364
                       catch() { ... } // from try @ 00d60364 with catch @ 00d60364
                       catch() { ... } // from try @ 00d60428 with catch @ 00d60364 */
    uVar3 = 0;
    lVar4 = *(long *)(*param_1 + 0x30);
    do {
      iVar2 = strcmp(*(char **)(*(long *)(lVar4 + uVar3 * 8) + 8),param_2);
      if (iVar2 == 0) goto LAB_00d60394;
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)lVar1);
  }
  uVar3 = 0xffffffff;
LAB_00d60394:
  return uVar3 & 0xffffffff;
}

