
undefined8 * FUN_009fdf6c(long param_1,void *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong __n;
  void *__s;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  
  if (param_2 == (void *)0x0) {
    return (undefined8 *)0x0;
  }
  __n = param_3 - (long)param_2;
  uVar4 = __n >> 5;
  if (uVar4 < __n) {
    uVar9 = __n & 0xffffffff;
    uVar5 = __n;
    do {
      lVar11 = uVar5 - 1;
      uVar8 = (uint)uVar9;
      uVar5 = uVar5 + ~uVar4;
      uVar9 = (ulong)(uVar8 * 0x20 + (uVar8 >> 2) + (uint)*(byte *)((long)param_2 + lVar11) ^ uVar8)
      ;
    } while (uVar4 < uVar5);
    __s = *(void **)(param_1 + 0x30);
  }
  else {
    uVar9 = __n & 0xffffffff;
    __s = *(void **)(param_1 + 0x30);
  }
  if (__s != (void *)0x0) {
    for (plVar10 = *(long **)((long)__s + (*(int *)(param_1 + 0x20) - 1 & uVar9) * 8);
        plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      uVar4 = plVar10[1];
      if (((int)uVar9 == (int)uVar4) && (__n == (uVar4 >> 0x20 & 0xffff))) {
        iVar2 = memcmp(param_2,plVar10 + 2,__n);
        if (iVar2 == 0) {
          plVar10[1] = uVar4 + 0x1000000000000;
          return plVar10 + 2;
        }
      }
    }
  }
  uVar4 = *(ulong *)(param_1 + 0x20);
  if (*(ulong *)(param_1 + 0x28) < uVar4) {
LAB_009fe064:
    puVar3 = malloc(__n + 0x11);
    if (puVar3 != (undefined8 *)0x0) {
      lVar11 = ((int)uVar4 - 1 & uVar9) * 8;
      *puVar3 = *(undefined8 *)((long)__s + lVar11);
      puVar3[1] = uVar9 | (__n & 0xffff) << 0x20 | 0x1000000000000;
      memcpy(puVar3 + 2,param_2,__n);
      *(undefined1 *)((long)(puVar3 + 2) + __n) = 0;
      *(undefined8 **)((long)__s + lVar11) = puVar3;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    }
  }
  else {
    uVar5 = 0x10;
    do {
      uVar6 = uVar5;
      if (0x1ffffffffffffff2 < uVar6) break;
      uVar5 = uVar6 << 1;
    } while (uVar6 < uVar4 << 1);
    if (uVar4 << 1 <= uVar6) {
                    /* try { // try from 009fe0f4 to 00afe18b has its CatchHandler @ 009fe0f4
                       catch() { ... } // from try @ 009fe0f4 with catch @ 009fe0f4
                       catch() { ... } // from try @ 009fe19c with catch @ 009fe0f4
                       catch() { ... } // from try @ 009fe1e8 with catch @ 009fe0f4 */
      __s = malloc(uVar6 << 3);
      if (__s != (void *)0x0) {
        memset(__s,0,uVar6 << 3);
        if (uVar4 == 0) {
          puVar3 = *(undefined8 **)(param_1 + 0x30);
        }
        else {
          puVar3 = *(undefined8 **)(param_1 + 0x30);
          uVar5 = 0;
          puVar7 = (undefined8 *)*puVar3;
          while( true ) {
            while (puVar7 != (undefined8 *)0x0) {
              puVar1 = (undefined8 *)*puVar7;
              lVar11 = ((ulong)((int)uVar6 - 1) & puVar7[1]) * 8;
              *puVar7 = *(undefined8 *)((long)__s + lVar11);
              *(undefined8 **)((long)__s + lVar11) = puVar7;
              puVar7 = puVar1;
            }
            uVar5 = uVar5 + 1;
            if (uVar5 == uVar4) break;
            puVar7 = (undefined8 *)puVar3[uVar5];
          }
        }
        free(puVar3);
        *(void **)(param_1 + 0x30) = __s;
        *(ulong *)(param_1 + 0x20) = uVar6;
        uVar4 = uVar6;
        if (uVar6 != 0) goto LAB_009fe064;
      }
    }
    puVar3 = (undefined8 *)0x0;
  }
  puVar7 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    puVar7 = puVar3 + 2;
  }
                    /* try { // try from 009fe18c to 00afe19b has its CatchHandler @ 009fe23c */
                    /* try { // try from 009fe19c to 00afe1df has its CatchHandler @ 009fe0f4 */
  return puVar7;
}

