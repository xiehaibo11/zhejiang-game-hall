
/* ccvalue_to_luaval(lua_State*, cocos2d::Value const&) */

void ccvalue_to_luaval(lua_State *param_1,Value *param_2)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  vector *pvVar5;
  unordered_map *puVar6;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  switch(*(undefined4 *)(param_2 + 8)) {
  case 2:
    iVar3 = cocos2d::Value::asInt(param_2);
    lua_pushinteger(param_1,(long)iVar3);
    break;
  case 4:
  case 5:
    cocos2d::Value::asDouble(param_2);
    lua_pushnumber(param_1);
    break;
  case 6:
    uVar4 = cocos2d::Value::asBool(param_2);
    lua_pushboolean(param_1,uVar4 & 1);
    break;
  case 7:
    cocos2d::Value::asString();
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
    lua_pushstring(param_1,pvVar1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    break;
  case 8:
    pvVar5 = (vector *)cocos2d::Value::asValueVector(param_2);
    ccvaluevector_to_luaval(param_1,pvVar5);
    break;
  case 9:
    puVar6 = (unordered_map *)cocos2d::Value::asValueMap(param_2);
    ccvaluemap_to_luaval(param_1,puVar6);
    break;
  case 10:
    puVar6 = (unordered_map *)cocos2d::Value::asIntKeyMap(param_2);
    ccvaluemapintkey_to_luaval(param_1,puVar6);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

