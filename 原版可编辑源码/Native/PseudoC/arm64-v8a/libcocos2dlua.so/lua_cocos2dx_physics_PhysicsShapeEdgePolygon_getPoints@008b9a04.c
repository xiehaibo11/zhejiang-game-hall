
/* lua_cocos2dx_physics_PhysicsShapeEdgePolygon_getPoints(lua_State*) */

undefined8 lua_cocos2dx_physics_PhysicsShapeEdgePolygon_getPoints(lua_State *param_1)

{
  int iVar1;
  PhysicsShapeEdgePolygon *this;
  undefined8 uVar2;
  ulong uVar3;
  Vec2 *__s;
  Vec2 *pVVar4;
  
  this = (PhysicsShapeEdgePolygon *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    uVar3 = cocos2d::PhysicsShapeEdgePolygon::getPointsCount(this);
    iVar1 = (int)uVar3;
    uVar3 = -(uVar3 >> 0x1f & 1) & 0xfffffff800000000 | (uVar3 & 0xffffffff) << 3;
    if ((ulong)(long)iVar1 >> 0x3d != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    __s = operator_new__(uVar3,(nothrow_t *)&std::nothrow);
    if (__s == (Vec2 *)0x0) {
      pVVar4 = (Vec2 *)0x0;
    }
    else {
      pVVar4 = __s;
      if (iVar1 != 0) {
        memset(__s,0,(long)iVar1 << 3);
      }
    }
    cocos2d::PhysicsShapeEdgePolygon::getPoints(this);
    vec2_array_to_luaval(param_1,pVVar4,iVar1);
    if (pVVar4 != (Vec2 *)0x0) {
      operator_delete__(__s);
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","getPoints",
               iVar1 + -1,1);
    uVar2 = 0;
  }
  return uVar2;
}

