
/* register_dragonbones_module(lua_State*) */

undefined8 register_dragonbones_module(lua_State *param_1)

{
                    /* try { // try from 00960348 to 00a6037b has its CatchHandler @ 00960448 */
  tolua_open();
  tolua_module(param_1,"db",0);
                    /* try { // try from 0096037c to 00a6038f has its CatchHandler @ 00960414 */
  tolua_beginmodule(param_1,"db");
  lua_register_dragonbones_Slot(param_1);
  lua_register_dragonbones_IAnimatable(param_1);
                    /* try { // try from 00960394 to 00a603c7 has its CatchHandler @ 00960418 */
  lua_register_dragonbones_AnimationState(param_1);
  lua_register_dragonbones_BaseFactory(param_1);
  lua_register_dragonbones_Animation(param_1);
  lua_register_dragonbones_CCFactory(param_1);
  lua_register_dragonbones_CCSlot(param_1);
  lua_register_dragonbones_Armature(param_1);
  lua_register_dragonbones_WorldClock(param_1);
                    /* try { // try from 009603c8 to 00a60463 has its CatchHandler @ 00960278 */
  lua_register_dragonbones_CCArmatureDisplay(param_1);
  tolua_endmodule(param_1);
  return 1;
}

