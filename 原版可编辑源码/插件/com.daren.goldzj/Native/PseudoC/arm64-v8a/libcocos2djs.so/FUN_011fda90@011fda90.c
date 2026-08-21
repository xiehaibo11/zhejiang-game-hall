
void FUN_011fda90(undefined8 *param_1,FILE *param_2,undefined1 *param_3,ulong param_4,
                 undefined8 param_5)

{
  int iVar1;
  ulong __n;
  void *__s;
  size_t sVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  
  if ((param_2 == (FILE *)0x0) || (iVar1 = fseek(param_2,0,2), iVar1 != 0)) {
    if ((param_4 & 1) != 0) {
      v8::base::OS::PrintError("Cannot read from file %s.\n",param_5);
    }
    *param_3 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  __n = ftell(param_2);
  rewind(param_2);
  if (__n == 0) {
    lVar6 = 0;
    pvVar7 = (void *)0x0;
    __s = (void *)0x0;
    goto LAB_011fdc04;
  }
  if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __s = operator_new(__n);
  lVar6 = (long)__s + __n;
  memset(__s,0,__n);
  uVar3 = __n;
  pvVar7 = __s;
  if (__n < 2) {
LAB_011fdb60:
    do {
      uVar3 = uVar3 - 1;
      pvVar7 = (void *)((long)pvVar7 + 1);
    } while (uVar3 != 0);
  }
  else {
    uVar4 = __n & 0xfffffffffffffffe;
    pvVar7 = (void *)((long)__s + uVar4);
    uVar3 = __n - uVar4;
    uVar5 = uVar4;
    do {
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
    if (__n != uVar4) goto LAB_011fdb60;
  }
  if (0 < (long)__n) {
    lVar8 = 0;
    do {
      iVar1 = feof(param_2);
      if (iVar1 != 0) break;
      sVar2 = fread((void *)((long)__s + lVar8),1,__n - lVar8,param_2);
      if ((sVar2 != __n - lVar8) && (iVar1 = ferror(param_2), iVar1 != 0)) {
        fclose(param_2);
        *param_3 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        operator_delete(__s);
        return;
      }
      lVar8 = sVar2 + lVar8;
    } while (lVar8 < (long)__n);
  }
LAB_011fdc04:
  *param_3 = 1;
  *param_1 = __s;
  param_1[1] = pvVar7;
  param_1[2] = lVar6;
  return;
}

