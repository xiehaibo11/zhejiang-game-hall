
undefined8 FUN_0013f0d4(long *param_1,uint param_2)

{
  int iVar1;
  void *__ptr;
  long lVar2;
  int *piVar3;
  
  lVar2 = param_1[0x25];
  piVar3 = (int *)(lVar2 + 0x38);
  if (*piVar3 != 0) {
    do {
      __ptr = (void *)FUN_00138300(lVar2 + 8,param_2 & 1);
      if (__ptr == (void *)0x0) {
        return 1;
      }
      *piVar3 = *piVar3 + -1;
      if (*(long *)((long)__ptr + 0x18) == 0) {
        free(__ptr);
        return 0;
      }
      iVar1 = (**(code **)(*param_1 + 0x18))
                        (*param_1,*(undefined8 *)((long)__ptr + 0x20),*(long *)((long)__ptr + 8),
                         *(long *)((long)__ptr + 8) + *(long *)((long)__ptr + 0x18));
      if (iVar1 == 0) {
        FUN_0013fb24(&DAT_0016ba80,"self->_stream->write(self->_stream,backPos,data,data+len)",
                     DAT_0016ba88);
        FUN_0013fb24(&DAT_0016ba80,"_writeBack(self,work->writePos,work->code,work->codeSize)",
                     DAT_0016ba88);
        return 0;
      }
      free(__ptr);
      lVar2 = param_1[0x25];
      piVar3 = (int *)(lVar2 + 0x38);
    } while (*piVar3 != 0);
  }
  return 1;
}

