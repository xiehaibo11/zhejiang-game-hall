
void FUN_00c2fea8(undefined8 param_1)

{
  int iVar1;
  char *__filename;
  
  __filename = (char *)luaL_checklstring(param_1,1,0);
  iVar1 = remove(__filename);
  luaL_fileresult(param_1,iVar1 == 0,__filename);
  return;
}

