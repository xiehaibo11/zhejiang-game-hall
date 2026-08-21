
int cpMessage(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4,undefined8 param_5,
             char *param_6,undefined8 param_7,undefined8 param_8)

{
  char *__format;
  int iVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 **ppuStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  __format = "Aborting due to Chipmunk error: ";
  if (param_4 == 0) {
    __format = "Chipmunk warning: ";
  }
  local_90 = param_7;
  uStack_88 = param_8;
  fprintf((FILE *)pthread_rwlock_tryrdlock,__format);
  puStack_70 = &local_90;
  ppuStack_78 = &local_80;
  uStack_68 = 0xffffff80fffffff0;
  local_80 = (undefined1 *)register0x00000008;
  vfprintf((FILE *)pthread_rwlock_tryrdlock,param_6,&local_80);
  fputc(10,(FILE *)pthread_rwlock_tryrdlock);
  fprintf((FILE *)pthread_rwlock_tryrdlock,"\tFailed condition: %s\n",param_1);
  iVar1 = fprintf((FILE *)pthread_rwlock_tryrdlock,"\tSource:%s:%d\n",param_2,param_3 & 0xffffffff);
  return iVar1;
}

