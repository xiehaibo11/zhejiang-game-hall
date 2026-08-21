
/* lua_cocos2dx_physics3d_Physics3D6DofConstraint_create(lua_State*) */

void lua_cocos2dx_physics3d_Physics3D6DofConstraint_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  Physics3DRigidBody *pPVar5;
  void *pvVar6;
  Physics3DRigidBody *pPVar7;
  undefined8 uVar8;
  bool local_cc [4];
  Mat4 local_c8 [64];
  Mat4 aMStack_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 6) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Physics3DRigidBody",0), (uVar4 & 1) != 0)) {
      pPVar5 = (Physics3DRigidBody *)tolua_tousertype(param_1,2,0);
      iVar3 = lua_gettop(param_1);
      if ((2 < iVar3) &&
         (uVar4 = luaval_is_usertype(param_1,3,"cc.Physics3DRigidBody",0), (uVar4 & 1) != 0)) {
        pPVar7 = (Physics3DRigidBody *)tolua_tousertype(param_1,3,0);
        cocos2d::Mat4::Mat4(aMStack_88);
        uVar4 = luaval_to_mat4(param_1,4,aMStack_88,"cc.Physics3D6DofConstraint:create");
        if ((uVar4 & 1) == 0) {
          iVar3 = 4;
        }
        else {
          cocos2d::Mat4::Mat4(local_c8);
          uVar4 = luaval_to_mat4(param_1,5,local_c8,"cc.Physics3D6DofConstraint:create");
          if (((uVar4 & 1) == 0) ||
             (uVar4 = luaval_to_boolean(param_1,6,local_cc,"cc.Physics3D6DofConstraint:create"),
             (uVar4 & 1) == 0)) {
            iVar3 = 4;
          }
          else {
            pvVar6 = (void *)cocos2d::Physics3D6DofConstraint::create
                                       (pPVar5,pPVar7,aMStack_88,local_c8,local_cc[0]);
            if (pvVar6 == (void *)0x0) {
              lua_pushnil(param_1);
            }
            else {
              toluafix_pushusertype_ccobject
                        (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                         "cc.Physics3D6DofConstraint");
            }
            iVar3 = 1;
          }
          cocos2d::Mat4::~Mat4(local_c8);
        }
        cocos2d::Mat4::~Mat4(aMStack_88);
        if (iVar3 != 4) goto LAB_009c6e64;
      }
    }
  }
  else if ((((iVar2 == 4) && (param_1 != (lua_State *)0x0)) &&
           (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
          (uVar4 = luaval_is_usertype(param_1,2,"cc.Physics3DRigidBody",0), (uVar4 & 1) != 0)) {
    pPVar5 = (Physics3DRigidBody *)tolua_tousertype(param_1,2,0);
    cocos2d::Mat4::Mat4(aMStack_88);
    uVar4 = luaval_to_mat4(param_1,3,aMStack_88,"cc.Physics3D6DofConstraint:create");
    if (((uVar4 & 1) == 0) ||
       (uVar4 = luaval_to_boolean(param_1,4,(bool *)local_c8,"cc.Physics3D6DofConstraint:create"),
       (uVar4 & 1) == 0)) {
      iVar3 = 2;
    }
    else {
      pvVar6 = (void *)cocos2d::Physics3D6DofConstraint::create(pPVar5,aMStack_88,(bool)local_c8[0])
      ;
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "cc.Physics3D6DofConstraint");
      }
      iVar3 = 1;
    }
    cocos2d::Mat4::~Mat4(aMStack_88);
    if (iVar3 != 2) {
LAB_009c6e64:
      uVar8 = 1;
      goto LAB_009c6e10;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.Physics3D6DofConstraint:create",iVar2 + -1,5);
  uVar8 = 0;
LAB_009c6e10:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

