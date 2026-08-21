
/* lua_cocos2dx_3d_Mesh_getMeshVertexAttribute(lua_State*) */

void lua_cocos2dx_3d_Mesh_getMeshVertexAttribute(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Mesh *this;
  ulong uVar3;
  MeshVertexAttrib *pMVar4;
  undefined8 uVar5;
  int local_3c;
  long local_38;
  
                    /* try { // try from 00903384 to 00a033b7 has its CatchHandler @ 00903484 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Mesh *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 009033b8 to 00a033cb has its CatchHandler @ 00903450 */
  if (iVar2 + -1 == 1) {
                    /* try { // try from 009033d0 to 00a03403 has its CatchHandler @ 00903454 */
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"cc.Mesh:getMeshVertexAttribute");
    if ((uVar3 & 1) != 0) {
      pMVar4 = (MeshVertexAttrib *)cocos2d::Mesh::getMeshVertexAttribute(this,local_3c);
      mesh_vertex_attrib_to_luaval(param_1,pMVar4);
      uVar5 = 1;
      goto LAB_00903434;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_3d_Mesh_getMeshVertexAttribute\'",0);
  }
  else {
                    /* try { // try from 00903404 to 00a0349f has its CatchHandler @ 009032b4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Mesh:getMeshVertexAttribute",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00903434:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 009033b8 with catch @ 00903450 */
                    /* catch() { ... } // from try @ 009033d0 with catch @ 00903454 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

