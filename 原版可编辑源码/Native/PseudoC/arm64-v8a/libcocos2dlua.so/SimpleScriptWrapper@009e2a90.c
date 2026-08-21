
/* universe::SimpleScriptWrapper::SimpleScriptWrapper(lua_State*, int) */

void __thiscall
universe::SimpleScriptWrapper::SimpleScriptWrapper
          (SimpleScriptWrapper *this,lua_State *param_1,int param_2)

{
  undefined4 uVar1;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__SimpleScriptWrapper_016a03e8;
  lua_pushvalue(param_1,param_2);
  uVar1 = luaL_ref(param_1,0xffffd8f0);
  *(undefined4 *)(this + 8) = uVar1;
  *(lua_State **)(this + 0x10) = param_1;
  return;
}

