
undefined4 FUN_008ab218(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  Vec3 aVStack_98 [16];
  Quaternion aQStack_88 [16];
  Vec3 aVStack_78 [16];
  Mat4 aMStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  cocos2d::Mat4::Mat4(aMStack_68);
  cocos2d::Vec3::Vec3(aVStack_78);
  cocos2d::Quaternion::Quaternion(aQStack_88);
  cocos2d::Vec3::Vec3(aVStack_98);
  uVar3 = luaval_to_mat4(param_1,1,aMStack_68,"");
  if ((uVar3 & 1) == 0) {
LAB_008ab954:
    uVar4 = 0;
  }
  else {
    iVar2 = lua_type(param_1,2);
    if (((iVar2 == 0) && (iVar2 = lua_type(param_1,3), iVar2 != 0)) &&
       (iVar2 = lua_type(param_1,4), iVar2 != 0)) {
      uVar3 = luaval_to_quaternion(param_1,3,aQStack_88,"");
      if (((uVar3 & 1) == 0) || (uVar3 = luaval_to_vec3(param_1,4,aVStack_98,""), (uVar3 & 1) == 0))
      goto LAB_008ab954;
      cocos2d::Mat4::decompose(aMStack_68,(Vec3 *)0x0,aQStack_88,aVStack_98);
      lua_createtable(param_1,0,0);
      lua_pushstring(param_1,"scale");
      lua_pushnil(param_1);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"rotation");
      quaternion_to_luaval(param_1,aQStack_88);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"translation");
      vec3_to_luaval(param_1,aVStack_98);
      lua_rawset(param_1,0xfffffffd);
    }
    else {
      iVar2 = lua_type(param_1,2);
      if (((iVar2 == 0) && (iVar2 = lua_type(param_1,3), iVar2 == 0)) &&
         (iVar2 = lua_type(param_1,4), iVar2 != 0)) {
        uVar3 = luaval_to_vec3(param_1,4,aVStack_98,"");
        if ((uVar3 & 1) == 0) goto LAB_008ab954;
        cocos2d::Mat4::decompose(aMStack_68,(Vec3 *)0x0,(Quaternion *)0x0,aVStack_98);
        lua_createtable(param_1,0,0);
        lua_pushstring(param_1,"scale");
        lua_pushnil(param_1);
        lua_rawset(param_1,0xfffffffd);
        lua_pushstring(param_1,"rotation");
        lua_pushnil(param_1);
        lua_rawset(param_1,0xfffffffd);
        lua_pushstring(param_1,"translation");
        vec3_to_luaval(param_1,aVStack_98);
        lua_rawset(param_1,0xfffffffd);
      }
      else {
        iVar2 = lua_type(param_1,2);
        if (((iVar2 == 0) || (iVar2 = lua_type(param_1,3), iVar2 != 0)) ||
           (iVar2 = lua_type(param_1,4), iVar2 == 0)) {
          iVar2 = lua_type(param_1,2);
          if (((iVar2 == 0) || (iVar2 = lua_type(param_1,3), iVar2 != 0)) ||
             (iVar2 = lua_type(param_1,4), iVar2 != 0)) {
            iVar2 = lua_type(param_1,2);
            if (((iVar2 == 0) || (iVar2 = lua_type(param_1,3), iVar2 == 0)) ||
               (iVar2 = lua_type(param_1,4), iVar2 != 0)) {
              iVar2 = lua_type(param_1,2);
              if (((iVar2 == 0) && (iVar2 = lua_type(param_1,3), iVar2 != 0)) &&
                 (iVar2 = lua_type(param_1,4), iVar2 == 0)) {
                uVar3 = luaval_to_quaternion(param_1,3,aQStack_88,"");
                if ((uVar3 & 1) == 0) goto LAB_008ab954;
                cocos2d::Mat4::decompose(aMStack_68,(Vec3 *)0x0,aQStack_88,(Vec3 *)0x0);
                lua_createtable(param_1,0,0);
                lua_pushstring(param_1,"scale");
                lua_pushnil(param_1);
                lua_rawset(param_1,0xfffffffd);
                lua_pushstring(param_1,"rotation");
                quaternion_to_luaval(param_1,aQStack_88);
                lua_rawset(param_1,0xfffffffd);
                lua_pushstring(param_1,"translation");
                lua_pushnil(param_1);
                lua_rawset(param_1,0xfffffffd);
              }
              iVar2 = lua_type(param_1,2);
              if (((((iVar2 == 0) || (iVar2 = lua_type(param_1,3), iVar2 == 0)) ||
                   (iVar2 = lua_type(param_1,4), iVar2 == 0)) ||
                  ((uVar3 = luaval_to_vec3(param_1,2,aVStack_78,""), (uVar3 & 1) == 0 ||
                   (uVar3 = luaval_to_quaternion(param_1,3,aQStack_88,""), (uVar3 & 1) == 0)))) ||
                 (uVar3 = luaval_to_vec3(param_1,4,aVStack_98,""), (uVar3 & 1) == 0))
              goto LAB_008ab954;
              cocos2d::Mat4::decompose(aMStack_68,aVStack_78,aQStack_88,aVStack_98);
              lua_createtable(param_1,0,0);
              lua_pushstring(param_1,"scale");
              vec3_to_luaval(param_1,aVStack_78);
              lua_rawset(param_1,0xfffffffd);
              lua_pushstring(param_1,"rotation");
              quaternion_to_luaval(param_1,aQStack_88);
              lua_rawset(param_1,0xfffffffd);
              lua_pushstring(param_1,"translation");
              vec3_to_luaval(param_1,aVStack_98);
              lua_rawset(param_1,0xfffffffd);
            }
            else {
              uVar3 = luaval_to_vec3(param_1,2,aVStack_78,"");
              if (((uVar3 & 1) == 0) ||
                 (uVar3 = luaval_to_quaternion(param_1,3,aQStack_88,""), (uVar3 & 1) == 0))
              goto LAB_008ab954;
              cocos2d::Mat4::decompose(aMStack_68,aVStack_78,aQStack_88,(Vec3 *)0x0);
              lua_createtable(param_1,0,0);
              lua_pushstring(param_1,"scale");
              vec3_to_luaval(param_1,aVStack_78);
              lua_rawset(param_1,0xfffffffd);
              lua_pushstring(param_1,"rotation");
              quaternion_to_luaval(param_1,aQStack_88);
              lua_rawset(param_1,0xfffffffd);
              lua_pushstring(param_1,"translation");
              lua_pushnil(param_1);
              lua_rawset(param_1,0xfffffffd);
            }
          }
          else {
            uVar3 = luaval_to_vec3(param_1,2,aVStack_78,"");
            if ((uVar3 & 1) == 0) goto LAB_008ab954;
            cocos2d::Mat4::decompose(aMStack_68,aVStack_78,(Quaternion *)0x0,(Vec3 *)0x0);
            lua_createtable(param_1,0,0);
            lua_pushstring(param_1,"scale");
            vec3_to_luaval(param_1,aVStack_78);
            lua_rawset(param_1,0xfffffffd);
            lua_pushstring(param_1,"rotation");
            lua_pushnil(param_1);
            lua_rawset(param_1,0xfffffffd);
            lua_pushstring(param_1,"translation");
            lua_pushnil(param_1);
            lua_rawset(param_1,0xfffffffd);
          }
        }
        else {
          uVar3 = luaval_to_vec3(param_1,2,aVStack_78,"");
          if (((uVar3 & 1) == 0) ||
             (uVar3 = luaval_to_vec3(param_1,4,aVStack_98,""), (uVar3 & 1) == 0)) goto LAB_008ab954;
          cocos2d::Mat4::decompose(aMStack_68,aVStack_78,(Quaternion *)0x0,aVStack_98);
          lua_createtable(param_1,0,0);
          lua_pushstring(param_1,"scale");
          vec3_to_luaval(param_1,aVStack_78);
          lua_rawset(param_1,0xfffffffd);
          lua_pushstring(param_1,"rotation");
          lua_pushnil(param_1);
          lua_rawset(param_1,0xfffffffd);
          lua_pushstring(param_1,"translation");
          vec3_to_luaval(param_1,aVStack_98);
          lua_rawset(param_1,0xfffffffd);
        }
      }
    }
    uVar4 = 1;
  }
  cocos2d::Quaternion::~Quaternion(aQStack_88);
  cocos2d::Mat4::~Mat4(aMStack_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

