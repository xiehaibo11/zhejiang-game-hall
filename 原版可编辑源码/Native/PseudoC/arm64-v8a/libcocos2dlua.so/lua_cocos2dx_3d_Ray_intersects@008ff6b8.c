
/* lua_cocos2dx_3d_Ray_intersects(lua_State*) */

undefined8 lua_cocos2dx_3d_Ray_intersects(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  Ray *this;
  ulong uVar3;
  OBB *pOVar4;
  AABB *pAVar5;
  
  this = (Ray *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (param_1 != (lua_State *)0x0) {
      iVar1 = lua_gettop(param_1);
                    /* try { // try from 008ff70c to 009ff757 has its CatchHandler @ 008ff70c
                       catch() { ... } // from try @ 008ff70c with catch @ 008ff70c
                       catch() { ... } // from try @ 008ff75c with catch @ 008ff70c */
      if ((iVar1 < 2) || (uVar3 = luaval_is_usertype(param_1,2,"cc.OBB",0), (uVar3 & 1) == 0)) {
        iVar1 = lua_gettop(param_1);
        if (iVar1 < 2) {
          return 0;
        }
                    /* catch() { ... } // from try @ 008ff758 with catch @ 008ff790 */
        uVar3 = luaval_is_usertype(param_1,2,"cc.AABB",0);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
                    /* try { // try from 008ff7a4 to 009ffacb has its CatchHandler @ 008ff7a4
                       catch() { ... } // from try @ 008ff7a4 with catch @ 008ff7a4
                       catch() { ... } // from try @ 008ffb4c with catch @ 008ff7a4 */
        pAVar5 = (AABB *)tolua_tousertype(param_1,2,0);
        uVar2 = cocos2d::Ray::intersects(this,pAVar5,(float *)0x0);
      }
      else {
        pOVar4 = (OBB *)tolua_tousertype(param_1,2,0);
        uVar2 = cocos2d::Ray::intersects(this,pOVar4,(float *)0x0);
      }
      tolua_pushboolean(param_1,uVar2 & 1);
      return 1;
    }
  }
  else {
                    /* try { // try from 008ff758 to 009ff75b has its CatchHandler @ 008ff790 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Ray:intersects",iVar1 + -1,1);
  }
                    /* try { // try from 008ff75c to 009ff7a3 has its CatchHandler @ 008ff70c */
  return 0;
}

