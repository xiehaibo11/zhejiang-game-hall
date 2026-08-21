
/* WARNING: Removing unreachable block (ram,0x00909ae0) */
/* WARNING: Removing unreachable block (ram,0x00909b34) */
/* WARNING: Removing unreachable block (ram,0x00909aec) */
/* WARNING: Removing unreachable block (ram,0x00909af4) */
/* WARNING: Removing unreachable block (ram,0x00909b0c) */
/* WARNING: Removing unreachable block (ram,0x00909b38) */
/* lua_cocos2dx_3d_Bundle3D_loadMaterials(lua_State*) */

undefined8 lua_cocos2dx_3d_Bundle3D_loadMaterials(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Bundle3D_loadMaterials\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Bundle3D:loadMaterials",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00909b64 to 00a09baf has its CatchHandler @ 00909b64
                       catch() { ... } // from try @ 00909b64 with catch @ 00909b64
                       catch() { ... } // from try @ 00909be0 with catch @ 00909b64 */
  return 0;
}

