
void FUN_009d2b08(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  
                    /* try { // try from 009d2b10 to 00ad2b7b has its CatchHandler @ 009d8120 */
  lua_createtable(param_1,0,0);
  uVar2 = lua_gettop(param_1);
  lua_pushstring(param_1,"name");
  lua_pushstring(param_1,*param_2);
  lua_settable(param_1,uVar2);
  lua_pushstring(param_1,"ip");
  lua_pushstring(param_1,"alias");
  plVar4 = (long *)param_2[1];
  lua_createtable(param_1,0,0);
  if ((plVar4 != (long *)0x0) && (*plVar4 != 0)) {
    lVar5 = 0;
    do {
      plVar1 = plVar4 + lVar5;
      lVar5 = lVar5 + 1;
      lua_pushnumber((double)(int)lVar5,param_1);
      lua_pushstring(param_1,*plVar1);
      lua_settable(param_1,0xfffffffd);
    } while (plVar1[1] != 0);
  }
  lua_settable(param_1,uVar2);
  lua_createtable(param_1,0,0);
  plVar4 = (long *)param_2[3];
                    /* try { // try from 009d2bfc to 00ad2c0f has its CatchHandler @ 009d8024 */
  if ((plVar4 != (long *)0x0) && (*plVar4 != 0)) {
    lVar5 = 0;
    do {
                    /* try { // try from 009d2c14 to 00ad2c7f has its CatchHandler @ 009d811c */
      plVar1 = plVar4 + lVar5;
      lua_pushnumber((double)(int)(lVar5 + 1),param_1);
      pcVar3 = inet_ntoa((in_addr)*(in_addr_t *)*plVar1);
      lua_pushstring(param_1,pcVar3);
      lua_settable(param_1,0xfffffffd);
      lVar5 = lVar5 + 1;
    } while (plVar1[1] != 0);
  }
  lua_settable(param_1,uVar2);
  return;
}

