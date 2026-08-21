
/* lua_cocos2dx_Label_createWithCharMap(lua_State*) */

void lua_cocos2dx_Label_createWithCharMap(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  Texture2D *pTVar5;
  void *pvVar6;
  undefined8 uVar7;
  int iVar8;
  int local_5c;
  ulong local_58;
  undefined8 local_50;
  void *local_48;
  int local_40;
  int iStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 2) {
    local_50 = 0;
    local_48 = (void *)0x0;
    local_58 = 0;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_58,"cc.Label:createWithCharMap");
    if ((uVar4 & 1) != 0) {
      pvVar6 = (void *)cocos2d::Label::createWithCharMap((basic_string *)&local_58);
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "cc.Label");
      }
      if ((local_58 & 1) != 0) {
        operator_delete(local_48);
      }
LAB_0083c4dc:
      uVar7 = 1;
      goto LAB_0083c518;
    }
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
  }
  else if (iVar2 == 5) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.Texture2D",0), (uVar4 & 1) != 0)) {
      pTVar5 = (Texture2D *)tolua_tousertype(param_1,2,0);
      uVar4 = luaval_to_int32(param_1,3,(int *)&local_58,"cc.Label:createWithCharMap");
      if ((((uVar4 & 1) != 0) &&
          (uVar4 = luaval_to_int32(param_1,4,&iStack_3c,"cc.Label:createWithCharMap"),
          (uVar4 & 1) != 0)) &&
         (uVar4 = luaval_to_int32(param_1,5,&local_40,"cc.Label:createWithCharMap"),
         (uVar4 & 1) != 0)) {
        pvVar6 = (void *)cocos2d::Label::createWithCharMap(pTVar5,(int)local_58,iStack_3c,local_40);
        if (pvVar6 == (void *)0x0) {
          lua_pushnil(param_1);
          uVar7 = 1;
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                     "cc.Label");
          uVar7 = 1;
        }
        goto LAB_0083c518;
      }
    }
    local_50 = 0;
    local_48 = (void *)0x0;
    local_58 = 0;
    uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_58,"cc.Label:createWithCharMap");
    if ((((uVar4 & 1) == 0) ||
        (uVar4 = luaval_to_int32(param_1,3,&iStack_3c,"cc.Label:createWithCharMap"),
        (uVar4 & 1) == 0)) ||
       ((uVar4 = luaval_to_int32(param_1,4,&local_40,"cc.Label:createWithCharMap"), (uVar4 & 1) == 0
        || (uVar4 = luaval_to_int32(param_1,5,&local_5c,"cc.Label:createWithCharMap"),
           (uVar4 & 1) == 0)))) {
      iVar8 = 4;
      iVar3 = 4;
    }
    else {
      pvVar6 = (void *)cocos2d::Label::createWithCharMap
                                 ((basic_string *)&local_58,iStack_3c,local_40,local_5c);
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "cc.Label");
      }
      iVar8 = 1;
      iVar3 = 1;
    }
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
      iVar3 = iVar8;
    }
    if (iVar3 != 4) goto LAB_0083c4dc;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.Label:createWithCharMap",iVar2 + -1,1);
  uVar7 = 0;
LAB_0083c518:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

