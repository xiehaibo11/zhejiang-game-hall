
/* lua_cocos2dx_AsyncTaskPool_enqueue(lua_State*) */

void lua_cocos2dx_AsyncTaskPool_enqueue(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  AsyncTaskPool *pAVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  int local_a4;
  long alStack_a0 [4];
  long *local_80;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pAVar3 = (AsyncTaskPool *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 5) {
    luaval_to_int32(param_1,2,(int *)alStack_70,"cc.AsyncTaskPool:enqueue");
  }
  else if ((iVar2 == 3) &&
          (uVar4 = luaval_to_int32(param_1,2,&local_a4,"cc.AsyncTaskPool:enqueue"), (uVar4 & 1) != 0
          )) {
    local_50 = (long *)0x0;
    local_80 = (long *)0x0;
    cocos2d::AsyncTaskPool::enqueue(pAVar3,local_a4,alStack_a0);
    if (alStack_a0 == local_80) {
      pcVar6 = *(code **)(*local_80 + 0x20);
LAB_007f6b24:
      (*pcVar6)();
    }
    else if (local_80 != (long *)0x0) {
      pcVar6 = *(code **)(*local_80 + 0x28);
      goto LAB_007f6b24;
    }
    lua_settop(param_1,1);
    if (alStack_70 == local_50) {
      pcVar6 = *(code **)(*local_50 + 0x20);
LAB_007f6b5c:
      (*pcVar6)();
    }
    else if (local_50 != (long *)0x0) {
      pcVar6 = *(code **)(*local_50 + 0x28);
      goto LAB_007f6b5c;
    }
    uVar5 = 1;
    goto LAB_007f6af8;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.AsyncTaskPool:enqueue",iVar2 + -1,4);
  uVar5 = 0;
LAB_007f6af8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

