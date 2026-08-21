
/* luaval_to_offmeshlinkdata(lua_State*, int, cocos2d::OffMeshLinkData*, char const*) */

uint luaval_to_offmeshlinkdata
               (lua_State *param_1,int param_2,OffMeshLinkData *param_3,char *param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = 0;
  if ((param_1 != (lua_State *)0x0) && (param_3 != (OffMeshLinkData *)0x0)) {
                    /* try { // try from 009d52a4 to 00ad52b7 has its CatchHandler @ 009d7ff8 */
    iVar2 = tolua_istable(param_1,param_2,0,auStack_58);
    if (iVar2 != 0) {
                    /* try { // try from 009d52bc to 00ad5327 has its CatchHandler @ 009d80cc */
      lua_pushstring(param_1,"startPosition");
      lua_gettable(param_1,param_2);
      iVar2 = lua_gettop(param_1);
      uVar4 = luaval_to_vec3(param_1,iVar2,(Vec3 *)param_3,"");
      lua_settop(param_1,0xfffffffe);
      if ((uVar4 & 1) != 0) {
        lua_pushstring(param_1,"endPosition");
        iVar2 = lua_gettop(param_1);
                    /* try { // try from 009d5328 to 00ad53db has its CatchHandler @ 009cee70 */
        uVar3 = luaval_to_vec3(param_1,iVar2,(Vec3 *)(param_3 + 0xc),"");
        lua_settop(param_1,0xfffffffe);
        goto LAB_009d5354;
      }
    }
    uVar3 = 0;
  }
LAB_009d5354:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

