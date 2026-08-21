
/* lua_cocos2dx_AsyncTaskPool_constructor(lua_State*) */

bool lua_cocos2dx_AsyncTaskPool_constructor(lua_State *param_1)

{
  int iVar1;
  undefined4 uVar2;
  AsyncTaskPool *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(600);
    cocos2d::AsyncTaskPool::AsyncTaskPool(this);
    tolua_pushusertype(param_1,this,"cc.AsyncTaskPool");
    uVar2 = lua_gettop(param_1);
    tolua_register_gc(param_1,uVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AsyncTaskPool:AsyncTaskPool",iVar1,0);
  }
  return iVar1 == 0;
}

