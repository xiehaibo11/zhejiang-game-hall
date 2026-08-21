
void FUN_00c2fe4c(undefined8 param_1)

{
  int iVar1;
  char *__old;
  char *__new;
  
  __old = (char *)luaL_checklstring(param_1,1,0);
  __new = (char *)luaL_checklstring(param_1,2,0);
  iVar1 = rename(__old,__new);
  luaL_fileresult(param_1,iVar1 == 0,__old);
  return;
}

