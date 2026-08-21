
/* lua_cocos2dx_EventListenerAcceleration_init(lua_State*) */

void lua_cocos2dx_EventListenerAcceleration_init(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  EventListenerAcceleration *this;
  undefined8 uVar4;
  code *pcVar5;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (EventListenerAcceleration *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.EventListenerAcceleration:init",iVar2 + -1,1);
    uVar4 = 0;
    goto LAB_00818230;
  }
  local_50 = (long *)0x0;
  uVar3 = cocos2d::EventListenerAcceleration::init(this,(function *)alStack_70);
  tolua_pushboolean(param_1,uVar3 & 1);
  if (alStack_70 == local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_00818228:
    (*pcVar5)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar5 = *(code **)(*local_50 + 0x28);
    goto LAB_00818228;
  }
  uVar4 = 1;
LAB_00818230:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

