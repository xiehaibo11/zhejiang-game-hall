
/* lua_cocos2dx_studio_Bone_removeDisplay(lua_State*) */

undefined4 lua_cocos2dx_studio_Bone_removeDisplay(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Bone *this;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
                    /* catch() { ... } // from try @ 009323d4 with catch @ 00932458 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0093246c to 00a3259b has its CatchHandler @ 0093246c
                       catch() { ... } // from try @ 0093246c with catch @ 0093246c
                       catch() { ... } // from try @ 0093261c with catch @ 0093246c */
  this = (Bone *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccs.Bone:removeDisplay");
    if ((uVar3 & 1) != 0) {
      cocostudio::Bone::removeDisplay(this,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0093250c;
    }
    tolua_error(param_1,&DAT_012cb33b,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Bone:removeDisplay",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0093250c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

