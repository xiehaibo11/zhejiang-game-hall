
/* lua_cocos2dx_3d_AttachNode_create(lua_State*) */

undefined8 lua_cocos2dx_3d_AttachNode_create(lua_State *param_1)

{
  int iVar1;
  ulong uVar2;
  Bone3D *pBVar3;
  void *pvVar4;
  
  iVar1 = lua_gettop();
                    /* try { // try from 00902424 to 00a02427 has its CatchHandler @ 00902524 */
                    /* try { // try from 00902428 to 00a02497 has its CatchHandler @ 0090217c */
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.Bone3D",0), (uVar2 & 1) != 0)) {
      pBVar3 = (Bone3D *)tolua_tousertype(param_1,2,0);
      pvVar4 = (void *)cocos2d::AttachNode::create(pBVar3);
      if (pvVar4 != (void *)0x0) {
                    /* catch() { ... } // from try @ 00902300 with catch @ 00902478
                       catch() { ... } // from try @ 00902408 with catch @ 00902478 */
                    /* catch() { ... } // from try @ 00902260 with catch @ 0090247c
                       catch() { ... } // from try @ 009023d8 with catch @ 0090247c */
                    /* catch() { ... } // from try @ 009021e0 with catch @ 00902480
                       catch() { ... } // from try @ 009023a8 with catch @ 00902480 */
                    /* catch() { ... } // from try @ 009021c4 with catch @ 00902484
                       catch() { ... } // from try @ 00902354 with catch @ 00902484 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.AttachNode");
        return 1;
                    /* try { // try from 00902498 to 00a0249b has its CatchHandler @ 009024ac */
      }
      lua_pushnil(param_1);
      return 1;
    }
                    /* try { // try from 009024c4 to 00a024c7 has its CatchHandler @ 009024d8 */
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_AttachNode_create\'",0);
  }
  else {
                    /* catch() { ... } // from try @ 00902498 with catch @ 009024ac */
                    /* catch() { ... } // from try @ 0090221c with catch @ 009024b0
                       catch() { ... } // from try @ 00902370 with catch @ 009024b0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.AttachNode:create",iVar1 + -1,1);
  }
                    /* catch() { ... } // from try @ 009024c4 with catch @ 009024d8 */
                    /* catch() { ... } // from try @ 00902298 with catch @ 009024dc
                       catch() { ... } // from try @ 0090238c with catch @ 009024dc */
  return 0;
}

