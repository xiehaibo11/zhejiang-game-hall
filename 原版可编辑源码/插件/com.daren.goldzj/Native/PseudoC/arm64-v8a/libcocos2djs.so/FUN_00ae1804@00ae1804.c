
undefined4 FUN_00ae1804(long *param_1)

{
  int *piVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  int *__base;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong __nmemb;
  undefined4 uVar10;
  
  lVar2 = *param_1;
  uVar8 = param_1[1];
  iVar4 = 0;
  __nmemb = 0;
  while (uVar8 != 0) {
    if ((uVar8 == 1) || ((uVar8 & 0xfffffffffffffffe) == 2)) {
LAB_00ae186c:
      __base = (int *)0x0;
      goto LAB_00ae1870;
    }
    uVar5 = uVar8 - 4;
    uVar6 = (ulong)CONCAT11(*(undefined1 *)(lVar2 + 2),*(undefined1 *)(lVar2 + 3));
    uVar8 = uVar5 - uVar6;
    if (uVar5 < uVar6) goto LAB_00ae186c;
    __nmemb = __nmemb + 1;
    lVar2 = lVar2 + uVar6 + 4;
    iVar4 = iVar4 + 4;
  }
  if (__nmemb < 2) {
    return 1;
  }
  __base = CRYPTO_malloc(iVar4,"ssl/t1_lib.c",0x3d4);
  if (__base == (int *)0x0) {
    ERR_put_error(0x14,0x155,0x41,"ssl/t1_lib.c",0x3d6);
  }
  else {
    pbVar9 = (byte *)*param_1;
    uVar6 = param_1[1];
    uVar8 = 0;
    do {
      if (uVar6 < 2) {
LAB_00ae194c:
                    /* try { // try from 00ae1958 to 00be1973 has its CatchHandler @ 00ae1b20 */
        ERR_put_error(0x14,0x155,0x44,"ssl/t1_lib.c",0x3e1);
        goto LAB_00ae1870;
      }
                    /* try { // try from 00ae18d4 to 00be191b has its CatchHandler @ 00ae1b1c */
      bVar3 = *pbVar9;
      __base[uVar8] = (uint)bVar3 << 8;
      __base[uVar8] = (uint)CONCAT11(bVar3,pbVar9[1]);
      if ((uVar6 & 0xfffffffffffffffe) == 2) goto LAB_00ae194c;
      uVar7 = uVar6 - 4;
      uVar5 = (ulong)CONCAT11(pbVar9[2],pbVar9[3]);
      uVar6 = uVar7 - uVar5;
      if (uVar7 < uVar5) goto LAB_00ae194c;
      uVar8 = uVar8 + 1;
      pbVar9 = pbVar9 + uVar5 + 4;
    } while (uVar8 < __nmemb);
    if (uVar6 == 0) {
      qsort(__base,__nmemb,4,(__compar_fn_t)&LAB_00ae19e0);
      if (__nmemb < 2) {
        uVar10 = 1;
      }
      else {
        uVar8 = 1;
        uVar10 = 1;
        iVar4 = *__base;
        do {
          piVar1 = __base + uVar8;
          if (iVar4 == *piVar1) goto LAB_00ae1870;
          uVar8 = uVar8 + 1;
          iVar4 = *piVar1;
        } while (uVar8 < __nmemb);
      }
      goto LAB_00ae1874;
    }
    ERR_put_error(0x14,0x155,0x44,"ssl/t1_lib.c",999);
  }
LAB_00ae1870:
                    /* catch() { ... } // from try @ 00ae1aac with catch @ 00ae1870 */
  uVar10 = 0;
LAB_00ae1874:
  CRYPTO_free(__base);
  return uVar10;
}

