
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_Ripple3D_initWithDuration(lua_State*) */

void lua_cocos2dx_Ripple3D_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  Ripple3D *this;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  double local_98;
  uint local_8c;
  double local_88 [2];
  Size aSStack_78 [8];
  double local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = (Ripple3D *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 6) {
    cocos2d::Size::Size(aSStack_78);
    local_88[1] = 0.0;
    uVar4 = luaval_to_number(param_1,2,&local_70,"cc.Ripple3D:initWithDuration");
    uVar5 = luaval_to_size(param_1,3,aSStack_78,"cc.Ripple3D:initWithDuration");
    uVar6 = luaval_to_vec2(param_1,4,(Vec2 *)(local_88 + 1),"cc.Ripple3D:initWithDuration");
    uVar7 = luaval_to_number(param_1,5,local_88,"cc.Ripple3D:initWithDuration");
    uVar8 = luaval_to_uint32(param_1,6,&local_8c,"cc.Ripple3D:initWithDuration");
    uVar9 = luaval_to_number(param_1,7,&local_98,"cc.Ripple3D:initWithDuration");
    if (((((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) &&
       ((((uVar7 & 1) != 0 && ((uVar8 & 1) != 0)) && ((uVar9 & 1) != 0)))) {
      uVar3 = cocos2d::Ripple3D::initWithDuration
                        (this,(float)local_70,aSStack_78,(Vec2 *)(local_88 + 1),(float)local_88[0],
                         local_8c,(float)local_98);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar10 = 1;
      goto LAB_0082a324;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Ripple3D_initWithDuration\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Ripple3D:initWithDuration",iVar2 + -1,6);
  }
  uVar10 = 0;
LAB_0082a324:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

