
undefined8 FUN_00ac4410(long *param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  void *ptr;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  
  iVar1 = 0;
  for (plVar4 = (long *)*param_1; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[2]) {
    iVar12 = iVar1;
    if (((int)plVar4[1] != 0) &&
       (iVar12 = *(int *)(*plVar4 + 0x3c), *(int *)(*plVar4 + 0x3c) <= iVar1)) {
      iVar12 = iVar1;
    }
    iVar1 = iVar12;
  }
  ptr = (void *)CRYPTO_zalloc(-(ulong)(iVar1 + 1U >> 0x1f) & 0xfffffffc00000000 |
                              (ulong)(iVar1 + 1U) << 2,"ssl/ssl_ciph.c",0x3ba);
  if (ptr == (void *)0x0) {
    ERR_put_error(0x14,0xe7,0x41,"ssl/ssl_ciph.c",0x3bc);
    uVar3 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 00ac43a0 with catch @ 00ac4470 */
    for (plVar4 = (long *)*param_1; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[2]) {
      if ((int)plVar4[1] != 0) {
        lVar6 = (long)*(int *)(*plVar4 + 0x3c) * 4;
        *(int *)((long)ptr + lVar6) = *(int *)((long)ptr + lVar6) + 1;
      }
    }
    if (-1 < iVar1) {
      uVar5 = (long)iVar1;
      do {
        if (0 < *(int *)((long)ptr + uVar5 * 4)) {
          plVar7 = (long *)*param_1;
          plVar9 = (long *)*param_2;
          plVar10 = plVar9;
          plVar4 = plVar7;
          plVar11 = plVar9;
          if (plVar7 != (long *)0x0) {
            do {
              if (plVar11 == (long *)0x0) break;
              plVar11 = (long *)plVar4[2];
              plVar8 = plVar7;
              if (((uVar5 == *(uint *)(*plVar4 + 0x3c)) && ((int)plVar4[1] != 0)) &&
                 (plVar4 != plVar10)) {
                lVar6 = plVar4[3];
                plVar8 = plVar11;
                if (plVar4 != plVar7) {
                  plVar8 = plVar7;
                }
                plVar7 = plVar11;
                if (lVar6 != 0) {
                  *(long **)(lVar6 + 0x10) = plVar11;
                  plVar7 = (long *)plVar4[2];
                }
                if (plVar7 != (long *)0x0) {
                  plVar7[3] = lVar6;
                }
                plVar10[2] = (long)plVar4;
                plVar4[2] = 0;
                plVar4[3] = (long)plVar10;
                plVar10 = plVar4;
              }
              bVar2 = plVar4 != plVar9;
              plVar7 = plVar8;
              plVar4 = plVar11;
            } while (bVar2);
          }
          *param_1 = (long)plVar7;
          *param_2 = (long)plVar10;
        }
        bVar2 = 0 < (long)uVar5;
        uVar5 = uVar5 - 1;
      } while (bVar2);
    }
    CRYPTO_free(ptr);
    uVar3 = 1;
  }
  return uVar3;
}

