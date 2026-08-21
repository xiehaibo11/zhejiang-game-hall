
/* WARNING: Removing unreachable block (ram,0x009c0fa0) */
/* WARNING: Removing unreachable block (ram,0x009c0fb8) */
/* lua_cocos2dx_physics3d_Physics3DHingeConstraint_create(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DHingeConstraint_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  Physics3DRigidBody *pPVar5;
  Physics3DRigidBody *pPVar6;
  void *pvVar7;
  undefined8 uVar8;
  bool local_ec [4];
  Vec3 aVStack_e8 [16];
  Vec3 local_d8 [16];
  Vec3 local_c8 [64];
  Mat4 aMStack_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  switch(iVar2) {
  case 3:
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Physics3DRigidBody",0), (uVar4 & 1) != 0)) {
      pPVar5 = (Physics3DRigidBody *)tolua_tousertype(param_1,2,0);
      cocos2d::Mat4::Mat4(aMStack_88);
      uVar4 = luaval_to_mat4(param_1,3,aMStack_88,"cc.Physics3DHingeConstraint:create");
      if ((uVar4 & 1) != 0) {
        pvVar7 = (void *)cocos2d::Physics3DHingeConstraint::create(pPVar5,aMStack_88,false);
        if (pvVar7 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                     "cc.Physics3DHingeConstraint");
        }
        cocos2d::Mat4::~Mat4(aMStack_88);
        uVar8 = 1;
        goto LAB_009c0ee8;
      }
      cocos2d::Mat4::~Mat4(aMStack_88);
    }
    break;
  case 4:
    if (param_1 != (lua_State *)0x0) {
      iVar3 = lua_gettop(param_1);
      if ((1 < iVar3) &&
         (uVar4 = luaval_is_usertype(param_1,2,"cc.Physics3DRigidBody",0), (uVar4 & 1) != 0)) {
        pPVar5 = (Physics3DRigidBody *)tolua_tousertype(param_1,2,0);
        cocos2d::Vec3::Vec3((Vec3 *)aMStack_88);
        uVar4 = luaval_to_vec3(param_1,3,(Vec3 *)aMStack_88,"cc.Physics3DHingeConstraint:create");
        if ((uVar4 & 1) != 0) {
          cocos2d::Vec3::Vec3(local_c8);
          uVar4 = luaval_to_vec3(param_1,4,local_c8,"cc.Physics3DHingeConstraint:create");
          if ((uVar4 & 1) != 0) {
            pvVar7 = (void *)cocos2d::Physics3DHingeConstraint::create
                                       (pPVar5,(Vec3 *)aMStack_88,local_c8,false);
joined_r0x009c0938:
            if (pvVar7 == (void *)0x0) {
              lua_pushnil(param_1);
              uVar8 = 1;
            }
            else {
              toluafix_pushusertype_ccobject
                        (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                         "cc.Physics3DHingeConstraint");
              uVar8 = 1;
            }
            goto LAB_009c0ee8;
          }
        }
      }
      iVar3 = lua_gettop(param_1);
      if ((1 < iVar3) &&
         (uVar4 = luaval_is_usertype(param_1,2,"cc.Physics3DRigidBody",0), (uVar4 & 1) != 0)) {
        pPVar5 = (Physics3DRigidBody *)tolua_tousertype(param_1,2,0);
        cocos2d::Mat4::Mat4(aMStack_88);
        uVar4 = luaval_to_mat4(param_1,3,aMStack_88,"cc.Physics3DHingeConstraint:create");
        if (((uVar4 & 1) == 0) ||
           (uVar4 = luaval_to_boolean(param_1,4,(bool *)local_c8,
                                      "cc.Physics3DHingeConstraint:create"), (uVar4 & 1) == 0)) {
          iVar3 = 8;
        }
        else {
          pvVar7 = (void *)cocos2d::Physics3DHingeConstraint::create
                                     (pPVar5,aMStack_88,(bool)local_c8[0]);
          if (pvVar7 == (void *)0x0) {
            lua_pushnil(param_1);
          }
          else {
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                       "cc.Physics3DHingeConstraint");
          }
          iVar3 = 1;
        }
        cocos2d::Mat4::~Mat4(aMStack_88);
        if (iVar3 != 8) {
LAB_009c0f84:
          uVar8 = 1;
          goto LAB_009c0ee8;
        }
      }
    }
    break;
  case 5:
    if (param_1 != (lua_State *)0x0) {
      iVar3 = lua_gettop(param_1);
      if ((1 < iVar3) &&
         (uVar4 = luaval_is_usertype(param_1,2,"cc.Physics3DRigidBody",0), (uVar4 & 1) != 0)) {
        pPVar5 = (Physics3DRigidBody *)tolua_tousertype(param_1,2,0);
        cocos2d::Vec3::Vec3((Vec3 *)aMStack_88);
        uVar4 = luaval_to_vec3(param_1,3,(Vec3 *)aMStack_88,"cc.Physics3DHingeConstraint:create");
        if ((uVar4 & 1) != 0) {
          cocos2d::Vec3::Vec3(local_c8);
          uVar4 = luaval_to_vec3(param_1,4,local_c8,"cc.Physics3DHingeConstraint:create");
          if (((uVar4 & 1) != 0) &&
             (uVar4 = luaval_to_boolean(param_1,5,(bool *)local_d8,
                                        "cc.Physics3DHingeConstraint:create"), (uVar4 & 1) != 0)) {
            pvVar7 = (void *)cocos2d::Physics3DHingeConstraint::create
                                       (pPVar5,(Vec3 *)aMStack_88,local_c8,(bool)local_d8[0]);
            goto joined_r0x009c0938;
          }
        }
      }
      iVar3 = lua_gettop(param_1);
      if ((1 < iVar3) &&
         (uVar4 = luaval_is_usertype(param_1,2,"cc.Physics3DRigidBody",0), (uVar4 & 1) != 0)) {
        pPVar5 = (Physics3DRigidBody *)tolua_tousertype(param_1,2,0);
        iVar3 = lua_gettop(param_1);
        if ((2 < iVar3) &&
           (uVar4 = luaval_is_usertype(param_1,3,"cc.Physics3DRigidBody",0), (uVar4 & 1) != 0)) {
          pPVar6 = (Physics3DRigidBody *)tolua_tousertype(param_1,3,0);
          cocos2d::Mat4::Mat4(aMStack_88);
          uVar4 = luaval_to_mat4(param_1,4,aMStack_88,"cc.Physics3DHingeConstraint:create");
          if ((uVar4 & 1) == 0) {
            iVar3 = 0xe;
          }
          else {
            cocos2d::Mat4::Mat4((Mat4 *)local_c8);
            uVar4 = luaval_to_mat4(param_1,5,(Mat4 *)local_c8,"cc.Physics3DHingeConstraint:create");
            if ((uVar4 & 1) == 0) {
              iVar3 = 0xe;
            }
            else {
              pvVar7 = (void *)cocos2d::Physics3DHingeConstraint::create
                                         (pPVar5,pPVar6,aMStack_88,(Mat4 *)local_c8,false);
              if (pvVar7 == (void *)0x0) {
                lua_pushnil(param_1);
              }
              else {
                toluafix_pushusertype_ccobject
                          (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                           "cc.Physics3DHingeConstraint");
              }
              iVar3 = 1;
            }
            cocos2d::Mat4::~Mat4((Mat4 *)local_c8);
          }
          cocos2d::Mat4::~Mat4(aMStack_88);
          if (iVar3 != 0xe) goto LAB_009c0f84;
        }
      }
    }
    break;
  case 6:
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Physics3DRigidBody",0), (uVar4 & 1) != 0)) {
      pPVar5 = (Physics3DRigidBody *)tolua_tousertype(param_1,2,0);
      iVar3 = lua_gettop(param_1);
      if ((2 < iVar3) &&
         (uVar4 = luaval_is_usertype(param_1,3,"cc.Physics3DRigidBody",0), (uVar4 & 1) != 0)) {
        pPVar6 = (Physics3DRigidBody *)tolua_tousertype(param_1,3,0);
        cocos2d::Mat4::Mat4(aMStack_88);
        uVar4 = luaval_to_mat4(param_1,4,aMStack_88,"cc.Physics3DHingeConstraint:create");
        if ((uVar4 & 1) == 0) {
          iVar3 = 0x10;
        }
        else {
          cocos2d::Mat4::Mat4((Mat4 *)local_c8);
          uVar4 = luaval_to_mat4(param_1,5,(Mat4 *)local_c8,"cc.Physics3DHingeConstraint:create");
          if (((uVar4 & 1) == 0) ||
             (uVar4 = luaval_to_boolean(param_1,6,(bool *)local_d8,
                                        "cc.Physics3DHingeConstraint:create"), (uVar4 & 1) == 0)) {
            iVar3 = 0x10;
          }
          else {
            pvVar7 = (void *)cocos2d::Physics3DHingeConstraint::create
                                       (pPVar5,pPVar6,aMStack_88,(Mat4 *)local_c8,(bool)local_d8[0])
            ;
            if (pvVar7 == (void *)0x0) {
              lua_pushnil(param_1);
            }
            else {
              toluafix_pushusertype_ccobject
                        (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                         "cc.Physics3DHingeConstraint");
            }
            iVar3 = 1;
          }
          cocos2d::Mat4::~Mat4((Mat4 *)local_c8);
        }
        cocos2d::Mat4::~Mat4(aMStack_88);
        if (iVar3 != 0x10) goto LAB_009c0f84;
      }
    }
    break;
  case 7:
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Physics3DRigidBody",0), (uVar4 & 1) != 0)) {
      pPVar5 = (Physics3DRigidBody *)tolua_tousertype(param_1,2,0);
      iVar3 = lua_gettop(param_1);
      if ((2 < iVar3) &&
         (uVar4 = luaval_is_usertype(param_1,3,"cc.Physics3DRigidBody",0), (uVar4 & 1) != 0)) {
        pPVar6 = (Physics3DRigidBody *)tolua_tousertype(param_1,3,0);
        cocos2d::Vec3::Vec3((Vec3 *)aMStack_88);
        uVar4 = luaval_to_vec3(param_1,4,(Vec3 *)aMStack_88,"cc.Physics3DHingeConstraint:create");
        if ((uVar4 & 1) != 0) {
          cocos2d::Vec3::Vec3(local_c8);
          uVar4 = luaval_to_vec3(param_1,5,local_c8,"cc.Physics3DHingeConstraint:create");
          if ((uVar4 & 1) != 0) {
            cocos2d::Vec3::Vec3(local_d8);
            uVar4 = luaval_to_vec3(param_1,6,local_d8,"cc.Physics3DHingeConstraint:create");
            if ((uVar4 & 1) != 0) {
              cocos2d::Vec3::Vec3(aVStack_e8);
              uVar4 = luaval_to_vec3(param_1,7,aVStack_e8,"cc.Physics3DHingeConstraint:create");
              if ((uVar4 & 1) != 0) {
                pvVar7 = (void *)cocos2d::Physics3DHingeConstraint::create
                                           (pPVar5,pPVar6,(Vec3 *)aMStack_88,local_c8,local_d8,
                                            aVStack_e8,false);
                if (pvVar7 == (void *)0x0) {
                  lua_pushnil(param_1);
                }
                else {
                  toluafix_pushusertype_ccobject
                            (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),
                             pvVar7,"cc.Physics3DHingeConstraint");
                }
                goto LAB_009c0f84;
              }
            }
          }
        }
      }
    }
    break;
  case 8:
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Physics3DRigidBody",0), (uVar4 & 1) != 0)) {
      pPVar5 = (Physics3DRigidBody *)tolua_tousertype(param_1,2,0);
      iVar3 = lua_gettop(param_1);
      if ((2 < iVar3) &&
         (uVar4 = luaval_is_usertype(param_1,3,"cc.Physics3DRigidBody",0), (uVar4 & 1) != 0)) {
        pPVar6 = (Physics3DRigidBody *)tolua_tousertype(param_1,3,0);
        cocos2d::Vec3::Vec3((Vec3 *)aMStack_88);
        uVar4 = luaval_to_vec3(param_1,4,(Vec3 *)aMStack_88,"cc.Physics3DHingeConstraint:create");
        if ((uVar4 & 1) != 0) {
          cocos2d::Vec3::Vec3(local_c8);
          uVar4 = luaval_to_vec3(param_1,5,local_c8,"cc.Physics3DHingeConstraint:create");
          if ((uVar4 & 1) != 0) {
            cocos2d::Vec3::Vec3(local_d8);
            uVar4 = luaval_to_vec3(param_1,6,local_d8,"cc.Physics3DHingeConstraint:create");
            if ((uVar4 & 1) != 0) {
              cocos2d::Vec3::Vec3(aVStack_e8);
              uVar4 = luaval_to_vec3(param_1,7,aVStack_e8,"cc.Physics3DHingeConstraint:create");
              if (((uVar4 & 1) != 0) &&
                 (uVar4 = luaval_to_boolean(param_1,8,local_ec,"cc.Physics3DHingeConstraint:create")
                 , (uVar4 & 1) != 0)) {
                pvVar7 = (void *)cocos2d::Physics3DHingeConstraint::create
                                           (pPVar5,pPVar6,(Vec3 *)aMStack_88,local_c8,local_d8,
                                            aVStack_e8,local_ec[0]);
                if (pvVar7 == (void *)0x0) {
                  lua_pushnil(param_1);
                }
                else {
                  toluafix_pushusertype_ccobject
                            (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),
                             pvVar7,"cc.Physics3DHingeConstraint");
                }
                goto LAB_009c0f84;
              }
            }
          }
        }
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.Physics3DHingeConstraint:create",iVar2 + -1,4);
  uVar8 = 0;
LAB_009c0ee8:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

