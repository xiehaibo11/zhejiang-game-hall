
void * FUN_01852124(size_t *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  
  uVar3 = param_1[1];
  if (uVar3 < 9) {
    pvVar1 = malloc(*param_1 + 8);
    if (pvVar1 != (void *)0x0) {
      *(void **)pvVar1 = pvVar1;
      pvVar1 = (void *)((long)pvVar1 + 8);
LAB_01852188:
      if ((void *)param_1[3] == (void *)0x0) {
        memset(pvVar1,0,*param_1);
      }
      else {
        memcpy(pvVar1,(void *)param_1[3],*param_1);
      }
      return pvVar1;
    }
  }
  else {
    pvVar2 = malloc(uVar3 + *param_1 + 7);
    if (pvVar2 != (void *)0x0) {
      pvVar1 = (void *)((long)pvVar2 + uVar3 + 7 & -uVar3);
      *(void **)((long)pvVar1 - 8) = pvVar2;
      goto LAB_01852188;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

