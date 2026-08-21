
void FUN_008abae0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  Vec3 *pVVar5;
  Vec3 aVStack_58 [16];
  Vec3 aVStack_48 [16];
  Vec3 aVStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 3) {
    cocos2d::Vec3::Vec3(aVStack_38);
    cocos2d::Vec3::Vec3(aVStack_48);
    cocos2d::Vec3::Vec3(aVStack_58);
    uVar3 = luaval_to_vec3(param_1,1,aVStack_38,"");
    if ((((uVar3 & 1) != 0) && (uVar3 = luaval_to_vec3(param_1,2,aVStack_48,""), (uVar3 & 1) != 0))
       && (uVar3 = luaval_to_vec3(param_1,3,aVStack_58,""), (uVar3 & 1) != 0)) {
      cocos2d::Vec3::cross(aVStack_38,aVStack_48,aVStack_58);
      pVVar5 = aVStack_58;
LAB_008abbf0:
      vec3_to_luaval(param_1,pVVar5);
      uVar4 = 1;
      goto LAB_008abc04;
    }
  }
  else if (iVar2 == 2) {
    cocos2d::Vec3::Vec3(aVStack_38);
    cocos2d::Vec3::Vec3(aVStack_48);
    uVar3 = luaval_to_vec3(param_1,1,aVStack_38,"");
    if (((uVar3 & 1) != 0) && (uVar3 = luaval_to_vec3(param_1,2,aVStack_48,""), (uVar3 & 1) != 0)) {
      cocos2d::Vec3::cross(aVStack_38,aVStack_48);
      pVVar5 = aVStack_38;
      goto LAB_008abbf0;
    }
  }
  uVar4 = 0;
LAB_008abc04:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

