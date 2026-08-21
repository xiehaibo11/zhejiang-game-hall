
undefined4 FUN_00e1025c(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  void *__ptr;
  void *__ptr_00;
  ssize_t sVar5;
  int *piVar6;
  char *pcVar7;
  ulong __n;
  long lVar8;
  uint uVar9;
  
  puVar1 = (undefined8 *)(param_1 + 0x1e);
  if (param_1[10] == 0) {
    uVar9 = param_1[0xb];
    __ptr = malloc((ulong)uVar9);
    *(void **)(param_1 + 0xc) = __ptr;
    __ptr_00 = malloc((ulong)(uVar9 << 1));
    *(void **)(param_1 + 0xe) = __ptr_00;
    if ((__ptr == (void *)0x0) || (__ptr_00 == (void *)0x0)) {
      if (__ptr_00 != (void *)0x0) {
        free(__ptr_00);
        __ptr = *(void **)(param_1 + 0xc);
      }
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
LAB_00e103ac:
      FUN_00e0f54c(param_1,0xfffffffc,"out of memory");
      return 0xffffffff;
    }
    param_1[0x20] = 0;
    param_1[10] = uVar9;
    *(undefined8 *)(param_1 + 0x1e) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x32) = 0;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    iVar4 = inflateInit2_(puVar1,0x1f,"1.2.8",0x70);
    if (iVar4 != 0) {
      free(*(void **)(param_1 + 0xe));
      free(*(void **)(param_1 + 0xc));
      param_1[10] = 0;
      goto LAB_00e103ac;
    }
  }
  uVar9 = param_1[0x20];
  __n = (ulong)uVar9;
  if (uVar9 < 2) {
    if ((param_1[0x1b] != 0) && (param_1[0x1b] != -5)) {
      return 0xffffffff;
    }
    if (param_1[0x14] == 0) {
      if (uVar9 != 0) {
        **(undefined1 **)(param_1 + 0xc) = **(undefined1 **)(param_1 + 0x1e);
        __n = (ulong)(uint)param_1[0x20];
      }
      lVar8 = *(long *)(param_1 + 0xc);
      uVar9 = 0;
      uVar3 = param_1[10] - (int)__n;
      do {
        sVar5 = read(param_1[7],(void *)(lVar8 + __n + (ulong)uVar9),(ulong)(uVar3 - uVar9));
        iVar4 = (int)sVar5;
        if (iVar4 < 1) {
          if (iVar4 < 0) {
            piVar6 = (int *)__errno();
            pcVar7 = strerror(*piVar6);
            FUN_00e0f54c(param_1,0xffffffff,pcVar7);
            return 0xffffffff;
          }
          param_1[0x14] = 1;
          break;
        }
        uVar9 = uVar9 + iVar4;
      } while (uVar9 < uVar3);
      uVar9 = param_1[0x20] + uVar9;
      __n = (ulong)uVar9;
      param_1[0x20] = uVar9;
      *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_1 + 0xc);
    }
    if (uVar9 == 0) {
      return 0;
    }
    if ((int)__n == 1) goto LAB_00e102e8;
  }
  if ((*(char *)*puVar1 == '\x1f') && (((char *)*puVar1)[1] == -0x75)) {
    inflateReset(puVar1);
    *(undefined8 *)(param_1 + 0x10) = 0x200000000;
    return 0;
  }
LAB_00e102e8:
  if (param_1[0x10] == 0) {
    param_1[0x20] = 0;
    param_1[0x14] = 1;
    *param_1 = 0;
  }
  else {
    *(void **)(param_1 + 2) = *(void **)(param_1 + 0xe);
    memcpy(*(void **)(param_1 + 0xe),*(void **)(param_1 + 0x1e),__n);
    uVar2 = param_1[0x20];
    param_1[0x20] = 0;
    *param_1 = uVar2;
    *(undefined8 *)(param_1 + 0x10) = 0x100000001;
  }
  return 0;
}

