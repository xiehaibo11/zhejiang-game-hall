
/* universe::create_function(lua_State*, int, int*, universe::Literally*, char const*) */

undefined8
universe::create_function
          (lua_State *param_1,int param_2,int *param_3,Literally *param_4,char *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  
  iVar1 = lua_type();
  if (iVar1 == 6) {
    puVar2 = operator_new(0x18);
    puVar2[2] = 0;
    *puVar2 = &PTR__SimpleScriptWrapper_016a03e8;
    lua_pushvalue(param_1,param_2);
    iVar1 = luaL_ref(param_1,0xffffd8f0);
    *(int *)(puVar2 + 1) = iVar1;
    puVar2[2] = param_1;
    plVar4 = *(long **)(param_4 + 8);
    *(undefined8 **)(param_4 + 8) = puVar2;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
      iVar1 = *(int *)(puVar2 + 1);
    }
    *param_3 = iVar1;
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s: arg %d is not a function",param_5,param_2);
    uVar3 = 0;
  }
  return uVar3;
}

