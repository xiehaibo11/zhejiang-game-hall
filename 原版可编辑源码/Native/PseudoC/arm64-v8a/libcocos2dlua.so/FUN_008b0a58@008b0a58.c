
undefined8 FUN_008b0a58(lua_State *param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  DrawNode *this;
  ulong uVar5;
  undefined8 uVar6;
  uint local_58;
  int iStack_54;
  char *local_48;
  int local_40;
  uint uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 == 3) {
    if ((param_1 != (lua_State *)0x0) && (lVar4 = __strlen_chk("cc.DrawNode",0xc), lVar4 != 0)) {
      this = (DrawNode *)tolua_tousertype(param_1,1,0);
      iVar3 = lua_gettop(param_1);
      if (iVar3 + -1 == 2) {
        cocos2d::StringUtils::format("%s%s",&local_58,"cc.DrawNode",":setBlendFunc");
        pcVar1 = (char *)((ulong)&local_58 | 1);
        if ((local_58 & 1) != 0) {
          pcVar1 = local_48;
        }
        uVar5 = luaval_to_int32(param_1,2,(int *)&uStack_3c,pcVar1);
        if ((local_58 & 1) != 0) {
          operator_delete(local_48);
        }
        if ((uVar5 & 1) != 0) {
          cocos2d::StringUtils::format("%s%s",&local_58,"cc.DrawNode",":setBlendFunc");
          pcVar1 = (char *)((ulong)&local_58 | 1);
          if ((local_58 & 1) != 0) {
            pcVar1 = local_48;
          }
          uVar5 = luaval_to_int32(param_1,3,&local_40,pcVar1);
          if ((local_58 & 1) != 0) {
            operator_delete(local_48);
          }
          if ((uVar5 & 1) != 0) {
            local_58 = uStack_3c;
            iStack_54 = local_40;
            cocos2d::DrawNode::setBlendFunc(this,(BlendFunc *)&local_58);
          }
        }
      }
      else {
        luaL_error(param_1,"\'setBlendFunc\' has wrong number of arguments: %d, was expecting %d\n",
                   iVar3 + -1,2);
      }
    }
    if (*(long *)(lVar2 + 0x28) != local_38) {
LAB_008b0bf8:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar6 = 0;
  }
  else {
    uVar6 = lua_cocos2dx_DrawNode_setBlendFunc(param_1);
    if (*(long *)(lVar2 + 0x28) != local_38) goto LAB_008b0bf8;
  }
  return uVar6;
}

