
undefined8 lua_newstate(void)

{
  fwrite("Must use luaL_newstate() for 64 bit target\n",1,0x2b,(FILE *)pthread_rwlock_tryrdlock);
  return 0;
}

