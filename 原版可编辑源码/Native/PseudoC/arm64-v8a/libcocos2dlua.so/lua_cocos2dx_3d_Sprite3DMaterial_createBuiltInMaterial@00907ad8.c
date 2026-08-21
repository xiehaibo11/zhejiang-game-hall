
/* lua_cocos2dx_3d_Sprite3DMaterial_createBuiltInMaterial(lua_State*) */

undefined4 lua_cocos2dx_3d_Sprite3DMaterial_createBuiltInMaterial(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined4 uVar5;
  bool local_40 [4];
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 3) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"cc.Sprite3DMaterial:createBuiltInMaterial");
    if (((uVar3 & 1) != 0) &&
       (uVar3 = luaval_to_boolean(param_1,3,local_40,"cc.Sprite3DMaterial:createBuiltInMaterial"),
       (uVar3 & 1) != 0)) {
      pvVar4 = (void *)cocos2d::Sprite3DMaterial::createBuiltInMaterial(local_3c,local_40[0]);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.Sprite3DMaterial");
        uVar5 = 1;
      }
      goto LAB_00907bb8;
    }
  }
  else if (iVar2 == 1) {
    cocos2d::Sprite3DMaterial::createBuiltInMaterial();
    lua_settop(param_1,1);
    uVar5 = 1;
    goto LAB_00907bb8;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.Sprite3DMaterial:createBuiltInMaterial",iVar2 + -1,2);
  uVar5 = 0;
LAB_00907bb8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

