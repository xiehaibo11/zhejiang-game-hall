
void FUN_008d8e14(long param_1,undefined8 *param_2)

{
  long lVar1;
  
                    /* try { // try from 008d8e24 to 009d8e2f has its CatchHandler @ 008d9128 */
                    /* try { // try from 008d8e34 to 009d8e57 has its CatchHandler @ 008d915c */
  object_to_luaval<fairygui::EventContext>
            (*(lua_State **)(param_1 + 8),"fairygui.EventContext",(EventContext *)*param_2);
  lVar1 = cocos2d::LuaEngine::getInstance();
                    /* WARNING: Could not recover jumptable at 0x008d8e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 8) + 200))
            (*(long **)(lVar1 + 8),*(undefined4 *)(param_1 + 0x10),1);
  return;
}

