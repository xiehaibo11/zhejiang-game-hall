
/* lua_cocos2dx_RenderTexture_create(lua_State*) */

void lua_cocos2dx_RenderTexture_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  uint local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 3) {
    uVar3 = luaval_to_int32(param_1,2,&iStack_3c,"cc.RenderTexture:create");
    if (((uVar3 & 1) != 0) &&
       (uVar3 = luaval_to_int32(param_1,3,&local_40,"cc.RenderTexture:create"), (uVar3 & 1) != 0)) {
      pvVar4 = (void *)cocos2d::RenderTexture::create(iStack_3c,local_40);
joined_r0x00859ad4:
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.RenderTexture");
        uVar5 = 1;
      }
      goto LAB_00859b48;
    }
  }
  else if (iVar2 == 5) {
    uVar3 = luaval_to_int32(param_1,2,&iStack_3c,"cc.RenderTexture:create");
    if (((uVar3 & 1) != 0) &&
       (uVar3 = luaval_to_int32(param_1,3,&local_40,"cc.RenderTexture:create"), (uVar3 & 1) != 0)) {
      iVar6 = 4;
      uVar3 = luaval_to_int32(param_1,4,&local_44,"cc.RenderTexture:create");
      if ((uVar3 & 1) != 0) {
        uVar3 = luaval_to_uint32(param_1,5,&local_48,"cc.RenderTexture:create");
        if ((uVar3 & 1) == 0) goto LAB_00859b24;
        pvVar4 = (void *)cocos2d::RenderTexture::create(iStack_3c,local_40,local_44,local_48);
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "cc.RenderTexture");
        }
        iVar6 = 1;
      }
      if (iVar6 != 4) {
        uVar5 = 1;
        goto LAB_00859b48;
      }
    }
  }
  else if ((((iVar2 == 4) &&
            (uVar3 = luaval_to_int32(param_1,2,&iStack_3c,"cc.RenderTexture:create"),
            (uVar3 & 1) != 0)) &&
           (uVar3 = luaval_to_int32(param_1,3,&local_40,"cc.RenderTexture:create"), (uVar3 & 1) != 0
           )) && (uVar3 = luaval_to_int32(param_1,4,&local_44,"cc.RenderTexture:create"),
                 (uVar3 & 1) != 0)) {
    pvVar4 = (void *)cocos2d::RenderTexture::create(iStack_3c,local_40,local_44);
    goto joined_r0x00859ad4;
  }
LAB_00859b24:
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.RenderTexture:create",iVar2 + -1,2);
  uVar5 = 0;
LAB_00859b48:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

