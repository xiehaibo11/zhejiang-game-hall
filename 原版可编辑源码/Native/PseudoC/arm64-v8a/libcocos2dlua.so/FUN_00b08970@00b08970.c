
int FUN_00b08970(BIO *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  void *__src;
  int line;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if (param_2 == (void *)0x0) {
    iVar3 = 0x73;
    line = 0xcf;
  }
  else {
    if ((*(byte *)((long)&param_1->flags + 1) >> 1 & 1) == 0) {
      plVar5 = param_1->ptr;
      BIO_clear_flags(param_1,0xf);
      uVar6 = *(undefined8 *)plVar5[1];
      if ((param_1->init != 0) && (plVar4 = param_1->ptr, plVar4 != (long *)0x0)) {
        __src = (void *)((size_t *)plVar4[1])[1];
        if (__src != *(void **)(*plVar4 + 8)) {
          memmove(*(void **)(*plVar4 + 8),__src,*(size_t *)plVar4[1]);
          puVar1 = (undefined8 *)*plVar4;
          puVar2 = (undefined8 *)plVar4[1];
          *puVar1 = *puVar2;
          puVar2[1] = puVar1[1];
        }
      }
      iVar3 = BUF_MEM_grow_clean((BUF_MEM *)*plVar5,(long)((int)uVar6 + param_3));
      if (iVar3 == 0) {
        return -1;
      }
      memcpy((void *)(*(long *)(*plVar5 + 8) + (long)(int)uVar6),param_2,(long)param_3);
      puVar1 = (undefined8 *)*plVar5;
      puVar2 = (undefined8 *)plVar5[1];
      uVar6 = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[2] = uVar6;
      uVar6 = *puVar1;
      puVar2[1] = puVar1[1];
      *puVar2 = uVar6;
      return param_3;
    }
    iVar3 = 0x7e;
    line = 0xd3;
  }
  ERR_put_error(0x20,0x75,iVar3,"crypto/bio/bss_mem.c",line);
  return -1;
}

