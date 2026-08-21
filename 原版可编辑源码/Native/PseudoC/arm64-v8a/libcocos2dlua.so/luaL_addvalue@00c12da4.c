
void luaL_addvalue(long *param_1)

{
  int iVar1;
  long *plVar2;
  void *__src;
  void *__dest;
  long lVar3;
  ulong local_8;
  
  plVar2 = param_1 + 3;
  lVar3 = param_1[2];
  __src = (void *)lua_tolstring(lVar3,0xffffffff,&local_8);
  __dest = (void *)*param_1;
  if ((ulong)((long)plVar2 + (0x400 - (long)__dest)) < local_8) {
    if ((long)__dest - (long)plVar2 == 0) {
      iVar1 = (int)param_1[1] + 1;
      *(int *)(param_1 + 1) = iVar1;
    }
    else {
      lua_pushlstring(param_1[2],plVar2,(long)__dest - (long)plVar2);
      *param_1 = (long)plVar2;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      lua_insert(lVar3,0xfffffffe);
      iVar1 = (int)param_1[1] + 1;
      *(int *)(param_1 + 1) = iVar1;
    }
    if (1 < iVar1) {
      FUN_00c12700(param_1 + 1,param_1 + 2);
    }
    return;
  }
  memcpy(__dest,__src,local_8);
  *param_1 = *param_1 + local_8;
  lua_settop(lVar3,0xfffffffe);
  return;
}

