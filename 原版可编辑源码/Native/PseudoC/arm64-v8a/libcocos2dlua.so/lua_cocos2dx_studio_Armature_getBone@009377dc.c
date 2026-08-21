
/* lua_cocos2dx_studio_Armature_getBone(lua_State*) */

undefined4 lua_cocos2dx_studio_Armature_getBone(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  undefined4 uVar6;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"ccs.Armature:getBone");
                    /* try { // try from 00937844 to 00a37887 has its CatchHandler @ 00937844
                       catch() { ... } // from try @ 00937844 with catch @ 00937844
                       catch() { ... } // from try @ 00937890 with catch @ 00937844
                       catch() { ... } // from try @ 009378c8 with catch @ 00937844 */
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_studio_Armature_getBone\'",0
                 );
      uVar6 = 0;
    }
    else {
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x548))(plVar3,&local_50);
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "ccs.Bone");
      }
      uVar6 = 1;
    }
    if ((local_50 & 1) != 0) {
                    /* try { // try from 009378c4 to 00a378c7 has its CatchHandler @ 00937954 */
                    /* try { // try from 009378c8 to 00a3796b has its CatchHandler @ 00937844 */
      operator_delete(local_40);
    }
  }
  else {
                    /* try { // try from 00937888 to 00a3788f has its CatchHandler @ 00937958 */
                    /* try { // try from 00937890 to 00a378c3 has its CatchHandler @ 00937844 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Armature:getBone",iVar2 + -1,1);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

