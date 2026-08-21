
undefined8 FUN_00c1266c(undefined8 param_1)

{
  char *__s;
  
  __s = (char *)lua_tolstring(param_1,0xffffffff,0);
  fwrite("PANIC: unprotected error in call to Lua API (",1,0x2d,(FILE *)pthread_rwlock_tryrdlock);
  if (__s == (char *)0x0) {
    __s = "?";
  }
  fputs(__s,(FILE *)pthread_rwlock_tryrdlock);
  fputc(0x29,(FILE *)pthread_rwlock_tryrdlock);
  fputc(10,(FILE *)pthread_rwlock_tryrdlock);
  fflush((FILE *)pthread_rwlock_tryrdlock);
  return 0;
}

