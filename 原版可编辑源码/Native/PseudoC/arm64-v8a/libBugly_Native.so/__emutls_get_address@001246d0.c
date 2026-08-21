
/* WARNING: Removing unreachable block (ram,0x001246f4) */
/* WARNING: Removing unreachable block (ram,0x001246fc) */
/* WARNING: Removing unreachable block (ram,0x00124704) */

long __emutls_get_address(long param_1)

{
  ulong uVar1;
  undefined8 *__ptr;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 == 0) {
    pthread_once((pthread_once_t *)&DAT_00176ee0,FUN_00124558);
    pthread_mutex_lock((pthread_mutex_t *)&DAT_00176ee8);
    uVar3 = *(ulong *)(param_1 + 0x10);
    if (uVar3 == 0) {
      uVar3 = DAT_00176f10 + 1;
      DAT_00176f10 = uVar3;
      *(ulong *)(param_1 + 0x10) = uVar3;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00176ee8);
  }
  __ptr = pthread_getspecific(DAT_00176ed8);
  if (__ptr == (undefined8 *)0x0) {
    __ptr = calloc(uVar3 + 0x22,8);
    if (__ptr == (undefined8 *)0x0) {
LAB_00124788:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *__ptr = 1;
    __ptr[1] = uVar3 + 0x20;
  }
  else {
    uVar4 = __ptr[1];
    if (uVar3 <= uVar4) goto LAB_001247fc;
    uVar1 = uVar3 + 0x20;
    if (uVar3 <= uVar4 * 2) {
      uVar1 = uVar4 * 2;
    }
    __ptr = realloc(__ptr,(uVar1 + 2) * 8);
    if (__ptr == (undefined8 *)0x0) goto LAB_00124788;
    __ptr[1] = uVar1;
    memset(__ptr + uVar4 + 2,0,(uVar1 - uVar4) * 8);
  }
  pthread_setspecific(DAT_00176ed8,__ptr);
LAB_001247fc:
  lVar2 = __ptr[uVar3 + 1];
  if (lVar2 == 0) {
    lVar2 = FUN_00124618(param_1);
    __ptr[uVar3 + 1] = lVar2;
  }
  return lVar2;
}

