
/* lua_cocos2dx_TextureCache_addImage(lua_State*) */

void lua_cocos2dx_TextureCache_addImage(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  TextureCache *this;
  ulong uVar4;
  Image *pIVar5;
  void *pvVar6;
  undefined8 uVar7;
  int iVar8;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (TextureCache *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.TextureCache:addImage");
    if ((uVar4 & 1) != 0) {
      pvVar6 = (void *)cocos2d::TextureCache::addImage(this,(basic_string *)&local_60);
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "cc.Texture2D");
      }
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
LAB_00871cbc:
      uVar7 = 1;
      goto LAB_00871c94;
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else if ((((iVar2 == 3) && (param_1 != (lua_State *)0x0)) &&
           (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
          (uVar4 = luaval_is_usertype(param_1,2,"cc.Image",0), (uVar4 & 1) != 0)) {
    pIVar5 = (Image *)tolua_tousertype(param_1,2,0);
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_60,"cc.TextureCache:addImage");
    if ((uVar4 & 1) == 0) {
      iVar8 = 2;
      iVar3 = 2;
    }
    else {
      pvVar6 = (void *)cocos2d::TextureCache::addImage(this,pIVar5,(basic_string *)&local_60);
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "cc.Texture2D");
      }
      iVar8 = 1;
      iVar3 = 1;
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
      iVar3 = iVar8;
    }
    if (iVar3 != 2) goto LAB_00871cbc;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.TextureCache:addImage",iVar2 + -1,1);
  uVar7 = 0;
LAB_00871c94:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

