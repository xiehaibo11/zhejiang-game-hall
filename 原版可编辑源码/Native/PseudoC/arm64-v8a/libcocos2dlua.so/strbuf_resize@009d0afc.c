
void strbuf_resize(undefined8 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  
  if (param_2 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_009d08d4("BUG: Invalid strbuf length requested");
  }
  uVar1 = *(uint *)(param_1 + 1);
  uVar5 = param_2 + 1;
  if ((int)uVar1 <= (int)uVar5) {
    iVar2 = *(int *)(param_1 + 2);
    uVar5 = uVar1;
    if (iVar2 < 0) {
      for (; (int)uVar5 <= param_2; uVar5 = -(iVar2 * uVar5)) {
      }
    }
    else {
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = (int)(uVar1 + iVar2 + -1) / iVar2;
      }
      uVar5 = iVar3 * iVar2;
    }
  }
  if (1 < *(int *)((long)param_1 + 0x1c)) {
    fprintf((FILE *)pthread_rwlock_tryrdlock,"strbuf(%lx) resize: %d => %d\n",param_1,(ulong)uVar1,
            (ulong)uVar5);
  }
  *(uint *)(param_1 + 1) = uVar5;
  pvVar4 = realloc((void *)*param_1,(long)(int)uVar5);
  *param_1 = pvVar4;
  if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_009d08d4("Out of memory");
  }
  *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
  return;
}

