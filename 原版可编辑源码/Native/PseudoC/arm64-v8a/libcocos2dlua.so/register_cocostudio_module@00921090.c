
/* register_cocostudio_module(lua_State*) */

undefined8 register_cocostudio_module(lua_State *param_1)

{
  int iVar1;
  
                    /* try { // try from 009210a8 to 00a210f3 has its CatchHandler @ 009210a8
                       catch() { ... } // from try @ 009210a8 with catch @ 009210a8
                       catch() { ... } // from try @ 009210f8 with catch @ 009210a8 */
  lua_getfield(param_1,0xffffd8ee,&DAT_01276ae5);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    register_all_cocos2dx_studio(param_1);
    register_all_cocos2dx_csloader(param_1);
    register_all_cocos2dx_coco_studio_manual(param_1);
    register_all_cocos2dx_csloader_manual(param_1);
    lua_register_cocos2dx_coco_studio_CustomGUIReader(param_1);
  }
                    /* try { // try from 009210f4 to 00a210f7 has its CatchHandler @ 0092114c */
  lua_settop(param_1,0xfffffffe);
                    /* try { // try from 009210f8 to 00a2115f has its CatchHandler @ 009210a8 */
  return 1;
}

