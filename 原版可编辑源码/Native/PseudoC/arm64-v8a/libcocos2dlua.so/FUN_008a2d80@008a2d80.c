
void FUN_008a2d80(lua_State *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  __Array *p_Var6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  iVar5 = tolua_isusertable(param_1,1,"Animation",0,auStack_48);
  if (((iVar5 == 0) || (iVar5 = tolua_isusertype(param_1,2,"CCArray",0,auStack_48), iVar5 == 0)) ||
     (iVar5 = tolua_isnoobj(param_1,3,auStack_48), iVar5 == 0)) {
    uVar8 = FUN_008a2bac(param_1);
  }
  else {
    p_Var6 = (__Array *)tolua_tousertype(param_1,2,0);
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    local_60 = (undefined8 *)0x0;
    array_to_vector_t_deprecated<cocos2d::SpriteFrame*>(p_Var6,(Vector *)&local_60);
    pvVar7 = (void *)cocos2d::Animation::createWithSpriteFrames((Vector *)&local_60,0.0,1);
    piVar2 = (int *)((long)pvVar7 + 0x10);
    if (pvVar7 == (void *)0x0) {
      iVar5 = -1;
      piVar2 = (int *)0x0;
    }
    else {
      iVar5 = *(int *)((long)pvVar7 + 0xc);
    }
    toluafix_pushusertype_ccobject(param_1,iVar5,piVar2,pvVar7,"cc.Animation");
    puVar4 = local_58;
    for (puVar1 = local_60; puVar1 != puVar4; puVar1 = puVar1 + 1) {
      cocos2d::Ref::release((Ref *)*puVar1);
    }
    local_58 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      operator_delete(local_60);
    }
    uVar8 = 1;
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

