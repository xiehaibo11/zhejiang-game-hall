
/* lua_cocos2dx_Node_visit(lua_State*) */

undefined4 lua_cocos2dx_Node_visit(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Node *this;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint local_8c;
  Mat4 aMStack_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (Node *)tolua_tousertype(param_1,1,0);
  if (this == (Node *)0x0) {
    tolua_error(param_1,"invalid \'cobj\' in function \'lua_cocos2dx_Node_visit\'",0);
  }
  else {
    iVar2 = lua_gettop(param_1);
    if (iVar2 == 4) {
      if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
         (uVar4 = luaval_is_usertype(param_1,2,"cc.Renderer",0), (uVar4 & 1) != 0)) {
        uVar5 = tolua_tousertype(param_1,2,0);
        cocos2d::Mat4::Mat4(aMStack_88);
        uVar4 = luaval_to_mat4(param_1,3,aMStack_88,"cc.Node:visit");
        if (((uVar4 & 1) == 0) ||
           (uVar4 = luaval_to_uint32(param_1,4,&local_8c,"cc.Node:visit"), (uVar4 & 1) == 0)) {
          iVar3 = 4;
        }
        else {
          (**(code **)(*(long *)this + 0x358))(this,uVar5,aMStack_88,local_8c);
          iVar3 = 1;
          lua_settop(param_1,1);
        }
        cocos2d::Mat4::~Mat4(aMStack_88);
        if (iVar3 != 4) {
          uVar6 = 1;
          goto LAB_007eaa28;
        }
      }
    }
    else if (iVar2 == 1) {
      cocos2d::Node::visit(this);
      lua_settop(param_1,1);
      uVar6 = 1;
      goto LAB_007eaa28;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.Node:visit",
               iVar2 + -1,3);
  }
  uVar6 = 0;
LAB_007eaa28:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

