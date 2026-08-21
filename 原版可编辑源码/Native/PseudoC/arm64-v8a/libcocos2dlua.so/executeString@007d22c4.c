
/* cocos2d::LuaStack::executeString(char const*) */

void cocos2d::LuaStack::executeString(char *param_1)

{
  luaL_loadstring(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x007d22f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0xc0))(param_1,0);
  return;
}

