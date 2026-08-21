
/* lua_cocos2dx_spine_SkeletonRenderer_create(lua_State*) */

undefined8 lua_cocos2dx_spine_SkeletonRenderer_create(lua_State *param_1)

{
  int iVar1;
  SkeletonRenderer *this;
  ulong uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 != 0) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",0x12d1a0a,
               iVar1 + -1,0);
    return 0;
  }
  this = operator_new(0x3b0,(nothrow_t *)&std::nothrow);
  if (this != (SkeletonRenderer *)0x0) {
    spine::SkeletonRenderer::SkeletonRenderer(this);
    uVar2 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar2 & 1) != 0) {
      cocos2d::Ref::autorelease((Ref *)this);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"sp.SkeletonRenderer");
      return 1;
    }
                    /* try { // try from 00951030 to 00a5107b has its CatchHandler @ 00951030
                       catch() { ... } // from try @ 00951030 with catch @ 00951030
                       catch() { ... } // from try @ 00951080 with catch @ 00951030 */
    (**(code **)(*(long *)this + 8))(this);
  }
  lua_pushnil(param_1);
  return 1;
}

